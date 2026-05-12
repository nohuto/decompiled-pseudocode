/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1400108D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x140010E04 (StorPortAdapterPowerRequiredStep2.c)
 *     RaidAdapterEnableIoResourceAutoReclaim @ 0x140061070 (RaidAdapterEnableIoResourceAutoReclaim.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x14007DDDC (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x14007F5FC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(char *Context, unsigned __int64 a2)
{
  __int64 v2; // r8
  char *v3; // rdi
  char *v4; // rbx
  __int64 v5; // rdx

  v2 = *((_QWORD *)Context + 664);
  v3 = Context + 5024;
  v4 = Context;
  if ( v2 )
  {
    a2 = *(unsigned int *)(*(_QWORD *)v3 + 20LL);
    if ( (a2 & 8) != 0 || (Context[108] & 1) != 0 )
    {
      LODWORD(Context) = MEMORY[0xFFFFF78000000008] - v2;
      a2 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
      *((_QWORD *)v4 + 665) += a2;
      if ( a2 >= 0x2710 )
        ++*((_DWORD *)v4 + 1344);
      if ( !*((_QWORD *)v4 + 663) )
        *((_QWORD *)v4 + 663) = *((_QWORD *)v4 + 660);
    }
    *((_QWORD *)v4 + 664) = 0LL;
  }
  ++*((_DWORD *)v4 + 1342);
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pqtx_EtwWriteTransfer(
      (_DWORD)Context,
      (unsigned int)&EventAdapterPowerRequiredStart,
      v2,
      **(_QWORD **)v3,
      *((_DWORD *)v4 + 14));
  if ( *((_DWORD *)v4 + 258) > 1u )
  {
    LOBYTE(a2) = 1;
    RaidAdapterEnableIoResourceAutoReclaim(v4, a2);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 20LL) |= 2u;
  if ( (unsigned __int8)RaidIsAdapterControlSupported(v4 + 376, 7LL) )
  {
    LOBYTE(v5) = 1;
    RaidAdapterSendPoFxPowerRequiredToMiniport(v4, v5);
  }
  return StorPortAdapterPowerRequiredStep2(v4);
}

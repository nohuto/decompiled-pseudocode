/*
 * XREFs of StorPortAdapterDirectedPowerUp @ 0x1400818A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x14007DDDC (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x14007F5FC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x140081A80 (StorPortAdapterDirectedPowerUpRequestD0.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerUp(_QWORD *Context, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rdx
  int v7; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD **)(Context + 628);
  v4 = Context;
  if ( Context[674] )
  {
    if ( (*((_DWORD *)*v3 + 5) & 8) != 0 || (*((_BYTE *)Context + 108) & 1) != 0 )
    {
      Context = (_QWORD *)Context[664];
      v5 = (MEMORY[0xFFFFF78000000008] - (_QWORD)Context) / 0x2710uLL;
      v4[675] += v5;
      if ( v5 >= 0x2710 )
        ++*((_DWORD *)v4 + 1344);
      if ( !v4[673] )
        v4[673] = v4[660];
    }
    v4[674] = 0LL;
  }
  ++*((_DWORD *)v4 + 1342);
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
  {
    v7 = *((_DWORD *)v4 + 14);
    McTemplateK0pqtx_EtwWriteTransfer((__int64)Context, &EventAdapterDirectedPowerUpStart, a3, **v3, v7);
  }
  *((_DWORD *)*v3 + 5) |= 2u;
  if ( RaidIsAdapterControlSupported((__int64)(v4 + 47), 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v4);
  return StorPortAdapterDirectedPowerUpRequestD0(v4);
}

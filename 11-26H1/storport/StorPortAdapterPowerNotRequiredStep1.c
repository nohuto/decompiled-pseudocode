/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x14000FD40
 * Callers:
 *     <none>
 * Callees:
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x14000FB18 (StorPortAdapterPowerNotRequiredStep2.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x14007DD44 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x14007F5FC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep1(char *Context, __int64 a2, int a3)
{
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pqtq_EtwWriteTransfer(
      (_DWORD)Context,
      (unsigned int)&EventAdapterPowerNotRequiredStart,
      a3,
      **((_QWORD **)Context + 628),
      *((_DWORD *)Context + 14));
  *(_DWORD *)(*((_QWORD *)Context + 628) + 20LL) &= ~2u;
  if ( (unsigned __int8)RaidIsAdapterControlSupported(Context + 376, 7LL) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  StorPortAdapterPowerNotRequiredStep2(Context);
}

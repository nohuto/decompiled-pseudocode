/*
 * XREFs of StorPortAdapterDirectedPowerDown @ 0x140081520
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x14007DD44 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x14007F5FC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x140081664 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerDown(__int64 Context, __int64 a2, int a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
  {
    v5 = *(_DWORD *)(Context + 56);
    McTemplateK0pqtq_EtwWriteTransfer(
      Context,
      &EventAdapterDirectedPowerDownStart,
      a3,
      **(_QWORD **)(Context + 5024),
      v5);
  }
  *(_DWORD *)(*(_QWORD *)(Context + 5024) + 20LL) &= ~2u;
  if ( RaidIsAdapterControlSupported(Context + 376, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context);
  return StorPortAdapterDirectedPowerDownRequestD3((PVOID)Context);
}

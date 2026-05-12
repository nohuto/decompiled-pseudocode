/*
 * XREFs of RaidAdapterStopOnPowerdown @ 0x140010A10
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterDevicePowerstopAdapter @ 0x14000F504 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterSendPowerToMiniport @ 0x14000FFA4 (RaidAdapterSendPowerToMiniport.c)
 *     GetRaidAdapter @ 0x140010A8C (GetRaidAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidPowerPassToMiniPort @ 0x140011518 (RaidPowerPassToMiniPort.c)
 */

NTSTATUS __fastcall RaidAdapterStopOnPowerdown(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 RaidAdapter; // rbx
  NTSTATUS result; // eax

  RaidAdapter = GetRaidAdapter(a1, a2, a3);
  if ( (unsigned __int8)RaidIsAdapterControlSupported(RaidAdapter + 376, 6LL) )
  {
    RaidAdapterSendPowerToMiniport(RaidAdapter, (__int64)a2);
  }
  else
  {
    *(_BYTE *)(RaidAdapter + 4625) = 1;
    result = RaidPowerPassToMiniPort(a1, a2, RaidAdapterDevicePowerDownSrbComplete);
    if ( result >= 0 )
      return result;
  }
  return RaidAdapterDevicePowerstopAdapter(a2, RaidAdapter);
}

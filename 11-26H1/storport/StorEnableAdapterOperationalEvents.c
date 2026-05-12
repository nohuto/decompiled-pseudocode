/*
 * XREFs of StorEnableAdapterOperationalEvents @ 0x14005BE70
 * Callers:
 *     StorEtwEnableCallback @ 0x140038A60 (StorEtwEnableCallback.c)
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall StorEnableAdapterOperationalEvents(__int64 a1)
{
  char v1; // bl
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = StorMiniportOperationalEventsEnabled;
  if ( !a1 )
    return 3221225485LL;
  v3 = a1 + 376;
  if ( !RaidIsAdapterControlSupported(a1 + 376, 20) )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 110) & 8) != 0) == v1 )
    return 0LL;
  result = RaCallMiniportAdapterControl(v3);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (8 * v1)) & 8;
  return result;
}

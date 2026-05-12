/*
 * XREFs of StorEnableAdapterHealthEvents @ 0x14000F3D8
 * Callers:
 *     StorEtwEnableCallback @ 0x140038A60 (StorEtwEnableCallback.c)
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall StorEnableAdapterHealthEvents(__int64 a1)
{
  char v1; // bl
  __int64 v3; // rsi
  __int64 result; // rax

  v1 = StorMiniportHealthEventsEnabled;
  if ( !a1 )
    return 3221225485LL;
  v3 = a1 + 376;
  if ( !(unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 20LL) )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 110) & 0x10) != 0) == v1 )
    return 0LL;
  result = RaCallMiniportAdapterControl(v3);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (16 * v1)) & 0x10;
  return result;
}

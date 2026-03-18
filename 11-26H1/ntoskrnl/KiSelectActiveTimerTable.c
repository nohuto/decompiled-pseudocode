/*
 * XREFs of KiSelectActiveTimerTable @ 0x14046CEA0
 * Callers:
 *     KiAdjustTimersAfterDripsExit @ 0x1405EE258 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSelectActiveTimerTable(__int64 a1, char a2)
{
  if ( !KiSerializeTimerExpiration )
    return a1 + 16640;
  if ( a2 && !*(_BYTE *)(a1 + 33) )
    return 0LL;
  return KiProcessorBlock[0] + 16640;
}

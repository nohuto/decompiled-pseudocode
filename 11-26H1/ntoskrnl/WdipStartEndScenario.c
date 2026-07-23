/*
 * XREFs of WdipStartEndScenario @ 0x140AD5D08
 * Callers:
 *     WdiDispatchControl @ 0x140AD5C98 (WdiDispatchControl.c)
 *     EtwWriteStartScenario @ 0x140B476D0 (EtwWriteStartScenario.c)
 * Callees:
 *     WdipSemEnableScenario @ 0x140AD5DB4 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 */

__int64 __fastcall WdipStartEndScenario(__int64 a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  if ( !a1
    || !a2
    || !a3
    || !*(_DWORD *)a2
    && !*(_WORD *)(a2 + 4)
    && !*(_WORD *)(a2 + 6)
    && !*(_BYTE *)(a2 + 8)
    && !*(_BYTE *)(a2 + 9)
    && !*(_BYTE *)(a2 + 10)
    && !*(_BYTE *)(a2 + 11)
    && !*(_BYTE *)(a2 + 12)
    && !*(_BYTE *)(a2 + 13)
    && !*(_BYTE *)(a2 + 14)
    && !*(_BYTE *)(a2 + 15) )
  {
    return 3221225485LL;
  }
  if ( a4 == 10 )
  {
    if ( LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
      return WdipSemEnableScenario(a1, *a3, a2);
    return 3221225473LL;
  }
  if ( !LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) )
    return 3221225473LL;
  return WdipSemDisableScenario(a1, *a3, a2);
}

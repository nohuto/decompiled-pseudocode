/*
 * XREFs of HalpInterruptGsiToLine @ 0x14042638C
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     HalpTimerEnableHypervisorTimer @ 0x14050827C (HalpTimerEnableHypervisorTimer.c)
 *     HalpInterruptConnect @ 0x14057B950 (HalpInterruptConnect.c)
 *     HalpInterruptRemap @ 0x14057BD44 (HalpInterruptRemap.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14057D9D8 (HalpInterruptSetLineSpecificOverride.c)
 *     HalpTimerConfigureInterrupt @ 0x1405819FC (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x140582FB0 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140584840 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptParseMadt @ 0x140590738 (HalpInterruptParseMadt.c)
 *     HalpInterruptIsGsiValid @ 0x140781100 (HalpInterruptIsGsiValid.c)
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140426C08 (HalpInterruptFindLinesForGsiRange.c)
 */

__int64 __fastcall HalpInterruptGsiToLine(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  _DWORD *LinesForGsiRange; // rax

  v3 = a1;
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  if ( !LinesForGsiRange )
    return 3221226021LL;
  *a2 = LinesForGsiRange[4];
  a2[1] = v3 + LinesForGsiRange[5] - LinesForGsiRange[7];
  return 0LL;
}

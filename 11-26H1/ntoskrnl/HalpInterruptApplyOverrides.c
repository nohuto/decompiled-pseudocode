/*
 * XREFs of HalpInterruptApplyOverrides @ 0x140433248
 * Callers:
 *     HalDisableInterrupt @ 0x1404311D0 (HalDisableInterrupt.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x140435518 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptConnect @ 0x14057DE80 (HalpInterruptConnect.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     HalpInterruptRestoreClock @ 0x14057FDE8 (HalpInterruptRestoreClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x1405854D0 (HalpTimerUnmapInterrupt.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptMaskAcpi @ 0x140C0EDD0 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140433D18 (HalpInterruptFindLinesForGsiRange.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 */

void __fastcall HalpInterruptApplyOverrides(int *a1, _DWORD *a2, _DWORD *a3)
{
  char v4; // di
  unsigned __int8 v7; // al
  __int64 *v8; // r9
  __int64 *v9; // rdx
  int v10; // ecx
  unsigned int v11; // edi
  _DWORD *LinesForGsiRange; // rax

  v4 = 0;
  v7 = HalpAcquireHighLevelLock(&HalpInterruptOverridesLock);
  v8 = (__int64 *)HalpInterruptOverrides;
  while ( v8 != &HalpInterruptOverrides )
  {
    v9 = v8;
    v8 = (__int64 *)*v8;
    if ( *((_DWORD *)v9 + 4) == *a1 && *((_DWORD *)v9 + 5) == a1[1] )
    {
      *(_QWORD *)a1 = v9[3];
      if ( a2 )
        *a2 = *((_DWORD *)v9 + 9);
      if ( a3 )
        *a3 = *((_DWORD *)v9 + 8);
      v4 = 1;
      break;
    }
  }
  HalpReleaseHighLevelLock(&HalpInterruptOverridesLock, v7);
  if ( !v4 && *(_DWORD *)(HalpInterruptController + 240) == 2 )
  {
    v10 = *a1;
    if ( *a1 == 45057 || v10 == 45056 )
    {
      v11 = a1[1] + 8;
      if ( v10 != 45057 )
        v11 = a1[1];
      LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v11, v11 + 1);
      if ( LinesForGsiRange )
      {
        a1[1] = v11 + LinesForGsiRange[5] - LinesForGsiRange[7];
        *a1 = LinesForGsiRange[4];
      }
    }
  }
}

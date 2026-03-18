/*
 * XREFs of PpmIdleTransitionStall @ 0x14060274C
 * Callers:
 *     PpmExitCoordinatedIdleState @ 0x1404F2C6C (PpmExitCoordinatedIdleState.c)
 *     PoInitiateProcessorWake @ 0x1406014A0 (PoInitiateProcessorWake.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140601910 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1406029C4 (PpmIdleWaitForDependentTransitions.c)
 *     PpmTestAndLockProcessor @ 0x140603458 (PpmTestAndLockProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall PpmIdleTransitionStall(__int64 a1)
{
  ULONG_PTR v2; // r9

  if ( *(_QWORD *)a1 )
  {
    if ( ++*(_DWORD *)(a1 + 24) == 1000 )
    {
      *(_DWORD *)(a1 + 24) = 0;
      if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)a1) > *(_QWORD *)(a1 + 8) )
      {
        v2 = *(_QWORD *)(a1 + 16);
        if ( v2 )
          KeBugCheckEx(0xA0u, 0x701uLL, *(unsigned int *)(v2 + 34960), v2, *(unsigned int *)(v2 + 36));
        KeBugCheckEx(0xA0u, 0x704uLL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    *(LARGE_INTEGER *)a1 = KeQueryPerformanceCounter(0LL);
  }
  if ( *(_BYTE *)(a1 + 28) )
    _mm_pause();
  _mm_pause();
}

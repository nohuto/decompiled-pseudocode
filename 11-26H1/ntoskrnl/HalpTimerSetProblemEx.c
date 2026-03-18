/*
 * XREFs of HalpTimerSetProblemEx @ 0x1404FEB94
 * Callers:
 *     HalpSetTimer @ 0x1402086B0 (HalpSetTimer.c)
 *     HalpTimerClockArm @ 0x140208950 (HalpTimerClockArm.c)
 *     HalpInitializePnTimers @ 0x140576BD4 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x140576C98 (HalpInitializeTimers.c)
 *     HalpTimerInitialize @ 0x1405778D8 (HalpTimerInitialize.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x14057797C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerReinitializeThisProcessor @ 0x140577CC0 (HalpTimerReinitializeThisProcessor.c)
 *     HalpTimerSelectRoles @ 0x140577E78 (HalpTimerSelectRoles.c)
 *     HalpTimerClockInitialize @ 0x140581160 (HalpTimerClockInitialize.c)
 *     HalpTimerInitializeClock @ 0x14058144C (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x1405819FC (HalpTimerConfigureInterrupt.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1405845EC (HalpTimerRestartProfileInterrupt.c)
 *     HalUpdateTimerCapabilities @ 0x140598090 (HalUpdateTimerCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerSetProblemEx(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  HalpTimerLastProblem = a2;
  if ( a1 )
  {
    result = a5;
    *(_DWORD *)(a1 + 272) = a5;
    *(_DWORD *)(a1 + 252) = a2;
    *(_DWORD *)(a1 + 256) = a3;
    *(_QWORD *)(a1 + 264) = a4;
  }
  return result;
}

/*
 * XREFs of HalpTimerSetProblemEx @ 0x1404F8144
 * Callers:
 *     HalpSetTimer @ 0x140208790 (HalpSetTimer.c)
 *     HalpTimerClockArm @ 0x140208A30 (HalpTimerClockArm.c)
 *     HalpInitializePnTimers @ 0x140579104 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1405791C8 (HalpInitializeTimers.c)
 *     HalpTimerInitialize @ 0x140579E08 (HalpTimerInitialize.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140579EAC (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerReinitializeThisProcessor @ 0x14057A1F0 (HalpTimerReinitializeThisProcessor.c)
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 *     HalpTimerClockInitialize @ 0x140583680 (HalpTimerClockInitialize.c)
 *     HalpTimerInitializeClock @ 0x14058396C (HalpTimerInitializeClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140586B0C (HalpTimerRestartProfileInterrupt.c)
 *     HalUpdateTimerCapabilities @ 0x14059A810 (HalUpdateTimerCapabilities.c)
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

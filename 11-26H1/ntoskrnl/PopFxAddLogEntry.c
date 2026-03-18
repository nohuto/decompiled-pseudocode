/*
 * XREFs of PopFxAddLogEntry @ 0x14021A640
 * Callers:
 *     PopDiagTraceFxDevicePowerState @ 0x140218B90 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140218C6C (PopDiagTraceIrpStart.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140219E80 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAllocatePowerIrp @ 0x14021A098 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceIrpFinish @ 0x14021A300 (PopDiagTraceIrpFinish.c)
 *     PopFxIdleWorker @ 0x140395300 (PopFxIdleWorker.c)
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1403B782C (PopFxHandleDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1403B919C (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PoFxCompleteIdleState @ 0x140479950 (PoFxCompleteIdleState.c)
 *     PoFxCompleteIdleCondition @ 0x140489250 (PoFxCompleteIdleCondition.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1404D4C60 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1404D6040 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1404D62C4 (PopFxUpdateDeviceIdleTimer.c)
 *     PoFxSetComponentWake @ 0x1404F5140 (PoFxSetComponentWake.c)
 *     PopFxCompleteComponentPerfState @ 0x1404F95B8 (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F97B0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140514298 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140604AB8 (PopFxCompleteDirectedPowerTransition.c)
 *     PopDiagTraceFxComponentResidency @ 0x140608A10 (PopDiagTraceFxComponentResidency.c)
 *     PopFxTraceDeviceRegistration @ 0x140AEE2C4 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140B068E8 (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x140B44010 (PopFxTracePerfRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140B5EAB8 (PopDiagTraceFxDeviceStartPowerManagement.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD *result; // rax

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 888)
         + 24LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 896), 1u) % *(_DWORD *)(v5 + 880));
      *(_QWORD *)v6 = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v6 + 8) = a3;
      *(_BYTE *)(v6 + 9) = a2;
      *(_WORD *)(v6 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v6 + 12) = KeGetCurrentThread()[1].CycleTime;
      result = KeGetCurrentThread();
      *(_WORD *)(v6 + 14) = result[1].CurrentRunTime;
      *(_QWORD *)(v6 + 16) = a4;
    }
  }
  return result;
}

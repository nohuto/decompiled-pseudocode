/*
 * XREFs of PopFxAddLogEntry @ 0x14021BFD0
 * Callers:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x14021B810 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAllocatePowerIrp @ 0x14021BA28 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceIrpFinish @ 0x14021BC90 (PopDiagTraceIrpFinish.c)
 *     PopFxIdleWorker @ 0x140397080 (PopFxIdleWorker.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopDiagTraceIrpStart @ 0x1403BD9D4 (PopDiagTraceIrpStart.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1403C172C (PopFxHandleDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1403C309C (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PoFxCompleteIdleState @ 0x1404732B0 (PoFxCompleteIdleState.c)
 *     PoFxCompleteIdleCondition @ 0x140482D90 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1404BE634 (PopDiagTraceFxDevicePowerState.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1404CE4D0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1404CF810 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1404CFA94 (PopFxUpdateDeviceIdleTimer.c)
 *     PoFxSetComponentWake @ 0x1404EE720 (PoFxSetComponentWake.c)
 *     PopFxCompleteComponentPerfState @ 0x1404F2BC8 (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14050DD08 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1406075B8 (PopFxCompleteDirectedPowerTransition.c)
 *     PopDiagTraceFxComponentResidency @ 0x14060B5D0 (PopDiagTraceFxComponentResidency.c)
 *     PopFxTraceDeviceRegistration @ 0x140AF125C (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140B08A18 (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x140B45F00 (PopFxTracePerfRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140B61C38 (PopDiagTraceFxDeviceStartPowerManagement.c)
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

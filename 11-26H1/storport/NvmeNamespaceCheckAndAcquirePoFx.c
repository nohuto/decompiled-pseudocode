/*
 * XREFs of NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C
 * Callers:
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     NvmeNamespaceActiveConditionStep1 @ 0x1400318C0 (NvmeNamespaceActiveConditionStep1.c)
 *     NvmeNamespaceIdleCondition @ 0x140031910 (NvmeNamespaceIdleCondition.c)
 *     NvmeNamespaceIdleState @ 0x140031970 (NvmeNamespaceIdleState.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400EF7D8 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeProcessIoForResetRecovery @ 0x1400FFB24 (NvmeProcessIoForResetRecovery.c)
 *     NvmeContinueScatterGatherProcessIO @ 0x140119EC0 (NvmeContinueScatterGatherProcessIO.c)
 *     NvmeIoCompletionRedirectDpcRoutine @ 0x14011A2F0 (NvmeIoCompletionRedirectDpcRoutine.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeAdapterPoFxSetDeviceIdleTimeout @ 0x140124014 (NvmeAdapterPoFxSetDeviceIdleTimeout.c)
 *     NvmeNamespaceCancelWaitWakeIrp @ 0x1401276F8 (NvmeNamespaceCancelWaitWakeIrp.c)
 *     NvmeNamespaceDirectedPowerDown @ 0x1401278D0 (NvmeNamespaceDirectedPowerDown.c)
 *     NvmeNamespaceDirectedPowerDownCompletion @ 0x140127950 (NvmeNamespaceDirectedPowerDownCompletion.c)
 *     NvmeNamespaceDirectedPowerUp @ 0x140127C10 (NvmeNamespaceDirectedPowerUp.c)
 *     NvmeNamespaceDirectedPowerUpRequestD0 @ 0x140127CA4 (NvmeNamespaceDirectedPowerUpRequestD0.c)
 *     NvmeNamespacePoFxD0Completion @ 0x140127E60 (NvmeNamespacePoFxD0Completion.c)
 *     NvmeNamespacePoFxD3Completion @ 0x140127F70 (NvmeNamespacePoFxD3Completion.c)
 *     NvmeNamespacePoFxWaitWakeCompletion @ 0x140128120 (NvmeNamespacePoFxWaitWakeCompletion.c)
 *     NvmeNamespacePowerNotRequiredStep1 @ 0x140128450 (NvmeNamespacePowerNotRequiredStep1.c)
 *     NvmeNamespacePowerRequiredStep1 @ 0x140128720 (NvmeNamespacePowerRequiredStep1.c)
 *     NvmeNamespacePowerRequiredStep2 @ 0x140128798 (NvmeNamespacePowerRequiredStep2.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x140128C7C (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 *     NvmeNamespaceRegisterForIdleDetection @ 0x14012911C (NvmeNamespaceRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NvmeNamespaceCheckAndAcquirePoFx(__int64 a1)
{
  __int64 v1; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 && *(_QWORD *)(v1 + 8) && (v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v1 + 40)) != 0LL )
    return ExAcquireRundownProtectionCacheAware(v3);
  else
    return 0;
}

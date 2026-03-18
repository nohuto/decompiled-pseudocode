/*
 * XREFs of ??$SmmAcquirePushLockExclusive@$0EM@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EM@@@@Z @ 0x14009BAB8
 * Callers:
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x140284E80 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 SmmAcquirePushLockExclusive<76>()
{
  return ExAcquirePushLockExclusiveEx(&SmmDomainChangeGlobalLock, 0LL);
}

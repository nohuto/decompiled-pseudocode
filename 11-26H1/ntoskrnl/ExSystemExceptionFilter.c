/*
 * XREFs of ExSystemExceptionFilter @ 0x14083CCA0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExPoolQueryLimits @ 0x1405127B0 (ExPoolQueryLimits.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14053461C (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406CCDC8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1406CD64C (EtwpApplyPredicate.c)
 *     ExPoolSetLimit @ 0x1406CFD68 (ExPoolSetLimit.c)
 *     NtShutdownWorkerFactory @ 0x1406D77B0 (NtShutdownWorkerFactory.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

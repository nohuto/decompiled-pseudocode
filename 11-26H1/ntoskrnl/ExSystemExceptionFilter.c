/*
 * XREFs of ExSystemExceptionFilter @ 0x140836A60
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     ExPoolQueryLimits @ 0x140518D40 (ExPoolQueryLimits.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14053217C (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406C8DE8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1406C966C (EtwpApplyPredicate.c)
 *     ExPoolSetLimit @ 0x1406CBD38 (ExPoolSetLimit.c)
 *     NtShutdownWorkerFactory @ 0x1406D3780 (NtShutdownWorkerFactory.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}

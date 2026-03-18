/*
 * XREFs of PoEnergyEstimationEnabled @ 0x14047C5D0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PpmEventTraceControlCallback @ 0x1407DCAD0 (PpmEventTraceControlCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14095224C (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140952420 (PspQueryProcessAccountingInformationCallback.c)
 *     PsQueryProcessEnergyValues @ 0x140952980 (PsQueryProcessEnergyValues.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A59C70 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 PoEnergyEstimationEnabled()
{
  return stru_140F12D20.SchedulerApcFill3[40];
}

/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140475F40
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C3470 (NtAlpcImpersonateClientContainerOfPort.c)
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409CDB8C (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1409CDD60 (PspQueryProcessAccountingInformationCallback.c)
 *     PsQueryProcessEnergyValues @ 0x1409CE2C0 (PsQueryProcessEnergyValues.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A66BE0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     NtCreateJobObject @ 0x140A7F420 (NtCreateJobObject.c)
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 PoEnergyEstimationEnabled()
{
  return BYTE4(stru_140F12EA0.SystemAffinityTokenListHead.Next);
}

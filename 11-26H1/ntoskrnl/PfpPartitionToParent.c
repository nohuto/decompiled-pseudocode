/*
 * XREFs of PfpPartitionToParent @ 0x1404CF710
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x1407C87C0 (PfpLogScenarioEventCallback.c)
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14087103C (MmAdjustSecuredVirtualMemorySize.c)
 *     PfpFlushBuffers @ 0x1409F13D0 (PfpFlushBuffers.c)
 *     MiCheckSecuredVad @ 0x140A033E8 (MiCheckSecuredVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 *     MiCloneNoChange @ 0x140A07CA0 (MiCloneNoChange.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B4A070 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     PfpLogEventRequest @ 0x140B51D4C (PfpLogEventRequest.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140BFE770 (PfpPowerActionSleepSystemPhaseCallback.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140BFE7E0 (PfpPowerActionStartScenarioTracingCallback.c)
 *     PfTAccessTracingStart @ 0x140BFEEDC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140BFEF54 (PfTSetTracingPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionToParent(__int64 a1)
{
  return *(_QWORD *)a1;
}

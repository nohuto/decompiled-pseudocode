/*
 * XREFs of PfpPartitionToParent @ 0x1404D5F40
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x1407C5760 (PfpLogScenarioEventCallback.c)
 *     PfTStart @ 0x1407C67E4 (PfTStart.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14086AC5C (MmAdjustSecuredVirtualMemorySize.c)
 *     MiCheckSecuredVad @ 0x14095DB28 (MiCheckSecuredVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 *     MiCloneNoChange @ 0x140961FAC (MiCloneNoChange.c)
 *     PfpFlushBuffers @ 0x140A05BE0 (PfpFlushBuffers.c)
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140B482E0 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 *     PfpLogEventRequest @ 0x140B4F4BC (PfpLogEventRequest.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140BF8770 (PfpPowerActionSleepSystemPhaseCallback.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140BF87E0 (PfpPowerActionStartScenarioTracingCallback.c)
 *     PfTAccessTracingStart @ 0x140BF8EDC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140BF8F54 (PfTSetTracingPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionToParent(__int64 a1)
{
  return *(_QWORD *)a1;
}

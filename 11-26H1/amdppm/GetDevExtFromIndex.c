/*
 * XREFs of GetDevExtFromIndex @ 0x1400016A0
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1400230D4 (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x140023170 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1400233B0 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1400308EC (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x1400325B8 (DeregisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x140037E0C (PepNotifyCoordinatedLpiStates.c)
 *     PepQueryWpsTable @ 0x14003B02C (PepQueryWpsTable.c)
 *     LpiEnumerateDependencies @ 0x14003E8B8 (LpiEnumerateDependencies.c)
 *     RegisterKernelIdleDomains @ 0x140042518 (RegisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}

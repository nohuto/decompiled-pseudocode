/*
 * XREFs of GetDevExtFromIndex @ 0x140005E70
 * Callers:
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x140034A2C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     PepNotifyCoordinatedLpiStates @ 0x140039EE0 (PepNotifyCoordinatedLpiStates.c)
 *     PepQueryWpsTable @ 0x14003C2F0 (PepQueryWpsTable.c)
 *     LpiEnumerateDependencies @ 0x14003F03C (LpiEnumerateDependencies.c)
 *     DeregisterKernelIdleDomains @ 0x140041A40 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1400424AC (RegisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}

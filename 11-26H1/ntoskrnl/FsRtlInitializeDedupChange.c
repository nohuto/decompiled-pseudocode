/*
 * XREFs of FsRtlInitializeDedupChange @ 0x14078FB30
 * Callers:
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  VslpReservedTransferLock.KernelWaitTime = (unsigned __int64)&VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
  *(_QWORD *)&VslpReservedTransferLock.ReservedPreviousReadyTimeValue = &VslpReservedTransferLock.ReservedPreviousReadyTimeValue;
  return ExInitializeResourceLite((PERESOURCE)&VslpReservedTransferLock.UserWaitTime);
}

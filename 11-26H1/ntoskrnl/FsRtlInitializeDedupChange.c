/*
 * XREFs of FsRtlInitializeDedupChange @ 0x140792660
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeDedupChange()
{
  VslpReservedTransferLock.KernelShadowStackInitial = &VslpReservedTransferLock.KernelShadowStack;
  VslpReservedTransferLock.KernelShadowStack = &VslpReservedTransferLock.KernelShadowStack;
  return ExInitializeResourceLite((PERESOURCE)&VslpReservedTransferLock.KernelShadowStackBase);
}

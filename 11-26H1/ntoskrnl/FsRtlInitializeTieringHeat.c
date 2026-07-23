/*
 * XREFs of FsRtlInitializeTieringHeat @ 0x140793028
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 */

NTSTATUS FsRtlInitializeTieringHeat()
{
  VslpReservedTransferLock.OtherOperationCount = (__int64)&VslpReservedTransferLock.WriteOperationCount;
  VslpReservedTransferLock.WriteOperationCount = (__int64)&VslpReservedTransferLock.WriteOperationCount;
  return ExInitializeResourceLite((PERESOURCE)&VslpReservedTransferLock.ReadTransferCount);
}

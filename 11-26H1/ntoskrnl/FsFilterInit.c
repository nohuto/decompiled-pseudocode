/*
 * XREFs of FsFilterInit @ 0x1405B9FFC
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  PVOID v0; // rbx
  unsigned int v1; // ecx
  __int64 result; // rax

  AcquireOpsReservePool = (PVOID)ExAllocatePool2(0x40uLL);
  v0 = AcquireOpsReservePool;
  VslpReservedTransferLock.Padding[1] = ExAllocatePool2(0x40uLL);
  v1 = v0 != 0LL ? 0 : 0xC000009A;
  if ( !VslpReservedTransferLock.Padding[1] )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v1 = -1073741670;
  }
  BYTE2(VslpReservedTransferLock.Padding[2]) = 6;
  LOWORD(VslpReservedTransferLock.Padding[2]) = 1;
  VslpReservedTransferLock.Padding[4] = (unsigned __int64)&VslpReservedTransferLock.Padding[3];
  VslpReservedTransferLock.Padding[3] = (unsigned __int64)&VslpReservedTransferLock.Padding[3];
  VslpReservedTransferLock.Padding[0] = (unsigned __int64)&VslpReservedTransferLock.SchedulerAssistLastYieldBoostTime;
  VslpReservedTransferLock.SchedulerAssistLastYieldBoostTime = (__int64)&VslpReservedTransferLock.SchedulerAssistLastYieldBoostTime;
  result = v1;
  HIDWORD(VslpReservedTransferLock.Padding[2]) = 1;
  LOWORD(VslpReservedTransferLock.SchedulerAssistYieldCounter) = 1;
  BYTE2(VslpReservedTransferLock.SchedulerAssistYieldCounter) = 6;
  VslpReservedTransferLock.SchedulerAssistYieldBoostCount = 1;
  return result;
}

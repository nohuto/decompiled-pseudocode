/*
 * XREFs of FsFilterInit @ 0x1405B778C
 * Callers:
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 FsFilterInit()
{
  void *AutoBoostThreadState; // rbx
  unsigned int v1; // ecx
  __int64 result; // rax

  VslpReservedTransferLock.AutoBoostThreadState = (void *)ExAllocatePool2(0x40uLL);
  AutoBoostThreadState = VslpReservedTransferLock.AutoBoostThreadState;
  VslpReservedTransferLock.SystemAffinityTokenListHead.Next = (struct _SINGLE_LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  v1 = AutoBoostThreadState != 0LL ? 0 : 0xC000009A;
  if ( !VslpReservedTransferLock.SystemAffinityTokenListHead.Next )
  {
    ExFreePoolWithTag(VslpReservedTransferLock.AutoBoostThreadState, 0x676D5346u);
    v1 = -1073741670;
  }
  BYTE2(VslpReservedTransferLock.IptSaveArea) = 6;
  LOWORD(VslpReservedTransferLock.IptSaveArea) = 1;
  VslpReservedTransferLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)&VslpReservedTransferLock.ResourceIndex;
  *(_QWORD *)&VslpReservedTransferLock.ResourceIndex = &VslpReservedTransferLock.ResourceIndex;
  *(_QWORD *)&VslpReservedTransferLock.SchedulerAssistYieldCounter = &VslpReservedTransferLock.KcsanThread;
  VslpReservedTransferLock.KcsanThread = (unsigned __int64)&VslpReservedTransferLock.KcsanThread;
  result = v1;
  HIDWORD(VslpReservedTransferLock.IptSaveArea) = 1;
  LOWORD(VslpReservedTransferLock.Spare32) = 1;
  BYTE2(VslpReservedTransferLock.UserAbEntries) = 6;
  HIDWORD(VslpReservedTransferLock.UserAbEntries) = 1;
  return result;
}

/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14094B784
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14094AFAC (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlInsertHeadCircularList @ 0x140432480 (RtlInsertHeadCircularList.c)
 *     VrpUnlockDiffHiveEntry @ 0x1409471A0 (VrpUnlockDiffHiveEntry.c)
 *     VrpLockDiffHiveEntry @ 0x14094B6C0 (VrpLockDiffHiveEntry.c)
 */

__int64 *__fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  __int64 *v2; // rax
  ULONG_PTR v3; // rbx
  struct _KEVENT v5[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]

  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  v5[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v5[1], SynchronizationEvent, 0);
  v6 = 0LL;
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v5);
  VrpUnlockDiffHiveEntry(a1);
  v2 = KeAbPreAcquire(a1 + 40, 0LL);
  v3 = (ULONG_PTR)v2;
  if ( v2 )
    KeAbPreWait(v2);
  KeWaitForSingleObject(&v5[1], Executive, 0, 0, 0LL);
  if ( v3 )
  {
    KeAbPreAcquire(a1 + 40, v3);
    KeAbPostReleaseEx(a1 + 40, v3);
  }
  return VrpLockDiffHiveEntry(a1);
}

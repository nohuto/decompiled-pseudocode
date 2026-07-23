/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140B5372C
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     RtlInsertHeadCircularList @ 0x1404405D0 (RtlInsertHeadCircularList.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     VrpLockDiffHiveEntry @ 0x14093B8B8 (VrpLockDiffHiveEntry.c)
 *     VrpUnlockDiffHiveEntry @ 0x14093BC84 (VrpUnlockDiffHiveEntry.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  AutoBoost *v3; // rax
  struct _KLOCK_ENTRY *v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KEVENT v11[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  memset(v11, 0, sizeof(v11));
  v11[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v11[1], SynchronizationEvent, 0);
  v12 = 0LL;
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v11);
  VrpUnlockDiffHiveEntry(a1);
  v3 = (AutoBoost *)KeAbPreAcquire(a1 + 40, 0LL, 0LL, v2);
  v5 = (unsigned __int64)v3;
  if ( v3 )
    KeAbPreWait(v3, v4);
  KeWaitForSingleObject(&v11[1], Executive, 0, 0, 0LL);
  if ( v5 )
  {
    KeAbPreAcquire(a1 + 40, v5, 0LL, v8);
    KeAbPostReleaseEx((struct _KTHREAD *)(a1 + 40), v5, v9, v10);
  }
  VrpLockDiffHiveEntry(a1, v6, v7, v8);
}

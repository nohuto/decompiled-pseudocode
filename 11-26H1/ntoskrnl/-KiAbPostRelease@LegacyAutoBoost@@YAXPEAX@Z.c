/*
 * XREFs of ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140271600
 * Callers:
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 * Callees:
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall LegacyAutoBoost::KiAbPostRelease(ULONG_PTR BugCheckParameter2, void *a2)
{
  struct _KTHREAD *CurrentThread; // r11
  char *AutoBoostThreadState; // r8
  ULONG_PTR v4; // r9
  unsigned int i; // eax
  LegacyAutoBoost *v6; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v9; // eax
  __int64 v10; // rdx
  unsigned __int32 v11; // ett
  union _KLOCK_ENTRY_BOOST_BITMAP *v12; // [rsp+28h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  _disable();
  AutoBoostThreadState = (char *)CurrentThread->AutoBoostThreadState;
  v4 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < (unsigned __int8)AutoBoostThreadState[12]; ++i )
  {
    v6 = (LegacyAutoBoost *)&AutoBoostThreadState[88 * i + 16];
    if ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) == v4 && *((_BYTE *)v6 + 10) && (*(_QWORD *)v6 & 1) == 0 )
    {
      *((_BYTE *)v6 + 10) = 0;
      if ( v6 )
      {
        LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
          v6,
          (struct _KLOCK_ENTRY *)CurrentThread,
          (struct _KTHREAD *)BugCheckParameter2,
          (void *)1,
          0,
          v12);
        return;
      }
      break;
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v9 = *SchedulerAssist;
    do
    {
      v10 = v9;
      LODWORD(v10) = v9 & 0xFFDFFFFF;
      v11 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v9 & 0xFFDFFFFF, v9);
    }
    while ( v11 != v9 );
    if ( (v9 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v10, SchedulerAssist, v4);
  }
  _enable();
}

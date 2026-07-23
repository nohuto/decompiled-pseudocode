/*
 * XREFs of SshpTracingRundownBlockerState @ 0x140B15904
 * Callers:
 *     SshpEtwEnableCallback @ 0x140B158E0 (SshpEtwEnableCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x1404A2608 (SshpTracingWriteBlockerStateRundown.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 */

void __fastcall SshpTracingRundownBlockerState(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  struct _KLOCK_ENTRIES *v6; // r9
  AutoBoost *v7; // rbx
  unsigned __int64 *i; // rbx
  unsigned __int64 *j; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rdi

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL, 0LL, a4);
  v7 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpLibraryListLock, v4, (__int64)&SshpLibraryListLock);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = (unsigned __int64 *)SshpLibraryList; i != (unsigned __int64 *)&SshpLibraryList; i = (unsigned __int64 *)*i )
  {
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)(i + 2), 0LL, 0LL, v6);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)i + 4, 0LL) )
      ExfAcquirePushLockExclusiveEx(i + 2, v10, (__int64)(i + 2));
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    for ( j = (unsigned __int64 *)i[19]; j != i + 19; j = (unsigned __int64 *)*j )
      SshpTracingWriteBlockerStateRundown(&SLEEPSTUDY_EVT_BLOCKER_STATE_RUNDOWN, (PKSPIN_LOCK)j[14]);
    SSHSupportReleasePushLockExclusive((struct _KTHREAD *)(i + 2));
  }
  SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&SshpLibraryListLock);
}

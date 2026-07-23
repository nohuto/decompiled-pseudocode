/*
 * XREFs of SshpPurgeBlockersWorker @ 0x140AAB2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SshpDereferenceBlocker @ 0x1404955E0 (SshpDereferenceBlocker.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     SshpQueryBlockerPendingDelete @ 0x1404C9C84 (SshpQueryBlockerPendingDelete.c)
 *     SshpWorkItemTryAllowNextWorker @ 0x1404E6E20 (SshpWorkItemTryAllowNextWorker.c)
 *     SshpUnlinkBlockerFromLibrary @ 0x140AAB57C (SshpUnlinkBlockerFromLibrary.c)
 *     SshpFreeBlockerEntry @ 0x140AAB60C (SshpFreeBlockerEntry.c)
 */

char SshpPurgeBlockersWorker()
{
  char result; // al
  struct _KLOCK_ENTRIES *v1; // r9
  AutoBoost *v2; // rax
  void *v3; // rdx
  struct _KLOCK_ENTRIES *v4; // r9
  AutoBoost *v5; // rbx
  unsigned __int64 *v6; // rbx
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rdi
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // rsi
  unsigned __int64 *v12; // r15
  unsigned __int64 **v13; // rax
  __int64 *v14; // rbx
  __int64 *v15; // rax
  unsigned __int64 *v16; // rsi
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // rdi
  __int64 v20; // rdx
  __int64 **v21; // rcx
  KSPIN_LOCK *v22; // rcx
  __int64 *v23; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 *v24; // [rsp+28h] [rbp-8h]

  v24 = (unsigned __int64 *)&v23;
  v23 = (__int64 *)&v23;
  while ( 1 )
  {
    result = SshpWorkItemTryAllowNextWorker((__int64)&SshpPurgeBlockersWorkItem);
    if ( result )
      return result;
    v2 = (AutoBoost *)KeAbPreAcquire((__int64)&SshpLibraryListLock, 0LL, 0LL, v1);
    v5 = v2;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpLibraryListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpLibraryListLock, v2, (__int64)&SshpLibraryListLock);
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v5, v3);
      else
        *((_BYTE *)v5 + 10) = 1;
    }
    v6 = (unsigned __int64 *)SshpLibraryList;
    if ( SshpLibraryList != &SshpLibraryList )
    {
      do
      {
        v7 = (AutoBoost *)KeAbPreAcquire((__int64)(v6 + 2), 0LL, 0LL, v4);
        v9 = v7;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v6 + 4, 0LL) )
          ExfAcquirePushLockExclusiveEx(v6 + 2, v7, (__int64)(v6 + 2));
        if ( v9 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v9, v8);
          else
            *((_BYTE *)v9 + 10) = 1;
        }
        v10 = (unsigned __int64 *)v6[19];
        while ( v10 != v6 + 19 )
        {
          v11 = v10;
          v12 = v10;
          v10 = (unsigned __int64 *)*v10;
          if ( SshpQueryBlockerPendingDelete((PKSPIN_LOCK)v11[14]) )
          {
            SshpUnlinkBlockerFromLibrary(v11[14]);
            v13 = (unsigned __int64 **)v24;
            if ( (__int64 **)*v24 != &v23 )
              goto LABEL_18;
            v11[1] = (unsigned __int64)v24;
            *v12 = (unsigned __int64)&v23;
            *v13 = v11;
            v24 = v11;
          }
        }
        SSHSupportReleasePushLockExclusive((struct _KTHREAD *)(v6 + 2));
        v6 = (unsigned __int64 *)*v6;
      }
      while ( v6 != (unsigned __int64 *)&SshpLibraryList );
    }
    while ( 1 )
    {
      v14 = v23;
      if ( v23 == (__int64 *)&v23 )
        break;
      if ( (__int64 **)v23[1] != &v23 )
        goto LABEL_18;
      v15 = (__int64 *)*v23;
      if ( *(__int64 **)(*v23 + 8) != v23 )
        goto LABEL_18;
      v23 = (__int64 *)*v23;
      v15[1] = (__int64)&v23;
      v16 = (unsigned __int64 *)((char *)&SshpBlockerCollections + 48 * *((int *)v14 + 10));
      v17 = (AutoBoost *)KeAbPreAcquire((__int64)v16, 0LL, 0LL, v4);
      v19 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        ExfAcquirePushLockExclusiveEx(v16, v17, (__int64)v16);
      if ( v19 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v19, v18);
        else
          *((_BYTE *)v19 + 10) = 1;
      }
      v20 = v14[2];
      if ( *(__int64 **)(v20 + 8) != v14 + 2 || (v21 = (__int64 **)v14[3], *v21 != v14 + 2) )
LABEL_18:
        __fastfail(3u);
      *v21 = (__int64 *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      SSHSupportReleasePushLockExclusive((struct _KTHREAD *)v16);
      v22 = *(KSPIN_LOCK **)(v14[14] + 296);
      if ( v22 )
        SshpDereferenceBlocker(v22, 1, 1);
      SshpFreeBlockerEntry((PKSPIN_LOCK)v14[14]);
    }
    SSHSupportReleasePushLockExclusive((struct _KTHREAD *)&SshpLibraryListLock);
  }
}

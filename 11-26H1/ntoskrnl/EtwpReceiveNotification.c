/*
 * XREFs of EtwpReceiveNotification @ 0x140A74080
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebp
  unsigned __int64 UserDirectoryTableBase; // r13
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned __int64 v14; // r14
  volatile signed __int32 *v15; // rdx
  volatile signed __int32 **v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  volatile signed __int64 *v19; // rdi
  __int64 v20; // r12
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  signed __int32 v23; // edi
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt

  v5 = 0;
  UserDirectoryTableBase = KeGetCurrentThread()->ApcState.Process[1].UserDirectoryTableBase;
  if ( UserDirectoryTableBase )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire(UserDirectoryTableBase + 16, 0LL, 0LL, a4);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(UserDirectoryTableBase + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(UserDirectoryTableBase + 16), v10, UserDirectoryTableBase + 16);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v13 = *(volatile signed __int32 **)(UserDirectoryTableBase + 24);
    v14 = UserDirectoryTableBase + 24;
    if ( v13 == (volatile signed __int32 *)(UserDirectoryTableBase + 24) )
    {
LABEL_33:
      _m_prefetchw((const void *)(UserDirectoryTableBase + 16));
      v25 = *(_QWORD *)(UserDirectoryTableBase + 16);
      v26 = v25 - 16;
      if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v26 = 0LL;
      if ( (v25 & 2) != 0
        || (v27 = *(_QWORD *)(UserDirectoryTableBase + 16),
            v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(UserDirectoryTableBase + 16), v26, v25)) )
      {
        ExfReleasePushLock((_QWORD *)(UserDirectoryTableBase + 16));
      }
      KeAbPostRelease(UserDirectoryTableBase + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)-2147483622;
    }
    else
    {
      while ( 1 )
      {
        v15 = *(volatile signed __int32 **)v13;
        if ( a3 == *(_BYTE *)(*((_QWORD *)v13 + 3) + 98LL) >> 7 )
          break;
        v13 = *(volatile signed __int32 **)v13;
        if ( v15 == (volatile signed __int32 *)v14 )
          goto LABEL_33;
      }
      if ( *((volatile signed __int32 **)v15 + 1) != v13
        || (v16 = (volatile signed __int32 **)*((_QWORD *)v13 + 1), *v16 != v13) )
      {
LABEL_13:
        __fastfail(3u);
      }
      *v16 = v15;
      *((_QWORD *)v15 + 1) = v16;
      v17 = *((_QWORD *)v13 + 2);
      if ( *(_DWORD *)(v17 + 4) > a2 )
      {
        v18 = *(_QWORD *)v14;
        if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
          goto LABEL_13;
        *(_QWORD *)v13 = v18;
        v5 = -1073741789;
        *((_QWORD *)v13 + 1) = v14;
        *(_QWORD *)(v18 + 8) = v13;
        *(_QWORD *)v14 = v13;
      }
      v19 = (volatile signed __int64 *)(UserDirectoryTableBase + 16);
      v20 = *(_QWORD *)v14;
      LODWORD(a4->Thread) = *(_DWORD *)(v17 + 4);
      _m_prefetchw((const void *)(UserDirectoryTableBase + 16));
      v21 = *(_QWORD *)(UserDirectoryTableBase + 16);
      v22 = v21 - 16;
      if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v22 = 0LL;
      if ( (v21 & 2) != 0 || v21 != _InterlockedCompareExchange64(v19, v22, v21) )
        ExfReleasePushLock(v19);
      KeAbPostRelease((unsigned __int64)v19);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v5 >= 0 )
      {
        v23 = _InterlockedIncrement((volatile signed __int32 *)(v17 + 20));
        memmove(a1, (const void *)v17, *(unsigned int *)(v17 + 4));
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 5) = v23;
        *((_DWORD *)a1 + 6) = *((unsigned __int16 *)v13 + 24);
        if ( *(_BYTE *)(v17 + 12) )
          *((_DWORD *)a1 + 4) = *((unsigned __int16 *)v13 + 25);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag((PVOID)v17, 0);
        _m_prefetchw((const void *)(v13 + 13));
        if ( (_InterlockedAnd(v13 + 13, 0xFFFFFFFE) & 0xFFFFFFFE) == 0 )
          ExFreePoolWithTag((PVOID)v13, 0);
        if ( v20 != v14 )
          return 261;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}

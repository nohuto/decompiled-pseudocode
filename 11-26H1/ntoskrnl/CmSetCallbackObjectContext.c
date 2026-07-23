/*
 * XREFs of CmSetCallbackObjectContext @ 0x140A4C490
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408ABF08 (VrpPostOpenOrCreate.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A4B46C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpLockContextListExclusive @ 0x140A4C858 (CmpLockContextListExclusive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v8; // bp
  struct _KLOCK_ENTRIES *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbx
  struct _KLOCK_ENTRIES *v13; // r9
  struct _KTHREAD *v14; // rax
  void *v15; // rdx
  LegacyAutoBoost *v16; // rbx
  __int64 **v17; // rbx
  __int64 **i; // rsi
  struct _KTHREAD *j; // rbx
  NTSTATUS v20; // ebp
  LARGE_INTEGER *Pool2; // rax
  LONGLONG *v22; // rcx
  unsigned __int64 *p_ThreadLock; // rbx
  LARGE_INTEGER *v24; // rax
  LARGE_INTEGER **v25; // rdx
  LONGLONG v26; // rax
  LONGLONG v27; // rdx
  signed __int64 v28; // rdx
  __int64 v29; // rtt
  void *v30; // r12
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  struct _LIST_ENTRY *v33; // rdx
  struct _LIST_ENTRY *Flink; // rtt
  __int128 v36; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37; // [rsp+30h] [rbp-38h]

  v37 = 0LL;
  v36 = 0LL;
  v8 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v36);
  if ( Object && *(_DWORD *)Object == 1803104306 )
  {
    if ( v9 )
      v9->Thread = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock.Header.WaitListHead, 0LL, 0LL, v9);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CmpContextListLock.Header.WaitListHead,
        0,
        v12,
        (struct _KTHREAD *)&CmpContextListLock.Header.WaitListHead);
    }
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v16 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL, 0LL, v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock.Header.Lock, 0, v16, &CmpContextListLock);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    v17 = (__int64 **)((char *)Object + 72);
    while ( 1 )
    {
      for ( i = (__int64 **)*v17; i != v17 && (__int64)i[4] >= Cookie->QuadPart; i = (__int64 **)*i )
      {
        if ( i[4] == (__int64 *)Cookie->QuadPart )
        {
          v30 = (void *)_InterlockedExchange64((volatile __int64 *)i + 7, (__int64)NewContext);
          if ( OldContext )
            *OldContext = v30;
          v20 = 0;
          goto LABEL_41;
        }
      }
      if ( v8 )
        break;
      _m_prefetchw(&CmpContextListLock);
      v28 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
      if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v28 = 0LL;
      if ( (CmpContextListLock.Header.Type & 2) != 0
        || (v29 = *(_QWORD *)&CmpContextListLock.Header.Lock,
            v29 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CmpContextListLock,
                     v28,
                     *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
      {
        ExfReleasePushLock(&CmpContextListLock);
      }
      KeAbPostRelease((unsigned __int64)&CmpContextListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v8 = 1;
      CmpLockContextListExclusive();
    }
    for ( j = (struct _KTHREAD *)CmpContextListLock.Header.WaitListHead.Blink; ; j = *(struct _KTHREAD **)&j->Header.Lock )
    {
      if ( j == (struct _KTHREAD *)&CmpContextListLock.Header.WaitListHead.Blink )
      {
        v20 = -1073741584;
        goto LABEL_41;
      }
      if ( (void *)Cookie->QuadPart == j->SListFaultAddress )
        break;
    }
    v20 = 0;
    Pool2 = (LARGE_INTEGER *)ExAllocatePool2(0x100uLL);
    v22 = (LONGLONG *)Pool2;
    if ( Pool2 )
    {
      Pool2[5].QuadPart = (LONGLONG)j;
      p_ThreadLock = &j->ThreadLock;
      Pool2[4] = *Cookie;
      v24 = Pool2 + 2;
      v22[7] = (LONGLONG)NewContext;
      v22[6] = (LONGLONG)Object;
      v25 = (LARGE_INTEGER **)p_ThreadLock[1];
      if ( *v25 != (LARGE_INTEGER *)p_ThreadLock
        || (v24->QuadPart = (LONGLONG)p_ThreadLock,
            v22[3] = (LONGLONG)v25,
            *v25 = v24,
            p_ThreadLock[1] = (unsigned __int64)v24,
            v26 = (LONGLONG)i[1],
            v27 = *(_QWORD *)v26,
            *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26) )
      {
        __fastfail(3u);
      }
      *v22 = v27;
      v22[1] = v26;
      *(_QWORD *)(v27 + 8) = v22;
      *(_QWORD *)v26 = v22;
    }
    else
    {
      v20 = -1073741670;
    }
LABEL_41:
    _m_prefetchw(&CmpContextListLock);
    v31 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
    if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v31 = 0LL;
    if ( (CmpContextListLock.Header.Type & 2) != 0
      || (v32 = *(_QWORD *)&CmpContextListLock.Header.Lock,
          v32 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpContextListLock,
                   v31,
                   *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
    {
      ExfReleasePushLock(&CmpContextListLock);
    }
    KeAbPostRelease((unsigned __int64)&CmpContextListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    _m_prefetchw(&CmpContextListLock.Header.WaitListHead);
    v33 = CmpContextListLock.Header.WaitListHead.Flink - 1;
    if ( ((unsigned __int64)CmpContextListLock.Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( ((__int64)CmpContextListLock.Header.WaitListHead.Flink & 2) != 0
      || (Flink = CmpContextListLock.Header.WaitListHead.Flink,
          Flink != (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)&CmpContextListLock.Header.WaitListHead.Flink,
                                           (signed __int64)v33,
                                           (signed __int64)CmpContextListLock.Header.WaitListHead.Flink)) )
    {
      ExfReleasePushLock(&CmpContextListLock.Header.WaitListHead.Flink);
    }
    KeAbPostRelease((unsigned __int64)&CmpContextListLock.Header.WaitListHead);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v36);
    return v20;
  }
  else
  {
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v36);
    return -1073741585;
  }
}

/*
 * XREFs of CmSetCallbackObjectContext @ 0x140A31530
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1408A5A98 (VrpPostOpenOrCreate.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpLockContextListExclusive @ 0x140A318F8 (CmpLockContextListExclusive.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
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
  char *v28; // rdx
  void *SListFaultAddress; // rtt
  __int64 v30; // rdx
  __int64 v31; // r8
  void *v32; // r12
  char *v33; // rdx
  void *v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // r8
  signed __int64 v37; // rdx
  __int64 v38; // rtt
  __int64 v39; // rdx
  __int64 v40; // r8
  __int128 v42; // [rsp+20h] [rbp-48h] BYREF
  __int64 v43; // [rsp+30h] [rbp-38h]

  v43 = 0LL;
  v42 = 0LL;
  v8 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v42);
  if ( Object && *(_DWORD *)Object == 1803104306 )
  {
    if ( v9 )
      v9->Thread = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL, 0LL, v9);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock.Header.Lock, 0, v12, &CmpCallbackListLock);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v16 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.SListFaultAddress, 0LL, 0LL, v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
        0,
        v16,
        (struct _KTHREAD *)&CmpCallbackListLock.SListFaultAddress);
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
          v32 = (void *)_InterlockedExchange64((volatile __int64 *)i + 7, (__int64)NewContext);
          if ( OldContext )
            *OldContext = v32;
          v20 = 0;
          goto LABEL_41;
        }
      }
      if ( v8 )
        break;
      _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
      v28 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
      if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v28 = 0LL;
      if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
        || (SListFaultAddress = CmpCallbackListLock.SListFaultAddress,
            SListFaultAddress != (void *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                                           (signed __int64)v28,
                                           (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
      {
        ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
      }
      KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31);
      v8 = 1;
      CmpLockContextListExclusive();
    }
    for ( j = (struct _KTHREAD *)CmpCallbackListLock.Header.WaitListHead.Flink; ; j = *(struct _KTHREAD **)&j->Header.Lock )
    {
      if ( j == (struct _KTHREAD *)&CmpCallbackListLock.Header.WaitListHead )
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
    _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
    v33 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
    if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
      || (v34 = CmpCallbackListLock.SListFaultAddress,
          v34 != (void *)_InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                           (signed __int64)v33,
                           (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
    }
    KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v36);
    _m_prefetchw(&CmpCallbackListLock);
    v37 = *(_QWORD *)&CmpCallbackListLock.Header.Lock - 16LL;
    if ( (*(_QWORD *)&CmpCallbackListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v37 = 0LL;
    if ( (CmpCallbackListLock.Header.Type & 2) != 0
      || (v38 = *(_QWORD *)&CmpCallbackListLock.Header.Lock,
          v38 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v37,
                   *(signed __int64 *)&CmpCallbackListLock.Header.Lock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((unsigned __int64)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v39, v40);
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v42);
    return v20;
  }
  else
  {
    CmCleanupThreadInfo((_KAFFINITY_EX **)&v42);
    return -1073741585;
  }
}

/*
 * XREFs of CmpGetCallbackObjectContext @ 0x1409E28E0
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1408CA800 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(_DWORD *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // rdx
  LegacyAutoBoost *v9; // rbp
  _QWORD *i; // rax
  char *v11; // rdx
  void *SListFaultAddress; // rtt
  __int64 v13; // rdx
  __int64 v14; // r8

  v5 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( *a1 != 1803104306 )
    return 0LL;
  v6 = a1 + 18;
  if ( (_QWORD *)*v6 == v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpCallbackListLock.SListFaultAddress, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
      0,
      v9,
      (struct _KTHREAD *)&CmpCallbackListLock.SListFaultAddress);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    if ( i[4] == *a2 )
    {
      v5 = i[7];
      break;
    }
    if ( i[4] < *a2 )
      break;
  }
  _m_prefetchw(&CmpCallbackListLock.SListFaultAddress);
  v11 = (char *)CmpCallbackListLock.SListFaultAddress - 16;
  if ( ((unsigned __int64)CmpCallbackListLock.SListFaultAddress & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( ((__int64)CmpCallbackListLock.SListFaultAddress & 2) != 0
    || (SListFaultAddress = CmpCallbackListLock.SListFaultAddress,
        SListFaultAddress != (void *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&CmpCallbackListLock.SListFaultAddress,
                                       (signed __int64)v11,
                                       (signed __int64)CmpCallbackListLock.SListFaultAddress)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock.SListFaultAddress);
  }
  KeAbPostRelease((unsigned __int64)&CmpCallbackListLock.SListFaultAddress);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14);
  return v5;
}

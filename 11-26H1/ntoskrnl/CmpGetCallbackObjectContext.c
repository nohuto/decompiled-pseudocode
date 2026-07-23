/*
 * XREFs of CmpGetCallbackObjectContext @ 0x1409DF8F0
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1408D0DB0 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(_DWORD *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // rdx
  LegacyAutoBoost *v9; // rbp
  _QWORD *i; // rax
  signed __int64 v11; // rdx
  __int64 v12; // rtt

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
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock.Header.Lock, 0, v9, &CmpContextListLock);
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
  _m_prefetchw(&CmpContextListLock);
  v11 = *(_QWORD *)&CmpContextListLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&CmpContextListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (CmpContextListLock.Header.Type & 2) != 0
    || (v12 = *(_QWORD *)&CmpContextListLock.Header.Lock,
        v12 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpContextListLock,
                 v11,
                 *(signed __int64 *)&CmpContextListLock.Header.Lock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((unsigned __int64)&CmpContextListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}

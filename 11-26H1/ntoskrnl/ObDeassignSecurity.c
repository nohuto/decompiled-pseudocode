/*
 * XREFs of ObDeassignSecurity @ 0x140A42070
 * Callers:
 *     WmipSecurityMethod @ 0x140A41BA0 (WmipSecurityMethod.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObDeassignSecurity(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  char v5; // r15
  unsigned int v6; // r15d
  _QWORD *v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v13; // rbp
  _QWORD **v14; // rsi
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r14
  signed __int64 v18; // rax
  _QWORD *i; // rcx

  v4 = *a1;
  v5 = *a1;
  *a1 = 0LL;
  v6 = (v5 & 0xF) + 1;
  v7 = (_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
  _m_prefetchw(v7 + 1);
  v8 = v7[1];
  while ( 1 )
  {
    v9 = v8 - v6;
    if ( v9 <= 0 )
      break;
    v10 = v8;
    v8 = _InterlockedCompareExchange64(v7 + 1, v9, v8);
    if ( v10 == v8 )
      return 0LL;
  }
  if ( v9 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v13 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache
                           + 16 * (*(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFF0uLL) - 32 + 0x10) & 0x3FF));
  --CurrentThread->KernelApcDisable;
  v14 = (_QWORD **)(v13 + 1);
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)v13, 0LL, 0LL, a4);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, v15, (__int64)v13);
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v16);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  v18 = _InterlockedExchangeAdd64(v7 + 1, -v6) - v6;
  if ( v18 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    KeAbPostRelease((unsigned __int64)v13);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    if ( v18 )
      __fastfail(0xEu);
    for ( i = *v14; i != v7; i = (_QWORD *)*i )
      v14 = (_QWORD **)i;
    *v14 = (_QWORD *)*v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    KeAbPostRelease((unsigned __int64)v13);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag(v7, 0x6353624Fu);
  }
  return 0LL;
}

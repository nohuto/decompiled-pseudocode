/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140AD59BC
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140AD5830 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WdipSemGetGuidKey @ 0x140827720 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x140827D00 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x140827E48 (WdipSemSqmIncrementDword.c)
 *     WdipSemFreeFrequentScenarioTable @ 0x140AD5AF8 (WdipSemFreeFrequentScenarioTable.c)
 */

__int64 __fastcall WdipSemSqmLogInflightLimitExceededDataPoints(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  AutoBoost *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  __int64 v11; // rdi
  signed __int64 v12; // rdx
  __int64 v13; // rtt
  int v15; // eax
  __int64 *v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v19[4]; // [rsp+28h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F049E8, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(&stru_140F049E8.Header.Lock, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F049E8, v6, (__int64)&stru_140F049E8);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v7);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = (unsigned int)dword_140F049E0;
  if ( dword_140F049E0 )
  {
    v15 = WdipSemSqmIncrementDword(v8, dword_140F049E0);
    if ( v15 >= 0 )
      v5 = v15;
    if ( (_DWORD)v11 )
    {
      v16 = (__int64 *)&stru_140F042A0.PriorityFloorCounts[8];
      do
      {
        v17 = *v16;
        if ( (int)WdipSemGetGuidKey(*v16, &v18) >= 0 )
        {
          v19[0] = v18;
          v19[1] = *(unsigned __int16 *)(v17 + 16);
          v19[2] = *(_DWORD *)(v17 + 20);
          v5 = WdipSemSqmAddToStream((_DWORD *)0x426, 3u, (__int64)v19);
          if ( v5 < 0 )
            v5 = 0;
        }
        else
        {
          v5 = 0;
        }
        ++v16;
        --v11;
      }
      while ( v11 );
    }
  }
  WdipSemFreeFrequentScenarioTable();
  _m_prefetchw(&stru_140F049E8);
  v12 = *(_QWORD *)&stru_140F049E8.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140F049E8.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (stru_140F049E8.Header.Type & 2) != 0
    || (v13 = *(_QWORD *)&stru_140F049E8.Header.Lock,
        v13 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140F049E8,
                 v12,
                 *(signed __int64 *)&stru_140F049E8.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140F049E8);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F049E8);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}

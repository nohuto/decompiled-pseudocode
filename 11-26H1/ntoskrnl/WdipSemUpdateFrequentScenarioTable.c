/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x140820AC4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x140820978 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     WdipSemFastAllocate @ 0x140ADB300 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // ebx
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  unsigned __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rtt

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F066E8, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(&stru_140F066E8.Header.Lock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F066E8, v7, (__int64)&stru_140F066E8);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( a1 )
  {
    if ( (unsigned int)dword_140F066E0 < 0x80 )
    {
      v11 = WdipSemFastAllocate(5LL, 24LL);
      if ( v11 )
      {
        *(_OWORD *)v11 = *(_OWORD *)a1;
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1 + 16);
        *(&stru_140F060A8.AffinityVersion + (unsigned int)dword_140F066E0++) = v11;
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  _m_prefetchw(&stru_140F066E8);
  v12 = *(_QWORD *)&stru_140F066E8.Header.Lock - 16LL;
  if ( (*(_QWORD *)&stru_140F066E8.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (stru_140F066E8.Header.Type & 2) != 0
    || (v13 = *(_QWORD *)&stru_140F066E8.Header.Lock,
        v13 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&stru_140F066E8,
                 v12,
                 *(signed __int64 *)&stru_140F066E8.Header.Lock)) )
  {
    ExfReleasePushLock(&stru_140F066E8);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F066E8);
  KeLeaveCriticalRegion();
  return v6;
}

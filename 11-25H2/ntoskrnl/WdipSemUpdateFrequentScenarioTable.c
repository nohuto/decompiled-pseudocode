/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1407931D4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x140792F90 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     WdipSemFastAllocate @ 0x140A44214 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rdi
  __int64 v7; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&qword_140F01968, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01968, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01968, v4, (__int64)&qword_140F01968);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( a1 )
  {
    if ( (unsigned int)dword_140F01960 < 0x80 )
    {
      v7 = WdipSemFastAllocate(5LL, 24LL);
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)a1;
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(a1 + 16);
        WdipSemFrequentScenarioTable[dword_140F01960++] = v7;
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741811;
  }
  _m_prefetchw(&qword_140F01968);
  v8 = qword_140F01968 - 16;
  if ( (qword_140F01968 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (qword_140F01968 & 2) != 0
    || (v9 = qword_140F01968,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01968, v8, qword_140F01968)) )
  {
    ExfReleasePushLock(&qword_140F01968);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01968);
  KeLeaveCriticalRegion();
  return v3;
}

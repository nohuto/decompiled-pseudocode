/*
 * XREFs of WdipSemActivateInstance @ 0x140A43D90
 * Callers:
 *     WdipSemDisableScenario @ 0x140A42EA0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4370C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rbx
  signed __int64 v6; // rdx
  ULONG_PTR v7; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140F01538, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01538, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01538, v3, (__int64)&qword_140F01538);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&qword_140F01538);
  v6 = qword_140F01538 - 16;
  if ( (qword_140F01538 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (qword_140F01538 & 2) != 0
    || (v7 = qword_140F01538,
        v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01538, v6, qword_140F01538)) )
  {
    ExfReleasePushLock(&qword_140F01538);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01538);
  KeLeaveCriticalRegion();
}

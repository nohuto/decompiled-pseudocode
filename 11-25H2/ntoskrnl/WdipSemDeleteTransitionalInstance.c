/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140A430C8
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A42BB0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140A42EA0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4370C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     WdipSemFastFree @ 0x1406EDCC4 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemDeleteTransitionalInstance(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v7; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140F01538, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01538, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01538, v3, (__int64)&qword_140F01538);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  Next = a1->Next;
  if ( *(&a1->Next->Next + 1) != a1 || (v7 = (_SLIST_ENTRY **)*((_QWORD *)&a1->Next + 1), *v7 != a1) )
    __fastfail(3u);
  *v7 = Next;
  *((_QWORD *)&Next->Next + 1) = v7;
  --dword_140F01530;
  _m_prefetchw(&qword_140F01538);
  v8 = qword_140F01538 - 16;
  if ( (qword_140F01538 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (qword_140F01538 & 2) != 0
    || (v9 = qword_140F01538,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01538, v8, qword_140F01538)) )
  {
    ExfReleasePushLock(&qword_140F01538);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01538);
  KeLeaveCriticalRegion();
  return WdipSemFastFree(3, a1);
}

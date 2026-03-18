/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140A44018
 * Callers:
 *     WdipSemEnableScenario @ 0x140A4370C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x140792F90 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140A44158 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140A441A0 (WdipSemBuildScenarioInstance.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rbp
  signed __int64 v9; // rdx
  ULONG_PTR v10; // rtt
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v6 = KeAbPreAcquire((__int64)&qword_140F01538, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01538, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01538, v6, (__int64)&qword_140F01538);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140F01530 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(_WORD *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v5 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v5 )
      {
        v12 = (_QWORD *)qword_140F01528;
        if ( *(__int64 **)qword_140F01528 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v5 = &WdipSemEnabledInstanceTable;
        v5[1] = v12;
        *v12 = v5;
        ++dword_140F01530;
        qword_140F01528 = (__int64)v5;
      }
    }
  }
  _m_prefetchw(&qword_140F01538);
  v9 = qword_140F01538 - 16;
  if ( (qword_140F01538 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (qword_140F01538 & 2) != 0
    || (v10 = qword_140F01538,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F01538, v9, qword_140F01538)) )
  {
    ExfReleasePushLock(&qword_140F01538);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F01538);
  KeLeaveCriticalRegion();
  return v5;
}

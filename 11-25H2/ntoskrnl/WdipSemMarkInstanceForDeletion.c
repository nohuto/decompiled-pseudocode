/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x1407930DC
 * Callers:
 *     WdipSemDisableScenario @ 0x140A42EA0 (WdipSemDisableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140A44158 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rdi
  __int64 EnabledInstanceTable; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&qword_140F01538, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F01538, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F01538, v4, (__int64)&qword_140F01538);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( a1 )
  {
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v3 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( *(_DWORD *)(EnabledInstanceTable + 44) )
        v3 = 0LL;
      else
        *(_DWORD *)(EnabledInstanceTable + 44) = 1;
    }
  }
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
  return v3;
}

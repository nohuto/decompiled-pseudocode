/*
 * XREFs of EmpReleasePagingReference @ 0x140C03C8C
 * Callers:
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C03A80 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall EmpReleasePagingReference(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.CycleTime, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.CycleTime, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&EmpParseLock.CycleTime, v4, (__int64)&EmpParseLock.CycleTime);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  *(_DWORD *)&EmpParseLock.WaitRegister.Flags = *(_DWORD *)&EmpParseLock.WaitRegister.Flags & 0x80000000 | (*(_DWORD *)&EmpParseLock.WaitRegister.Flags - 1) & 0x7FFFFFFF;
  if ( (*(_DWORD *)&EmpParseLock.WaitRegister.Flags & 0x7FFFFFFF) == 0 && EmpParseLock.SchedulingGroup )
    KeSetEvent((PRKEVENT)EmpParseLock.SchedulingGroup, 0, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.CycleTime, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.CycleTime);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.CycleTime);
}

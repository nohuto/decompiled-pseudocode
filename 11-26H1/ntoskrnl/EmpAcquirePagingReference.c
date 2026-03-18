/*
 * XREFs of EmpAcquirePagingReference @ 0x140C03BCC
 * Callers:
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C03A80 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

char __fastcall EmpAcquirePagingReference(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx

  v4 = 0;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.CycleTime, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.CycleTime, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&EmpParseLock.CycleTime, v5, (__int64)&EmpParseLock.CycleTime);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( *(int *)&EmpParseLock.WaitRegister.Flags < 0 )
  {
    v4 = 1;
    *(_DWORD *)&EmpParseLock.WaitRegister.Flags = *(_DWORD *)&EmpParseLock.WaitRegister.Flags & 0x80000000 | (*(_DWORD *)&EmpParseLock.WaitRegister.Flags + 1) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.CycleTime, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.CycleTime);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.CycleTime);
  return v4;
}

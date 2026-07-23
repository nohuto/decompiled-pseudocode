/*
 * XREFs of EmpReleasePagingReference @ 0x140C09E9C
 * Callers:
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C09C90 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall EmpReleasePagingReference(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.Header.WaitListHead.Blink, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.Header.WaitListHead.Blink, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
      v4,
      (__int64)&EmpParseLock.Header.WaitListHead.Blink);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  *((_DWORD *)&EmpParseLock.0 + 1) = *((_DWORD *)&EmpParseLock.0 + 1) & 0x80000000 | (*((_DWORD *)&EmpParseLock.0 + 1)
                                                                                    - 1) & 0x7FFFFFFF;
  if ( (*((_DWORD *)&EmpParseLock.0 + 1) & 0x7FFFFFFF) == 0 && *(_QWORD *)&EmpParseLock.WaitRegister.Flags )
    KeSetEvent(*(PRKEVENT *)&EmpParseLock.WaitRegister.Flags, 0, 0);
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.Header.WaitListHead.Blink);
}

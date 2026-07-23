/*
 * XREFs of EmpAcquirePagingReference @ 0x140C09DDC
 * Callers:
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x140C09C90 (EmClientRuleEvaluate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

char __fastcall EmpAcquirePagingReference(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx

  v4 = 0;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.Header.WaitListHead.Blink, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.Header.WaitListHead.Blink, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
      v5,
      (__int64)&EmpParseLock.Header.WaitListHead.Blink);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( *(&EmpParseLock.MiscFlags + 1) < 0 )
  {
    v4 = 1;
    *((_DWORD *)&EmpParseLock.0 + 1) = *((_DWORD *)&EmpParseLock.0 + 1) & 0x80000000 | (*((_DWORD *)&EmpParseLock.0 + 1)
                                                                                      + 1) & 0x7FFFFFFF;
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.Header.WaitListHead.Blink);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.Header.WaitListHead.Blink);
  return v4;
}

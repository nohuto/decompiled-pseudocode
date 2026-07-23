/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x1405B7470
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EmpUpdateRuleState @ 0x1404CBA0C (EmpUpdateRuleState.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EmpRuleUpdateWorkerThread(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  volatile unsigned __int8 *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  __int64 *i; // rsi
  __int64 *v9; // r14
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  volatile unsigned __int8 *v12; // rdx
  AutoBoost *v13; // rsi
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rax
  volatile unsigned __int8 *v16; // rdx
  AutoBoost *v17; // rsi

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.SystemCallNumber, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.SystemCallNumber, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&EmpParseLock.SystemCallNumber,
      v4,
      (__int64)&EmpParseLock.SystemCallNumber);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v5) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v7 + 33), v5, 1);
    }
    else
    {
      *((_BYTE *)v7 + 10) = 1;
    }
  }
  for ( i = (__int64 *)EmpRuleUpdateQueue; EmpRuleUpdateQueue; i = (__int64 *)EmpRuleUpdateQueue )
  {
    EmpRuleUpdateQueue = *i;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.SystemCallNumber, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.SystemCallNumber);
    KeAbPostRelease((unsigned __int64)&EmpParseLock.SystemCallNumber);
    v9 = i - 1;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.QuantumTarget, 0LL, 0LL, v10);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.QuantumTarget, 0LL);
    v13 = v11;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&EmpParseLock.QuantumTarget, v11, (__int64)&EmpParseLock.QuantumTarget);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v12) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v13 + 33), v12, 1);
      }
      else
      {
        *((_BYTE *)v13 + 10) = 1;
      }
    }
    EmpUpdateRuleState(*v9, v9[2]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.QuantumTarget);
    KeAbPostRelease((unsigned __int64)&EmpParseLock.QuantumTarget);
    ExFreePoolWithTag(v9, 0x75714D45u);
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.SystemCallNumber, 0LL, 0LL, v14);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.SystemCallNumber, 0LL);
    v17 = v15;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&EmpParseLock.SystemCallNumber,
        v15,
        (__int64)&EmpParseLock.SystemCallNumber);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v16) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v17 + 33), v16, 1);
      }
      else
      {
        *((_BYTE *)v17 + 10) = 1;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.SystemCallNumber, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.SystemCallNumber);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.SystemCallNumber);
  _InterlockedExchange(&EmpWorkerBusy, 0);
}

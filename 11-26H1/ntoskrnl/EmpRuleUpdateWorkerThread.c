/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x1405B4C60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EmpUpdateRuleState @ 0x1404D1E5C (EmpUpdateRuleState.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EmpRuleUpdateWorkerThread(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  volatile unsigned __int8 *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  unsigned __int64 *i; // rsi
  __int64 *v9; // r14
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  volatile unsigned __int8 *v12; // rdx
  AutoBoost *v13; // rsi
  struct _KLOCK_ENTRIES *v14; // r9
  AutoBoost *v15; // rax
  volatile unsigned __int8 *v16; // rdx
  AutoBoost *v17; // rsi

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.116 + 4, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.116 + 1, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)((char *)&EmpParseLock.116 + 4),
      v4,
      (__int64)&EmpParseLock.116 + 4);
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
  for ( i = (unsigned __int64 *)EmpParseLock.ThreadLock;
        EmpParseLock.ThreadLock;
        i = (unsigned __int64 *)EmpParseLock.ThreadLock )
  {
    EmpParseLock.ThreadLock = *i;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)((char *)&EmpParseLock.116 + 4), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)((char *)&EmpParseLock.116 + 4));
    KeAbPostRelease((unsigned __int64)&EmpParseLock.116 + 4);
    v9 = (__int64 *)(i - 1);
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.KernelStack, 0LL, 0LL, v10);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.KernelStack, 0LL);
    v13 = v11;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&EmpParseLock.KernelStack,
        v11,
        (__int64)&EmpParseLock.KernelStack);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.KernelStack, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.KernelStack);
    KeAbPostRelease((unsigned __int64)&EmpParseLock.KernelStack);
    ExFreePoolWithTag(v9, 0x75714D45u);
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.116 + 4, 0LL, 0LL, v14);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.116 + 1, 0LL);
    v17 = v15;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)((char *)&EmpParseLock.116 + 4),
        v15,
        (__int64)&EmpParseLock.116 + 4);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)((char *)&EmpParseLock.116 + 4), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)((char *)&EmpParseLock.116 + 4));
  KeAbPostRelease((unsigned __int64)&EmpParseLock.116 + 4);
  _InterlockedExchange(&EmpWorkerBusy, 0);
}

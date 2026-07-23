/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140AD79E0
 * Callers:
 *     WdipSemEnableScenario @ 0x140AD5DB4 (WdipSemEnableScenario.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x140826B88 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140AD7B3C (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140AD7D3C (WdipSemBuildScenarioInstance.c)
 */

void ***__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void ***v7; // rbx
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  char *v12; // rdx
  void *volatile StackLimit; // rtt
  void **QuantumTarget; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F049E8.StackLimit, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F049E8.StackLimit, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140F049E8.StackLimit,
      v8,
      (__int64)&stru_140F049E8.StackLimit);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a1 && a2 )
  {
    if ( LODWORD(stru_140F049E8.InitialStack) >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(_WORD *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v7 = (void ***)WdipSemBuildScenarioInstance(a1, a2);
      if ( v7 )
      {
        QuantumTarget = (void **)stru_140F049E8.QuantumTarget;
        if ( *(struct _KTHREAD **)stru_140F049E8.QuantumTarget != (struct _KTHREAD *)&stru_140F049E8.SListFaultAddress )
          __fastfail(3u);
        *v7 = &stru_140F049E8.SListFaultAddress;
        v7[1] = QuantumTarget;
        *QuantumTarget = v7;
        ++LODWORD(stru_140F049E8.InitialStack);
        stru_140F049E8.QuantumTarget = (unsigned __int64)v7;
      }
    }
  }
  _m_prefetchw((const void *)&stru_140F049E8.StackLimit);
  v12 = (char *)stru_140F049E8.StackLimit - 16;
  if ( ((unsigned __int64)stru_140F049E8.StackLimit & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( ((__int64)stru_140F049E8.StackLimit & 2) != 0
    || (StackLimit = stru_140F049E8.StackLimit,
        StackLimit != (void *volatile)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)&stru_140F049E8.StackLimit,
                                        (signed __int64)v12,
                                        (signed __int64)stru_140F049E8.StackLimit)) )
  {
    ExfReleasePushLock(&stru_140F049E8.StackLimit);
  }
  KeAbPostRelease((unsigned __int64)&stru_140F049E8.StackLimit);
  KeLeaveCriticalRegion();
  return v7;
}

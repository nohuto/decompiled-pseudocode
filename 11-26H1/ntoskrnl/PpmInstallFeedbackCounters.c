/*
 * XREFs of PpmInstallFeedbackCounters @ 0x140605540
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1402F7C90 (PpmContinueActiveTimeAccumulation.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     PpmPerfFeedbackCounterRead @ 0x1404648C0 (PpmPerfFeedbackCounterRead.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rcx
  int v7; // edx
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // r8
  bool v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  int v20; // [rsp+30h] [rbp-58h] BYREF
  _GROUP_AFFINITY v21; // [rsp+38h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v4 = *(unsigned int *)(a1 + 36);
  v21 = 0LL;
  v20 = 0;
  LODWORD(v4) = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v4);
  *(_QWORD *)&v21.Group = (unsigned __int16)((unsigned int)v4 >> 6);
  v21.Mask = 1LL << v4;
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v21, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
  }
  v9 = a1 + 34976;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, v11);
  v12 = KeDisableInterrupts();
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 34976));
  v14 = 0LL;
  v15 = v9 - (_QWORD)a2;
  do
  {
    if ( *a2 )
    {
      if ( *(_BYTE *)(*a2 + 34) )
        *(_BYTE *)(v9 + 137) = 1;
      *(__int64 *)((char *)a2 + v15 + 24) = *a2;
      LOBYTE(v13) = 1;
      *(_QWORD *)(v9 + 8 * v14 + 64) = 100LL * *(_QWORD *)(v9 + 48);
      PpmPerfFeedbackCounterRead(*a2, v13, &v20, 0LL, 0LL);
    }
    v14 = (unsigned int)(v14 + 1);
    ++a2;
  }
  while ( (unsigned int)v14 < 2 );
  if ( *(_QWORD *)(v9 + 32) )
  {
    *(_BYTE *)(v9 + 136) = 1;
  }
  else if ( *(_QWORD *)(v9 + 24) )
  {
    *(_BYTE *)(v9 + 136) = 0;
  }
  *(_BYTE *)(v9 + 138) = a3;
  KxReleaseSpinLock((PKSPIN_LOCK)v9);
  if ( v12 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}

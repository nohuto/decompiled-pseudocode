/*
 * XREFs of PpmCheckCustomRun @ 0x1404B5550
 * Callers:
 *     PpmParkSetLpiCap @ 0x1404B533C (PpmParkSetLpiCap.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x1404B54B0 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmCheckDelayedPeriodicStart @ 0x1404B54E0 (PpmCheckDelayedPeriodicStart.c)
 *     PpmCheckApplyResetNotification @ 0x1404B5518 (PpmCheckApplyResetNotification.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B5534 (PpmCheckApplyParkConstraints.c)
 *     PoLatencySensitivityHint @ 0x140532910 (PoLatencySensitivityHint.c)
 *     PopIntSteerSetMode @ 0x140614DA0 (PopIntSteerSetMode.c)
 *     PpmPerfReApplyStates @ 0x1407D139C (PpmPerfReApplyStates.c)
 *     PpmCheckApplyPerfConstraints @ 0x140B162C8 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227B30 (KiEndThreadCycleAccumulation.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PpmCheckStart @ 0x14025832C (PpmCheckStart.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmCheckCustomRun(__int64 a1)
{
  int v1; // edi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CurrentThread; // rdx
  __int64 v5; // r9
  struct _KPRCB *v6; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  struct _KPRCB *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  struct _KPRCB *v11; // rcx
  unsigned __int32 *v12; // r8
  unsigned __int32 v13; // eax
  __int64 v14; // rdx
  unsigned __int32 v15; // ett
  unsigned __int32 v16; // eax
  __int64 v17; // rdx
  unsigned __int32 v18; // ett
  int v19; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  PpmIdlePolicyLock.ThreadLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  _disable();
  KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, 0);
  v6 = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)v6->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v13 = *SchedulerAssist;
    do
    {
      v14 = v13;
      LODWORD(v14) = v13 & 0xFFDFFFFF;
      v15 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v13 & 0xFFDFFFFF, v13);
    }
    while ( v15 != v13 );
    if ( (v13 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v6, v14, SchedulerAssist, v5);
  }
  _enable();
  PpmCheckStart(v1);
  v8 = KeGetCurrentPrcb();
  v9 = (__int64)v8->CurrentThread;
  _disable();
  KiStartThreadCycleAccumulation((__int64)v8, v9, 0);
  v11 = KeGetCurrentPrcb();
  v12 = (unsigned __int32 *)v11->SchedulerAssist;
  if ( v12 )
  {
    _m_prefetchw(v12);
    v16 = *v12;
    do
    {
      v17 = v16;
      LODWORD(v17) = v16 & 0xFFDFFFFF;
      v18 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v16 & 0xFFDFFFFF, v16);
    }
    while ( v18 != v16 );
    if ( (v16 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v11, v17, v12, v10);
  }
  _enable();
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v19 = 22;
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v19);
  KeLeaveCriticalRegion();
}

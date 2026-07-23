/*
 * XREFs of KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0
 * Callers:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 *     KeSetIdealProcessorThreadEx @ 0x140204930 (KeSetIdealProcessorThreadEx.c)
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E7D8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeSetThreadPpmPolicy @ 0x14030F130 (KeSetThreadPpmPolicy.c)
 *     KiFlushQueueApc @ 0x14030F2D8 (KiFlushQueueApc.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KeRequestTerminationThread @ 0x1403107F4 (KeRequestTerminationThread.c)
 *     KeAttachProcess @ 0x1403111B0 (KeAttachProcess.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KeTestAlertThread @ 0x1403DA1E0 (KeTestAlertThread.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404E02B0 (KeQueryPrimaryGroupAffinityThread.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404F2634 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KeQueryCpuSetsThread @ 0x1405013E8 (KeQueryCpuSetsThread.c)
 *     KeEnumerateQueueApc @ 0x1405F3D20 (KeEnumerateQueueApc.c)
 *     KeSetCpuSetWorkloadClassThread @ 0x1405F6878 (KeSetCpuSetWorkloadClassThread.c)
 *     KeQueryCurrentWaitInformationThread @ 0x1405F8CF0 (KeQueryCurrentWaitInformationThread.c)
 *     KiRequestSchedulerApcThread @ 0x1405F93EC (KiRequestSchedulerApcThread.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireThreadLockRaiseToDpc(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
  {
    result = 2LL;
    __writecr8(2uLL);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    result = KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  *v2 = CurrentIrql;
  v6 = 0;
LABEL_6:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    while ( 1 )
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_21:
          HvlNotifyLongSpinWait(v6);
          goto LABEL_9;
        }
        for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
        {
          v8 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v8 + 35) & 1) != 0 )
          {
            v9 = *(_QWORD *)(v8 + 36600);
            if ( !v9 || !*(_BYTE *)(v9 + 65) || !*(_BYTE *)(v9 + 64) )
              goto LABEL_21;
          }
        }
      }
      _mm_pause();
LABEL_9:
      result = *(_QWORD *)(a1 + 64);
      if ( !result )
        goto LABEL_6;
    }
  }
  return result;
}

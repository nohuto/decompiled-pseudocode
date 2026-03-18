/*
 * XREFs of KiReleaseThreadLockLowerIrql @ 0x1402C45E0
 * Callers:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     MiUnlockStealVm @ 0x140294D10 (MiUnlockStealVm.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x1402C3B18 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeSetThreadPpmPolicy @ 0x1402C4470 (KeSetThreadPpmPolicy.c)
 *     KiFlushQueueApc @ 0x1402C4618 (KiFlushQueueApc.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402C7110 (KeUnstackDetachProcess.c)
 *     KeTestAlertThread @ 0x1403D7210 (KeTestAlertThread.c)
 *     KeRemoveQueueApc @ 0x140467790 (KeRemoveQueueApc.c)
 *     KiSchedulerApc @ 0x1404A1BE0 (KiSchedulerApc.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404C6128 (PspSynchronizeThreadIsolationDomains.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404E6E10 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x140507A18 (KeQueryCpuSetsThread.c)
 *     KeEnumerateQueueApc @ 0x1405F13B0 (KeEnumerateQueueApc.c)
 *     KeQueryCurrentWaitInformationThread @ 0x1405F6330 (KeQueryCurrentWaitInformationThread.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseThreadLockLowerIrql(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = a2;
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  __writecr8(v2);
  return result;
}

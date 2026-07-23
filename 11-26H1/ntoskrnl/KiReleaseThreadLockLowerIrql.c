/*
 * XREFs of KiReleaseThreadLockLowerIrql @ 0x14030F2A0
 * Callers:
 *     KeCleanupThreadState @ 0x140201FC8 (KeCleanupThreadState.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     KiUpdateTebSchedulingPropertiesCurrentThread @ 0x14030E7D8 (KiUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeSetThreadPpmPolicy @ 0x14030F130 (KeSetThreadPpmPolicy.c)
 *     KiFlushQueueApc @ 0x14030F2D8 (KiFlushQueueApc.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KeTestAlertThread @ 0x1403DA1E0 (KeTestAlertThread.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404E02B0 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1405013E8 (KeQueryCpuSetsThread.c)
 *     KeEnumerateQueueApc @ 0x1405F3D20 (KeEnumerateQueueApc.c)
 *     KeQueryCurrentWaitInformationThread @ 0x1405F8CF0 (KeQueryCurrentWaitInformationThread.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
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

/*
 * XREFs of KiComputeThreadPriority @ 0x140239AB4
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KiInitializeForegroundBoostThread @ 0x140202C8C (KiInitializeForegroundBoostThread.c)
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KeAdjustPriorityFloor @ 0x140237DCC (KeAdjustPriorityFloor.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403BFE80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403C0220 (KiUpdateVPBackingThreadPriority.c)
 *     KeRemovePriQueue @ 0x1403F5D50 (KeRemovePriQueue.c)
 *     KiSetDisableBoostThread @ 0x1404A3DC0 (KiSetDisableBoostThread.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x14051F754 (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     KiApplyForegroundBoostThread @ 0x140521D48 (KiApplyForegroundBoostThread.c)
 *     KeSetBasePriorityThread @ 0x140528B30 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052C560 (KeBoostPriorityThread.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x14052E188 (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 * Callees:
 *     ?KiComputeThreadPriorityStacking@@YAJPEAU_KTHREAD@@KC@Z @ 0x14051F508 (-KiComputeThreadPriorityStacking@@YAJPEAU_KTHREAD@@KC@Z.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x14051F5B4 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     ?KiComputeThreadPriorityNonStacking@@YAJPEAU_KTHREAD@@K@Z @ 0x140530DE4 (-KiComputeThreadPriorityNonStacking@@YAJPEAU_KTHREAD@@K@Z.c)
 */

__int64 __fastcall KiComputeThreadPriority(struct _KTHREAD *a1, unsigned int a2, signed __int8 a3)
{
  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1) )
    return KiComputeThreadPriorityStacking(a1, a2, a3);
  else
    return KiComputeThreadPriorityNonStacking(a1, a2);
}

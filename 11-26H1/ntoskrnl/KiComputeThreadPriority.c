/*
 * XREFs of KiComputeThreadPriority @ 0x14023B414
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KiInitializeForegroundBoostThread @ 0x140202D64 (KiInitializeForegroundBoostThread.c)
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KeAdjustPriorityFloor @ 0x14023972C (KeAdjustPriorityFloor.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403C9D80 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     KiSetDisableBoostThread @ 0x14049D8D0 (KiSetDisableBoostThread.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x140521DF8 (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052EA80 (KeBoostPriorityThread.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405306A8 (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 * Callees:
 *     ?KiComputeThreadPriorityStacking@@YAJPEAU_KTHREAD@@KC@Z @ 0x140521BAC (-KiComputeThreadPriorityStacking@@YAJPEAU_KTHREAD@@KC@Z.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     ?KiComputeThreadPriorityNonStacking@@YAJPEAU_KTHREAD@@K@Z @ 0x1405332E4 (-KiComputeThreadPriorityNonStacking@@YAJPEAU_KTHREAD@@K@Z.c)
 */

__int64 __fastcall KiComputeThreadPriority(struct _KTHREAD *a1, unsigned int a2, signed __int8 a3)
{
  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1) )
    return KiComputeThreadPriorityStacking(a1, a2, a3);
  else
    return KiComputeThreadPriorityNonStacking(a1, a2);
}

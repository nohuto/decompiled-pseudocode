/*
 * XREFs of KiComputeNewPriority @ 0x14048C910
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x14051F5B4 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     ?KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x14051F754 (-KiComputeNewPriorityStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x14052E188 (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 */

__int64 __fastcall KiComputeNewPriority(struct _KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  signed __int8 v5; // dl

  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1) )
    return KiComputeNewPriorityStacking(a1, v5, a3);
  else
    return KiComputeNewPriorityNonStacking(a1, v5, a3);
}

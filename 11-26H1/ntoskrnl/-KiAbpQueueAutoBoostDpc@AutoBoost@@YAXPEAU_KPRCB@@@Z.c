/*
 * XREFs of ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023BA30
 * Callers:
 *     PsBoostThreadIoQoS @ 0x140205500 (PsBoostThreadIoQoS.c)
 *     ?KiAbProcessEffectiveIoPriorityChange@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1402055E8 (-KiAbProcessEffectiveIoPriorityChange@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     ?KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140237C68 (-KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     ?KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140238390 (-KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     PsBoostThreadIoEx @ 0x1402468A0 (PsBoostThreadIoEx.c)
 *     ?KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z @ 0x140272FF0 (-KiAbConvertWaiterToOwnerEntry@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAU_KLOCK_ENTRY@@K@Z.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402BE8C0 (KiSetBasePriorityAndClearDecrement.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x1403754D0 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     KiUpdateThreadPriority @ 0x14037EAA0 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     KiWakePriQueueWaiter @ 0x140380910 (KiWakePriQueueWaiter.c)
 *     ?KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z @ 0x1404D6F48 (-KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

void __fastcall AutoBoost::KiAbpQueueAutoBoostDpc(AutoBoost *this, struct _KPRCB *a2)
{
  char *v3; // rcx

  v3 = (char *)this + 37312;
  if ( !*((_QWORD *)v3 + 4) )
  {
    KiInsertQueueDpc((ULONG_PTR)v3, 0);
    *((_QWORD *)this + 4668) = 1LL;
  }
}

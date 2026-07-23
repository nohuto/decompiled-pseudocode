/*
 * XREFs of PsBoostThreadIoQoS @ 0x1402055E0
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x1402053F4 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x1402057EC (ExpApplyPriorityBoost.c)
 *     ?KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEAU_AB_BOOST_CONTEXT@1@PEAT_AB_IO_BOOST@1@@Z @ 0x140377280 (-KiAbpApplyTargetPriority@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@U_AB_PRIORITY@1@PEA.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14042DC6C (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1404AFB20 (ExReinitializeResourceLite.c)
 *     ?KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z @ 0x1404D0718 (-KiAbThreadBoostIoPriority@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@KPEAK@Z.c)
 *     ?KiAbThreadUnboostIoPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1404DD524 (-KiAbThreadUnboostIoPriority@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 * Callees:
 *     ?KiAbProcessEffectiveIoPriorityChange@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1402056C8 (-KiAbProcessEffectiveIoPriorityChange@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14041DDCC (-KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall PsBoostThreadIoQoS(AutoBoost *this, __int64 a2, unsigned int a3, struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v7; // rdx

  if ( (_DWORD)a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 377);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)this + 377) == 1 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      if ( *((_BYTE *)this + 792) )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        if ( AutoBoost::KiAbpThreadInsertList(
               this,
               (struct _KTHREAD *)&CurrentPrcb->AbPropagateBoostsList,
               (struct _SINGLE_LIST_ENTRY *)this + 101,
               a4) )
        {
          AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v7);
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
    }
    else
    {
      LegacyAutoBoost::KiAbProcessEffectiveIoPriorityChange(this, 0LL, a3);
    }
  }
}

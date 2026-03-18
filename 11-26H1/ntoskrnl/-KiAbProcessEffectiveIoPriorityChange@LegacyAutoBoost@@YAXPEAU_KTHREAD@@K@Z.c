/*
 * XREFs of ?KiAbProcessEffectiveIoPriorityChange@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1402055E8
 * Callers:
 *     PsBoostThreadIoQoS @ 0x140205500 (PsBoostThreadIoQoS.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023BA30 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14026F7A0 (-KiAbThreadInsertList@LegacyAutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall LegacyAutoBoost::KiAbProcessEffectiveIoPriorityChange(
        struct _SINGLE_LIST_ENTRY *this,
        struct _KTHREAD *a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  struct _SINGLE_LIST_ENTRY *v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v7; // rdx

  if ( !(_DWORD)a2 )
  {
    v4 = this;
    if ( LOBYTE(this[99].Next) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(this) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(this, 2LL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( LegacyAutoBoost::KiAbThreadInsertList(
             (LegacyAutoBoost *)v4,
             (struct _KTHREAD *)&CurrentPrcb->AbPropagateBoostsList,
             v4 + 101,
             a4) )
      {
        AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v7);
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      }
      __writecr8(CurrentIrql);
    }
  }
}

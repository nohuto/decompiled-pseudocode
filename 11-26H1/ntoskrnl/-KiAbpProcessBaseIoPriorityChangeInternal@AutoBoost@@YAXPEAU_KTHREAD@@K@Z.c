/*
 * XREFs of ?KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140239CF0
 * Callers:
 *     KeAbProcessBaseIoPriorityChange @ 0x140239494 (KeAbProcessBaseIoPriorityChange.c)
 *     PsSetIoPriorityThread @ 0x140239BF4 (PsSetIoPriorityThread.c)
 *     IoUpdateThreadIoRateThrottle @ 0x1404C7350 (IoUpdateThreadIoRateThrottle.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z @ 0x14041DDCC (-KiAbpThreadInsertList@AutoBoost@@YAKPEAU_KTHREAD@@PEAU_SINGLE_LIST_ENTRY@@1@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall AutoBoost::KiAbpProcessBaseIoPriorityChangeInternal(
        AutoBoost *this,
        struct _KTHREAD *a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  int v4; // ebp
  AutoBoost *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  AutoBoost *CurrentPrcb; // rsi
  struct _SINGLE_LIST_ENTRY *v9; // r8
  struct _KTHREAD *v10; // rdx

  v4 = (int)a2;
  v5 = this;
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(this) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(this, 2LL);
  }
  CurrentPrcb = (AutoBoost *)KeGetCurrentPrcb();
  if ( !*((_BYTE *)v5 + 793) || v4 )
  {
    if ( !*((_BYTE *)v5 + 792) || !v4 )
      goto LABEL_7;
    v9 = (struct _SINGLE_LIST_ENTRY *)((char *)v5 + 808);
    v10 = (struct _KTHREAD *)((char *)CurrentPrcb + 37304);
  }
  else
  {
    v9 = (struct _SINGLE_LIST_ENTRY *)((char *)v5 + 816);
    v10 = (struct _KTHREAD *)((char *)CurrentPrcb + 37296);
  }
  if ( AutoBoost::KiAbpThreadInsertList(v5, v10, v9, a4) )
    AutoBoost::KiAbpQueueAutoBoostDpc(CurrentPrcb, (struct _KPRCB *)v7);
LABEL_7:
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
}

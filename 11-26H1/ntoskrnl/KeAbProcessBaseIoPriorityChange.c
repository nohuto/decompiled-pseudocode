/*
 * XREFs of KeAbProcessBaseIoPriorityChange @ 0x140239494
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140204CDC (PspNotifyProcessEffectiveIoLimitChanged.c)
 * Callees:
 *     ?KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1402395C8 (-KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     ?KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140239CF0 (-KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 */

void __fastcall KeAbProcessBaseIoPriorityChange(LegacyAutoBoost *a1, int a2, signed int a3)
{
  __int64 v4; // rdx

  v4 = 1LL;
  if ( (KiAbpGlobalState & 1) == 0 )
  {
    if ( a3 < 2 )
    {
      v4 = 0LL;
      if ( a2 < 2 )
        return;
    }
    else if ( a2 >= 2 )
    {
      return;
    }
    LegacyAutoBoost::KeAbProcessBaseIoPriorityChangeInternal(a1, (struct _KTHREAD *)v4, a3);
    return;
  }
  if ( a3 < 2 )
  {
    v4 = 0LL;
    if ( a2 < 2 )
      return;
  }
  else if ( a2 >= 2 )
  {
    return;
  }
  AutoBoost::KiAbpProcessBaseIoPriorityChangeInternal(a1, (struct _KTHREAD *)v4, a3);
}

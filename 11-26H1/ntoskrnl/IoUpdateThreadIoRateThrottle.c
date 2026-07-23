/*
 * XREFs of IoUpdateThreadIoRateThrottle @ 0x1404C7350
 * Callers:
 *     <none>
 * Callees:
 *     ?KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x1402395C8 (-KeAbProcessBaseIoPriorityChangeInternal@LegacyAutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 *     ?KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z @ 0x140239CF0 (-KiAbpProcessBaseIoPriorityChangeInternal@AutoBoost@@YAXPEAU_KTHREAD@@K@Z.c)
 */

void __fastcall IoUpdateThreadIoRateThrottle(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  signed __int32 v4; // eax
  __int64 v5; // rdx

  v4 = _InterlockedExchangeAdd(a1 + 378, a2);
  if ( v4 )
  {
    if ( a2 + v4 )
      return;
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpProcessBaseIoPriorityChangeInternal((AutoBoost *)a1, (struct _KTHREAD *)v5, a3, a4);
  else
    LegacyAutoBoost::KeAbProcessBaseIoPriorityChangeInternal((LegacyAutoBoost *)a1, (struct _KTHREAD *)v5, a3, a4);
}

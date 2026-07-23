/*
 * XREFs of ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x140337CEC
 * Callers:
 *     KiTransitionSchedulingGroupGeneration @ 0x140335C00 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToScbQueue @ 0x1404A57FC (KiAddThreadToScbQueue.c)
 * Callees:
 *     ?KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140337D50 (-KiInsertSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140338648 (-KiResortScbQueue@@YAEPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 */

void __fastcall KiInsertNonMaxOverQuotaScb(struct _KSCB *a1, struct _KPRCB *a2, unsigned __int8 a3)
{
  unsigned __int16 PrcbLockFlags; // ax

  do
  {
    PrcbLockFlags = a1->PrcbLockFlags;
    if ( (PrcbLockFlags & 2) != 0 )
      break;
    if ( (PrcbLockFlags & 1) != 0 )
      KiResortScbQueue(a2, a1, 0);
    else
      KiInsertSchedulingGroupQueue(a2, a1, a3);
    a1 = a1->Parent;
  }
  while ( a1 );
}

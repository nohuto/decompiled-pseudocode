/*
 * XREFs of ?ExpLookasideMgrTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404E9320
 * Callers:
 *     <none>
 * Callees:
 *     ?ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x1404E9338 (-ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 */

void __fastcall ExpLookasideMgrTimerCallback(struct _EX_TIMER *a1, struct _EXP_LOOKASIDE_MGR *a2)
{
  ExpLookasideMgrQueueWorkers(a2);
}

/*
 * XREFs of IoQueueWorkItemToNode @ 0x140202F90
 * Callers:
 *     ?ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x1404E9338 (-ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140202FE0 (IopQueueWorkItemProlog.c)
 *     ExQueueWorkItemExFromIo @ 0x140203194 (ExQueueWorkItemExFromIo.c)
 *     IopQueueWorkItemNotInsertedEpilog @ 0x1405CE3E4 (IopQueueWorkItemNotInsertedEpilog.c)
 */

char __fastcall IoQueueWorkItemToNode(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  char v8; // bl

  v7 = IopQueueWorkItemProlog(a1, a3, a2);
  v8 = ExQueueWorkItemExFromIo(v7, a3, a5);
  if ( !v8 )
    IopQueueWorkItemNotInsertedEpilog(a1);
  return v8;
}

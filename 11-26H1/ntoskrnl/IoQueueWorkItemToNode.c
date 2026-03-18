/*
 * XREFs of IoQueueWorkItemToNode @ 0x140202EB0
 * Callers:
 *     ?ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x1404EFD58 (-ExpLookasideMgrQueueWorkers@@YAXPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 * Callees:
 *     IopQueueWorkItemProlog @ 0x140202F00 (IopQueueWorkItemProlog.c)
 *     ExQueueWorkItemExFromIo @ 0x1402030B4 (ExQueueWorkItemExFromIo.c)
 *     IopQueueWorkItemNotInsertedEpilog @ 0x1405CBB74 (IopQueueWorkItemNotInsertedEpilog.c)
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

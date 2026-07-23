/*
 * XREFs of IoTryQueueWorkItem @ 0x1405CE2C0
 * Callers:
 *     <none>
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     IopQueueWorkItemProlog @ 0x140202FE0 (IopQueueWorkItemProlog.c)
 *     IopQueueWorkItemNotInsertedEpilog @ 0x1405CE3E4 (IopQueueWorkItemNotInsertedEpilog.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v6; // rax
  char v7; // bl

  v6 = IopQueueWorkItemProlog(a1, a3, a2, a4);
  v7 = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v6, a3, 1u);
  if ( !v7 )
    IopQueueWorkItemNotInsertedEpilog(a1);
  return v7;
}

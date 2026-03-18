/*
 * XREFs of ??0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1401ABFC0
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1401C39A0 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x14021AB60 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 */

__int64 *__fastcall EnterLeaveCritShared::EnterLeaveCritShared(__int64 *a1, unsigned int a2, unsigned int a3)
{
  *a1 = EnterSharedCrit(a2, a3);
  return a1;
}

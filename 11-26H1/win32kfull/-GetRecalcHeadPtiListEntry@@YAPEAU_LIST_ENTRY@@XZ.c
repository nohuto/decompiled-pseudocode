/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x14005AAE8
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x14005AB28 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005ABD0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsPackedQueueRecalc@@YAHXZ @ 0x14005AD58 (-IsPackedQueueRecalc@@YAHXZ.c)
 */

struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)IsPackedQueueRecalc() )
    return (struct _LIST_ENTRY *)(W32GetUserSessionState(v1, v0) + 16872);
  else
    return (struct _LIST_ENTRY *)(*((_QWORD *)PtiCurrent(v1) + 61) + 176LL);
}

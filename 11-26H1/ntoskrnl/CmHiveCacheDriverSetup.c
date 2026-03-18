/*
 * XREFs of CmHiveCacheDriverSetup @ 0x140857650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmHiveCacheDriverSetup(struct _LIST_ENTRY *a1)
{
  WheapPfaLock.ApcState.ApcListHead[1].Flink = a1;
  return 0LL;
}

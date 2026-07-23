/*
 * XREFs of RtlpHpSegMgrLock @ 0x18010F658
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18006EC08 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1801582E4 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158450 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 15);
  return -1;
}

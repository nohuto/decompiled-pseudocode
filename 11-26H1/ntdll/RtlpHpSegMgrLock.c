/*
 * XREFs of RtlpHpSegMgrLock @ 0x18010FAC8
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x18008B7D0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x180158414 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158580 (RtlpHpSegMgrVaCtxInsert.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 120), a2);
  return -1;
}

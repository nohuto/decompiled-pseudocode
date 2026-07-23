/*
 * XREFs of RtlpHpSegMgrLock @ 0x1404BDE5C
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140351BC4 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140351CB4 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1404A5E54 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 120), *(_DWORD *)(a1 + 40) & 1, a3, a4);
}

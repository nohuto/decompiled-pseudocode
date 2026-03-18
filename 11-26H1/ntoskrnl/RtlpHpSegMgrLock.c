/*
 * XREFs of RtlpHpSegMgrLock @ 0x1404C457C
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14034FB44 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14034FC34 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1404AC7C4 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027E170 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegMgrLock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 120), *(_DWORD *)(a1 + 40) & 1, a3, a4);
}

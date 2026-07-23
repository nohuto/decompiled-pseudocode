/*
 * XREFs of RtlpHpSegMgrUnlock @ 0x1404C24DC
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140351BC4 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140351CB4 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1404A5E54 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpSegMgrUnlock(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 120), *(_DWORD *)(a1 + 40) & 1, a2);
}

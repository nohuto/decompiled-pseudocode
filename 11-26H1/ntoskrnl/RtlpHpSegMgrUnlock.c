/*
 * XREFs of RtlpHpSegMgrUnlock @ 0x1404C879C
 * Callers:
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14034FB44 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14034FC34 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1404AC7C4 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034D300 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpSegMgrUnlock(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 120), *(_DWORD *)(a1 + 40) & 1, a2);
}

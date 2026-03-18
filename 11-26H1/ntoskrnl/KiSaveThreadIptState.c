/*
 * XREFs of KiSaveThreadIptState @ 0x1405ECF60
 * Callers:
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x1404FB5B8 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}

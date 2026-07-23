/*
 * XREFs of KiSaveThreadIptState @ 0x1405EF8D0
 * Callers:
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x1404F4AA0 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}

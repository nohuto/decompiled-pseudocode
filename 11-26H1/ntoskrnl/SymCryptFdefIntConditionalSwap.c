/*
 * XREFs of SymCryptFdefIntConditionalSwap @ 0x14056FC28
 * Callers:
 *     SymCryptIntConditionalSwap @ 0x14055E690 (SymCryptIntConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwapC @ 0x14056F9FC (SymCryptFdefConditionalSwapC.c)
 */

__int64 __fastcall SymCryptFdefIntConditionalSwap(__int64 a1, __int64 a2, char a3)
{
  return SymCryptFdefConditionalSwapC(a1 + 32, a2 + 32, *(_DWORD *)(a1 + 4), a3);
}

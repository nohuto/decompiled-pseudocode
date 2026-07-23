/*
 * XREFs of SymCryptFdefModElementConditionalSwap @ 0x14056E620
 * Callers:
 *     SymCryptModElementConditionalSwap @ 0x14055EA3C (SymCryptModElementConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwap @ 0x14056F9E4 (SymCryptFdefConditionalSwap.c)
 */

__int64 __fastcall SymCryptFdefModElementConditionalSwap(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefConditionalSwap(a2, a3, *(unsigned int *)(a1 + 4));
}

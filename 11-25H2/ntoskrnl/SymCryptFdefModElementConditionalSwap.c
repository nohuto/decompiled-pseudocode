/*
 * XREFs of SymCryptFdefModElementConditionalSwap @ 0x140533414
 * Callers:
 *     SymCryptModElementConditionalSwap @ 0x140521424 (SymCryptModElementConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwap @ 0x1405347C0 (SymCryptFdefConditionalSwap.c)
 */

__int64 __fastcall SymCryptFdefModElementConditionalSwap(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefConditionalSwap(a2, a3, *(unsigned int *)(a1 + 4));
}

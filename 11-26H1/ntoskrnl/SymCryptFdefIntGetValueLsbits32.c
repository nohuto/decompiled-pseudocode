/*
 * XREFs of SymCryptFdefIntGetValueLsbits32 @ 0x14055D928
 * Callers:
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055E7D4 (SymCryptIntGetValueLsbits32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetValueLsbits32(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}

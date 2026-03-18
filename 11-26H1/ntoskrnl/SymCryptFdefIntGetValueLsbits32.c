/*
 * XREFs of SymCryptFdefIntGetValueLsbits32 @ 0x14055B444
 * Callers:
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055C2EC (SymCryptIntGetValueLsbits32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetValueLsbits32(__int64 a1)
{
  return *(unsigned int *)(a1 + 32);
}

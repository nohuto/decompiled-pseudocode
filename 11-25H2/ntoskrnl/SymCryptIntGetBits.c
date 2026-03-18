/*
 * XREFs of SymCryptIntGetBits @ 0x14052118C
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptModExpWindowed @ 0x140535128 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntGetBits @ 0x14052C6F0 (SymCryptFdefIntGetBits.c)
 */

__int64 SymCryptIntGetBits()
{
  return SymCryptFdefIntGetBits();
}

/*
 * XREFs of SymCryptIntGetBits @ 0x14055C2BC
 * Callers:
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptModExpWindowed @ 0x14057116C (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntGetBits @ 0x140568718 (SymCryptFdefIntGetBits.c)
 */

__int64 SymCryptIntGetBits()
{
  return SymCryptFdefIntGetBits();
}

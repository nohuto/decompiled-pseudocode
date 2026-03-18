/*
 * XREFs of SymCryptIntBitsizeOfObject @ 0x140521030
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 *     SymCryptModExpWindowed @ 0x140535128 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfObject @ 0x14053494C (SymCryptFdefIntBitsizeOfObject.c)
 */

__int64 SymCryptIntBitsizeOfObject()
{
  return SymCryptFdefIntBitsizeOfObject();
}

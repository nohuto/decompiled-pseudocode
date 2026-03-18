/*
 * XREFs of SymCryptIntBitsizeOfObject @ 0x14055C160
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 *     SymCryptModExpWindowed @ 0x14057116C (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfObject @ 0x140570994 (SymCryptFdefIntBitsizeOfObject.c)
 */

__int64 SymCryptIntBitsizeOfObject()
{
  return SymCryptFdefIntBitsizeOfObject();
}

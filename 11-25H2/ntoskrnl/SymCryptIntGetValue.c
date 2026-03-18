/*
 * XREFs of SymCryptIntGetValue @ 0x1405211A4
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntGetValue @ 0x140534B58 (SymCryptFdefIntGetValue.c)
 */

__int64 SymCryptIntGetValue()
{
  return SymCryptFdefIntGetValue();
}

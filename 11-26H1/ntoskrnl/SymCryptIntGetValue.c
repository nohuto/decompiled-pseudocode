/*
 * XREFs of SymCryptIntGetValue @ 0x14055E7BC
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntGetValue @ 0x14056FD80 (SymCryptFdefIntGetValue.c)
 */

__int64 SymCryptIntGetValue()
{
  return SymCryptFdefIntGetValue();
}

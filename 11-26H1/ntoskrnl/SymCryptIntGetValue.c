/*
 * XREFs of SymCryptIntGetValue @ 0x14055C2D4
 * Callers:
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntGetValue @ 0x140570BA0 (SymCryptFdefIntGetValue.c)
 */

__int64 SymCryptIntGetValue()
{
  return SymCryptFdefIntGetValue();
}

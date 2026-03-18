/*
 * XREFs of SymCryptIntIsEqual @ 0x14055C31C
 * Callers:
 *     SymCryptEcurveIsSame @ 0x14055B378 (SymCryptEcurveIsSame.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntIsEqual @ 0x140570BE4 (SymCryptFdefIntIsEqual.c)
 */

__int64 SymCryptIntIsEqual()
{
  return SymCryptFdefIntIsEqual();
}

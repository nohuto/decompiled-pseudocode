/*
 * XREFs of SymCryptIntIsEqual @ 0x1405211EC
 * Callers:
 *     SymCryptEcurveIsSame @ 0x140520298 (SymCryptEcurveIsSame.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntIsEqual @ 0x140534B9C (SymCryptFdefIntIsEqual.c)
 */

__int64 SymCryptIntIsEqual()
{
  return SymCryptFdefIntIsEqual();
}

/*
 * XREFs of SymCryptIntIsEqual @ 0x14055E804
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14055C2A8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEcurveIsSame @ 0x14055D85C (SymCryptEcurveIsSame.c)
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefIntIsEqual @ 0x14056FDC4 (SymCryptFdefIntIsEqual.c)
 */

__int64 SymCryptIntIsEqual()
{
  return SymCryptFdefIntIsEqual();
}

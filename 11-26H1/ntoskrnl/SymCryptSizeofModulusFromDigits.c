/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x14055EEC0
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14055C5E0 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14055C774 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14055D0F8 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055D934 (SymCryptEcurveValidateAndComputeSizes.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x14056F8E8 (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}

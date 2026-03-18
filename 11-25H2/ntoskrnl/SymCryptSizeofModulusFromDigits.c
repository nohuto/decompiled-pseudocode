/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x1405218A8
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14051F0B0 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F23C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14051FB10 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140520370 (SymCryptEcurveValidateAndComputeSizes.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x1405346C8 (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}

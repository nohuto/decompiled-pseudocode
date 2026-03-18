/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x14055C9D8
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14055A0C8 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14055A25C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14055ABE4 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055B450 (SymCryptEcurveValidateAndComputeSizes.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x140570708 (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}

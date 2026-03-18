/*
 * XREFs of SymCryptModulusCreate @ 0x140521848
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14051F0B0 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F23C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x1405344CC (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}

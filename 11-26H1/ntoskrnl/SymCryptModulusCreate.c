/*
 * XREFs of SymCryptModulusCreate @ 0x14055C978
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14055A0C8 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14055A25C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x14057050C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}

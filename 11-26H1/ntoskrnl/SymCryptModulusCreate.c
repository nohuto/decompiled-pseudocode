/*
 * XREFs of SymCryptModulusCreate @ 0x14055EE60
 * Callers:
 *     SymCryptRsakeyCreate @ 0x14055C5E0 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14055C774 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveInitialize @ 0x14055D2B8 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x14056F6EC (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}

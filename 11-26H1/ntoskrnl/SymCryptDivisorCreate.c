/*
 * XREFs of SymCryptDivisorCreate @ 0x14055E5D0
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14055C930 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptIntExtendedGcd @ 0x140564D48 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x14056FAA4 (SymCryptFdefDivisorCreate.c)
 */

__int64 SymCryptDivisorCreate()
{
  return SymCryptFdefDivisorCreate();
}

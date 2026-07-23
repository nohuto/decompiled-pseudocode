/*
 * XREFs of SymCryptSizeofDivisorFromDigits @ 0x14055EE78
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14055C930 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptIntExtendedGcd @ 0x140564D48 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDivisorCreate @ 0x14056FAA4 (SymCryptFdefDivisorCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x14057011C (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 SymCryptSizeofDivisorFromDigits()
{
  return SymCryptFdefSizeofDivisorFromDigits();
}

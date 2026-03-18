/*
 * XREFs of SymCryptSizeofDivisorFromDigits @ 0x140521860
 * Callers:
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDivisorCreate @ 0x14053487C (SymCryptFdefDivisorCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140534EF8 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 SymCryptSizeofDivisorFromDigits()
{
  return SymCryptFdefSizeofDivisorFromDigits();
}

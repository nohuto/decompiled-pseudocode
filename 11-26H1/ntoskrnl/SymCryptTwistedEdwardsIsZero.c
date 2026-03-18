/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x140565760
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x14055C5D0 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x14055C5E8 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}

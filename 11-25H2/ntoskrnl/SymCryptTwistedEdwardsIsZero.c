/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x140529650
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x1405214A0 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x1405214B8 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}

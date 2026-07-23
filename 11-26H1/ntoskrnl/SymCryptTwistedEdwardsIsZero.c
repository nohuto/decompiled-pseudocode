/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x140576630
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x14055EAB8 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x14055EAD0 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}

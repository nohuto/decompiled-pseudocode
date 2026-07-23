/*
 * XREFs of SymCryptInverseMod2e64 @ 0x140570154
 * Callers:
 *     SymCryptFdefIntToModulus @ 0x14056E2E4 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptInverseMod2e64(__int64 a1)
{
  int v1; // r9d

  v1 = (a1 ^ (6 * (_BYTE)a1 - 6) & 8) * (2 - a1 * (a1 ^ (6 * (_BYTE)a1 - 6) & 8));
  return (2 - a1 * (unsigned int)(v1 * (2 - a1 * v1) * (2 - a1 * v1 * (2 - a1 * v1))))
       * (unsigned int)(v1 * (2 - a1 * v1) * (2 - a1 * v1 * (2 - a1 * v1)));
}

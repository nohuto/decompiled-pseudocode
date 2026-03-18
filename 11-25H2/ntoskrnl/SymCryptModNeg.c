/*
 * XREFs of SymCryptModNeg @ 0x140521738
 * Callers:
 *     SymCryptTwistedEdwardsIsEqual @ 0x140529440 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x1405296C0 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x14052B900 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x14052BBB0 (SymCryptShortWeierstrassNegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModNeg(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_1400067D0 + (*a1 & 0x380)))(a1);
}

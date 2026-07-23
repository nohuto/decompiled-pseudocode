/*
 * XREFs of SymCryptModNeg @ 0x14055ED50
 * Callers:
 *     SymCryptShortWeierstrassIsEqual @ 0x1405755B0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x140575840 (SymCryptShortWeierstrassNegate.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140576440 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x1405766A0 (SymCryptTwistedEdwardsNegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModNeg(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_140005E40 + (*a1 & 0x380)))(a1);
}

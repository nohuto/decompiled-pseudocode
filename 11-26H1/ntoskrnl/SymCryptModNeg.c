/*
 * XREFs of SymCryptModNeg @ 0x14055C868
 * Callers:
 *     SymCryptTwistedEdwardsIsEqual @ 0x140565570 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x1405657D0 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140567940 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x140567BD0 (SymCryptShortWeierstrassNegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModNeg(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_140005E40 + (*a1 & 0x380)))(a1);
}

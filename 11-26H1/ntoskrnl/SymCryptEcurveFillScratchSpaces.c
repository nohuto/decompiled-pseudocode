/*
 * XREFs of SymCryptEcurveFillScratchSpaces @ 0x140567358
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14055D2B8 (SymCryptEcurveInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveFillScratchSpaces(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006340[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}

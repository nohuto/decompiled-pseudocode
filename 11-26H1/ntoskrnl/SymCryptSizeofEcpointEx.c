/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x140567060
 * Callers:
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055D934 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140575440 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405762C0 (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140576CC0 (SymCryptMontgomeryFillScratchSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSizeofEcpointEx(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 3 )
    return 0LL;
  else
    return (unsigned int)(a2 * a1 + 32);
}

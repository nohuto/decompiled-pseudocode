/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x140528B04
 * Callers:
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140520370 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405292BC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140529D0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x14052B794 (SymCryptShortWeierstrassFillScratchSpaces.c)
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

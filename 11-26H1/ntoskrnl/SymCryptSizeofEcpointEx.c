/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x140564C70
 * Callers:
 *     SymCryptEcurveValidateAndComputeSizes @ 0x14055B450 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405653EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140565E0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1405677D8 (SymCryptShortWeierstrassFillScratchSpaces.c)
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

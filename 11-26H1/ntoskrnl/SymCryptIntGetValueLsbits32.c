/*
 * XREFs of SymCryptIntGetValueLsbits32 @ 0x14055C2EC
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140562430 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDecideModulusType @ 0x14056EF38 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140571040 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptFixedWindowRecoding @ 0x140574C80 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140574DE0 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits32 @ 0x14055B444 (SymCryptFdefIntGetValueLsbits32.c)
 */

__int64 __fastcall SymCryptIntGetValueLsbits32(__int64 a1)
{
  return SymCryptFdefIntGetValueLsbits32(a1);
}

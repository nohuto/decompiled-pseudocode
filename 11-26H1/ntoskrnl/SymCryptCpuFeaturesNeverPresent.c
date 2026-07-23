/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x1404C3508
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140555854 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x140555A30 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x140557ED0 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x1405680C0 (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x14056820C (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x14056E118 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModDivSmallPow2 @ 0x14056E4C8 (SymCryptFdefModDivSmallPow2.c)
 *     SymCryptFdefMontgomeryReduce @ 0x14056F890 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresentEnvWindowsKernelmodeWin8_1nLater @ 0x140555708 (SymCryptCpuFeaturesNeverPresentEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return SymCryptCpuFeaturesNeverPresentEnvWindowsKernelmodeWin8_1nLater();
}

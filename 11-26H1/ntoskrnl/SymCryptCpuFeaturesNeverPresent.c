/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x1404C9AE8
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1405533C4 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1405535A0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x140555A40 (SymCryptParallelSha256Process.c)
 *     SymCryptFdefRawMul @ 0x140568EE0 (SymCryptFdefRawMul.c)
 *     SymCryptFdefRawSquare @ 0x14056902C (SymCryptFdefRawSquare.c)
 *     SymCryptFdefDecideModulusType @ 0x14056EF38 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModDivSmallPow2 @ 0x14056F2E8 (SymCryptFdefModDivSmallPow2.c)
 *     SymCryptFdefMontgomeryReduce @ 0x1405706B0 (SymCryptFdefMontgomeryReduce.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return HalSystemVectorDispatchEntry();
}

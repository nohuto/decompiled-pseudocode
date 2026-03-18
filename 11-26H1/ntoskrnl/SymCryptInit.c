/*
 * XREFs of SymCryptInit @ 0x1405E5590
 * Callers:
 *     HvInitializeHashLibrary @ 0x14085B974 (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405532EC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x670009u);
}

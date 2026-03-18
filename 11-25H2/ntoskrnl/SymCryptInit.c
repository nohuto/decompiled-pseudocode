/*
 * XREFs of SymCryptInit @ 0x1405ADB18
 * Callers:
 *     HvInitializeHashLibrary @ 0x1407CE594 (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405184E8 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x670008u);
}

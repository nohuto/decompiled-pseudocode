/*
 * XREFs of SymCryptInit @ 0x1405E7F00
 * Callers:
 *     HvInitializeHashLibrary @ 0x140861C68 (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14055577C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater(0x67000Cu);
}

/*
 * XREFs of SymCryptSaveYmm @ 0x1405E7F34
 * Callers:
 *     SymCryptParallelSha256Process @ 0x140557ED0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140555854 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 __fastcall SymCryptSaveYmm(struct _XSTATE_SAVE *a1)
{
  return SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(a1);
}

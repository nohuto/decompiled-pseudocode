/*
 * XREFs of KiIsWinPEBoot @ 0x1405F4DF4
 * Callers:
 *     KiDetermineImportOptimizationEnablement @ 0x1405F49DC (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405F4A24 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 */

bool __fastcall KiIsWinPEBoot(__int64 a1)
{
  const char *v1; // rcx

  v1 = *(const char **)(a1 + 216);
  return v1 && strstr(v1, "MININT") != 0LL;
}

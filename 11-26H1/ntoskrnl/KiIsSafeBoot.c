/*
 * XREFs of KiIsSafeBoot @ 0x1405F4CA4
 * Callers:
 *     KiDetermineImportOptimizationEnablement @ 0x1405F49DC (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405F4A24 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 */

bool __fastcall KiIsSafeBoot(__int64 a1)
{
  const char *v1; // rcx

  v1 = *(const char **)(a1 + 216);
  return v1 && strstr(v1, "SAFEBOOT:") != 0LL;
}

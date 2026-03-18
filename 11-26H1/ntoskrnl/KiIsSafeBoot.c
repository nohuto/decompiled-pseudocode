/*
 * XREFs of KiIsSafeBoot @ 0x1405F22E4
 * Callers:
 *     KiDetermineImportOptimizationEnablement @ 0x1405F201C (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405F2064 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     strstr @ 0x140535B20 (strstr.c)
 */

bool __fastcall KiIsSafeBoot(__int64 a1)
{
  const char *v1; // rcx

  v1 = *(const char **)(a1 + 216);
  return v1 && strstr(v1, "SAFEBOOT:") != 0LL;
}

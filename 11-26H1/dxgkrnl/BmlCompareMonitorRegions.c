/*
 * XREFs of BmlCompareMonitorRegions @ 0x1402E0C68
 * Callers:
 *     BmlCompareTargetModes @ 0x1402DDBA4 (BmlCompareTargetModes.c)
 * Callees:
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x1400542F0 (-DivideAndRound@@YA_K_K0@Z.c)
 *     BmlCompareModeRegions @ 0x1402DF230 (BmlCompareModeRegions.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1402DFF14 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 */

__int64 __fastcall BmlCompareMonitorRegions(unsigned int *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned int v6; // r9d

  if ( a1 == a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1292;
  }
  result = BmlCompareModeRegions(a1 + 21, a2 + 21);
  if ( !(_DWORD)result )
  {
    DivideAndRound(a2[23], a2[24]);
    v5 = DivideAndRound(a1[23], a1[24]);
    return BmlCompareValues<unsigned int>(v5, v6);
  }
  return result;
}

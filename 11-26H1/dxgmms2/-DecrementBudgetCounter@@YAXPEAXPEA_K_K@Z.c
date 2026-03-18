/*
 * XREFs of ?DecrementBudgetCounter@@YAXPEAXPEA_K_K@Z @ 0x1400385A8
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall DecrementBudgetCounter(void *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // r9

  v3 = *a2;
  if ( a3 > *a2 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 68LL, a1, v3, a3);
    WdLogGlobalForLineNumber = 213;
  }
  *a2 = v3 - a3;
}

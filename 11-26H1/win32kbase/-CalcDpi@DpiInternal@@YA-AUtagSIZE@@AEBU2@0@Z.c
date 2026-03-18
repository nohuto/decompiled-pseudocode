/*
 * XREFs of ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1401348FC
 * Callers:
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1401F4D20 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401F5CC0 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall DpiInternal::CalcDpi(DpiInternal *this, const struct tagSIZE *a2, const struct tagSIZE *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // eax
  LONG cy; // edx
  __int64 v9; // [rsp+30h] [rbp+8h]

  v3 = 0;
  if ( a2->cx )
  {
    v6 = 254 * *(_DWORD *)this / (unsigned int)(10 * a2->cx);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    v6 = 0;
    WdLogGlobalForLineNumber = 56;
  }
  cy = a2->cy;
  LODWORD(v9) = v6;
  if ( cy )
  {
    v3 = 254 * *((_DWORD *)this + 1) / (unsigned int)(10 * cy);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 56;
  }
  HIDWORD(v9) = v3;
  return (struct tagSIZE)v9;
}

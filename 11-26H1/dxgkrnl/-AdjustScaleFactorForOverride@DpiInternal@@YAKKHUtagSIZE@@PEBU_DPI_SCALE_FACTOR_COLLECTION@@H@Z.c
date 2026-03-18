/*
 * XREFs of ?AdjustScaleFactorForOverride@DpiInternal@@YAKKHUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x14005F234
 * Callers:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x14006C024 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x14005F308 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

unsigned int __fastcall DpiInternal::AdjustScaleFactorForOverride(
        DpiInternal *this,
        int a2,
        int a3,
        struct tagSIZE a4,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r8d
  _DWORD *v10; // rax
  struct _DPI_SCALE_FACTOR_COLLECTION *v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL);
  if ( v7 )
  {
    v10 = *(_DWORD **)(*(_QWORD *)&a4 + 16LL);
    do
    {
      if ( (_DWORD)this == *v10 )
        break;
      ++v6;
      ++v10;
    }
    while ( v6 < v7 );
  }
  if ( v6 >= v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 304;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(UINT)idx < pScaleFactorCollection->NumFactors",
      304LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v12) = (_DWORD)a5;
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v6, a2, a3, a4, v12, v13);
}

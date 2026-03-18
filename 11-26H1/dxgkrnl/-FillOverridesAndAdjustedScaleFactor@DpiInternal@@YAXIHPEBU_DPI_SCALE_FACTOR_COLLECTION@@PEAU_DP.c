/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x14005F4CC
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x14005EE90 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x140062D7C (-CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x14006C024 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall DpiInternal::FillOverridesAndAdjustedScaleFactor(
        DpiInternal *this,
        int a2,
        int *a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4,
        struct _DPI_INFORMATION *a5)
{
  int v8; // esi
  DpiInternal *v9; // rcx
  struct _DPI_SCALE_FACTOR_COLLECTION *v10; // [rsp+20h] [rbp-38h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v11; // [rsp+28h] [rbp-30h]

  v8 = (int)this;
  if ( !*((_DWORD *)a4 + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 525;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDpiInfo->BaselineDesktopScaleFactor != DESKTOP_SCALE_INVALID",
      525LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_DWORD *)a4 + 8) || !*((_DWORD *)a4 + 9) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 526;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDpiInfo->CurrentResolution.cx != 0 && pDpiInfo->CurrentResolution.cy != 0",
      526LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
    DpiInternal::CalculateMinMaxOverride(
      (DpiInternal *)*((unsigned int *)a4 + 3),
      *((_QWORD *)a4 + 4),
      (struct tagSIZE)((char *)a4 + 80),
      (int *)a4 + 22,
      a3,
      v11);
  if ( v8 )
  {
    *((_DWORD *)a4 + 21) = (a2 != 0) + 1234568;
    LODWORD(v9) = (100 * v8 + 48) / 0x60u;
  }
  else
  {
    v9 = (DpiInternal *)*((unsigned int *)a4 + 3);
    if ( !a2 )
    {
      LODWORD(v10) = (_DWORD)a5;
      LODWORD(v9) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                      v9,
                      *((_QWORD *)a4 + 4),
                      (struct tagSIZE)a3,
                      (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a4 + 21),
                      v10,
                      (int)v11);
    }
  }
  *((_DWORD *)a4 + 2) = (_DWORD)v9;
}

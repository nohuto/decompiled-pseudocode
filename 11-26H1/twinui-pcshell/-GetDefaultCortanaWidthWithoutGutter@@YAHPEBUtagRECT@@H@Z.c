/*
 * XREFs of ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180388E50
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180389FF0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CB6B4 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D5B64 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180388DB4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x1803897A0 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 */

__int64 __fastcall GetDefaultCortanaWidthWithoutGutter(const struct tagRECT *a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1->right - a1->left;
  v4 = 344;
  v9 = 0;
  if ( v3 < 1196 )
    v4 = 320;
  if ( (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x39, &v9) >= 0 && (v6 = v9) != 0
    || (v7 = MulDiv(a1->right - a1->left, 96, a2), IsWideAtStartupEnabled(v7))
    && (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x37, &v9) >= 0
    && (v6 = v9) != 0 )
  {
    v4 += v6;
  }
  return v4;
}

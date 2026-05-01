/*
 * XREFs of ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180388DB4
 * Callers:
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180388E50 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x1803897A0 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x18038988C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180389FF0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803D2794 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x1803D2CDC (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x180388EF8 (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18038B550 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetDWORD(CortanaFeatureConfiguration *a1, _DWORD *a2)
{
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *SharedFeatureTable; // rax
  __int64 v4; // r10
  unsigned int v5; // ebx
  CortanaFeatureConfiguration *v6; // rcx
  CortanaFeatureConfiguration *v7; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *v8; // rax
  const unsigned __int16 *v9; // rdx
  __int64 v10; // r11
  CortanaFeatureConfiguration *v11; // rcx
  int v12; // r10d
  int FeatureValue; // ebx
  struct CortanaFeatureConfiguration::FeatureValue *v15[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  SharedFeatureTable = CortanaFeatureConfiguration::getSharedFeatureTable(a1);
  v5 = *((_DWORD *)SharedFeatureTable + 6 * v4 + 3);
  CortanaFeatureConfiguration::getSharedFeatureTable(v6);
  v8 = CortanaFeatureConfiguration::getSharedFeatureTable(v7);
  v11 = (CortanaFeatureConfiguration *)*((_QWORD *)v8 + v10);
  *a2 = 0;
  if ( v12 == 1 )
  {
    *(_OWORD *)v15 = 0LL;
    LODWORD(v15[0]) = 1;
    FeatureValue = CortanaFeatureConfiguration::GetFeatureValue(v11, v9, (bool (*)(void))v5, (unsigned int)v15, v15[0]);
    if ( FeatureValue >= 0 )
      *a2 = HIDWORD(v15[0]);
  }
  else
  {
    FeatureValue = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)0x80070057LL);
  }
  return (unsigned int)FeatureValue;
}

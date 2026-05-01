/*
 * XREFs of ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x1802C234C
 * Callers:
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x180205700 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801C25D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEA.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D8D8C (IsQueryWin32SubsystemHostPresent.c)
 */

__int64 __fastcall ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+38h] [rbp+10h]

  if ( (a1 & 1) != 0 )
  {
    v5 = 127;
  }
  else if ( (a1 & 4) != 0 )
  {
    v5 = 17;
  }
  else
  {
    v5 = ((a1 & 0x30) != 0) + 192;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILInitialPositioning>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() == 1 )
      v5 |= 0x7000001Cu;
  }
  v6 = v5 | 0x400;
  if ( (a1 & 2) != 0 )
  {
    v6 |= 1u;
    if ( a1 < 0 )
      v6 |= 0x50u;
  }
  LODWORD(v9) = 1879049471;
  v7 = v6 | 0x10;
  if ( (a1 & 8) == 0 )
    v7 = v6;
  HIDWORD(v9) = v7;
  return v9;
}

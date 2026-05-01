/*
 * XREFs of ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x1802B95A4
 * Callers:
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x1801F98D0 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B85E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEA.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1802D1504 (IsQueryWin32SubsystemHostPresent.c)
 */

__int64 __fastcall ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(char a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+38h] [rbp+10h]

  if ( (a1 & 1) != 0 )
  {
    v4 = 127;
  }
  else if ( (a1 & 4) != 0 )
  {
    v4 = 17;
  }
  else
  {
    v4 = ((a1 & 0x30) != 0) + 192;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILInitialPositioning>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::GetImpl'::`2'::impl,
      1u,
      a3);
    if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() == 1 )
      v4 |= 0x7000001Cu;
  }
  v5 = v4 | 0x400;
  if ( (a1 & 2) != 0 )
  {
    v5 |= 1u;
    if ( a1 < 0 )
      v5 |= 0x50u;
  }
  LODWORD(v8) = 1879049471;
  v6 = v5 | 0x10;
  if ( (a1 & 8) == 0 )
    v6 = v5;
  HIDWORD(v8) = v6;
  return v8;
}

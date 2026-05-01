/*
 * XREFs of ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18057C830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180071730 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$SettingChanged@AEAW4SETTING_IDENTIFIER@@@CSnapComponentTelemetry@@SAXAEAW4SETTING_IDENTIFIER@@@Z @ 0x1800FCC4C (--$SettingChanged@AEAW4SETTING_IDENTIFIER@@@CSnapComponentTelemetry@@SAXAEAW4SETTING_IDENTIFIER@.c)
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x1801FF328 (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x18020C5B8 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180211D10 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x1802146FC (-IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x18057DD74 (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::OnSettingChanged(__int64 a1, int a2)
{
  struct IImmersiveSettingsCache *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v8; // si
  __int64 v9; // rcx
  int v10; // eax
  char IsSnapFlyoutSettingEnabled; // al
  SnapLayoutHelpers *v12; // rcx
  struct IImmersiveSettingsCache *v13; // rdx
  char IsSnapBarSettingEnabled; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  int v18; // ebx
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = a2;
  CSnapComponentTelemetry::SettingChanged<enum SETTING_IDENTIFIER &>(&v21);
  if ( a2 == 4 )
  {
    *(_BYTE *)(a1 + 284) = 1;
    return 0LL;
  }
  if ( a2 == 13 )
  {
    v8 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      v5,
      v6);
    v9 = *(_QWORD *)(a1 + 104);
    v21 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v9 + 32LL))(v9, 13LL, &v21);
    if ( v10 >= 0 )
    {
      if ( v21 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 996) = v8;
        CShellSnapComponent::SetDockThreshold((CShellSnapComponent *)(a1 - 160));
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D3,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v10);
    }
    v8 = 0;
    goto LABEL_9;
  }
  if ( (unsigned int)(a2 - 11) > 1 )
    return 0LL;
  IsSnapFlyoutSettingEnabled = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(*(SnapLayoutHelpers **)(a1 + 104), v4);
  v12 = *(SnapLayoutHelpers **)(a1 + 104);
  *(_BYTE *)(a1 + 760) = IsSnapFlyoutSettingEnabled;
  IsSnapBarSettingEnabled = SnapLayoutHelpers::IsSnapBarSettingEnabled(v12, v13);
  *(_BYTE *)(a1 + 761) = IsSnapBarSettingEnabled;
  if ( *(_BYTE *)(a1 + 760) || IsSnapBarSettingEnabled )
  {
    if ( *(_QWORD *)(a1 + 752) )
      return 0LL;
    v18 = CShellSnapComponent::InitializeSnapFlyout((CShellSnapComponent *)(a1 - 160), v15, v16, v17);
    if ( v18 >= 0 )
      return 0LL;
    v19 = 1982LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 752) )
      return 0LL;
    v18 = CShellSnapComponent::ShutdownSnapFlyout((CShellSnapComponent *)(a1 - 160));
    if ( v18 >= 0 )
      return 0LL;
    v19 = 1987LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v18);
  return (unsigned int)v18;
}

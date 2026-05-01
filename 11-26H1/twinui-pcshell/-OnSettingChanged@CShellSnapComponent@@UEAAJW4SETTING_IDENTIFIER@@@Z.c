/*
 * XREFs of ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1805A0300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18006BC68 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??$SettingChanged@AEAW4SETTING_IDENTIFIER@@@CSnapComponentTelemetry@@SAXAEAW4SETTING_IDENTIFIER@@@Z @ 0x18007B064 (--$SettingChanged@AEAW4SETTING_IDENTIFIER@@@CSnapComponentTelemetry@@SAXAEAW4SETTING_IDENTIFIER@.c)
 *     ?SetDockThreshold@CShellSnapComponent@@AEAAXXZ @ 0x1801F467C (-SetDockThreshold@CShellSnapComponent@@AEAAXXZ.c)
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x1801FF510 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x1802044E0 (-IsSnapFlyoutSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180206F8C (-IsSnapBarSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x1805A1830 (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::OnSettingChanged(__int64 a1, int a2)
{
  struct IImmersiveSettingsCache *v4; // rdx
  __int64 v5; // r8
  char v7; // si
  __int64 v8; // rcx
  int v9; // eax
  char IsSnapFlyoutSettingEnabled; // al
  SnapLayoutHelpers *v11; // rcx
  struct IImmersiveSettingsCache *v12; // rdx
  char IsSnapBarSettingEnabled; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  int v17; // edi
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = a2;
  CSnapComponentTelemetry::SettingChanged<enum SETTING_IDENTIFIER &>(&v20);
  if ( a2 == 4 )
  {
    *(_BYTE *)(a1 + 284) = 1;
    return 0LL;
  }
  if ( a2 == 13 )
  {
    v7 = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      v5);
    v8 = *(_QWORD *)(a1 + 104);
    v20 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v8 + 32LL))(v8, 13LL, &v20);
    if ( v9 >= 0 )
    {
      if ( v20 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 996) = v7;
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
        (const char *)(unsigned int)v9);
    }
    v7 = 0;
    goto LABEL_9;
  }
  if ( (unsigned int)(a2 - 11) > 1 )
    return 0LL;
  IsSnapFlyoutSettingEnabled = SnapLayoutHelpers::IsSnapFlyoutSettingEnabled(
                                 *(SnapLayoutHelpers **)(a1 - 160 + 264),
                                 v4);
  v11 = *(SnapLayoutHelpers **)(a1 + 104);
  *(_BYTE *)(a1 + 760) = IsSnapFlyoutSettingEnabled;
  IsSnapBarSettingEnabled = SnapLayoutHelpers::IsSnapBarSettingEnabled(v11, v12);
  *(_BYTE *)(a1 + 761) = IsSnapBarSettingEnabled;
  if ( *(_BYTE *)(a1 + 760) || IsSnapBarSettingEnabled )
  {
    if ( *(_QWORD *)(a1 + 752) )
      return 0LL;
    v17 = CShellSnapComponent::InitializeSnapFlyout((CShellSnapComponent *)(a1 - 160), v14, v15, v16);
    if ( v17 >= 0 )
      return 0LL;
    v18 = 1992LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 752) )
      return 0LL;
    v17 = CShellSnapComponent::ShutdownSnapFlyout((CShellSnapComponent *)(a1 - 160));
    if ( v17 >= 0 )
      return 0LL;
    v18 = 1997LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}

/*
 * XREFs of ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1804543E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801B6890 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?ClaimForeground@XamlLauncherState@@UEAAXXZ @ 0x18022DCC0 (-ClaimForeground@XamlLauncherState@@UEAAXXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180252010 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180253DA0 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804561DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_35409324@@@details@wil@@QEAAX_NW4Reportin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall XamlLauncherState::DismissStartAndCortana(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  *(_DWORD *)(a1 + 280) = a2;
  if ( XamlLauncherState::IsStartVisible((XamlLauncherState *)a1) )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 && ((*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 24LL))(v5, &v7) < 0 || v7) )
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 144LL))(*(_QWORD *)(a1 + 56));
    LOBYTE(v4) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_35409324>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_35409324>::GetImpl'::`2'::impl,
      v4);
    if ( a2 == 9 )
      XamlLauncherState::ClaimForeground((XamlLauncherState *)a1);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 3LL);
  }
  else
  {
    result = XamlLauncherState::IsFindInStartVisible((XamlLauncherState *)a1);
    if ( !result )
      return result;
  }
  return XamlLauncherState::HideStartAndCortana(a1, a2);
}

/*
 * XREFs of ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x1802B797C
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800CA22C (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 * Callees:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D2B4 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180123C30 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@Q.c)
 *     ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18022ED98 (-IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

char __fastcall Windows::Internal::Shell::UwpWindowLifecycleManagement::ShouldMoveUWLMIntoShellProcess(
        Windows::Internal::Shell::UwpWindowLifecycleManagement *this)
{
  __int64 v1; // r8
  char v2; // bl
  bool v3; // di
  Windows::Internal::ApplicationModel::WindowManagement *v4; // rcx
  Windows::Internal::ApplicationModel::WindowManagement *v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 17;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  v2 = 1;
  v3 = v7 == 3 || v7 == 9;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::GetImpl'::`2'::impl,
    1u,
    v1);
  if ( !v3
    || !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(v4)
    || !Windows::Internal::ApplicationModel::WindowManagement::IsViewManagerPhaseoutEnabled(v5) )
  {
    return 0;
  }
  return v2;
}

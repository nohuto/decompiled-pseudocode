/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR@@@details@wil@@QEAA_NXZ @ 0x1800E92D0
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800924C0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800E4F40 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSharedVi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E7DD8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtu.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UpdateSharedVirtualDesktopVirtual_OOBR>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}

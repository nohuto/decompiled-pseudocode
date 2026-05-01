/*
 * XREFs of ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802703F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180071730 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800BD500 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEA.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1800BD588 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x1800DAEA8 (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18012DE70 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1801F69A0 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x1802330E0 (-ShowSnapBarAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@Windo.c)
 */

__int64 __fastcall CShellSnapComponent::OnDragSizeInfoEvent(
        CShellSnapComponent *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        ApplicationViewHelpers **a3)
{
  ApplicationViewHelpers *v4; // rbp
  int v6; // ebx
  SnapLayoutProvider *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a3;
  if ( *((_DWORD *)a3 + 2) == 2 )
  {
    v6 = 0;
    if ( *((_BYTE *)this + 921) && CShellSnapComponent::CanSnapWindow(this, *a3) )
    {
      switch ( *((_DWORD *)a3 + 4) )
      {
        case 1:
          v6 = 3;
          break;
        case 2:
          v6 = 2;
          break;
        case 4:
          v6 = 1;
          break;
        case 8:
          v6 = 4;
          break;
      }
      SnapFlyoutHost::ShowSnapBarAsync(*((_QWORD *)this + 114), (__int64)&v11, v6, (__int64)v4);
    }
  }
  else if ( *((_DWORD *)a3 + 2) == 3 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
      3u);
    v7 = (SnapLayoutProvider *)*((_QWORD *)this + 73);
    if ( v7 )
    {
      SnapLayoutProvider::Reset(v7);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
        1u,
        v8,
        v9);
      if ( **((_DWORD **)this + 182) == 1 )
        CSnapComponentTelemetry::OnSnappingCancelled::Stop((CShellSnapComponent *)((char *)this + 1184));
    }
    if ( *((_BYTE *)this + 921) && CShellSnapComponent::CanSnapWindow(v7, v4) )
      SnapFlyoutHost::HideAsync(*((_QWORD *)this + 114), (__int64)&v11, 1);
  }
  return 0LL;
}

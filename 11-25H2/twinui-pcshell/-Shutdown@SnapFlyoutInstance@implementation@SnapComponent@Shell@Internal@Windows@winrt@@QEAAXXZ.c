/*
 * XREFs of ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1802749FC
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180271FD0 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180274AF4 (-TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x18058E8F0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     ?Shutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x180590A10 (-Shutdown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180590B00 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$SnapFlyoutInstance_Shutdown@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1801EBB84 (--$SnapFlyoutInstance_Shutdown@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ?GetAttachedFlyout@FlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@SA@AEBUFrameworkElement@4567@@Z @ 0x1802167C4 (-GetAttachedFlyout@FlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@SA@AEBUFrameworkElement.c)
 *     ?Hide@?$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18027440C (-Hide@-$consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2@USnapLayoutPickerExtension@Shell.c)
 *     ?OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x180274570 (-OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEB.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this)
{
  _QWORD *v2; // rax
  const char *v3; // r9
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-20h] BYREF
  __int128 v6; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct IInspectable v8; // [rsp+50h] [rbp+10h] BYREF
  IInspectable v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  SnapFlyoutTelemetry::SnapFlyoutInstance_Shutdown<unsigned int &>((int *)this + 80);
  if ( !*((_BYTE *)this + 340) )
  {
    *((_BYTE *)this + 340) = 1;
    if ( *((_DWORD *)this + 93) == 2 )
    {
      if ( *((_BYTE *)this + 339) )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_ISnapLayoutPickerExtension2<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension>::Hide((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 36);
      }
      else
      {
        v8.lpVtbl = 0LL;
        v9.lpVtbl = 0LL;
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::OnClosed(this, &v9, &v8);
      }
    }
    else
    {
      v2 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
             (__int64 **)this + 36,
             &v10);
      winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase::GetAttachedFlyout(
        (const struct winrt::Windows::UI::Xaml::FrameworkElement *)&v9,
        (__int64)v2);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
      if ( !v9.lpVtbl )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xCD,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
          v3);
      v5 = 0;
      v6 = 0LL;
      v4 = (*((__int64 (__fastcall **)(struct IInspectableVtbl *))v9.lpVtbl->QueryInterface + 15))(v9.lpVtbl);
      winrt::check_hresult(&v8, v4, &v5);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
    }
  }
}

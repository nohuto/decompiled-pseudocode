/*
 * XREFs of ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x180589290
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002824C (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180216550 (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180267668 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x18029775C (--$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@-$factory_cache_entry@USnapLayoutEventAr.c)
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x1802978C0 (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Sh.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUSnapLayoutEventArgs@45671@@Z @ 0x1805871F0 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEve.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnGuidedSnapAssistCompletedEvent(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *a2,
        __int64 **a3)
{
  unsigned int v5; // ebx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 **); // rcx
  void *v7; // rbx
  __int64 v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int128 v12; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)a3) == 2
    || (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View((__int64 *)a3) == 1 )
  {
    v5 = **(_DWORD **)winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
                        a3,
                        (__int64)&pv);
    if ( pv )
      CoTaskMemFree_0(pv);
    winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow(
      (__int64)this,
      (__int64)&pv,
      v5,
      (const char *)1);
    v7 = pv;
    if ( (unsigned int)v11 > 1 )
    {
      *(_QWORD *)&v9 = pv;
      DWORD2(v9) = v11;
      v13 = 0;
      v12 = v9;
      *(_QWORD *)&v9 = &v13;
      *((_QWORD *)&v9 + 1) = &v12;
      v8[1] = (__int64)&qword_1808DC538;
      _InterlockedIncrement64(&qword_1808DC538);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory> )
      {
        _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(
          (__int64 *)&v9,
          (__int64)v8,
          (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>);
        _InterlockedDecrement64(&qword_1808DC538);
      }
      else
      {
        _InterlockedDecrement64(&qword_1808DC538);
        winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::call<_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_ &>(
          v6,
          (__int64)v8,
          &v9);
      }
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>(
        this + 65,
        (__int64)this,
        v8);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
    }
    if ( v7 )
      CoTaskMemFree_0(v7);
  }
}

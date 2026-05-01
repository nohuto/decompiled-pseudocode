/*
 * XREFs of ?HandleSizeUpdate@SharedDesktopBackgroundVisualHost@@AEAAXUtagSIZE@@@Z @ 0x1805E62D4
 * Callers:
 *     ?WndProc@SharedDesktopBackgroundVisualHost@@CA_JQEAUHWND__@@I_K_J@Z @ 0x1805EA1A0 (-WndProc@SharedDesktopBackgroundVisualHost@@CA_JQEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1801D036C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@USize@Foundation@Windows@winrt@@@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEBUSize@Foundation@Windows@1@@Z @ 0x1805E3C18 (--$-RUSharedDesktopBackgroundVisualHost@@USize@Foundation@Windows@winrt@@@-$event@U-$TypedEventH.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SharedDesktopBackgroundVisualHost::HandleSizeUpdate(
        SharedDesktopBackgroundVisualHost *this,
        struct tagSIZE a2)
{
  LONG cx; // ebx
  __int128 v4; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v5; // [rsp+50h] [rbp+20h] BYREF
  struct tagSIZE v6; // [rsp+58h] [rbp+28h]
  RTL_SRWLOCK *v7; // [rsp+60h] [rbp+30h] BYREF

  v6 = a2;
  cx = a2.cx;
  v5 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v7, (RTL_SRWLOCK *)this + 22);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)&v5, (__int64 *)this + 35);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  if ( v5 )
  {
    *(_QWORD *)&v4 = 0LL;
    *((float *)&v4 + 2) = (float)cx;
    *((float *)&v4 + 3) = (float)v6.cy;
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      &v5,
      &v4);
  }
  *(float *)&v7 = (float)cx;
  *((float *)&v7 + 1) = (float)v6.cy;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>::operator()<SharedDesktopBackgroundVisualHost,winrt::Windows::Foundation::Size>(
    (RTL_SRWLOCK *)this + 13,
    (__int64)this,
    (__int64)&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
}

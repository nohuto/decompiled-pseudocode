/*
 * XREFs of ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1805EA248
 * Callers:
 *     _lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_ @ 0x1805E37D0 (_lambda_b826e61a9471a58a2220c80ea84bd06a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x180066798 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180099708 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?OnSearchActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUSearchActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1801044A8 (-OnSearchActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@U.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180396B10 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_K@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_K@Z @ 0x1805E3CE0 (--$-RUSharedDesktopBackgroundVisualHost@@_K@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_N@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x1805E3DA8 (--$-RUSharedDesktopBackgroundVisualHost@@_N@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E4AF0 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E5298 (--1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1805E57D8 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 *     ?CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ @ 0x1805E5D24 (-CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ.c)
 *     ?Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z @ 0x1805E7090 (-Size@SharedDesktopBackgroundVisualHost@@QEAAXAEBU0Foundation@Windows@winrt@@@Z.c)
 *     ?StartActivity@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAXXZ @ 0x1805E76B8 (-StartActivity@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1805E7E60 (-Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1805EA028 (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 *     ?XamlHostThreadShutdownRequested@SharedVisualHostProvider@@SAXXZ @ 0x1805EA53C (-XamlHostThreadShutdownRequested@SharedVisualHostProvider@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SharedDesktopBackgroundVisualHost::XamlHostThreadProc(SharedDesktopBackgroundVisualHost *this)
{
  HWND XamlHostWindow; // rbx
  void *v3; // r12
  int XamlHost; // eax
  int v5; // esi
  HWND v6; // rdx
  int v7; // ebx
  void *v8; // rdx
  DWORD v9; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-D0h] BYREF
  LPARAM lParam; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp-C0h] BYREF
  DWORD dwindex; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE pHandles; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v16; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v17[42]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"StartXamlHostThreadProc");
  v17[0] = &SharedVisualHostProvider::StartXamlHostThreadProc::`vftable';
  SharedVisualHostProvider::StartXamlHostThreadProc::StartActivity((SharedVisualHostProvider::StartXamlHostThreadProc *)v17);
  dwindex = 0;
  lParam = 0LL;
  EnumWindows((WNDENUMPROC)EnumWindowsProc_DesktopWindow, (LPARAM)&lParam);
  XamlHostWindow = SharedDesktopBackgroundVisualHost::CreateXamlHostWindow(this);
  wil::AcquireSRWLockExclusive(&v13, (RTL_SRWLOCK *)this + 22);
  if ( !*((_QWORD *)this + 32) )
    *((_QWORD *)this + 32) = lParam;
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 34,
    XamlHostWindow);
  pHandles = (HANDLE)*((_QWORD *)this + 29);
  v3 = (void *)*((_QWORD *)this + 30);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  XamlHost = SharedDesktopBackgroundVisualHost::CreateXamlHost(this, (__int64)XamlHostWindow);
  v5 = XamlHost;
  if ( XamlHost >= 0 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&v13, (RTL_SRWLOCK *)this + 22);
    lParam = *((_QWORD *)this + 39);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
    if ( *(float *)&lParam >= 0.0 || *((float *)&lParam + 1) >= 0.0 )
      SharedDesktopBackgroundVisualHost::Size(
        (RTL_SRWLOCK *)this,
        (const struct winrt::Windows::Foundation::Size *)&lParam);
    v6 = (HWND)*((_QWORD *)this + 33);
    if ( v6 )
      SetParent(*((HWND *)this + 34), v6);
    SetEvent(v3);
    v13 = (RTL_SRWLOCK *)XamlHostWindow;
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>>::operator()<SharedDesktopBackgroundVisualHost,unsigned __int64>(
      (RTL_SRWLOCK *)this + 19,
      (__int64)this,
      (__int64 *)&v13);
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&v13, (RTL_SRWLOCK *)this + 24);
    v7 = *((_DWORD *)this + 51);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v13);
    SharedDesktopBackgroundVisualHost::SyncState((__int64)this, v7, 0);
    SharedVisualHostProvider::StartXamlHostThreadProc::Stop((SharedVisualHostProvider::StartXamlHostThreadProc *)v17, 1);
    CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
    SharedVisualHostProvider::XamlHostThreadShutdownRequested();
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E6,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
      (const char *)(unsigned int)XamlHost);
    SharedVisualHostProvider::StartXamlHostThreadProc::Stop((SharedVisualHostProvider::StartXamlHostThreadProc *)v17, 0);
  }
  lParam = 0LL;
  wil::AcquireSRWLockExclusive(&v16, (RTL_SRWLOCK *)this + 22);
  *((_DWORD *)this + 57) = v5;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&lParam, (__int64 *)this + 35);
  if ( lParam )
  {
    v13 = 0LL;
    winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnSearchActivated(
      &lParam,
      (__int64 *)&v13);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::operator=((HWND *)this + 34);
  wil::details::ResetEvent(*((wil::details **)this + 29), v8);
  *((_BYTE *)this + 209) = 0;
  *((_DWORD *)this + 46) = 0;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
  v11[0] = 0;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::operator()<SharedDesktopBackgroundVisualHost,bool>(
    (RTL_SRWLOCK *)this + 16,
    (__int64)this,
    (__int64)v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lParam);
  v9 = dwindex;
  SharedVisualHostProvider::StartXamlHostThreadProc::~StartXamlHostThreadProc((SharedVisualHostProvider::StartXamlHostThreadProc *)v17);
  return v9;
}

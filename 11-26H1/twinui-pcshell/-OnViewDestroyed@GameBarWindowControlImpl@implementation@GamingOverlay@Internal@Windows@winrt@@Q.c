/*
 * XREFs of ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180237B8C
 * Callers:
 *     ?OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F9E4 (-OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180217B84 (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 *     ??$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180229768 (--$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewDestroyed(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rdx
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v7; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0LL;
  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)this + 22);
  if ( *((_QWORD *)this + 21) )
  {
    winrt::impl::as<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      v6,
      *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))this + 3));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v6 + 88LL))(*(_QWORD *)v6, *((_QWORD *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6);
  }
  *(_QWORD *)v6 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 3, (__int64 *)v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(
         *((_QWORD *)this + 4),
         *((_QWORD *)this + 5));
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 5);
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(
      (__int64)this,
      v5,
      4);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
      (const char *)(unsigned int)v2);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
    return v3;
  }
}

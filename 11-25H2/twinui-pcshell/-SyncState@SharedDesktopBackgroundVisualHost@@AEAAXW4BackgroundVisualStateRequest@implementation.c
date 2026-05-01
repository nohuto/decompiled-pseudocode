/*
 * XREFs of ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1805EA028
 * Callers:
 *     ?Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E63BC (-Hide@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     ?Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E6C3C (-Pause@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     ?Play@SharedDesktopBackgroundVisualHost@@QEAAXXZ @ 0x1805E6CFC (-Play@SharedDesktopBackgroundVisualHost@@QEAAXXZ.c)
 *     ?Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1805E6F4C (-Show@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1805EA248 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 *     ?_OnXamlContentLoaded@SharedDesktopBackgroundVisualHost@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z @ 0x1805EA630 (-_OnXamlContentLoaded@SharedDesktopBackgroundVisualHost@@AEAAXAEBUIInspectable@Foundation@Window.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?DefaultEvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180575374 (-DefaultEvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataV.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E4AF0 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1SyncState@SharedVisualHostProvider@@QEAA@XZ @ 0x1805E52C4 (--1SyncState@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?StartActivity@SyncState@SharedVisualHostProvider@@QEAAXXZ @ 0x1805E775C (-StartActivity@SyncState@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@SyncState@SharedVisualHostProvider@@QEAAXIIPEAUHWND__@@I@Z @ 0x1805E80C0 (-Stop@SyncState@SharedVisualHostProvider@@QEAAXIIPEAUHWND__@@I@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SharedDesktopBackgroundVisualHost::SyncState(__int64 a1, int a2, unsigned int a3)
{
  int v6; // r12d
  HWND v7; // rdi
  char v8; // r14
  int v9; // edx
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[42]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = a3;
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"SyncState");
  v13[0] = &SharedVisualHostProvider::SyncState::`vftable';
  SharedVisualHostProvider::SyncState::StartActivity((SharedVisualHostProvider::SyncState *)v13);
  v10 = 0LL;
  wil::AcquireSRWLockExclusive(v12, (RTL_SRWLOCK *)(a1 + 192));
  v6 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 204) = a2;
  v7 = *(HWND *)(a1 + 272);
  v8 = *(_BYTE *)(a1 + 208);
  winrt::Windows::Foundation::IUnknown::operator=(&v10, (__int64 *)(a1 + 304));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v12);
  switch ( a2 )
  {
    case 1:
      if ( !v7 )
        break;
      v9 = 8;
      goto LABEL_15;
    case 2:
      if ( !v7 )
        break;
      v9 = 0;
LABEL_15:
      ShowWindow(v7, v9);
      break;
    case 4:
      if ( v10 && v8 )
        winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::DefaultEvaluationState(
          &v10,
          &v11);
      break;
    case 8:
    case 16:
      if ( v10 )
        winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel(&v10);
      break;
  }
  SharedVisualHostProvider::SyncState::Stop((SharedVisualHostProvider::SyncState *)v13, v6, a2, v7, a3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  SharedVisualHostProvider::SyncState::~SyncState((SharedVisualHostProvider::SyncState *)v13);
}

/*
 * XREFs of ??$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@Z @ 0x18029BC18
 * Callers:
 *     ?CreateWindowDraggingEventArgs@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@@Z @ 0x1802ABAE4 (-CreateWindowDraggingEventArgs@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUP.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18021E5A8 (--R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@She.c)
 *     ?GetStartWindowInfo@?$consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3@UIStartControllerExtensionStatics3@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUSize@Foundation@Windows@3@@Z @ 0x18021E5D0 (-GetStartWindowInfo@-$consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtension.c)
 *     ??$get_activation_factory@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18029BD6C (--$get_activation_factory@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@win.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::call<_lambda_32ed34ebfde5e368616da7ac4eaeafd9_ &>(
        __int64 *a1,
        _QWORD *a2,
        unsigned int **a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  _DWORD *v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  __int64 *v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+98h] [rbp+48h] BYREF

  v12 = a1;
  if ( aWindowsudkUiSh_9[49] )
    abort();
  v10[0] = 1;
  v10[1] = 49;
  v11 = L"WindowsUdk.UI.Shell.SnapInternal.SnapEventFactory";
  v9 = v10;
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>(&v12, &v9);
  v5 = v12;
  v13 = 0LL;
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64 **))*v12)(
    v12,
    &winrt::impl::guid_v<winrt::impl::IAgileObject>,
    &v13);
  v6 = v13;
  v7 = 1;
  if ( !v13 )
  {
LABEL_6:
    v7 = 0;
    if ( !v6 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
LABEL_8:
  if ( v7 )
  {
    v13 = &qword_1808DD638;
    _InterlockedIncrement64(&qword_1808DD638);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>,
            (signed __int64)v5,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DD640);
    }
    _lambda_32ed34ebfde5e368616da7ac4eaeafd9_::operator()(
      a3,
      (__int64)a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>);
    _InterlockedDecrement64(&qword_1808DD638);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_StartScreen_Implementation_IStartControllerExtensionStatics3<winrt::WindowsUdk::UI::StartScreen::Implementation::IStartControllerExtensionStatics3>::GetStartWindowInfo(
      &v12,
      a2,
      *a3);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  return a2;
}

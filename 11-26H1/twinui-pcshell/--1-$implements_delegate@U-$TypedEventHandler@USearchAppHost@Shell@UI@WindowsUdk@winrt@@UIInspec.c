/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_0c3b7fae4d3b24e0b67b9983a200858d_@@@impl@winrt@@QEAA@XZ @ 0x180328EA8
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@V_lambda_0b6a44f366f52ce4fba83fdc9c1fcb3c_@@@impl@winrt@@UEAAIXZ @ 0x18032D6D0 (-Release@-$implements_delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@In.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_332fbc8fdd319b527f6e6768730b6f54_@@@impl@winrt@@UEAAIXZ @ 0x180351EB0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,_lambda_0c3b7fae4d3b24e0b67b9983a200858d_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>,_lambda_0c3b7fae4d3b24e0b67b9983a200858d_>(
        __int64 a1)
{
  __int64 result; // rax

  result = winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  if ( *(_QWORD *)(a1 + 16) )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
  return result;
}

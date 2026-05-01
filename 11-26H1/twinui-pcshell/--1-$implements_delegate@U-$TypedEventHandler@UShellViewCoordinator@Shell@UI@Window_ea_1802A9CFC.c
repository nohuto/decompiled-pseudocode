/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_9d145c474c1ca3988ea2d0119a9f5c39_@@@impl@winrt@@QEAA@XZ @ 0x1802A9CFC
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_9d145c474c1ca3988ea2d0119a9f5c39_@@@impl@winrt@@UEAAIXZ @ 0x180202560 (-Release@-$implements_delegate@U-$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@wi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::Windows::Foundation::IInspectable>,_lambda_9d145c474c1ca3988ea2d0119a9f5c39_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::Windows::Foundation::IInspectable>,_lambda_9d145c474c1ca3988ea2d0119a9f5c39_>(
        __int64 a1)
{
  __int64 result; // rax

  result = winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  if ( *(_QWORD *)(a1 + 24) )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 24));
  return result;
}

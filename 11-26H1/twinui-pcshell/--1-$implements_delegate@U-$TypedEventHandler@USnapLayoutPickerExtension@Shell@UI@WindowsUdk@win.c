/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_a9d2a8955e09a1d3e51b825b6c10608c_@@@impl@winrt@@QEAA@XZ @ 0x18035ABB0
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_b98f950e7777631331b22888bc58ec5e_@@@impl@winrt@@UEAAIXZ @ 0x18035C000 (-Release@-$implements_delegate@U-$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_b48270f8b9e7da344db15b50627620ca_@@@impl@winrt@@UEAAIXZ @ 0x1805B48C0 (-Release@-$implements_delegate@U-$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@She.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E68E8 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>,_lambda_a9d2a8955e09a1d3e51b825b6c10608c_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>,_lambda_a9d2a8955e09a1d3e51b825b6c10608c_>(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
}

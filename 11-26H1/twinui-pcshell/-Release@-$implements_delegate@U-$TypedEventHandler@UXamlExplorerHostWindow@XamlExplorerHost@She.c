/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_b48270f8b9e7da344db15b50627620ca_@@@impl@winrt@@UEAAIXZ @ 0x1805B48C0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$implements_delegate@U?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_a9d2a8955e09a1d3e51b825b6c10608c_@@@impl@winrt@@QEAA@XZ @ 0x18035ABB0 (--1-$implements_delegate@U-$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@win.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>,_lambda_b48270f8b9e7da344db15b50627620ca_>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(a1 + 2);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>,_lambda_a9d2a8955e09a1d3e51b825b6c10608c_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>,_lambda_a9d2a8955e09a1d3e51b825b6c10608c_>((__int64)a1);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x28);
  }
  return v2;
}

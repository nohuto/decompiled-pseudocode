/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_b98f950e7777631331b22888bc58ec5e_@@@impl@winrt@@UEAAIXZ @ 0x18035C000
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1?$implements_delegate@U?$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@V_lambda_a9d2a8955e09a1d3e51b825b6c10608c_@@@impl@winrt@@QEAA@XZ @ 0x18035ABB0 (--1-$implements_delegate@U-$TypedEventHandler@USnapLayoutPickerExtension@Shell@UI@WindowsUdk@win.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>,_lambda_b98f950e7777631331b22888bc58ec5e_>::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(Block + 2);
  if ( !v2 && Block )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>,_lambda_a9d2a8955e09a1d3e51b825b6c10608c_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SnapLayoutPickerExtension,winrt::Windows::Foundation::IInspectable>,_lambda_a9d2a8955e09a1d3e51b825b6c10608c_>((__int64)Block);
    operator delete((void *)Block);
  }
  return v2;
}

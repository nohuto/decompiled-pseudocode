/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_38d97ac131026f2cd3c3fc9c49359ac8___ @ 0x180291D04
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180101CE8 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180021088 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_38d97ac131026f2cd3c3fc9c49359ac8___(
        _QWORD *a1,
        Platform::WeakReference *a2)
{
  _QWORD *v4; // r8
  char *v6; // [rsp+38h] [rbp+10h]

  v6 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 8));
  v4[2] = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_180894390;
  *a1 = v4;
  Platform::WeakReference::InternalRelease(a2);
  return a1;
}

/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___ @ 0x1801ABE2C
 * Callers:
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023E53C (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _lambda_d01d769641b0a3ac426af1e1f82876ea_::__lambda_d01d769641b0a3ac426af1e1f82876ea_ @ 0x1800C36BC (_lambda_d01d769641b0a3ac426af1e1f82876ea_--__lambda_d01d769641b0a3ac426af1e1f82876ea_.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx
  char *v6; // [rsp+30h] [rbp+8h]

  v6 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 8));
  v4[2] = 0LL;
  if ( v4 + 2 != a2 )
  {
    v4[2] = *a2;
    *a2 = 0LL;
  }
  v4[3] = a2[1];
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_180721EB8;
  *a1 = v4;
  lambda_d01d769641b0a3ac426af1e1f82876ea_::__lambda_d01d769641b0a3ac426af1e1f82876ea_(a2);
  return a1;
}

/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___ @ 0x18028A924
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180054F14 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rdx
  char *v7; // [rsp+38h] [rbp+10h]

  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4[2] = *a2;
  v5 = a2[1];
  a2[1] = 0LL;
  v4[3] = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_180721E18;
  *a1 = v4;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2 + 1);
  return a1;
}

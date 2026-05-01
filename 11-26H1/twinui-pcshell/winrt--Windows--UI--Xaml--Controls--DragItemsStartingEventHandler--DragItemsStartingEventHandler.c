/*
 * XREFs of winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler::DragItemsStartingEventHandler__lambda_72e1dcf1d191a1fe628d31ef24d41038___ @ 0x1806AABF8
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AF810 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler::DragItemsStartingEventHandler__lambda_72e1dcf1d191a1fe628d31ef24d41038___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // r8
  char *v7; // [rsp+38h] [rbp+10h]

  v7 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4 = *a2;
  *a2 = 0LL;
  v5[2] = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v5 = off_1808D2BA0;
  *a1 = v5;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
  return a1;
}

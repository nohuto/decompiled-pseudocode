/*
 * XREFs of ?SwitchToView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUIApplicationView@@@Z @ 0x1804AA76C
 * Callers:
 *     ?SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUHWND__@@@Z @ 0x1804AA898 (-SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIA.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewGestureHandlerHelpers::SwitchToView(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationViewCollection *a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a4)
{
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64 *); // rdi
  HWND WindowForView; // rbp
  HANDLE PropW; // rdx
  int (__fastcall *v9)(MultitaskingViewGestureHandlerHelpers *, HANDLE, _QWORD); // rax
  UINT v10; // eax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v14)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  if ( !this || !a2 )
    return 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, a2);
  PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
  if ( PropW )
  {
    v9 = *(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, HANDLE, _QWORD))(*(_QWORD *)this + 48LL);
    v14 = 0LL;
    if ( v9(this, PropW, &v14) >= 0 )
      v4 = v14;
    v10 = dword_1808DCF30;
    if ( dword_1808DCF30
      || (v10 = RegisterWindowMessageW(L"TabSwitch"), (dword_1808DCF30 = v10) != 0)
      || (wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0xE5,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
            v11),
          (v10 = dword_1808DCF30) != 0) )
    {
      PostMessageW(WindowForView, v10, 0LL, 0LL);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
  }
  CoAllowSetForegroundWindow((IUnknown *)a2, 0LL);
  return (*(__int64 (__fastcall **)(struct IApplicationViewCollection *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*(_QWORD *)a2 + 24LL))(
           a2,
           v4);
}

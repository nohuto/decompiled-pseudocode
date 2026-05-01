/*
 * XREFs of ?SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUHWND__@@@Z @ 0x1804999E4
 * Callers:
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x180489680 (_lambda_5f246d3d225ef97a552fc7098e7c8139_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SwitchToView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUIApplicationView@@@Z @ 0x1804998BC (-SwitchToView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewGestureHandlerHelpers::SwitchToWindow(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewSwitcher *a3,
        HWND a4)
{
  __int64 v6; // rax
  int v7; // eax
  struct IApplicationView *v8; // r9
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewSwitcher *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !this || !a2 )
    return 0LL;
  v6 = *(_QWORD *)this;
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, struct IApplicationViewSwitcher *, struct IApplicationViewSwitcher **))(v6 + 48))(
         this,
         a3,
         &v12);
  v9 = v7;
  if ( v7 >= 0 )
    v9 = MultitaskingViewGestureHandlerHelpers::SwitchToView(
           this,
           a2,
           (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v12,
           v8);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
      (const char *)(unsigned int)v7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  return v9;
}

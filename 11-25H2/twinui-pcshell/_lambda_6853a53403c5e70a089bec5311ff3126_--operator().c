/*
 * XREFs of _lambda_6853a53403c5e70a089bec5311ff3126_::operator() @ 0x180229718
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___::RunTask @ 0x180598AC0 (CMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAppSnapped@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x1802298A0 (-OnAppSnapped@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnap.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1805821B4 (--$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_6853a53403c5e70a089bec5311ff3126_::operator()(HWND *a1, __int64 *a2)
{
  __int64 v3; // rax
  int (*v4)(void); // rax
  const char *v5; // r9
  int v6; // eax
  int v7; // [rsp+20h] [rbp-58h]
  int v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  float v11[4]; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT pvAttribute; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  v9 = 0LL;
  v4 = *(int (**)(void))(v3 + 40);
  try
  {
    if ( v4() >= 0 )
    {
      v8 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 32LL))(v9, &v8);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x87,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
          (const char *)(unsigned int)v6,
          v7);
      if ( !v8 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
        return;
      }
      wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(&v10, v9);
      pvAttribute = 0LL;
      if ( DwmGetWindowAttribute(*a1, 9u, &pvAttribute, 0x10u) < 0 )
        GetWindowRect(*a1, &pvAttribute);
      v11[0] = (float)pvAttribute.left;
      v11[1] = (float)pvAttribute.top;
      v11[2] = (float)(pvAttribute.right - pvAttribute.left);
      v11[3] = (float)(pvAttribute.bottom - pvAttribute.top);
      winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::OnAppSnapped(
        &v10,
        *a1,
        v11);
      if ( v10 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x99,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      v5);
  }
}

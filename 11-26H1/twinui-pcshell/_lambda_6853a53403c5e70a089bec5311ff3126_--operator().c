/*
 * XREFs of _lambda_6853a53403c5e70a089bec5311ff3126_::operator() @ 0x18021A21C
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___::RunTask @ 0x1805BCD50 (CMultitaskingViewTaskCallback__lambda_6853a53403c5e70a089bec5311ff3126___--RunTask.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAppSnapped@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x18021A3B8 (-OnAppSnapped@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnap.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA?AUIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1805A5E90 (--$convert_from_abi@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@wil@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_6853a53403c5e70a089bec5311ff3126_::operator()(HWND *a1, __int64 *a2)
{
  __int64 v3; // rax
  int (*v4)(void); // rax
  const char *v5; // r9
  int v6; // eax
  HWND v7; // rbx
  int v8; // [rsp+20h] [rbp-58h]
  int v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  float v12[4]; // [rsp+48h] [rbp-30h] BYREF
  struct tagRECT pvAttribute; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *a2;
  v10 = 0LL;
  v4 = *(int (**)(void))(v3 + 40);
  try
  {
    if ( v4() >= 0 )
    {
      v9 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 32LL))(v10, &v9);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x87,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
          (const char *)(unsigned int)v6,
          v8);
      if ( !v9 )
      {
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
        return;
      }
      wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>(&v11, v10);
      pvAttribute = 0LL;
      v7 = *a1;
      if ( DwmGetWindowAttribute(*a1, 9u, &pvAttribute, 0x10u) < 0 )
        GetWindowRect(v7, &pvAttribute);
      v12[0] = (float)pvAttribute.left;
      v12[1] = (float)pvAttribute.top;
      v12[2] = (float)(pvAttribute.right - pvAttribute.left);
      v12[3] = (float)(pvAttribute.bottom - pvAttribute.top);
      winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::OnAppSnapped(
        &v11,
        *a1,
        v12);
      if ( v11 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
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

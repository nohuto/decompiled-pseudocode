/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___::Invoke @ 0x18030F8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180082AA0 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_4cc743d1a7d2ab9cdba1fde245759aa2___::Invoke(
        __int64 a1,
        __int64 a2)
{
  int Window; // eax
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)(*(_QWORD *)(a1 + 48) + 152LL), &v9);
  v5 = Window;
  if ( Window >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, HWND, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(
           a2,
           v9,
           a1 + 56,
           *(_QWORD *)(a1 + 72));
    v5 = 0;
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19B,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Window);
  }
  return v5;
}

/*
 * XREFs of ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x1801BC1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x180070E08 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1801BC230 (-SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::HandleRecycle(CWin32ApplicationView *this)
{
  CWin32ApplicationView *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CWin32ApplicationView *)((char *)this - 16);
  if ( (unsigned int)EdpGetIsManaged() )
    *((_BYTE *)v1 + 56) = 1;
  CWin32ApplicationView::SetForceActiveWindowAppearance(v1, 0);
  v2 = CWin32ApplicationView::InitializeCloakType((__int64)v1, 1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9E,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}

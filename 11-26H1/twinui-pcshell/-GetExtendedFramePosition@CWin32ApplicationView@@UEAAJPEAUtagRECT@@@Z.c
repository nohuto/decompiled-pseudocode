/*
 * XREFs of ?GetExtendedFramePosition@CWin32ApplicationView@@UEAAJPEAUtagRECT@@@Z @ 0x1801A3DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWin32ApplicationView::GetExtendedFramePosition(CWin32ApplicationView *this, struct tagRECT *a2)
{
  HWND v4; // rbx
  HRESULT WindowAttribute; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  struct tagRECT pvAttribute; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  SetRectEmpty(a2);
  v4 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !v4 )
    return 1400LL;
  SetRectEmpty(a2);
  pvAttribute = 0LL;
  WindowAttribute = DwmGetWindowAttribute(v4, 9u, &pvAttribute, 0x10u);
  v6 = WindowAttribute;
  if ( WindowAttribute < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)WindowAttribute);
    return v6;
  }
  else
  {
    result = 0LL;
    *a2 = pvAttribute;
  }
  return result;
}

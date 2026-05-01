/*
 * XREFs of ?GetHostedRect@FrameWrapper@@UEAAJPEAUtagRECT@@@Z @ 0x18018EE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FrameWrapper::GetHostedRect(FrameWrapper *this, struct tagRECT *a2)
{
  HWND v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  struct tagRECT Rect; // [rsp+20h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  SetRectEmpty(a2);
  v4 = (HWND)*((_QWORD *)this + 4);
  Rect = 0LL;
  if ( !GetClientRect(v4, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6F,
             (unsigned int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
             v5);
  v7 = *((_QWORD *)this + 2);
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 120LL))(v7, &v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  else
  {
    Rect.left += v11;
    Rect.top += DWORD1(v11);
    Rect.right += DWORD2(v11);
    Rect.bottom += HIDWORD(v11);
    result = 0LL;
    *a2 = Rect;
  }
  return result;
}

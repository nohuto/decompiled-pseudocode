/*
 * XREFs of ?GetHostedRect@FrameWrapper@@UEAAJPEAUtagRECT@@@Z @ 0x1801959F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FrameWrapper::GetHostedRect(FrameWrapper *this, struct tagRECT *a2)
{
  HWND v4; // rcx
  const char *v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
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
  v6 = *((_QWORD *)this + 2);
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 120LL))(v6, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v7);
    return v8;
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

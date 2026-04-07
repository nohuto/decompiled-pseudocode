/*
 * XREFs of ?SetDpi@CAcrylicSheet@@QEAAJH@Z @ 0x18009418C
 * Callers:
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6060 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetBorderDpi@CWindowBorder@@QEAAJH@Z @ 0x1800941E4 (-SetBorderDpi@CWindowBorder@@QEAAJH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::SetDpi(CAcrylicSheet *this, int a2)
{
  CWindowBorder *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *((_DWORD *)this + 105) )
    return 0LL;
  *((_DWORD *)this + 105) = a2;
  v2 = (CWindowBorder *)*((_QWORD *)this + 32);
  if ( !v2 )
    return 0LL;
  v3 = CWindowBorder::SetBorderDpi(v2, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x353,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}

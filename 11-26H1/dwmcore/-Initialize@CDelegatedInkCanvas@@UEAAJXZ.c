/*
 * XREFs of ?Initialize@CDelegatedInkCanvas@@UEAAJXZ @ 0x18026CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x18026C8FC (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 */

__int64 __fastcall CDelegatedInkCanvas::Initialize(CDelegatedInkCanvas *this)
{
  int PointQueue; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  PointQueue = CDelegatedInkCanvas::CreatePointQueue(this);
  v2 = PointQueue;
  if ( PointQueue >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
    (const char *)(unsigned int)PointQueue);
  return v2;
}

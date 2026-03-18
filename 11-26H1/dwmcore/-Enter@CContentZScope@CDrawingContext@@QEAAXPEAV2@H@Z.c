/*
 * XREFs of ?Enter@CContentZScope@CDrawingContext@@QEAAXPEAV2@H@Z @ 0x180200EB0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CDrawingContext::CContentZScope::Enter(
        CDrawingContext::CContentZScope *this,
        struct CDrawingContext *a2,
        int a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)a2 + 8069) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A12,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      a4);
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1994);
  *((_DWORD *)a2 + 1994) = a3;
  *(_BYTE *)(*(_QWORD *)this + 8069LL) = 1;
}

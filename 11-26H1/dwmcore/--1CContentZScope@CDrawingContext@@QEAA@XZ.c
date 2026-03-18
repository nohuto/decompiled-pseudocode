/*
 * XREFs of ??1CContentZScope@CDrawingContext@@QEAA@XZ @ 0x1802013A0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180077EA0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CDrawingContext::CContentZScope::~CContentZScope(
        CDrawingContext::CContentZScope *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( !*(_BYTE *)(v4 + 8069) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1A07,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        a4);
    *(_DWORD *)(v4 + 7976) = *((_DWORD *)this + 2);
    *(_BYTE *)(*(_QWORD *)this + 8069LL) = 0;
  }
}

/*
 * XREFs of ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800EA51C
 * Callers:
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180172968 (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CRegion::AddRectangles(CRegion *this, const struct tagRECT *a2, unsigned int a3)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CRegion::TryAddRectangles(this, a2, a3);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D1,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v3,
      v4);
}

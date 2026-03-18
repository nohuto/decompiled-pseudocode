/*
 * XREFs of ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1801103D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18002D018 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x1800906F0 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180110440 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180110538 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 */

void __fastcall CBackdropVisualImage::CreateDrawingContext(CBackdropVisualImage *this, struct CDrawingContext **a2)
{
  DwmDbg::DbgString *v4; // rbx
  DwmDbg::DbgString *v5; // rax
  char *v6; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  CDrawingContext::Create(a2);
  *((_QWORD *)*a2 + 24) = this;
  CBackdropVisualImage::EnsureAncestorList(this);
  v4 = DwmDbg::DbgString::DbgString(&v6, word_1802F327A);
  v5 = DwmDbg::DbgString::DbgString(&v7, "BVI-FullRender");
  CBackdropVisualImage::LogEtwEvent(this, v5, v4);
}

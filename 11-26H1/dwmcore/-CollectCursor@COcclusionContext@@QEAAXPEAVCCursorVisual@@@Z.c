/*
 * XREFs of ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x1801DBAF0
 * Callers:
 *     ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1801DDC50 (-CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1800D1CB0 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E7258 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 */

void __fastcall COcclusionContext::CollectCursor(COcclusionContext *this, struct CCursorVisual *a2)
{
  __int64 v2; // rax
  int v3; // ebp
  bool v5; // al
  COverlayContext **v6; // rbx
  COverlayContext **v7; // rdi

  v2 = *((_QWORD *)a2 + 87);
  v3 = (int)a2;
  v5 = !*(_BYTE *)(v2 + 112) && !*(_QWORD *)(v2 + 264);
  *((_BYTE *)this + 1127) = v5;
  CMatrixStack::GetTopByReference((COcclusionContext *)((char *)this + 24));
  CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((__int64)this + 120);
  v6 = (COverlayContext **)*((_QWORD *)this + 170);
  v7 = (COverlayContext **)*((_QWORD *)this + 171);
  while ( v6 != v7 )
  {
    if ( !(unsigned __int8)COverlayContext::TryEnableHardwareCursor(*v6, v3) )
      *((_BYTE *)this + 1127) = 0;
    ++v6;
  }
  *((_BYTE *)this + 1126) = 0;
}

/*
 * XREFs of ??1?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAA@XZ @ 0x1800922D4
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002D120 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CVisualTreePath>::~unique_ptr<CVisualTreePath>(__int64 **a1)
{
  __int64 *v1; // rbx
  void *v2; // r9
  __int64 v3; // r8
  __int64 v4; // r8
  void *v5; // rdi
  bool v6; // zf
  HANDLE ProcessHeap; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  v2 = 0LL;
  if ( *a1 )
  {
    v3 = (v1[1] - *v1) >> 4;
    if ( v3 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v8, *v1, v3);
      v1[1] += -16 * v4;
    }
    v5 = (void *)*v1;
    v6 = *v1 == (_QWORD)(v1 + 3);
    *v1 = (__int64)v2;
    if ( v6 )
      v5 = v2;
    if ( v5 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    operator delete(v1, 0x38uLL);
  }
}

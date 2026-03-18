/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006C3D0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FDB90 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180202650 (-RenderSpriteContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2AEBVCMILMatrix@@AEBVCShapePtr@@@Z @ 0x1802687D8 (-RenderFlipExBorders@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBV-$TMi.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18005E63C (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006CFD0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180210F9C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18021ED24 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v6; // esi
  float v7; // xmm6_4
  int v8; // eax
  bool v9; // bp
  _OWORD *v10; // rax
  ClipPlaneIterator *v11; // r14
  int v12; // eax
  int v14; // eax
  int updated; // eax
  _OWORD v16[4]; // [rsp+30h] [rbp-78h] BYREF
  int v17; // [rsp+70h] [rbp-38h]

  v2 = *((_DWORD *)this + 790);
  v3 = 0;
  v6 = 0;
  if ( v2 )
    v7 = *(float *)(*((_QWORD *)this + 394) + 4LL * (unsigned int)(v2 - 1));
  else
    v7 = FLOAT_1_0;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) >= 0.0000011920929 )
  {
    v8 = *((_DWORD *)this + 72);
    v9 = 0;
    if ( v8 )
      v10 = (_OWORD *)(*((_QWORD *)this + 35) + 68LL * (unsigned int)(v8 - 1));
    else
      v10 = &CMILMatrix::Identity;
    v16[0] = *v10;
    v16[1] = v10[1];
    v16[2] = v10[2];
    v16[3] = v10[3];
    v17 = *((_DWORD *)v10 + 16);
    if ( *((_QWORD *)this + 412) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(this);
      v6 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x37Fu, 0LL);
        goto LABEL_11;
      }
      v11 = (CDrawingContext *)((char *)this + 3304);
      v9 = *((_BYTE *)this + 3304) == 0;
    }
    else
    {
      v11 = (CDrawingContext *)((char *)this + 3304);
    }
    if ( v9 )
      goto LABEL_17;
    while ( 1 )
    {
      v12 = CDrawListCache::Render(a2, this, v16);
      v6 = v12;
      if ( v12 < 0 )
        break;
      if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v11) )
        goto LABEL_11;
LABEL_17:
      v14 = ClipPlaneIterator::UpdateClippingPlanes(v11);
      v6 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x38Bu, 0LL);
        goto LABEL_11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x391u, 0LL);
  }
LABEL_11:
  if ( v6 != -2003304441 )
    return v6;
  return v3;
}

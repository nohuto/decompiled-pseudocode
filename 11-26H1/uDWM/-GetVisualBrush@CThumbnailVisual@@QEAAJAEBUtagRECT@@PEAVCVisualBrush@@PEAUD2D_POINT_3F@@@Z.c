/*
 * XREFs of ?GetVisualBrush@CThumbnailVisual@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800C9C54
 * Callers:
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@_NPEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800CF984 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18005CF70 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Clone@CVisualBrush@@QEBAJPEAV1@@Z @ 0x18009B2A0 (-Clone@CVisualBrush@@QEBAJPEAV1@@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NAEBUtagRECT@@0@Z @ 0x1800CAC70 (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NAEBUtagRECT@@0@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z @ 0x1800CACFC (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NMM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::GetVisualBrush(
        CThumbnailVisual *this,
        const struct tagRECT *a2,
        struct CVisualBrush *a3,
        struct D2D_POINT_3F *a4)
{
  CVisualBrush *v4; // r14
  int v5; // ebx
  unsigned int v10; // ebp
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm3_4
  float v14; // xmm2_4
  int v15; // eax
  const struct tagRECT *v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9

  v4 = (CThumbnailVisual *)((char *)this + 368);
  v5 = 0;
  v10 = -2147467259;
  if ( *((_QWORD *)this + 46) && *((_QWORD *)this + 45) && !CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v11 = *((_QWORD *)this + 44);
    if ( v11 && (*(_BYTE *)(v11 + 36) & 2) != 0 )
      IsRectEmpty((const RECT *)(v11 + 56));
    v12 = 0;
    v13 = *((float *)this + 105);
    if ( a2->right - a2->left >= 0 )
      v12 = a2->right - a2->left;
    v14 = (float)v12;
    if ( CThumbnailVisual::s_IsCloseEnoughToReuse((float)v12, *((float *)this + 105)) )
    {
      v15 = 0;
      if ( a2->bottom - a2->top >= 0 )
        v15 = a2->bottom - a2->top;
      if ( CThumbnailVisual::s_IsCloseEnoughToReuse((float)v15, *((float *)this + 106))
        && CThumbnailVisual::s_IsCloseEnoughToReuse(a2, v16) )
      {
        *(float *)a4 = v14 / v13;
        if ( a2->bottom - a2->top >= 0 )
          v5 = a2->bottom - a2->top;
        *((float *)a4 + 1) = (float)v5 / *((float *)this + 106);
        return (unsigned int)CVisualBrush::Clone(v4, a3, v17, v18);
      }
    }
  }
  return v10;
}

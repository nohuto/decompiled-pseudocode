/*
 * XREFs of ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@22@Z @ 0x1801A6610
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::IsOverlayAssigned(
        COverlayContext *this,
        const struct CVisual *a2,
        struct _LUID a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  __int64 v6; // r11
  char v7; // bl
  unsigned int v8; // r10d
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  v6 = *((_QWORD *)this + 1586);
  v7 = 0;
  v8 = 0;
  v9 = 0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 1587) - v6) >> 3);
  while ( v8 < (unsigned int)v9 )
  {
    v12 = 392LL * v8;
    if ( *(const struct CVisual **)(v12 + v6 + 8) == a2 && *(_QWORD *)(*(_QWORD *)(v12 + v6 + 16) + 40LL) == a3 )
    {
      if ( v8 != -1 )
      {
        v7 = 1;
        v11 = 392LL * (int)v8;
        if ( a4 )
          *a4 = *(struct tagRECT *)(v11 + v6 + 68);
        if ( a5 )
          *a5 = *(struct tagRECT *)(v11 + v6 + 52);
        if ( a6 )
          *a6 = *(struct tagRECT *)(v11 + v6 + 244);
      }
      return v7;
    }
    ++v8;
  }
  return v7;
}

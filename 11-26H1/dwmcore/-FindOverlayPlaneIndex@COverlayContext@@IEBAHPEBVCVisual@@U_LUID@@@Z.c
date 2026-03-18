/*
 * XREFs of ?FindOverlayPlaneIndex@COverlayContext@@IEBAHPEBVCVisual@@U_LUID@@@Z @ 0x1801BFB70
 * Callers:
 *     ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801BFAA4 (-NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV-$TMilRect_@HUtagRE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayPlaneIndex(
        COverlayContext *this,
        const struct CVisual *a2,
        struct _LUID a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r10d
  unsigned int i; // r9d
  __int64 v7; // rax

  v3 = *((_QWORD *)this + 1586);
  v4 = -1;
  for ( i = 0; i < 438261969 * (unsigned int)((*((_QWORD *)this + 1587) - v3) >> 3); ++i )
  {
    v7 = 392LL * i;
    if ( *(const struct CVisual **)(v7 + v3 + 8) == a2 && *(_QWORD *)(*(_QWORD *)(v7 + v3 + 16) + 40LL) == a3 )
      return i;
  }
  return v4;
}

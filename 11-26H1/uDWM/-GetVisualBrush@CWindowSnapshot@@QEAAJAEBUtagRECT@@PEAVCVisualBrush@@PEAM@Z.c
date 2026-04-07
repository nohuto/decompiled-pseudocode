/*
 * XREFs of ?GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z @ 0x1800E5148
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NAEBUD2D_POINTANDSIZE_L@@PEAVCVisualBrush@@@Z @ 0x1800BF694 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NAEBUD2D_POINTANDSIZE_L@@PEAVCVisualBrush@@@Z.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@_NPEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800CF984 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?Clone@CVisualBrush@@QEBAJPEAV1@@Z @ 0x18009B2A0 (-Clone@CVisualBrush@@QEBAJPEAV1@@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NAEBUtagRECT@@@Z @ 0x1800E51A0 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::GetVisualBrush(
        CWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CVisualBrush *a3,
        float *a4)
{
  __int64 v7; // r8
  const char *v8; // r9
  unsigned int v9; // r11d

  if ( CWindowSnapshot::HasCVIOfCompatibleSize(this, a2) )
  {
    *a4 = *((float *)this + 14);
    return (unsigned int)CVisualBrush::Clone((CWindowSnapshot *)((char *)this + 40), a3, v7, v8);
  }
  return v9;
}

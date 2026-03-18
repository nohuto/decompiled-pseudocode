/*
 * XREFs of ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18012F968
 * Callers:
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801D5CC0 (-AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AAD50 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AC16C (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this, const struct MilRectU *a2)
{
  int v2; // r11d
  _DWORD *v3; // r8
  int v4; // ebx
  int v5; // eax
  int v6; // r10d

  v2 = *(_DWORD *)a2;
  v3 = (_DWORD *)((char *)this + 8);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 3);
  *(_QWORD *)this = (char *)this + 8;
  if ( v2 >= v4 || v5 >= v6 )
  {
    *v3 = 0;
  }
  else
  {
    *v3 = 2;
    *((_DWORD *)this + 3) = v2;
    *((_DWORD *)this + 5) = v5;
    *((_DWORD *)this + 4) = v4;
    *((_DWORD *)this + 6) = 16;
    *((_DWORD *)this + 9) = v2;
    *((_DWORD *)this + 10) = v4;
    *((_DWORD *)this + 7) = v6;
    *((_DWORD *)this + 8) = 16;
  }
  return this;
}

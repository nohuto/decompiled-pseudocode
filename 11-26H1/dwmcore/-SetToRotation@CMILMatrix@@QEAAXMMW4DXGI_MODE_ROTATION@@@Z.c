/*
 * XREFs of ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18005EDC0
 * Callers:
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180107384 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 *     ?CalcRotationTransform@CSwapChainRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x1802ACAEC (-CalcRotationTransform@CSwapChainRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005FB24 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18021C66C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::SetToRotation(CMILMatrix *this, float a2, float a3, enum DXGI_MODE_ROTATION a4)
{
  int v4; // r9d
  int v5; // r9d
  CMILMatrix *v6; // rcx

  *(_QWORD *)this = 1065353216LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  *((_BYTE *)this + 65) &= 0xE9u;
  *((_BYTE *)this + 65) |= 0x29u;
  *((_BYTE *)this + 64) = -86;
  v4 = a4 - 2;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      CMILMatrix::Rotate90(this);
      a2 = a3;
      a3 = 0.0;
    }
    else
    {
      CMILMatrix::Scale(this, -1.0, -1.0, 1.0);
    }
  }
  else
  {
    CMILMatrix::Rotate270(this);
    a3 = a2;
    a2 = 0.0;
  }
  CMILMatrix::Translate(v6, a2, a3);
}

/*
 * XREFs of ?CalcRotationTransform@CSwapChainRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x1802ACAEC
 * Callers:
 *     ?GetTransform@CSwapChainRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802ADA90 (-GetTransform@CSwapChainRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 * Callees:
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18005EDC0 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?D3DDDIRotationToDXGIRotation@@YA?AW4DXGI_MODE_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x180186CF0 (-D3DDDIRotationToDXGIRotation@@YA-AW4DXGI_MODE_ROTATION@@W4_D3DDDI_ROTATION@@@Z.c)
 */

char __fastcall CSwapChainRealization::CalcRotationTransform(
        CSwapChainRealization *this,
        const struct D2D_SIZE_U *a2,
        struct CMILMatrix *a3)
{
  enum DXGI_MODE_ROTATION v3; // eax
  int *v4; // rdx
  __int64 v5; // r8
  char result; // al

  v3 = (unsigned int)D3DDDIRotationToDXGIRotation(*((_DWORD *)this + 37));
  if ( v3 == DXGI_MODE_ROTATION_IDENTITY )
  {
    result = 0;
    *(_QWORD *)v5 = 1065353216LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 20) = 1065353216LL;
    *(_QWORD *)(v5 + 28) = 0LL;
    *(_DWORD *)(v5 + 36) = 0;
    *(_QWORD *)(v5 + 40) = 1065353216LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 56) = 0;
    *(_DWORD *)(v5 + 60) = 1065353216;
    *(_BYTE *)(v5 + 65) &= 0xE9u;
    *(_BYTE *)(v5 + 65) |= 0x29u;
    *(_BYTE *)(v5 + 64) = -86;
  }
  else
  {
    CMILMatrix::SetToRotation((CMILMatrix *)v5, (float)*v4, (float)v4[1], v3);
    return 1;
  }
  return result;
}

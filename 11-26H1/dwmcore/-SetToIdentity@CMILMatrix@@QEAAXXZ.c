/*
 * XREFs of ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18016CEE0
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800602F0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z @ 0x1800B1F20 (-UpdateScopeTransforms@CCpuClippingData@@AEAAXPEAVCVisual@@_NPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::SetToIdentity(CMILMatrix *this)
{
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
}

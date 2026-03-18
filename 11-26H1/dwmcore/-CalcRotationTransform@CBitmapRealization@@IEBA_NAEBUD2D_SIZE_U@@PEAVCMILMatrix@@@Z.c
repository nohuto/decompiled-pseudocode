/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@IEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18005FC80
 * Callers:
 *     ?GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x180204A10 (-GetContentBoundsAndTransform@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0PEAVCMILMatrix@@@Z @ 0x1802AEF50 (-GetContentBoundsAndTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005FB24 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18021C66C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        const struct D2D_SIZE_U *a2,
        struct CMILMatrix *a3)
{
  int v5; // ecx
  float height; // xmm6_4
  signed int width; // eax
  float v8; // xmm7_4
  int v9; // ecx
  CMILMatrix *v10; // rcx
  float v11; // xmm2_4
  float v12; // xmm1_4
  char v14; // al

  v5 = (*(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 56LL))(this);
  if ( v5 != 1 )
  {
    height = (float)(int)a2->height;
    width = a2->width;
    *(_QWORD *)a3 = 1065353216LL;
    v8 = (float)width;
    *((_QWORD *)a3 + 1) = 0LL;
    *((_DWORD *)a3 + 4) = 0;
    *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a3 + 28) = 0LL;
    *((_DWORD *)a3 + 9) = 0;
    *((_QWORD *)a3 + 5) = 1065353216LL;
    *((_QWORD *)a3 + 6) = 0LL;
    *((_DWORD *)a3 + 14) = 0;
    *((_DWORD *)a3 + 15) = 1065353216;
    LOBYTE(width) = *((_BYTE *)a3 + 65);
    *((_BYTE *)a3 + 64) = -86;
    *((_BYTE *)a3 + 65) = width & 0xC0 | 0x29;
    if ( v5 == 4 )
    {
      CMILMatrix::Rotate90(a3);
      v12 = height;
      v11 = 0.0;
    }
    else
    {
      v9 = v5 - 2;
      if ( v9 )
      {
        if ( v9 != 1 )
          return 1;
        CMILMatrix::Scale(a3, -1.0, -1.0, 1.0);
        v11 = height;
        v12 = v8;
      }
      else
      {
        CMILMatrix::Rotate270(a3);
        v11 = v8;
        v12 = 0.0;
      }
    }
    CMILMatrix::Translate(v10, v12, v11);
    return 1;
  }
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 6) = 0LL;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  v14 = *((_BYTE *)a3 + 65);
  *((_BYTE *)a3 + 64) = -86;
  *((_BYTE *)a3 + 65) = v14 & 0xC0 | 0x29;
  return 0;
}

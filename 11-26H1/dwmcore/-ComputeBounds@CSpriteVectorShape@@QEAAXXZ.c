/*
 * XREFs of ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180182380
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180181DD8 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005B218 (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1800ABFB0 (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1801738B0 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpriteVectorShape::ComputeBounds(CSpriteVectorShape *this)
{
  CGeometry *v2; // rcx
  __int64 v3; // r8
  char v4; // al
  bool v5; // al
  float *v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  *((_WORD *)this + 48) = 0;
  v2 = (CGeometry *)*((_QWORD *)this + 16);
  v8 = 0LL;
  v9 = 0;
  if ( v2 )
  {
    CGeometry::GetShapeData(v2, 0LL, (struct CShapePtr *)&v8);
    if ( v8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v8 + 16))(v8) )
      {
        if ( *((_QWORD *)this + 15) && (int)CSpriteVectorShape::EnsureStrokeStyleForBounds(this) >= 0 )
          *((_BYTE *)this + 97) = (int)CShapePtr::GetWidenedBounds(&v8, (__int64)this + 80, v3, *((_QWORD *)this + 17)) >= 0;
        v4 = *((_BYTE *)this + 97);
        if ( !v4 && *((_QWORD *)this + 13) )
        {
          v4 = (int)CShapePtr::GetTightBounds((__int64 *)&v8) >= 0;
          *((_BYTE *)this + 97) = v4;
        }
        if ( v4 )
        {
          v5 = !IsEmpty((const struct D2D_RECT_F *)this + 5);
          *((_BYTE *)this + 97) = v5;
          if ( v5 )
          {
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(v6, 0.25, 0.25);
            *((_BYTE *)this + 97) = (int)CShapePtr::GetWidenedBounds(&v8, (__int64)this + 152, v7, 0LL) >= 0;
          }
        }
      }
    }
  }
  CShapePtr::~CShapePtr((CShapePtr *)&v8);
}

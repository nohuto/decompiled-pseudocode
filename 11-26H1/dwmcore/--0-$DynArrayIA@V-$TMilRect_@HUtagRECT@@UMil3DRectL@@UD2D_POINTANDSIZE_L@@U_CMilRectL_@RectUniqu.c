/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x1800AFAC0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE51C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x1800AF944 (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 * Callees:
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

__int64 __fastcall DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>,16,0>(
        __int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rsi

  v1 = (_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 16) = 16;
  *(_QWORD *)a1 = a1 + 32;
  *(_QWORD *)(a1 + 8) = a1 + 32;
  v3 = 16LL;
  *(_QWORD *)(a1 + 20) = 16LL;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v1);
    v1 += 2;
    --v3;
  }
  while ( v3 );
  return a1;
}

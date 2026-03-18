/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180185338
 * Callers:
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC (-GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1801853C0 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtagRECT@@@Z @ 0x18018CEC4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtag.c)
 */

char __fastcall CWindowNode::IntersectWithMaximizedClip(__int64 a1)
{
  char result; // al
  _DWORD *v2; // rcx
  __m128i *v3; // r9
  __int64 v4; // r10
  __int32 v5; // edx
  __int32 v6; // eax
  int v7; // r8d
  __int32 v8; // ecx
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  result = AreAllMarginsZero((const struct _MARGINS *)(a1 + 748));
  if ( !result )
  {
    v9 = v3[44];
    v5 = v3[47].m128i_i32[1] + v9.m128i_i32[1];
    v6 = v9.m128i_i32[3] - v3[47].m128i_i32[2];
    v7 = *v2 + _mm_cvtsi128_si32(v9);
    v8 = v9.m128i_i32[2] - v3[47].m128i_i32[0];
    v9.m128i_i64[0] = __PAIR64__(v5, v7);
    if ( v8 <= v7 )
      v8 = v7;
    v9.m128i_i32[2] = v8;
    if ( v6 <= v5 )
      v6 = v5;
    v9.m128i_i32[3] = v6;
    return TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v4, &v9);
  }
  return result;
}

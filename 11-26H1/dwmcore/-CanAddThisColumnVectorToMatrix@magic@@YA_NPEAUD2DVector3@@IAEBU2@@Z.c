/*
 * XREFs of ?CanAddThisColumnVectorToMatrix@magic@@YA_NPEAUD2DVector3@@IAEBU2@@Z @ 0x18017CD80
 * Callers:
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18017C6DC (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 * Callees:
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18017A3B8 (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 *     ?VectorInsideAngleThreshold@magic@@YA_NAEBUD2DVector3@@0@Z @ 0x18017E604 (-VectorInsideAngleThreshold@magic@@YA_NAEBUD2DVector3@@0@Z.c)
 */

char __fastcall magic::CanAddThisColumnVectorToMatrix(
        magic *this,
        struct D2DVector3 *a2,
        __int64 a3,
        const struct D2DVector3 *a4)
{
  int v6; // esi
  char v7; // bp
  const struct D2DVector3 *v8; // r8
  const struct D2DVector3 *v9; // r8
  float *v10; // r14
  const struct D2DVector3 *v11; // r8
  unsigned __int32 v12; // xmm2_4

  v6 = (int)a2;
  v7 = 1;
  if ( D3DXVectorAreCloseToZero((const struct D2DVector3 *)a3) )
    return 0;
  if ( magic::VectorInsideAngleThreshold(this, v8, v8) )
    return 0;
  v10 = (float *)((char *)this + 12);
  if ( magic::VectorInsideAngleThreshold((magic *)((char *)this + 12), (const struct D2DVector3 *)a3, v9)
    || magic::VectorInsideAngleThreshold((magic *)((char *)this + 24), (const struct D2DVector3 *)a3, v11) )
  {
    return 0;
  }
  if ( v6 == 2 )
  {
    if ( (v12 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0], 0.0 < 0.000099999997)
      && COERCE_FLOAT(*((_DWORD *)this + 2) & v12) < 0.000099999997
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *((float *)this + 2)) & v12) <= 0.0049999999 )
    {
      if ( (0.0 < 0.000099999997 && COERCE_FLOAT(*((_DWORD *)this + 5) & v12) < 0.000099999997
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *((float *)this + 5)) & v12) <= 0.0049999999)
        && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)(a3 + 8) & v12) < 0.000099999997
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *(float *)(a3 + 8)) & v12) <= 0.0049999999) )
      {
        return 0;
      }
    }
    if ( (0.0 < 0.000099999997 && COERCE_FLOAT(*((_DWORD *)this + 1) & v12) < 0.000099999997
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *((float *)this + 1)) & v12) <= 0.0049999999)
      && (0.0 < 0.000099999997 && COERCE_FLOAT(*((_DWORD *)this + 4) & v12) < 0.000099999997
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *((float *)this + 4)) & v12) <= 0.0049999999)
      && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)(a3 + 4) & v12) < 0.000099999997
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *(float *)(a3 + 4)) & v12) <= 0.0049999999)
      || (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)this & v12) < 0.000099999997
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *(float *)this) & v12) <= 0.0049999999)
      && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)v10 & v12) < 0.000099999997
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *v10) & v12) <= 0.0049999999)
      && (0.0 < 0.000099999997 && COERCE_FLOAT(*(_DWORD *)a3 & v12) < 0.000099999997
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - *(float *)a3) & v12) <= 0.0049999999) )
    {
      return 0;
    }
  }
  return v7;
}

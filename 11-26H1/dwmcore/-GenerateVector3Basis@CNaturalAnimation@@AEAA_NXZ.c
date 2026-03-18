/*
 * XREFs of ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801C8FC8
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180044E70 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x18027B804 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801AF7C4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1801BE7E8 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x1801E1C00 (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18020FDD0 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     atan2f_0 @ 0x1802B96B4 (atan2f_0.c)
 */

char __fastcall CNaturalAnimation::GenerateVector3Basis(CNaturalAnimation *this)
{
  char v1; // r9
  char v3; // al
  __m128 v5; // xmm6
  __m128 v6; // xmm7
  __m128i v7; // xmm8
  __int32 v8; // xmm3_4
  int v9; // edi
  unsigned __int64 v10; // xmm9_8
  float *v11; // rax
  float *v12; // r8
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  const struct D2DMatrix *v16; // r8
  unsigned __int64 v17; // [rsp+28h] [rbp-19h] BYREF
  int v18; // [rsp+30h] [rbp-11h]
  _BYTE v19[56]; // [rsp+38h] [rbp-9h] BYREF

  v1 = 0;
  v3 = *((_BYTE *)this + 532);
  if ( (v3 & 4) != 0 )
  {
    v5 = (__m128)*((unsigned int *)this + 73);
    v6 = (__m128)*((unsigned int *)this + 74);
    v5.m128_f32[0] = v5.m128_f32[0] - *((float *)this + 76);
    v6.m128_f32[0] = v6.m128_f32[0] - *((float *)this + 77);
    v7 = (__m128i)*((unsigned int *)this + 75);
    *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 - *((float *)this + 78);
    COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    v18 = v7.m128i_i32[0];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(v5.m128_f32[0] * v5.m128_f32[0]))
                      + (float)(*(float *)v7.m128i_i32 * *(float *)v7.m128i_i32)) & v8) >= 0.0000011920929 )
    {
      v9 = _mm_cvtsi128_si32(v7);
      v10 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
      v17 = v10;
    }
    else
    {
      v9 = *((_DWORD *)this + 81);
      v10 = *(_QWORD *)((char *)this + 316);
      v17 = v10;
      v6.m128_i32[0] = HIDWORD(v10);
      v5.m128_i32[0] = v10;
      v7.m128i_i32[0] = v9;
      v18 = v9;
    }
    if ( (v3 & 1) == 0
      || (v11 = (float *)D3DXVec3Cross(
                           (CNaturalAnimation *)((char *)this + 328),
                           (const struct D2DVector3 *)&v17,
                           (CNaturalAnimation *)((char *)this + 328)),
          COERCE_FLOAT(v8 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]),
          COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v11[1] * v11[1]) + (float)(*v11 * *v11)) + (float)(v11[2] * v11[2])) & v8) >= 0.0000011920929)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v12[1] * v12[1]) + (float)(*v12 * *v12)) + (float)(v12[2] * v12[2])) & v8) < 0.0000011920929 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(v5.m128_f32[0] * v5.m128_f32[0]))
                        + (float)(*(float *)v7.m128i_i32 * *(float *)v7.m128i_i32)) & v8) >= 0.0000011920929 )
      {
        v13 = FLOAT_1_0;
        if ( v5.m128_f32[0] == 0.0 )
          v14 = 0.0;
        else
          v14 = FLOAT_1_0;
        if ( v5.m128_f32[0] != 0.0 )
          v13 = COERCE_FLOAT(v6.m128_i32[0] ^ _xmm) / v5.m128_f32[0];
        v17 = __PAIR64__(LODWORD(v14), LODWORD(v13));
        v18 = 0;
        D3DXVec3Normalize((struct D2DVector3 *)&v17, (const struct D2DVector3 *)&v17);
        v15 = atan2f_0(
                COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)&v17 + 1) * v5.m128_f32[0]) - (float)(*(float *)&v17 * v6.m128_f32[0])) ^ _xmm),
                *(float *)v7.m128i_i32);
        D3DXQuaternionRotationAxis((struct D2DQuaternion *)v19, (const struct D2DVector3 *)&v17, v15);
        D2DMatrixRotationQuaternion((CNaturalAnimation *)((char *)this + 404), (const struct D2DQuaternion *)v19);
        D2DMatrixInverse((CNaturalAnimation *)((char *)this + 468), 0LL, v16);
        v1 = 1;
      }
    }
    *((_BYTE *)this + 532) &= ~4u;
    *((_QWORD *)this + 41) = v10;
    *((_DWORD *)this + 84) = v9;
  }
  return v1;
}

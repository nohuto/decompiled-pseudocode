/*
 * XREFs of ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180197E80
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@QEAAAEAUD2D_POINT_2F@@AEAU2@@Z @ 0x180228CEC (--$emplace_back@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@std@@@st.c)
 */

void __fastcall CTransformedGeometryHelper::AddLines(
        CTransformedGeometryHelper *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  unsigned __int32 v7; // xmm6_4
  __int64 v8; // rbp
  __int64 v9; // r8
  float x; // xmm5_4
  float y; // xmm2_4
  char v12; // al
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // [rsp+50h] [rbp+8h] BYREF
  float v18; // [rsp+54h] [rbp+Ch]

  v3 = (_QWORD *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  if ( v5 != *((_QWORD *)this + 6) )
    *((_QWORD *)this + 6) = v5;
  if ( a3 )
  {
    v7 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v8 = a3;
    do
    {
      v9 = *((_QWORD *)this + 2);
      x = a2->x;
      y = a2->y;
      v12 = (char)(4 * *(_BYTE *)(v9 + 65)) >> 6;
      v13 = (float)((float)(y * *(float *)(v9 + 16)) + (float)(a2->x * *(float *)v9)) + *(float *)(v9 + 48);
      v14 = (float)((float)(y * *(float *)(v9 + 20)) + (float)(a2->x * *(float *)(v9 + 4))) + *(float *)(v9 + 52);
      v17 = v13;
      v18 = v14;
      if ( v12 > 0
        || v12 >= 0
        && (LODWORD(v15) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v9 + 28) & v7) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(v9 + 12) & v7) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(v9 + 60) & v7))
                           - 1.0) & v7,
            *(_BYTE *)(v9 + 65) = (32 * (v15 >= 0.000081380211) - 16) ^ (*(_BYTE *)(v9 + 65) ^ (32
                                                                                              * (v15 >= 0.000081380211)
                                                                                              - 16)) & 0xCF,
            v15 >= 0.000081380211) )
      {
        v16 = (float)((float)(y * *(float *)(v9 + 28)) + (float)(x * *(float *)(v9 + 12))) + *(float *)(v9 + 60);
        if ( COERCE_FLOAT(LODWORD(v16) & v7) >= 0.000081380211 )
        {
          v17 = v13 / v16;
          v18 = v14 / v16;
        }
      }
      std::vector<D2D_POINT_2F>::emplace_back<D2D_POINT_2F &>(v3, &v17);
      ++a2;
      --v8;
    }
    while ( v8 );
    v3 = (_QWORD *)((char *)this + 40);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 48LL))(
    *((_QWORD *)this + 4),
    *v3,
    (__int64)(v3[1] - *v3) >> 3);
}

/*
 * XREFs of sub_18008AD00 @ 0x18008AD00
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18008AD00(__int64 a1, __int64 a2, int a3, char a4, int a5, char a6, char a7, float a8)
{
  float v11; // xmm0_4
  bool v12; // zf
  unsigned __int32 v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // [rsp+24h] [rbp-24h]

  v23 = *((float *)&a2 + 1);
  if ( *(float *)(a1 + 1892) <= *(float *)(a1 + 1856) )
  {
    if ( a4 && a7 )
      *(float *)(a1 + 1900) = (float)((float)(*(float *)&a2 * a8) * 0.89999998) + *(float *)(a1 + 1900);
  }
  else if ( !*(_BYTE *)(a1 + 1898) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1);
  }
  *(float *)(a1 + 1872) = (float)(a8 * *(float *)(a1 + 1900)) + *(float *)(a1 + 1872);
  v11 = o_remainderf();
  v12 = *(_BYTE *)(a1 + 1898) == 0;
  v13 = _mm_load_si128((const __m128i *)&xmmword_180191740).m128i_u32[0];
  *(float *)(a1 + 1872) = v11;
  if ( v12 )
  {
    v14 = *(float *)(a1 + 1900) * 0.80000001;
    *(float *)(a1 + 1900) = v14;
    if ( COERCE_FLOAT(LODWORD(v14) & v13) < 1.0e-12 )
      *(_DWORD *)(a1 + 1900) = 0;
  }
  v15 = *(float *)(a1 + 1844);
  v16 = *(float *)(a1 + 1892);
  if ( v16 > v15 )
  {
    if ( *(float *)(a1 + 1876) < 0.050000001 && *(_BYTE *)(a1 + 1897) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
      v15 = *(float *)(a1 + 1844);
      v16 = *(float *)(a1 + 1892);
      v13 = _mm_load_si128((const __m128i *)&xmmword_180191740).m128i_u32[0];
    }
    goto LABEL_17;
  }
  v17 = *(float *)(a1 + 1844);
  v18 = *(float *)(a1 + 1892);
  if ( a4 && a7 )
  {
    *(float *)(a1 + 1884) = (float)((float)(v23 * a8) * 0.89999998) + *(float *)(a1 + 1884);
LABEL_17:
    v18 = v16;
    v17 = v15;
  }
  if ( v17 >= v18 )
  {
    v19 = *(float *)(a1 + 1884);
    *(float *)(a1 + 1884) = v19 * 0.80000001;
    *(float *)(a1 + 1876) = (float)(v19 * a8) + *(float *)(a1 + 1876);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 * 0.80000001) & v13) < 1.0e-12 )
      *(_DWORD *)(a1 + 1884) = 0;
  }
  if ( a6 )
    *(float *)(a1 + 1888) = (float)((float)-(float)a3 * 0.0099999998) + *(float *)(a1 + 1888);
  v20 = *(float *)(a1 + 1888);
  if ( v20 != 0.0 )
  {
    v21 = *(float *)(a1 + 1888);
    v22 = v20 * 0.80000001;
    *(float *)(a1 + 1888) = v22;
    *(float *)(a1 + 1880) = (float)(v21 * a8) + *(float *)(a1 + 1880);
    if ( COERCE_FLOAT(LODWORD(v22) & v13) < 1.0e-12 )
      *(_DWORD *)(a1 + 1888) = 0;
  }
}

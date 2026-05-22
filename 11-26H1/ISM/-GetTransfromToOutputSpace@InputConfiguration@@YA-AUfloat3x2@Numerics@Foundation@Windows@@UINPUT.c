/*
 * XREFs of ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_SPACE_REGION@@UtagRECT@@@Z @ 0x18010B930
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x1801BD8CC (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat3x2@012@AEBU3012@0@Z @ 0x18010B38C (--DNumerics@Foundation@Windows@@YA-AUfloat3x2@012@AEBU3012@0@Z.c)
 */

__m128i *__fastcall InputConfiguration::GetTransfromToOutputSpace(__int64 a1, __int64 a2, int *a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // r14d
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  __m128i *v16; // r11
  __int64 v17; // xmm0_8
  __m128i si128; // xmm7
  __int64 v19; // r10
  int v20; // eax
  int v21; // ecx
  float v22; // xmm5_4
  float v23; // xmm5_4
  int v24; // r9d
  int v25; // r9d
  int v26; // r9d
  __m128i v27; // xmm0
  float *v28; // rax
  float *v29; // rax
  __int64 v30; // xmm0_8
  float *v31; // rax
  float *v32; // r11
  __m128i v34; // [rsp+28h] [rbp-79h] BYREF
  __int64 v35; // [rsp+38h] [rbp-69h]
  __int128 v36; // [rsp+40h] [rbp-61h] BYREF
  __int64 v37; // [rsp+50h] [rbp-51h]
  __m128i v38; // [rsp+58h] [rbp-49h] BYREF
  float v39; // [rsp+68h] [rbp-39h]
  float v40; // [rsp+6Ch] [rbp-35h]
  __m128i v41; // [rsp+70h] [rbp-31h] BYREF
  __int64 v42; // [rsp+80h] [rbp-21h]
  float v43[6]; // [rsp+88h] [rbp-19h] BYREF
  float v44[22]; // [rsp+A0h] [rbp-1h] BYREF

  v4 = a3[1];
  v5 = *a3;
  v6 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 168);
  v9 = *(_DWORD *)(a2 + 172);
  v10 = (float)(a3[2] - *a3);
  v11 = (float)(a3[3] - v4);
  v12 = (float)(*(_DWORD *)(a2 + 8) - *(_DWORD *)a2);
  v13 = (float)(*(_DWORD *)(a2 + 12) - v7);
  v14 = (float)(*(_DWORD *)(a2 + 176) - v8);
  v15 = (float)(*(_DWORD *)(a2 + 180) - v9);
  if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
  {
    if ( ((*(_DWORD *)(a2 + 164) - 2) & 0xFFFFFFFD) == 0 )
    {
      v10 = (float)(a3[3] - a3[1]);
      v11 = (float)(a3[2] - *a3);
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(_QWORD *)((char *)&v36 + 4) = 0LL;
    v37 = 0LL;
    *(float *)&v36 = v14 / v10;
    *(float *)&v35 = (float)v8 - (float)((float)v5 * (float)(v14 / v10));
    *((float *)&v36 + 3) = v15 / v11;
    v34 = si128;
    *((float *)&v35 + 1) = (float)v9 - (float)((float)v4 * (float)(v15 / v11));
    Windows::Foundation::Numerics::operator*(v44, (float *)&v36, (float *)v34.m128i_i32);
    v20 = *(_DWORD *)(v19 + 184);
    v21 = *(_DWORD *)(v19 + 188);
    *(__int64 *)((char *)v34.m128i_i64 + 4) = 0LL;
    v35 = 0LL;
    *(float *)&v42 = (float)(v8 - v20);
    *((float *)&v42 + 1) = (float)(v9 - v21);
    *(float *)v34.m128i_i32 = v22 / v14;
    *(float *)&v34.m128i_i32[3] = v13 / v15;
    v41 = si128;
    v39 = (float)v6 - (float)((float)v20 * (float)(v22 / v14));
    v38 = si128;
    v40 = (float)v7 - (float)((float)v21 * (float)(v13 / v15));
    Windows::Foundation::Numerics::operator*((float *)&v36, (float *)v34.m128i_i32, (float *)v38.m128i_i32);
    v25 = v24 - 2;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
        {
LABEL_13:
          v31 = Windows::Foundation::Numerics::operator*(v43, v44, (float *)v41.m128i_i32);
          Windows::Foundation::Numerics::operator*(v32, v31, (float *)&v36);
          return v16;
        }
        v27 = _mm_load_si128((const __m128i *)&_xmm);
        v40 = v13;
        v39 = 0.0;
LABEL_12:
        v35 = 0LL;
        v38 = si128;
        v34 = v27;
        v28 = Windows::Foundation::Numerics::operator*(v43, (float *)v34.m128i_i32, (float *)v38.m128i_i32);
        v29 = Windows::Foundation::Numerics::operator*((float *)v38.m128i_i32, (float *)&v36, v28);
        v30 = *((_QWORD *)v29 + 2);
        v36 = *(_OWORD *)v29;
        v37 = v30;
        goto LABEL_13;
      }
      v27 = _mm_load_si128((const __m128i *)&_xmm_bf8000000000000000000000bf800000);
      v40 = v13;
    }
    else
    {
      v27 = _mm_load_si128((const __m128i *)&_xmm);
      v40 = 0.0;
    }
    v39 = v23;
    goto LABEL_12;
  }
  v34 = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)((char *)&v36 + 4) = 0LL;
  v37 = 0LL;
  *(float *)&v36 = v12 / v10;
  *(float *)&v35 = (float)v6 - (float)((float)v5 * (float)(v12 / v10));
  *((float *)&v36 + 3) = v13 / v11;
  *((float *)&v35 + 1) = (float)v7 - (float)((float)v4 * (float)(v13 / v11));
  Windows::Foundation::Numerics::operator*((float *)v41.m128i_i32, (float *)&v36, (float *)v34.m128i_i32);
  v17 = v42;
  *v16 = v41;
  v16[1].m128i_i64[0] = v17;
  return v16;
}

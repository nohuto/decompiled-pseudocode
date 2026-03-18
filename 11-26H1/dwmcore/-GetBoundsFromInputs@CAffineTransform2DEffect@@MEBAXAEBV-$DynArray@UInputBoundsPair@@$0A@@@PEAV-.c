/*
 * XREFs of ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180286FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9160 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

char __fastcall CAffineTransform2DEffect::GetBoundsFromInputs(float *a1, _DWORD *a2, float *a3)
{
  float *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm13_4
  float v7; // xmm3_4
  float v8; // xmm8_4
  float v9; // xmm12_4
  float v10; // xmm5_4
  float v11; // xmm9_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm13_4
  float v17; // xmm12_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v26; // [rsp+28h] [rbp-70h]
  float v27[5]; // [rsp+2Ch] [rbp-6Ch] BYREF

  if ( a2[6] == 1 )
  {
    v4 = a1[93];
    v5 = a1[94];
    v6 = *(float *)(*(_QWORD *)a2 + 4LL) * a1[91];
    v7 = *(float *)(*(_QWORD *)a2 + 16LL) * v4;
    v8 = *(float *)(*(_QWORD *)a2 + 8LL) * v4;
    v9 = *(float *)(*(_QWORD *)a2 + 4LL) * a1[92];
    v10 = *(float *)(*(_QWORD *)a2 + 16LL) * v5;
    v11 = *(float *)(*(_QWORD *)a2 + 8LL) * v5;
    v12 = v10 + v9;
    v13 = (float)(v7 + v6) + a1[95];
    v14 = *(float *)(*(_QWORD *)a2 + 12LL) * a1[91];
    v3 = v27;
    v15 = *(float *)(*(_QWORD *)a2 + 12LL) * a1[92];
    v16 = (float)(v6 + v8) + a1[95];
    v17 = (float)(v9 + v11) + a1[96];
    v27[0] = v12 + a1[96];
    v26 = v13;
    v18 = (float)(v15 + v10) + a1[96];
    v19 = (float)(v15 + v11) + a1[96];
    v20 = (float)(v14 + v7) + a1[95];
    v21 = (float)(v14 + v8) + a1[95];
    v22 = 3LL;
    v27[2] = v18;
    v23 = v17;
    v27[4] = v19;
    v27[1] = v20;
    v24 = v16;
    v27[3] = v21;
    do
    {
      v24 = fminf(v24, *(v3 - 1));
      v17 = fminf(v17, *v3);
      v16 = fmaxf(v16, *(v3 - 1));
      v23 = fmaxf(v23, *v3);
      v3 += 2;
      --v22;
    }
    while ( v22 );
    *a3 = v24;
    a3[1] = v17;
    a3[2] = v16;
    a3[3] = v23;
  }
  else
  {
    LOBYTE(v3) = CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  return (char)v3;
}

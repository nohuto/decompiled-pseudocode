/*
 * XREFs of sub_18009C714 @ 0x18009C714
 * Callers:
 *     sub_18009BCD8 @ 0x18009BCD8 (sub_18009BCD8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18003AC54 @ 0x18003AC54 (sub_18003AC54.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18009C714(__int64 *a1, __int64 a2, __int64 a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  __int64 *v8; // r14
  float **v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  int v22; // xmm2_4
  int v23; // xmm1_4
  int v24; // xmm0_4
  _DWORD *v25; // rcx
  int v26; // xmm2_4
  int v27; // xmm1_4
  int v28; // xmm0_4
  _DWORD *v29; // rcx
  int v30; // xmm3_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  _DWORD *v33; // rcx
  int v34; // xmm2_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  _DWORD *v37; // rcx
  int v38; // xmm3_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  _DWORD *v41; // rcx
  int v42; // xmm2_4
  int v43; // xmm1_4
  int v44; // xmm0_4
  _DWORD *v45; // rcx
  int v46; // xmm3_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  _DWORD *v49; // rcx
  int v50; // xmm2_4
  int v51; // xmm1_4
  int v52; // xmm0_4
  _DWORD *v53; // rcx
  int v54; // xmm3_4
  int v55; // xmm1_4
  int v56; // xmm0_4
  _DWORD *v57; // rcx
  __int64 v58; // rbx
  __m128 *v59; // rax
  __int64 v60; // rcx
  float *v61; // rax
  __m128 v63; // [rsp+30h] [rbp-51h] BYREF
  __m128 v64; // [rsp+40h] [rbp-41h] BYREF
  __int64 v65; // [rsp+50h] [rbp-31h] BYREF
  __int64 v66; // [rsp+58h] [rbp-29h]
  __m128 v67[5]; // [rsp+60h] [rbp-21h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = 1.0;
  v8 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) )
  {
    v9 = (float **)(a3 + 64);
    v10 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v10 + 192) = 0LL;
    *(_QWORD *)(v10 + 200) = 0LL;
    v11 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v11 + 208) = 0LL;
    *(_QWORD *)(v11 + 216) = 0LL;
    v12 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v12 + 224) = 0LL;
    *(_QWORD *)(v12 + 232) = 0LL;
    v13 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 248) = 0LL;
    v14 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v14 + 256) = 0LL;
    *(_QWORD *)(v14 + 264) = 0LL;
    v15 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v15 + 272) = 0LL;
    *(_QWORD *)(v15 + 280) = 0LL;
    v16 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v16 + 288) = 0LL;
    *(_QWORD *)(v16 + 296) = 0LL;
    v17 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v17 + 304) = 0LL;
    *(_QWORD *)(v17 + 312) = 0LL;
    v18 = *(_QWORD *)(a3 + 64);
    *(_QWORD *)(v18 + 320) = 0LL;
    *(_QWORD *)(v18 + 328) = 0LL;
  }
  else
  {
    v19 = v8[1];
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v20 = *v8;
    v63.m128_u64[0] = v20;
    v21 = v8[1];
    v63.m128_u64[1] = v21;
    v22 = *(_DWORD *)(v20 + 268);
    v23 = *(_DWORD *)(v20 + 264);
    v24 = *(_DWORD *)(v20 + 260);
    v9 = (float **)(a3 + 64);
    v25 = *(_DWORD **)(a3 + 64);
    v25[48] = *(_DWORD *)(v20 + 256);
    v25[49] = v24;
    v25[50] = v23;
    v25[51] = v22;
    v26 = *(_DWORD *)(v20 + 284);
    v27 = *(_DWORD *)(v20 + 280);
    v28 = *(_DWORD *)(v20 + 276);
    v29 = *(_DWORD **)(a3 + 64);
    v29[52] = *(_DWORD *)(v20 + 272);
    v29[53] = v28;
    v29[54] = v27;
    v29[55] = v26;
    v30 = *(_DWORD *)(v20 + 300);
    v31 = *(_DWORD *)(v20 + 296);
    v32 = *(_DWORD *)(v20 + 292);
    v33 = *(_DWORD **)(a3 + 64);
    v33[56] = *(_DWORD *)(v20 + 288);
    v33[57] = v32;
    v33[58] = v31;
    v33[59] = v30;
    v34 = *(_DWORD *)(v20 + 316);
    v35 = *(_DWORD *)(v20 + 312);
    v36 = *(_DWORD *)(v20 + 308);
    v37 = *(_DWORD **)(a3 + 64);
    v37[60] = *(_DWORD *)(v20 + 304);
    v37[61] = v36;
    v37[62] = v35;
    v37[63] = v34;
    v38 = *(_DWORD *)(v20 + 332);
    v39 = *(_DWORD *)(v20 + 328);
    v40 = *(_DWORD *)(v20 + 324);
    v41 = *(_DWORD **)(a3 + 64);
    v41[64] = *(_DWORD *)(v20 + 320);
    v41[65] = v40;
    v41[66] = v39;
    v41[67] = v38;
    v42 = *(_DWORD *)(v20 + 348);
    v43 = *(_DWORD *)(v20 + 344);
    v44 = *(_DWORD *)(v20 + 340);
    v45 = *(_DWORD **)(a3 + 64);
    v45[68] = *(_DWORD *)(v20 + 336);
    v45[69] = v44;
    v45[70] = v43;
    v45[71] = v42;
    v46 = *(_DWORD *)(v20 + 364);
    v47 = *(_DWORD *)(v20 + 360);
    v48 = *(_DWORD *)(v20 + 356);
    v49 = *(_DWORD **)(a3 + 64);
    v49[72] = *(_DWORD *)(v20 + 352);
    v49[73] = v48;
    v49[74] = v47;
    v49[75] = v46;
    v50 = *(_DWORD *)(v20 + 380);
    v51 = *(_DWORD *)(v20 + 376);
    v52 = *(_DWORD *)(v20 + 372);
    v53 = *(_DWORD **)(a3 + 64);
    v53[76] = *(_DWORD *)(v20 + 368);
    v53[77] = v52;
    v53[78] = v51;
    v53[79] = v50;
    v54 = *(_DWORD *)(v20 + 396);
    v55 = *(_DWORD *)(v20 + 392);
    v56 = *(_DWORD *)(v20 + 388);
    v57 = *(_DWORD **)(a3 + 64);
    v57[80] = *(_DWORD *)(v20 + 384);
    v57[81] = v56;
    v57[82] = v55;
    v57[83] = v54;
    v58 = *sub_180042248(v20, &v65);
    sub_18003D718(v58);
    v63 = *(__m128 *)(v58 + 156);
    v64 = *(__m128 *)(v20 + 92);
    v59 = sub_18003AC54(v67, &v64, &v63);
    v4 = v59->m128_f32[0];
    v5 = v59->m128_f32[1];
    v6 = v59->m128_f32[2];
    v7 = v59->m128_f32[3];
    if ( v66 )
      sub_180010EC8(v66);
    if ( v21 )
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
    *a1 = v20;
    v60 = a1[1];
    a1[1] = v21;
    if ( v60 )
      sub_180010EC8(v60);
    if ( v21 )
      sub_180010EC8(v21);
  }
  v61 = *v9;
  v61[84] = v4 * 1.4142135;
  v61[85] = v5 * 1.4142135;
  v61[86] = v6 * 1.4142135;
  v61[87] = v7 * 1.4142135;
  return a1;
}

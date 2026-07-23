/*
 * XREFs of HvpSwapDual @ 0x140863B90
 * Callers:
 *     HvSwapHiveStorage @ 0x1408635BC (HvSwapHiveStorage.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvpSwapDual(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _BYTE *v3; // r8
  _OWORD *v5; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _QWORD *v15; // rdx
  __int128 v16; // xmm1
  _QWORD *v17; // rcx
  _QWORD *v18; // rsi
  _QWORD *v19; // r11
  _QWORD **v20; // rbx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int64 v30; // r8
  __int128 v31; // xmm1
  _QWORD *v32; // r8
  _QWORD **v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int64 v51; // rax
  __int64 result; // rax
  _BYTE v53[608]; // [rsp+0h] [rbp-100h] BYREF
  _QWORD *v54; // [rsp+260h] [rbp+160h] BYREF
  _QWORD *v55; // [rsp+268h] [rbp+168h]

  v2 = 4LL;
  v3 = v53;
  v5 = (_OWORD *)a1;
  v7 = 4LL;
  do
  {
    v8 = v5[1];
    *(_OWORD *)v3 = *v5;
    v9 = v5[2];
    *((_OWORD *)v3 + 1) = v8;
    v10 = v5[3];
    *((_OWORD *)v3 + 2) = v9;
    v11 = v5[4];
    *((_OWORD *)v3 + 3) = v10;
    v12 = v5[5];
    *((_OWORD *)v3 + 4) = v11;
    v13 = v5[6];
    *((_OWORD *)v3 + 5) = v12;
    v14 = v5[7];
    v5 += 8;
    *((_OWORD *)v3 + 6) = v13;
    v3 += 128;
    *((_OWORD *)v3 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = (_QWORD *)(a1 + 608);
  v16 = v5[1];
  v17 = *(_QWORD **)(a1 + 608);
  v18 = &v54;
  v19 = &v54;
  v20 = (_QWORD **)(a1 + 616);
  *(_OWORD *)v3 = *v5;
  v21 = v5[2];
  *((_OWORD *)v3 + 1) = v16;
  v22 = v5[3];
  *((_OWORD *)v3 + 2) = v21;
  v23 = v5[4];
  *((_OWORD *)v3 + 3) = v22;
  v24 = v5[5];
  *((_OWORD *)v3 + 4) = v23;
  v25 = v5[6];
  v26 = *((_QWORD *)v5 + 14);
  *((_OWORD *)v3 + 5) = v24;
  *((_OWORD *)v3 + 6) = v25;
  *((_QWORD *)v3 + 14) = v26;
  v55 = &v54;
  v54 = &v54;
  if ( v17 != (_QWORD *)(a1 + 608) )
  {
    v27 = *v20;
    v54 = v17;
    v55 = v27;
    v17[1] = &v54;
    *v27 = &v54;
    v18 = v55;
    v19 = v54;
    *v20 = v15;
    *v15 = v15;
  }
  v28 = a1;
  v29 = (_OWORD *)a2;
  v30 = 4LL;
  do
  {
    *(_OWORD *)v28 = *v29;
    *(_OWORD *)(v28 + 16) = v29[1];
    *(_OWORD *)(v28 + 32) = v29[2];
    *(_OWORD *)(v28 + 48) = v29[3];
    *(_OWORD *)(v28 + 64) = v29[4];
    *(_OWORD *)(v28 + 80) = v29[5];
    *(_OWORD *)(v28 + 96) = v29[6];
    v28 += 128LL;
    v31 = v29[7];
    v29 += 8;
    *(_OWORD *)(v28 - 16) = v31;
    --v30;
  }
  while ( v30 );
  v32 = (_QWORD *)(a2 + 608);
  v33 = (_QWORD **)(a2 + 616);
  *(_OWORD *)v28 = *v29;
  *(_OWORD *)(v28 + 16) = v29[1];
  *(_OWORD *)(v28 + 32) = v29[2];
  *(_OWORD *)(v28 + 48) = v29[3];
  *(_OWORD *)(v28 + 64) = v29[4];
  *(_OWORD *)(v28 + 80) = v29[5];
  *(_OWORD *)(v28 + 96) = v29[6];
  *(_QWORD *)(v28 + 112) = *((_QWORD *)v29 + 14);
  *v20 = v15;
  *v15 = v15;
  v34 = *(_QWORD *)(a2 + 608);
  if ( v34 != a2 + 608 )
  {
    v35 = *v33;
    *v15 = v34;
    *v20 = v35;
    *(_QWORD *)(v34 + 8) = v15;
    *v35 = v15;
    v18 = v55;
    v19 = v54;
  }
  v36 = a2;
  v37 = v53;
  do
  {
    v38 = v37[1];
    *(_OWORD *)v36 = *v37;
    v39 = v37[2];
    *(_OWORD *)(v36 + 16) = v38;
    v40 = v37[3];
    *(_OWORD *)(v36 + 32) = v39;
    v41 = v37[4];
    *(_OWORD *)(v36 + 48) = v40;
    v42 = v37[5];
    *(_OWORD *)(v36 + 64) = v41;
    v43 = v37[6];
    *(_OWORD *)(v36 + 80) = v42;
    v44 = v37[7];
    v37 += 8;
    *(_OWORD *)(v36 + 96) = v43;
    v36 += 128LL;
    *(_OWORD *)(v36 - 16) = v44;
    --v2;
  }
  while ( v2 );
  v45 = v37[1];
  *(_OWORD *)v36 = *v37;
  v46 = v37[2];
  *(_OWORD *)(v36 + 16) = v45;
  v47 = v37[3];
  *(_OWORD *)(v36 + 32) = v46;
  v48 = v37[4];
  *(_OWORD *)(v36 + 48) = v47;
  v49 = v37[5];
  *(_OWORD *)(v36 + 64) = v48;
  v50 = v37[6];
  v51 = *((_QWORD *)v37 + 14);
  *(_OWORD *)(v36 + 80) = v49;
  *(_OWORD *)(v36 + 96) = v50;
  *(_QWORD *)(v36 + 112) = v51;
  *v33 = v32;
  *v32 = v32;
  if ( v19 != &v54 )
  {
    *v32 = v19;
    *v33 = v18;
    v19[1] = v32;
    *v18 = v32;
  }
  if ( *(_QWORD *)(a1 + 8) == a2 + 16 )
    *(_QWORD *)(a1 + 8) = a1 + 16;
  result = a1 + 16;
  if ( *(_QWORD *)(a2 + 8) == a1 + 16 )
    *(_QWORD *)(a2 + 8) = a2 + 16;
  return result;
}

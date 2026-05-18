/*
 * XREFs of sub_1800199F0 @ 0x1800199F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012504 @ 0x180012504 (sub_180012504.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180016FF4 @ 0x180016FF4 (sub_180016FF4.c)
 *     sub_180018368 @ 0x180018368 (sub_180018368.c)
 *     sub_180018548 @ 0x180018548 (sub_180018548.c)
 *     sub_18001896C @ 0x18001896C (sub_18001896C.c)
 *     sub_180019528 @ 0x180019528 (sub_180019528.c)
 *     sub_18001955C @ 0x18001955C (sub_18001955C.c)
 *     sub_18001B41C @ 0x18001B41C (sub_18001B41C.c)
 *     sub_18001B4F8 @ 0x18001B4F8 (sub_18001B4F8.c)
 *     sub_18001B968 @ 0x18001B968 (sub_18001B968.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_18003CE80 @ 0x18003CE80 (sub_18003CE80.c)
 *     sub_18005005C @ 0x18005005C (sub_18005005C.c)
 *     sub_180054DA8 @ 0x180054DA8 (sub_180054DA8.c)
 *     sub_1800552D0 @ 0x1800552D0 (sub_1800552D0.c)
 *     sub_18005537C @ 0x18005537C (sub_18005537C.c)
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 *     sub_18005AB0C @ 0x18005AB0C (sub_18005AB0C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800199F0(__int64 a1, __int64 a2, _OWORD *a3, unsigned __int8 a4)
{
  int v4; // r15d
  _QWORD *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rax
  int v12; // edi
  __m128 v13; // xmm9
  __m128 v14; // xmm10
  __int64 v15; // rax
  float v16; // xmm7_4
  float v17; // xmm8_4
  double v18; // xmm6_8
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rax
  char v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  _QWORD *v27; // rax
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __int64 v30; // rcx
  char v31; // cl
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int128 v35; // xmm3
  __int128 v36; // xmm2
  __int128 v37; // xmm0
  __int64 result; // rax
  __int64 v39; // [rsp+20h] [rbp-198h] BYREF
  __int64 v40; // [rsp+28h] [rbp-190h]
  __int64 v41; // [rsp+30h] [rbp-188h] BYREF
  __int64 v42; // [rsp+38h] [rbp-180h]
  float v43; // [rsp+40h] [rbp-178h] BYREF
  __int128 v44; // [rsp+44h] [rbp-174h]
  float v45; // [rsp+54h] [rbp-164h]
  __int128 v46; // [rsp+58h] [rbp-160h]
  __int64 v47; // [rsp+68h] [rbp-150h]
  float v48; // [rsp+70h] [rbp-148h]
  float v49; // [rsp+74h] [rbp-144h]
  float v50; // [rsp+78h] [rbp-140h]
  int v51; // [rsp+7Ch] [rbp-13Ch]
  __int64 v52; // [rsp+80h] [rbp-138h] BYREF
  __int64 v53; // [rsp+88h] [rbp-130h]
  __int64 v54; // [rsp+90h] [rbp-128h] BYREF
  __int64 v55; // [rsp+98h] [rbp-120h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-118h]
  _BYTE v57[64]; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-D0h] BYREF
  _BYTE v59[24]; // [rsp+F8h] [rbp-C0h] BYREF
  __int128 v60[9]; // [rsp+110h] [rbp-A8h] BYREF

  v4 = a4;
  try
  {
    sub_180018368(&v54);
    sub_180012C40(&v55, (_QWORD *)(a2 + 16));
    v8 = sub_180012C40(&v58, &v55);
    sub_180033B20(v9, &v39, v9, v8);
    sub_180012504(
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(a1 + 120),
      *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
      *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132));
    v10 = v55;
    sub_180029C50(v55 + 16, v59);
    v11 = sub_180013440(&v43, (__int64)&unk_1801C90B8);
    sub_180016FF4(v10, &v41, (__int64)v11);
    sub_18005005C(v41, a2 + 48);
    if ( v42 )
      sub_180010EC8(v42);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
    v13 = (__m128)COERCE_UNSIGNED_INT((float)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64)));
    v14 = (__m128)COERCE_UNSIGNED_INT((float)v12);
    v41 = *(_QWORD *)(a1 + 144);
    LODWORD(v42) = *(_DWORD *)(a1 + 152);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 280LL))(*(_QWORD *)(a1 + 64)) )
    {
      *(_BYTE *)(v39 + 465) |= 1u;
      v15 = v39;
      *(_QWORD *)(v39 + 296) = 0LL;
      *(_QWORD *)(v15 + 304) = 0LL;
      v16 = *(float *)&v41 - (float)*(int *)(a1 + 128);
      v17 = *((float *)&v41 + 1) - (float)*(int *)(a1 + 132);
      v18 = *(double *)_mm_unpacklo_ps(v13, v14).m128_u64;
      sub_18005AB0C(v39, 0LL, *(_QWORD *)&v18, 1LL);
      v19 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132);
      v20 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
      v21 = v39;
      *(_QWORD *)(v39 + 372) = 0LL;
      *(_DWORD *)(v21 + 380) = v20;
      *(_DWORD *)(v21 + 384) = v19;
      *(_BYTE *)(v21 + 388) = v22;
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 152LL))(*(_QWORD *)(a1 + 64));
      sub_180012C40(&v52, v23);
      v24 = v52;
      *(_DWORD *)(v52 + 448) = 8 * (v4 ^ 1);
      v25 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1 + 128));
      v26 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a1 + 132));
      v27 = (_QWORD *)sub_180019528(v24, &v43);
      v28 = 0LL;
      v28.m128_u64[0] = _mm_unpacklo_ps(v25, v26).m128_u64[0];
      v29 = 0LL;
      *(double *)v29.m128_u64 = v18;
      sub_18005AB0C(*v27, v28.m128_u64[0], _mm_add_ps(v28, v29).m128_u64[0], 1LL);
      if ( *(_QWORD *)((char *)&v44 + 4) )
        sub_180010EC8(*(__int64 *)((char *)&v44 + 4));
      v30 = *(_QWORD *)sub_180019528(v24, &v43);
      *(_OWORD *)(v30 + 372) = *(_OWORD *)(a1 + 128);
      *(_BYTE *)(v30 + 388) = 1;
      if ( *(_QWORD *)((char *)&v44 + 4) )
        sub_180010EC8(*(__int64 *)((char *)&v44 + 4));
      if ( v53 )
        sub_180010EC8(v53);
    }
    else
    {
      v31 = *(_BYTE *)(v39 + 465) | 1;
      if ( !(_BYTE)v4 )
        v31 = *(_BYTE *)(v39 + 465) & 0xFE;
      *(_BYTE *)(v39 + 465) = v31;
      v32 = v39;
      *(_QWORD *)(v39 + 296) = 0LL;
      *(_QWORD *)(v32 + 304) = 0LL;
      v33 = v39;
      *(_OWORD *)(v39 + 372) = *(_OWORD *)(a1 + 128);
      *(_BYTE *)(v33 + 388) = 1;
      v17 = *((float *)&v41 + 1);
      v16 = *(float *)&v41;
    }
    v43 = 1.0;
    v44 = 0LL;
    v45 = -1.0;
    v46 = 0LL;
    v47 = 1065353216LL;
    v48 = -*(float *)(a1 + 144);
    v49 = *(float *)(a1 + 148);
    v50 = -*(float *)(a1 + 152);
    v51 = 1065353216;
    *(_OWORD *)v57 = *a3;
    *(_OWORD *)&v57[16] = a3[1];
    *(_OWORD *)&v57[32] = a3[2];
    *(_OWORD *)&v57[48] = a3[3];
    sub_18001896C((__int64)v60, (__int128 *)v57, &v43);
    sub_180012A94(v39 + 56, &v52);
    v34 = sub_18001955C(v60, (__int64)v57);
    sub_18003CE80(v52, v34);
    if ( v53 )
      sub_180010EC8(v53);
    sub_1800596B4(v39);
    v43 = 2.0 / v13.m128_f32[0];
    v44 = 0LL;
    v45 = 2.0 / v14.m128_f32[0];
    v46 = 0LL;
    v47 = 1065353216LL;
    v48 = (float)((float)(2.0 / v13.m128_f32[0]) * v16) - 1.0;
    v49 = 1.0 - (float)((float)(2.0 / v14.m128_f32[0]) * v17);
    v50 = 0.0;
    v51 = 1065353216;
    *(_OWORD *)&v57[4] = 0LL;
    *(_OWORD *)&v57[24] = 0LL;
    *(_OWORD *)&v57[44] = 0LL;
    v35 = *(unsigned int *)(a1 + 160);
    v36 = *(unsigned int *)(a1 + 156);
    v37 = 0x40000000u;
    *(double *)&v37 = sub_18001B968();
    *(_OWORD *)v57 = v37;
    *(_OWORD *)&v57[16] = 0x40000000u;
    *(_OWORD *)&v57[32] = v36;
    *(_OWORD *)&v57[48] = v35;
    sub_18001896C((__int64)v60, (__int128 *)v57, &v43);
    sub_18001B4F8(v39, 5LL);
    sub_18001B41C(v39, v60);
    sub_180011E54((__int64)v59);
    sub_180054DA8(*(_QWORD *)(a1 + 48), &v39);
    sub_18005537C(*(_QWORD *)(a1 + 48));
    sub_1800552D0(*(_QWORD *)(a1 + 48), &v39);
    if ( v40 )
      sub_180010EC8(v40);
    if ( v56 )
      sub_180010EC8(v56);
    sub_180018548(&v54);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147500037LL;
  }
  return result;
}

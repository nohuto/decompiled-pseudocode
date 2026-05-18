/*
 * XREFs of sub_180068050 @ 0x180068050
 * Callers:
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003B394 @ 0x18003B394 (sub_18003B394.c)
 *     sub_18004E184 @ 0x18004E184 (sub_18004E184.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18004ED7C @ 0x18004ED7C (sub_18004ED7C.c)
 *     sub_18004EDB4 @ 0x18004EDB4 (sub_18004EDB4.c)
 *     sub_18004EDEC @ 0x18004EDEC (sub_18004EDEC.c)
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 *     sub_18005E0AC @ 0x18005E0AC (sub_18005E0AC.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_18005FC30 @ 0x18005FC30 (sub_18005FC30.c)
 *     sub_1800636CC @ 0x1800636CC (sub_1800636CC.c)
 *     sub_1800647C4 @ 0x1800647C4 (sub_1800647C4.c)
 *     sub_18006541C @ 0x18006541C (sub_18006541C.c)
 *     sub_180066F90 @ 0x180066F90 (sub_180066F90.c)
 *     sub_1800670C4 @ 0x1800670C4 (sub_1800670C4.c)
 *     sub_18006710C @ 0x18006710C (sub_18006710C.c)
 *     sub_18007EB5C @ 0x18007EB5C (sub_18007EB5C.c)
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180068050(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __m128 v4; // xmm0
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  __m128 v9; // xmm13
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rbx
  bool v15; // r8
  __int64 **v16; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v19; // r13
  __int64 v20; // rdi
  __m128 *v21; // rcx
  char v22; // bl
  int v23; // xmm12_4
  _DWORD *v24; // rbx
  double v25; // xmm0_8
  unsigned int v26; // xmm9_4
  double v27; // xmm0_8
  __int32 v28; // xmm8_4
  double v29; // xmm0_8
  unsigned int v30; // xmm7_4
  double v31; // xmm0_8
  unsigned int v32; // xmm6_4
  double v33; // xmm0_8
  __int64 v34; // rcx
  double v35; // xmm0_8
  unsigned __int8 v36; // al
  int v37; // edi
  double v38; // xmm0_8
  double v39; // xmm0_8
  double v40; // xmm0_8
  double v41; // xmm0_8
  double v42; // xmm0_8
  double v43; // xmm0_8
  double v44; // xmm0_8
  double v45; // xmm0_8
  float v46; // xmm6_4
  char v47; // al
  char v48; // bl
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // ebx
  int v53; // eax
  _QWORD *v54; // rax
  _QWORD *v55; // rsi
  int v56; // edi
  _QWORD *v57; // rax
  __int64 v58; // r8
  __int64 v59; // rbx
  int v60; // xmm14_4
  _QWORD *v61; // rax
  __int64 v62; // r8
  int v63; // xmm13_4
  double v64; // xmm0_8
  int v65; // xmm12_4
  double v66; // xmm0_8
  int v67; // xmm11_4
  double v68; // xmm0_8
  int v69; // xmm10_4
  double v70; // xmm0_8
  int v71; // xmm9_4
  double v72; // xmm0_8
  int v73; // xmm8_4
  double v74; // xmm0_8
  int v75; // xmm7_4
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rbx
  unsigned __int64 v81; // rsi
  double v82; // xmm0_8
  float v83; // xmm8_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  double v86; // xmm0_8
  float v87; // xmm6_4
  double v88; // xmm0_8
  __m128i v89; // xmm10
  double v90; // xmm0_8
  float v91; // xmm8_4
  double v92; // xmm0_8
  float v93; // xmm7_4
  double v94; // xmm0_8
  float v95; // xmm6_4
  double v96; // xmm0_8
  __m128i v97; // xmm9
  double v98; // xmm0_8
  float v99; // xmm8_4
  double v100; // xmm0_8
  float v101; // xmm7_4
  double v102; // xmm0_8
  float v103; // xmm6_4
  double v104; // xmm0_8
  __m128i v105; // xmm8
  double v106; // xmm0_8
  float v107; // xmm7_4
  double v108; // xmm0_8
  float v109; // xmm6_4
  double v110; // xmm0_8
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rbx
  __int64 v114; // rdx
  __int64 v115; // rcx
  float v116; // xmm1_4
  __int64 v117; // rax
  __int64 v118; // rcx
  float v119; // xmm0_4
  __int64 v120; // rax
  int v121; // ebx
  int v122; // edi
  __int64 result; // rax
  __m128 v124; // [rsp+A8h] [rbp-80h] BYREF
  __m128 v125; // [rsp+B8h] [rbp-70h] BYREF
  __m128 v126; // [rsp+C8h] [rbp-60h] BYREF
  int v127; // [rsp+D8h] [rbp-50h]
  int v128; // [rsp+DCh] [rbp-4Ch]
  int v129; // [rsp+E0h] [rbp-48h]
  int v130; // [rsp+E4h] [rbp-44h]
  int v131; // [rsp+E8h] [rbp-40h]
  float v132; // [rsp+ECh] [rbp-3Ch]
  int v133; // [rsp+F0h] [rbp-38h]
  int v134; // [rsp+F4h] [rbp-34h]
  int v135; // [rsp+F8h] [rbp-30h]
  int v136; // [rsp+FCh] [rbp-2Ch]
  int v137; // [rsp+100h] [rbp-28h]
  int v138; // [rsp+104h] [rbp-24h]
  float v139; // [rsp+108h] [rbp-20h]
  __int64 v140; // [rsp+110h] [rbp-18h]
  __m128 v141; // [rsp+118h] [rbp-10h] BYREF
  __m128 v142; // [rsp+128h] [rbp+0h] BYREF
  __int64 v143; // [rsp+138h] [rbp+10h]
  __int64 v144[3]; // [rsp+140h] [rbp+18h] BYREF
  __m128 v145; // [rsp+158h] [rbp+30h] BYREF
  __m128 v146; // [rsp+168h] [rbp+40h] BYREF
  __m128 v147; // [rsp+178h] [rbp+50h] BYREF
  _QWORD v148[2]; // [rsp+188h] [rbp+60h] BYREF
  __m128 v149; // [rsp+198h] [rbp+70h] BYREF
  __m128 v150; // [rsp+1A8h] [rbp+80h] BYREF
  _QWORD v151[25]; // [rsp+1B8h] [rbp+90h] BYREF
  float v152; // [rsp+2C8h] [rbp+1A0h]

  v7 = 0LL;
  v8 = sub_180033D14(a1, *(_DWORD *)(*a4 + 112));
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801CA778, v11) )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA798);
  LOBYTE(v12) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801CA7D8, v12) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA7F8);
    v9 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801CA898, 0LL) )
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801CA898, 0LL);
  *(_OWORD *)v144 = 0LL;
  v140 = sub_18005F93C(*a4, v13);
  v14 = **(__int64 ***)(v140 + 104);
  while ( !*((_BYTE *)v14 + 25) )
  {
    v15 = *((_DWORD *)v14 + 8) == v10;
    *(_BYTE *)(v14[5] + 88) = v15;
    if ( v15 )
      sub_180013540(v144, v14 + 5);
    v16 = (__int64 **)v14[2];
    if ( *((_BYTE *)v16 + 25) )
    {
      for ( i = (__int64 *)v14[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v14 = i;
      v14 = i;
    }
    else
    {
      v14 = (__int64 *)v14[2];
      for ( j = *v16; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v14 = j;
    }
  }
  v19 = *(_QWORD *)(a1 + 512);
  v20 = v144[0];
  if ( v144[0] )
  {
    sub_180012C40(&v124, (_QWORD *)(v144[0] + 448));
    v21 = &v124;
    v22 = 1;
    v7 = v124.m128_u64[0];
  }
  else
  {
    v126.m128_u64[1] = 0LL;
    v21 = &v126;
    v22 = 2;
  }
  v148[0] = v7;
  v143 = v21->m128_i64[1];
  v148[1] = v143;
  v21->m128_u64[0] = 0LL;
  v21->m128_u64[1] = 0LL;
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( v126.m128_u64[1] )
      sub_180010EC8(v126.m128_i64[1]);
  }
  if ( (v22 & 1) != 0 && v124.m128_u64[1] )
    sub_180010EC8(v124.m128_i64[1]);
  if ( v20 )
    v23 = *(_DWORD *)(v20 + 528);
  else
    v23 = 1065353216;
  LODWORD(v24) = 0;
  if ( v7 )
  {
    v24 = *(_DWORD **)(v7 + 128);
    if ( v24 )
      LODWORD(v24) = *v24;
  }
  sub_18004ED7C(v19, (__int64)&unk_1801CC978, v148);
  sub_18004EDB4(v19, (__int64)&unk_1801CC978, (_QWORD *)(v140 + 248));
  v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA8F8);
  v26 = LODWORD(v25);
  v27 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA918);
  v28 = LODWORD(v27);
  v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA818);
  v30 = LODWORD(v29);
  v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA838);
  v32 = LODWORD(v31);
  *(float *)&v31 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA858);
  v124.m128_u64[0] = __PAIR64__(v32, v30);
  v124.m128_u64[1] = LODWORD(v31) | 0x3F80000000000000LL;
  v126 = _mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v124);
  sub_18007EB5C(*(_QWORD *)(v19 + 18648), &unk_1801CC958);
  v124.m128_f32[0] = (float)(int)v24;
  *(unsigned __int64 *)((char *)v124.m128_u64 + 4) = __PAIR64__(v26, v23);
  v124.m128_i32[3] = v28;
  v126 = v124;
  sub_18004EDEC(v19, (__int64)&unk_1801CC918);
  v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA7B8);
  v128 = LODWORD(v33);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA878);
  sub_18003B394((__int64)&v126, (unsigned __int64 *)&qword_1800FA800);
  sub_1800647C4(v34, &v126, a4);
  v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA938);
  v131 = LODWORD(v35);
  v132 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA958);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801CB6F8, 0LL);
  v37 = v36;
  v38 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CB718);
  v127 = LODWORD(v38);
  v39 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CB9F8);
  v130 = LODWORD(v39);
  v40 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA978);
  v133 = LODWORD(v40);
  v41 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA998);
  v134 = LODWORD(v41);
  v42 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA9B8);
  v135 = LODWORD(v42);
  v43 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA9D8);
  v136 = LODWORD(v43);
  v44 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA9F8);
  v137 = LODWORD(v44);
  v45 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA8B8);
  v46 = *(float *)&v45;
  v138 = LODWORD(v45);
  v139 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CA8D8);
  if ( v46 > 0.0 )
    *(_BYTE *)(a1 + 1457) = 1;
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801CA6B8, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801CBA38, 0LL);
  sub_18004E184(*(_QWORD *)(a1 + 512), &v124);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, &unk_1801CB6D8, 0LL);
  v48 = v47;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CB6B8);
  LOBYTE(v49) = v48;
  sub_1800670C4(v51, v50, v49, &v124, (__int64)&unk_1801CC478);
  v52 = sub_18005FC30(v8);
  if ( v52 )
    v127 = 1065353216;
  v53 = 0;
  if ( !v52 )
    v53 = v37;
  v129 = v53;
  v54 = sub_1800181BC(v151, (__int64)&unk_1801CCF98);
  sub_18004E8E8(v19, &v126, (__int64)v54);
  if ( v52 )
    v152 = 0.0;
  else
    v152 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CABB8);
  v142.m128_u64[0] = (unsigned __int64)&v149;
  v55 = sub_180012C40(&v149, &v126);
  v56 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801CACB8, 0LL);
  v57 = sub_180012C40(&v145, a4);
  v59 = *sub_180033B20(a1, &v141, v58, v57);
  sub_18005AE7C(v59);
  v60 = *(_DWORD *)(v59 + 332);
  v61 = sub_180012C40(&v146, a4);
  v63 = *(_DWORD *)(*sub_180033B20(a1, &v147, v62, v61) + 328LL);
  v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAC78);
  v65 = LODWORD(v64);
  v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAC58);
  v67 = LODWORD(v66);
  v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAC38);
  v69 = LODWORD(v68);
  v70 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAC18);
  v71 = LODWORD(v70);
  v72 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CABF8);
  v73 = LODWORD(v72);
  v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CABD8);
  v75 = LODWORD(v74);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C9898);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801C9878);
  sub_18006710C(
    v77,
    v76,
    v78,
    v79,
    v75,
    v73,
    v71,
    v69,
    v67,
    v65,
    v63,
    v60,
    v56,
    (__int64)v55,
    &v124,
    (__int64)&unk_1801CD0B8,
    (__int64)&unk_1801CD0D8,
    (__int64)&unk_1801CD0F8,
    (__int64)&unk_1801CD118);
  if ( v147.m128_u64[1] )
    sub_180010EC8(v147.m128_i64[1]);
  if ( v141.m128_u64[1] )
    sub_180010EC8(v141.m128_i64[1]);
  v80 = v126.m128_u64[0];
  sub_18005E0AC(v126.m128_i64[0], (__int64)&unk_1801CD358, v152 > 0.0);
  sub_18005E0AC(v80, (__int64)&unk_1801CD2B8, 1);
  sub_18005E0AC(v80, (__int64)&unk_1801CD2D8, 1);
  sub_18005E0AC(v80, (__int64)&unk_1801CD318, 1);
  sub_18005E0AC(v80, (__int64)&unk_1801CD338, 1);
  v81 = v124.m128_u64[0];
  sub_18007ED34(v124.m128_u64[0], &unk_1801CC438);
  sub_18007ED34(v81, &unk_1801CC458);
  sub_18007ED34(v81, &unk_1801CD098);
  sub_18007ED34(v81, &unk_1801CC4B8);
  sub_18007ED34(v81, &unk_1801CC4D8);
  sub_18007ED34(v81, &unk_1801CC4F8);
  sub_18007ED34(v81, &unk_1801CC518);
  sub_18007ED34(v81, &unk_1801CC598);
  sub_18007ED34(v81, &unk_1801CC5B8);
  sub_18007ED34(v81, &unk_1801CC5D8);
  sub_18007ED34(v81, &unk_1801CC5F8);
  sub_18007ED34(v81, &unk_1801CC618);
  sub_18007ED34(v81, &unk_1801CC538);
  sub_18007ED34(v81, &unk_1801CC558);
  sub_18007ED34(v81, &unk_1801CC578);
  sub_18007ED34(v81, &unk_1801CC418);
  v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAEB8);
  v83 = *(float *)&v82;
  v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAE58);
  v85 = *(float *)&v84;
  v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CADD8);
  v87 = *(float *)&v86;
  v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAD58);
  v89 = _mm_loadu_si128((const __m128i *)sub_1800636CC(&v149, *(float *)&v88, v87, v85, v83));
  v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAED8);
  v91 = *(float *)&v90;
  v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAE78);
  v93 = *(float *)&v92;
  v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CADF8);
  v95 = *(float *)&v94;
  v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAD78);
  v97 = _mm_loadu_si128((const __m128i *)sub_1800636CC(&v125, *(float *)&v96, v95, v93, v91));
  v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAEF8);
  v99 = *(float *)&v98;
  v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAE98);
  v101 = *(float *)&v100;
  v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAE18);
  v103 = *(float *)&v102;
  v104 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAD98);
  v105 = _mm_loadu_si128((const __m128i *)sub_1800636CC(&v142, *(float *)&v104, v103, v101, v99));
  v106 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAE38);
  v107 = *(float *)&v106;
  v108 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CADB8);
  v109 = *(float *)&v108;
  v110 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAD38);
  v141 = (__m128)v89;
  v147 = (__m128)v97;
  v146 = (__m128)v105;
  v145 = *sub_1800636CC(&v150, *(float *)&v110, v109, v107, 0.0);
  sub_180066F90(
    v111,
    &v145,
    &v146,
    &v147,
    &v141,
    &v124,
    (__int64)&unk_1801CD178,
    (__int64)&unk_1801CD198,
    (__int64)&unk_1801CD1B8);
  *(float *)&v110 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 88LL))(v8, &unk_1801CAD18);
  v112 = v140;
  v113 = *(_QWORD *)(v140 + 120);
  *(float *)(v113 + 160) = sub_18001205C(*(float *)&v110, 0.0, 1.0);
  sub_180012C40(&v142, (_QWORD *)(*(_QWORD *)(v112 + 120) + 96LL));
  v114 = *(_QWORD *)(v112 + 120);
  v115 = *(_QWORD *)(v114 + 144);
  if ( v115 < 0 )
  {
    v117 = *(_QWORD *)(v114 + 144) & 1LL | ((unsigned __int64)v115 >> 1);
    v116 = (float)(int)v117 + (float)(int)v117;
  }
  else
  {
    v116 = (float)(int)v115;
  }
  v118 = *(_QWORD *)(v114 + 136);
  if ( v118 < 0 )
  {
    v120 = *(_QWORD *)(v114 + 136) & 1LL | ((unsigned __int64)v118 >> 1);
    v119 = (float)(int)v120 + (float)(int)v120;
  }
  else
  {
    v119 = (float)(int)v118;
  }
  v125.m128_f32[0] = (float)(v119 - 1.0) / v116;
  v125.m128_f32[1] = 0.5 / v116;
  v125.m128_i32[2] = 0;
  v125.m128_i32[3] = *(_DWORD *)(v114 + 160);
  sub_18004ED7C(v19, (__int64)&unk_1801CD138, &v142);
  sub_18004EDB4(v19, (__int64)&unk_1801CD138, (_QWORD *)(v112 + 232));
  v141 = v125;
  sub_18004EDEC(v19, (__int64)&unk_1801CD158);
  v121 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C99B8, 0LL);
  v122 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C99D8, 0LL);
  dword_1801C7C90 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, &unk_1801C98D8, 0LL);
  dword_1801C7C94 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C98F8,
                      1LL);
  dword_1801C7C98 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C9938,
                      2LL);
  dword_1801C7C9C = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 72LL))(
                      v8,
                      &unk_1801C9918,
                      3LL);
  v125.m128_f32[0] = (float)v121;
  v125.m128_f32[1] = (float)v122;
  v125.m128_u64[1] = 0LL;
  sub_18007F1B0(v81, &unk_1801CC638);
  if ( v121 || v122 )
    *(_BYTE *)(a1 + 1457) = 1;
  result = sub_18006541C(a1, (__int64)a4);
  if ( v142.m128_u64[1] )
    result = sub_180010EC8(v142.m128_i64[1]);
  if ( v126.m128_u64[1] )
    result = sub_180010EC8(v126.m128_i64[1]);
  if ( v124.m128_u64[1] )
    result = sub_180010EC8(v124.m128_i64[1]);
  if ( v143 )
    result = sub_180010EC8(v143);
  if ( v144[1] )
    return sub_180010EC8(v144[1]);
  return result;
}

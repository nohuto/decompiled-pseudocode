/*
 * XREFs of sub_1800648C4 @ 0x1800648C4
 * Callers:
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003C8A4 @ 0x18003C8A4 (sub_18003C8A4.c)
 *     sub_180043240 @ 0x180043240 (sub_180043240.c)
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_180043704 @ 0x180043704 (sub_180043704.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18005AE7C @ 0x18005AE7C (sub_18005AE7C.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_1800636CC @ 0x1800636CC (sub_1800636CC.c)
 *     sub_180066F90 @ 0x180066F90 (sub_180066F90.c)
 *     sub_1800670C4 @ 0x1800670C4 (sub_1800670C4.c)
 *     sub_18006710C @ 0x18006710C (sub_18006710C.c)
 *     sub_1800795BC @ 0x1800795BC (sub_1800795BC.c)
 *     sub_18007EB5C @ 0x18007EB5C (sub_18007EB5C.c)
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800648C4(__int64 a1, __int64 *a2, char a3, float a4)
{
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 result; // rax
  double v12; // xmm0_8
  unsigned int v13; // xmm8_4
  double v14; // xmm0_8
  unsigned int v15; // xmm7_4
  double v16; // xmm0_8
  unsigned int v17; // xmm6_4
  double v18; // xmm0_8
  double v19; // xmm0_8
  unsigned int v20; // xmm8_4
  double v21; // xmm0_8
  unsigned int v22; // xmm7_4
  double v23; // xmm0_8
  unsigned int v24; // xmm6_4
  double v25; // xmm0_8
  double v26; // xmm0_8
  unsigned int v27; // xmm8_4
  double v28; // xmm0_8
  unsigned int v29; // xmm7_4
  double v30; // xmm0_8
  unsigned int v31; // xmm6_4
  double v32; // xmm0_8
  double v33; // xmm0_8
  unsigned int v34; // xmm8_4
  double v35; // xmm0_8
  unsigned int v36; // xmm7_4
  double v37; // xmm0_8
  unsigned int v38; // xmm6_4
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rbx
  _QWORD *v44; // rax
  char v45; // al
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  _QWORD *v49; // rsi
  int v50; // edi
  _QWORD *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rbx
  int v54; // xmm15_4
  _QWORD *v55; // rax
  __int64 v56; // r8
  int v57; // xmm14_4
  double v58; // xmm0_8
  int v59; // xmm13_4
  double v60; // xmm0_8
  int v61; // xmm12_4
  double v62; // xmm0_8
  int v63; // xmm11_4
  double v64; // xmm0_8
  int v65; // xmm10_4
  double v66; // xmm0_8
  int v67; // xmm9_4
  double v68; // xmm0_8
  int v69; // xmm8_4
  int v70; // edx
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  double v74; // xmm0_8
  float v75; // xmm8_4
  double v76; // xmm0_8
  float v77; // xmm7_4
  double v78; // xmm0_8
  float v79; // xmm6_4
  double v80; // xmm0_8
  __m128i v81; // xmm10
  double v82; // xmm0_8
  float v83; // xmm8_4
  double v84; // xmm0_8
  float v85; // xmm7_4
  double v86; // xmm0_8
  float v87; // xmm6_4
  double v88; // xmm0_8
  __m128i v89; // xmm9
  double v90; // xmm0_8
  float v91; // xmm8_4
  double v92; // xmm0_8
  float v93; // xmm7_4
  double v94; // xmm0_8
  float v95; // xmm6_4
  double v96; // xmm0_8
  __m128i v97; // xmm8
  double v98; // xmm0_8
  float v99; // xmm7_4
  double v100; // xmm0_8
  float v101; // xmm6_4
  double v102; // xmm0_8
  int v103; // ecx
  __int64 v104; // r8
  char v105; // bl
  unsigned __int64 v106; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-78h]
  __m128 v108; // [rsp+B8h] [rbp-70h] BYREF
  __m128 v109; // [rsp+C8h] [rbp-60h] BYREF
  __m128 v110; // [rsp+D8h] [rbp-50h] BYREF
  __m128i v111; // [rsp+E8h] [rbp-40h] BYREF
  __int128 v112; // [rsp+F8h] [rbp-30h] BYREF
  __m128i v113; // [rsp+108h] [rbp-20h] BYREF
  __m128i v114; // [rsp+118h] [rbp-10h] BYREF
  __m128 v115[2]; // [rsp+128h] [rbp+0h] BYREF
  __m128 v116[11]; // [rsp+148h] [rbp+20h] BYREF

  v7 = (_QWORD *)sub_18005F93C(*a2, (__int64)a2);
  v8 = v7[25];
  if ( v8 )
    sub_18003C8A4(v8, 1, a3);
  v9 = v7[27];
  if ( v9 )
  {
    v106 = 0x3F8000003F800000LL;
    LODWORD(v107) = 1065353216;
    *((float *)&v107 + 1) = a4;
    sub_18007EB5C(*(_QWORD *)(v9 + 120), &unk_1801CBD98);
  }
  v10 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801CB198, 0LL);
  if ( (_BYTE)result )
  {
    if ( v7[39] )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAF18);
      sub_18007ED34(*(_QWORD *)(v7[39] + 120LL), &unk_1801CD698);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAFB8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB058);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB0F8);
      v12 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAF38);
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAF58);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAF78);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAF98);
      v106 = __PAIR64__(v15, v13);
      v107 = __PAIR64__(LODWORD(v18), v17);
      v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAFD8);
      v20 = LODWORD(v19);
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CAFF8);
      v22 = LODWORD(v21);
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB018);
      v24 = LODWORD(v23);
      v25 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB038);
      v109.m128_u64[0] = __PAIR64__(v22, v20);
      v109.m128_u64[1] = __PAIR64__(LODWORD(v25), v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB078);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB098);
      v29 = LODWORD(v28);
      v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB0B8);
      v31 = LODWORD(v30);
      v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB0D8);
      v110.m128_u64[0] = __PAIR64__(v29, v27);
      v110.m128_u64[1] = __PAIR64__(LODWORD(v32), v31);
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB118);
      v34 = LODWORD(v33);
      v35 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB138);
      v36 = LODWORD(v35);
      v37 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB158);
      v38 = LODWORD(v37);
      *(float *)&v37 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB178);
      v108.m128_u64[0] = __PAIR64__(v36, v34);
      v108.m128_u64[1] = __PAIR64__(LODWORD(v37), v38);
      v111 = 0LL;
      v112 = 0LL;
      sub_1800795BC(v40, v39, v41, (unsigned int)&v111, (__int64)&v112);
      sub_18007F1B0(*(_QWORD *)(v7[39] + 120LL), &unk_1801CD6B8);
      sub_18007F1B0(*(_QWORD *)(v7[39] + 120LL), &unk_1801CD6D8);
      sub_18007EB5C(*(_QWORD *)(v7[39] + 120LL), &unk_1801CD6F8);
      sub_18007EB5C(*(_QWORD *)(v7[39] + 120LL), &unk_1801CD718);
      sub_18007EB5C(*(_QWORD *)(v7[39] + 120LL), &unk_1801CD738);
      result = sub_18007EB5C(*(_QWORD *)(v7[39] + 120LL), &unk_1801CD758);
    }
    v42 = v7[37];
    if ( v42 )
    {
      sub_180043704(v42, (__int64)&unk_1801CD618, v7 + 33);
      v43 = *(_QWORD *)(a1 + 512);
      v44 = sub_1800181BC(v115, (__int64)&unk_1801CD518);
      sub_18004E8E8(v43, &v112, (__int64)v44);
      sub_180043240(v7[37], &v106);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801CB1F8, 0LL);
      LOBYTE(v43) = v45;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB1D8);
      LOBYTE(v46) = v43;
      sub_1800670C4(v48, v47, v46, (unsigned int)&v106, (__int64)&unk_1801CD638);
      v49 = sub_180012C40(&v111, &v112);
      v50 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 72LL))(v10, &unk_1801CB358, 0LL);
      v51 = sub_180012C40(&v108, a2);
      v53 = *sub_180033B20(a1, &v114, v52, v51);
      sub_18005AE7C(v53);
      v54 = *(_DWORD *)(v53 + 332);
      v55 = sub_180012C40(&v110, a2);
      v57 = *(_DWORD *)(*sub_180033B20(a1, &v113, v56, v55) + 328LL);
      v58 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB318);
      v59 = LODWORD(v58);
      v60 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB2F8);
      v61 = LODWORD(v60);
      v62 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB2D8);
      v63 = LODWORD(v62);
      v64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB2B8);
      v65 = LODWORD(v64);
      v66 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB298);
      v67 = LODWORD(v66);
      v68 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB278);
      v69 = LODWORD(v68);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB258);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C9898);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801C9878);
      sub_18006710C(
        v71,
        v70,
        v72,
        v73,
        v69,
        v67,
        v65,
        v63,
        v61,
        v59,
        v57,
        v54,
        v50,
        (__int64)v49,
        (__int64)&v106,
        (__int64)&unk_1801CD778,
        (__int64)&unk_1801CD798,
        (__int64)&unk_1801CD7B8,
        (__int64)&unk_1801CD7D8);
      if ( v113.m128i_i64[1] )
        sub_180010EC8(v113.m128i_i64[1]);
      if ( v114.m128i_i64[1] )
        sub_180010EC8(v114.m128i_i64[1]);
      v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB558);
      v75 = *(float *)&v74;
      v76 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB4F8);
      v77 = *(float *)&v76;
      v78 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB478);
      v79 = *(float *)&v78;
      v80 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB3F8);
      v81 = _mm_loadu_si128((const __m128i *)sub_1800636CC(&v110, *(float *)&v80, v79, v77, v75));
      v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB578);
      v83 = *(float *)&v82;
      v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB518);
      v85 = *(float *)&v84;
      v86 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB498);
      v87 = *(float *)&v86;
      v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB418);
      v89 = _mm_loadu_si128((const __m128i *)sub_1800636CC(&v109, *(float *)&v88, v87, v85, v83));
      v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB598);
      v91 = *(float *)&v90;
      v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB538);
      v93 = *(float *)&v92;
      v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB4B8);
      v95 = *(float *)&v94;
      v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB438);
      v97 = _mm_loadu_si128((const __m128i *)sub_1800636CC(v116, *(float *)&v96, v95, v93, v91));
      v98 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB4D8);
      v99 = *(float *)&v98;
      v100 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB458);
      v101 = *(float *)&v100;
      v102 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB3D8);
      v114 = v81;
      v113 = v89;
      v111 = v97;
      v108 = *sub_1800636CC(v115, *(float *)&v102, v101, v99, 0.0);
      sub_180066F90(
        v103,
        (unsigned int)&v108,
        (unsigned int)&v111,
        (unsigned int)&v113,
        (__int64)&v114,
        (__int64)&v106,
        (__int64)&unk_1801CD838,
        (__int64)&unk_1801CD858,
        (__int64)&unk_1801CD878);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801CB218, 0LL);
      sub_18007ED34(v106, &unk_1801CD678);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_1801CB238);
      sub_18007ED34(v106, &unk_1801CD658);
      LOBYTE(v104) = 1;
      v105 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801CB1B8, v104);
      sub_1800434E4(v7[37], (__int64)&unk_1801CD538, v105);
      sub_1800434E4(v7[37], (__int64)&unk_1801CD558, v105);
      sub_1800434E4(v7[37], (__int64)&unk_1801CD578, v105);
      result = sub_1800434E4(v7[37], (__int64)&unk_1801CD598, v105);
      if ( v107 )
        result = sub_180010EC8(v107);
      if ( *((_QWORD *)&v112 + 1) )
        return sub_180010EC8(*((__int64 *)&v112 + 1));
    }
  }
  return result;
}

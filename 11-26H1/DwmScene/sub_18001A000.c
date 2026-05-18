/*
 * XREFs of sub_18001A000 @ 0x18001A000
 * Callers:
 *     sub_18000D990 @ 0x18000D990 (sub_18000D990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000E78C @ 0x18000E78C (sub_18000E78C.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800166E8 @ 0x1800166E8 (sub_1800166E8.c)
 *     sub_180016A10 @ 0x180016A10 (sub_180016A10.c)
 *     sub_180016E10 @ 0x180016E10 (sub_180016E10.c)
 *     sub_18001777C @ 0x18001777C (sub_18001777C.c)
 *     sub_1800177A4 @ 0x1800177A4 (sub_1800177A4.c)
 *     sub_1800184CC @ 0x1800184CC (sub_1800184CC.c)
 *     sub_180021294 @ 0x180021294 (sub_180021294.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032F74 @ 0x180032F74 (sub_180032F74.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180055064 @ 0x180055064 (sub_180055064.c)
 *     sub_180055A78 @ 0x180055A78 (sub_180055A78.c)
 *     sub_180055ABC @ 0x180055ABC (sub_180055ABC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18001A000(_QWORD *a1, _DWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v5)(_QWORD, void *, __int128 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int128 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v13)(_QWORD, void *, _QWORD *); // rbx
  _QWORD *v14; // r13
  __int64 v15; // rsi
  void (__fastcall *v16)(__int64, _QWORD *); // rdi
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, _QWORD *); // rdi
  int v21; // ecx
  _QWORD *v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r8
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // rbx
  __int64 *v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 *v130; // rax
  _QWORD *v131; // rbx
  __int64 v132; // r8
  __int64 *v133; // rax
  __int128 v134; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v135; // [rsp+68h] [rbp-A0h] BYREF
  int v136; // [rsp+78h] [rbp-90h] BYREF
  __int64 v137; // [rsp+80h] [rbp-88h] BYREF
  __int64 v138; // [rsp+88h] [rbp-80h]
  __int64 v139; // [rsp+90h] [rbp-78h] BYREF
  __int64 v140; // [rsp+98h] [rbp-70h]
  __int128 v141; // [rsp+A8h] [rbp-60h] BYREF
  __int64 (__fastcall ***v142)(_QWORD, _QWORD, _QWORD); // [rsp+B8h] [rbp-50h]
  __int64 v143; // [rsp+C0h] [rbp-48h]
  int v144; // [rsp+C8h] [rbp-40h]
  int v145; // [rsp+CCh] [rbp-3Ch]
  int v146; // [rsp+D0h] [rbp-38h]
  __int16 v147; // [rsp+D4h] [rbp-34h]
  __int64 v148; // [rsp+D8h] [rbp-30h]
  __int64 v149; // [rsp+E0h] [rbp-28h]
  int v150; // [rsp+E8h] [rbp-20h]
  int v151; // [rsp+ECh] [rbp-1Ch]
  int v152; // [rsp+F0h] [rbp-18h]
  int v153; // [rsp+F4h] [rbp-14h]
  __int64 v154; // [rsp+F8h] [rbp-10h]
  int v155; // [rsp+100h] [rbp-8h]
  char v156; // [rsp+104h] [rbp-4h]
  unsigned __int64 v157; // [rsp+108h] [rbp+0h]
  __int64 v158; // [rsp+110h] [rbp+8h]
  __int128 v159; // [rsp+118h] [rbp+10h]
  _BYTE v160[16]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v161[2]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v162[38]; // [rsp+158h] [rbp+50h] BYREF
  __int64 retaddr; // [rsp+300h] [rbp+1F8h]

  *(_QWORD *)&v135 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v5 = ***(__int64 (__fastcall ****)(_QWORD, void *, __int128 *))a2;
  sub_18000F938((__int64 *)&v135);
  v6 = v5(v4, &unk_1800FA650, &v135);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_1800102C4(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v6);
LABEL_12:
    sub_18000F938((__int64 *)&v135);
    return v7;
  }
  *(_QWORD *)&v134 = 0LL;
  v8 = v135;
  v9 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v135 + 56LL);
  sub_18000F938((__int64 *)&v134);
  v10 = v9(v8, &v134);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 49LL;
LABEL_11:
    sub_1800102C4(
      retaddr,
      v11,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v10);
    sub_18000F938((__int64 *)&v134);
    goto LABEL_12;
  }
  memset(v162, 0, sizeof(v162));
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v134 + 64LL))(v134, v162);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 52LL;
    goto LABEL_11;
  }
  a1[3] = v162[37];
  v12 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v13 = ***(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))a2;
  v14 = a1 + 4;
  sub_18000F938(a1 + 4);
  v10 = v13(v12, &unk_1800FA608, a1 + 4);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 56LL;
    goto LABEL_11;
  }
  v15 = *v14;
  v16 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*v14 + 344LL);
  sub_18000F938(a1 + 5);
  v16(v15, a1 + 5);
  v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 304LL))(*v14) & 1;
  v136 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 296LL))(*v14);
  v18 = *v14;
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int, void *, _QWORD, _QWORD *))(*(_QWORD *)*v14
                                                                                                 + 376LL);
  sub_18000F938(a1 + 6);
  v10 = v19(v18, (unsigned int)v17, &v136, 1LL, 7, &unk_1800FA608, 0LL, a1 + 6);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 69LL;
    goto LABEL_11;
  }
  sub_18000F938((__int64 *)&v134);
  sub_18000F938((__int64 *)&v135);
  if ( a2[6] >= 4u )
    v21 = 1;
  else
    v21 = *((_DWORD *)&xmmword_1800FA620 + (unsigned int)a2[6]);
  v148 = 0LL;
  v149 = 0LL;
  v152 = 0;
  v153 = 1;
  v154 = 1LL;
  v155 = 0;
  v156 = 1;
  v141 = 0x100000004uLL;
  v142 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v143 = 0LL;
  v144 = 1;
  v145 = v21;
  v146 = 0;
  v147 = 0;
  v150 = 37120;
  v151 = 49408;
  v22 = (_QWORD *)sub_180021294(&v137);
  v134 = 0LL;
  v23 = sub_1800166E8((__int64 *)&v135, &v141, &v134, v22);
  v24 = *v23;
  *v23 = 0LL;
  v25 = (__int64 (__fastcall ***)(_QWORD, __int64))a1[7];
  a1[7] = v24;
  if ( v25 )
    sub_18000E78C(v24, v25);
  sub_1800184CC((__int64 (__fastcall ****)(_QWORD, __int64))&v135);
  sub_180029C50(a1[7] + 8LL, v160);
  v26 = sub_180033D14(a1[7], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C9958, 0LL, 1LL);
  if ( *((_BYTE *)a2 + 30) )
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801C93B8, 1LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CAAD8, 0LL, 1LL);
  LOBYTE(v27) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CAA58, v27, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CABB8, v28, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801CB738, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB718, v29, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB798, v30, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB7D8, v31, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB758, v32, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB778, v33, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB7B8, v34, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB6B8, v35, 1LL);
  LOBYTE(v36) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CB6D8, v36, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB5B8, v37, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801CB898, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB9B8, v38, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB8B8, v39, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB9D8, v40, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB998, v41, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB7F8, v42, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB838, v43, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB818, v44, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB878, v45, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB858, v46, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB5D8, v47, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB5F8, v48, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB618, v49, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB698, v50, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB638, v51, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB658, v52, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CB678, v53, 1LL);
  LOBYTE(v54) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CB6F8, v54, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CB8D8, 0LL, 1LL);
  LOBYTE(v55) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA778, v55, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA798, v56, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA7B8, v57, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA858, v58, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA838, v59, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA818, v60, 1LL);
  LOBYTE(v61) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA7D8, v61, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 152LL))(v26, &unk_1801CA898, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA7F8, v62, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA878, v63, 1LL);
  sub_18001777C(v26, (__int64)&unk_1801C9E38);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C9D38, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9C78, v64, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9C58, v65, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9C38, v66, 1LL);
  LOBYTE(v67) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C9B58, v67, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9E18, v68, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9C98, v69, 1LL);
  sub_18001777C(v26, (__int64)&unk_1801C9CB8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9B78, v70, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9B98, v71, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9BB8, v72, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9CF8, v73, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9D78, v74, 1LL);
  LOBYTE(v75) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C9D58, v75, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9DF8, v76, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9DB8, v77, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9D98, v78, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9DD8, v79, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9D18, v80, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9BD8, v81, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9BF8, v82, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9C18, v83, 1LL);
  sub_1800177A4(v26, (__int64)&unk_1801C9CD8);
  sub_18001777C(v26, (__int64)&unk_1801CA1F8);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA0F8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA038, v84, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA018, v85, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9FF8, v86, 1LL);
  LOBYTE(v87) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C9F18, v87, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA1D8, v88, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA058, v89, 1LL);
  sub_18001777C(v26, (__int64)&unk_1801CA078);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9F38, v90, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9F58, v91, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9F78, v92, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA0B8, v93, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA138, v94, 1LL);
  LOBYTE(v95) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA118, v95, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA1B8, v96, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA178, v97, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA158, v98, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA198, v99, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA0D8, v100, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9F98, v101, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9FB8, v102, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801C9FD8, v103, 1LL);
  sub_1800177A4(v26, (__int64)&unk_1801CA098);
  sub_18001777C(v26, (__int64)&unk_1801CA5B8);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA4B8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA3F8, v104, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA3D8, v105, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA3B8, v106, 1LL);
  LOBYTE(v107) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA2D8, v107, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA598, v108, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA418, v109, 1LL);
  sub_18001777C(v26, (__int64)&unk_1801CA438);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA2F8, v110, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA318, v111, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA338, v112, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA478, v113, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA4F8, v114, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA4D8, 0LL, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA578, v115, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA538, v116, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA518, v117, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA558, v118, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA498, v119, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA358, v120, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA378, v121, 1LL);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 168LL))(v26, &unk_1801CA398, v122, 1LL);
  sub_1800177A4(v26, (__int64)&unk_1801CA458);
  LOBYTE(v123) = 1;
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801CA758, v123, 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v26 + 144LL))(v26, &unk_1801C9A38, 0LL, 1LL);
  sub_180033E4C(a1[7], &v134, 1LL);
  v124 = v134;
  sub_180029C50(v134 + 24, &v139);
  v158 = 0LL;
  *(_QWORD *)&v159 = 0LL;
  DWORD2(v159) = 0;
  LODWORD(v157) = 3;
  v135 = 0LL;
  v161[0] = v157;
  v161[1] = v159;
  v125 = sub_180016A10(
           v124,
           &v137,
           (__int64)v161,
           (int)&v134,
           (__int64)&v135,
           (__int64)(a2 + 2),
           (__int64)(a2 + 3),
           (__int64)(a2 + 4),
           (__int64)(a2 + 5));
  v126 = *v125;
  v127 = v125[1];
  *v125 = 0LL;
  v125[1] = 0LL;
  a1[10] = v126;
  v128 = a1[11];
  a1[11] = v127;
  if ( v128 )
    sub_180010EC8(v128);
  if ( v138 )
    sub_180010EC8(v138);
  if ( *((_QWORD *)&v135 + 1) )
    sub_180010EC8(*((__int64 *)&v135 + 1));
  LOBYTE(v127) = *((_BYTE *)a2 + 29);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[10] + 272LL))(a1[10], v127);
  v130 = (__int64 *)sub_180032F74(a1[7], &v137, v129, 1LL);
  v131 = a1 + 8;
  sub_180011F5C(a1 + 8, v130);
  if ( v138 )
    sub_180010EC8(v138);
  sub_180012C40(&v135, a1 + 10);
  sub_180055064(v132, &v135);
  if ( *((_QWORD *)&v135 + 1) )
    sub_180010EC8(*((__int64 *)&v135 + 1));
  sub_180055A78(*v131);
  sub_180055ABC(*v131);
  sub_180011E54((__int64)&v139);
  if ( *((_QWORD *)&v134 + 1) )
    sub_180010EC8(*((__int64 *)&v134 + 1));
  v133 = sub_180016E10((_QWORD *)a1[7], &v139);
  sub_180011F5C(a1 + 12, v133);
  if ( v140 )
    sub_180010EC8(v140);
  qword_1801C8518 = (__int64)a1;
  sub_180011E54((__int64)v160);
  return 0LL;
}

/*
 * XREFs of ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800C29B0
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BDA84 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800C430C (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::FeedRecognizer(
        MPCSpatialGestureRecognizerHandler *this,
        struct LegacyInputInfo *a2)
{
  __int64 v4; // r10
  __int128 *v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int128 *v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r10
  __int128 *v26; // rax
  __int128 v27; // xmm1
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 *v30; // rdx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // r8
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // r10
  __int128 *v47; // rax
  __int128 v48; // xmm1
  __int64 v49; // rcx
  __int128 v50; // xmm0
  __int128 *v51; // rdx
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 v59; // r8
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r10
  __int128 *v69; // rax
  __int128 v70; // xmm1
  __int128 *v71; // rdx
  __int64 v72; // rcx
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int64 v81; // r8
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int64 v87; // rax
  int v88; // eax
  int v89; // eax
  __int64 v90; // rcx
  __int128 v91; // xmm1
  __int64 v92; // r8
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int128 v107; // xmm0
  __int64 v108; // rax
  int v109; // eax
  __int64 v110; // rcx
  __int128 v111; // xmm1
  __int64 v112; // r8
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm0
  __int128 v122; // xmm1
  __int128 v123; // xmm0
  __int128 v124; // xmm1
  __int128 v125; // xmm0
  __int128 v126; // xmm1
  __int128 v127; // xmm0
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rcx
  __int128 v131; // xmm1
  __int64 v132; // r8
  __int128 v133; // xmm0
  __int128 v134; // xmm1
  __int128 v135; // xmm0
  __int128 v136; // xmm1
  __int128 v137; // xmm0
  __int128 v138; // xmm1
  __int128 v139; // xmm0
  __int128 v140; // xmm1
  __int128 v141; // xmm0
  __int128 v142; // xmm1
  __int128 v143; // xmm0
  __int128 v144; // xmm1
  __int128 v145; // xmm0
  __int128 v146; // xmm1
  __int128 v147; // xmm0
  __int64 v148; // rax
  int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int128 v152; // xmm1
  __int64 v153; // r8
  __int128 v154; // xmm0
  __int128 v155; // xmm1
  __int128 v156; // xmm0
  __int128 v157; // xmm1
  __int128 v158; // xmm0
  __int128 v159; // xmm1
  __int128 v160; // xmm0
  __int128 v161; // xmm1
  __int128 v162; // xmm0
  __int128 v163; // xmm1
  __int128 v164; // xmm0
  __int128 v165; // xmm1
  __int128 v166; // xmm0
  __int128 v167; // xmm1
  __int128 v168; // xmm0
  __int64 v169; // rax
  int v170; // eax
  int v171; // [rsp+28h] [rbp-E0h]
  __int128 v172; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v173; // [rsp+48h] [rbp-C0h]
  __int128 v174; // [rsp+58h] [rbp-B0h]
  __int128 v175; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v176; // [rsp+78h] [rbp-90h]
  __int128 v177; // [rsp+88h] [rbp-80h]
  __int128 v178; // [rsp+98h] [rbp-70h]
  __int128 v179; // [rsp+A8h] [rbp-60h]
  __int128 v180; // [rsp+B8h] [rbp-50h]
  __int128 v181; // [rsp+C8h] [rbp-40h]
  __int128 v182; // [rsp+D8h] [rbp-30h]
  __int128 v183; // [rsp+E8h] [rbp-20h]
  __int128 v184; // [rsp+F8h] [rbp-10h]
  __int128 v185; // [rsp+108h] [rbp+0h]
  __int128 v186; // [rsp+118h] [rbp+10h]
  __int128 v187; // [rsp+128h] [rbp+20h]
  __int128 v188; // [rsp+138h] [rbp+30h]
  __int128 v189; // [rsp+148h] [rbp+40h]
  __int64 v190; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+560h] [rbp+458h]

  *((_QWORD *)this + 13) = a2;
  *((_DWORD *)this + 8) = (int)*((float *)a2 + 218);
  *((_DWORD *)this + 9) = (int)*((float *)a2 + 219);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 2);
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 2:
      if ( *((_BYTE *)a2 + 1204) )
        v67 = 0LL;
      else
        v67 = *((unsigned int *)a2 + 67);
      MPCSpatialGestureRecognizerHandler::SetMode(this, v67);
      v68 = *((_QWORD *)this + 3);
      v69 = (__int128 *)((char *)a2 + 936);
      v70 = *(_OWORD *)((char *)a2 + 328);
      v71 = &v175;
      v72 = 9LL;
      v172 = *(_OWORD *)((char *)a2 + 312);
      v73 = *(_OWORD *)((char *)a2 + 344);
      v173 = v70;
      v174 = v73;
      do
      {
        v74 = v69[1];
        *v71 = *v69;
        v75 = v69[2];
        v71[1] = v74;
        v76 = v69[3];
        v71[2] = v75;
        v77 = v69[4];
        v71[3] = v76;
        v78 = v69[5];
        v71[4] = v77;
        v79 = v69[6];
        v71[5] = v78;
        v80 = v69[7];
        v69 += 8;
        v71[6] = v79;
        v71 += 8;
        *(v71 - 1) = v80;
        --v72;
      }
      while ( v72 );
      v81 = *((_QWORD *)a2 + 2);
      v82 = v69[1];
      *v71 = *v69;
      v83 = v69[2];
      v71[1] = v82;
      v84 = v69[3];
      v71[2] = v83;
      v85 = v69[4];
      v71[3] = v84;
      v86 = v69[5];
      v87 = *((_QWORD *)v69 + 12);
      v71[4] = v85;
      v71[5] = v86;
      *((_QWORD *)v71 + 12) = v87;
      v88 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v68 + 48LL))(
              v68,
              &v175,
              v81,
              &v172);
      if ( v88 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xCE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v88,
          v171);
      break;
    case 3:
      v46 = *((_QWORD *)this + 3);
      v47 = (__int128 *)((char *)a2 + 936);
      v48 = *(_OWORD *)((char *)a2 + 328);
      v49 = 9LL;
      v172 = *(_OWORD *)((char *)a2 + 312);
      v50 = *(_OWORD *)((char *)a2 + 344);
      v51 = &v175;
      v173 = v48;
      v174 = v50;
      do
      {
        v52 = v47[1];
        *v51 = *v47;
        v53 = v47[2];
        v51[1] = v52;
        v54 = v47[3];
        v51[2] = v53;
        v55 = v47[4];
        v51[3] = v54;
        v56 = v47[5];
        v51[4] = v55;
        v57 = v47[6];
        v51[5] = v56;
        v58 = v47[7];
        v47 += 8;
        v51[6] = v57;
        v51 += 8;
        *(v51 - 1) = v58;
        --v49;
      }
      while ( v49 );
      v59 = *((_QWORD *)a2 + 2);
      v60 = v47[1];
      *v51 = *v47;
      v61 = v47[2];
      v51[1] = v60;
      v62 = v47[3];
      v51[2] = v61;
      v63 = v47[4];
      v51[3] = v62;
      v64 = v47[5];
      v65 = *((_QWORD *)v47 + 12);
      v51[4] = v63;
      v51[5] = v64;
      *((_QWORD *)v51 + 12) = v65;
      v66 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v46 + 64LL))(
              v46,
              &v175,
              v59,
              &v172);
      if ( v66 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE2,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v66,
          v171);
      break;
    case 4:
      v25 = *((_QWORD *)this + 3);
      v26 = (__int128 *)((char *)a2 + 936);
      v27 = *(_OWORD *)((char *)a2 + 328);
      v28 = 9LL;
      v172 = *(_OWORD *)((char *)a2 + 312);
      v29 = *(_OWORD *)((char *)a2 + 344);
      v30 = &v175;
      v173 = v27;
      v174 = v29;
      do
      {
        v31 = v26[1];
        *v30 = *v26;
        v32 = v26[2];
        v30[1] = v31;
        v33 = v26[3];
        v30[2] = v32;
        v34 = v26[4];
        v30[3] = v33;
        v35 = v26[5];
        v30[4] = v34;
        v36 = v26[6];
        v30[5] = v35;
        v37 = v26[7];
        v26 += 8;
        v30[6] = v36;
        v30 += 8;
        *(v30 - 1) = v37;
        --v28;
      }
      while ( v28 );
      v38 = *((_QWORD *)a2 + 2);
      v39 = v26[1];
      *v30 = *v26;
      v40 = v26[2];
      v30[1] = v39;
      v41 = v26[3];
      v30[2] = v40;
      v42 = v26[4];
      v30[3] = v41;
      v43 = v26[5];
      v44 = *((_QWORD *)v26 + 12);
      v30[4] = v42;
      v30[5] = v43;
      *((_QWORD *)v30 + 12) = v44;
      v45 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v25 + 72LL))(
              v25,
              &v175,
              v38,
              &v172);
      if ( (int)(v45 + 0x80000000) >= 0 && v45 != -2147023728 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF0,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)v45,
          v171);
      break;
    case 6:
    case 0xB:
      v4 = *((_QWORD *)this + 3);
      v5 = (__int128 *)((char *)a2 + 936);
      v6 = *(_OWORD *)((char *)a2 + 328);
      v7 = 9LL;
      v172 = *(_OWORD *)((char *)a2 + 312);
      v8 = *(_OWORD *)((char *)a2 + 344);
      v9 = &v175;
      v173 = v6;
      v174 = v8;
      do
      {
        v10 = v5[1];
        *v9 = *v5;
        v11 = v5[2];
        v9[1] = v10;
        v12 = v5[3];
        v9[2] = v11;
        v13 = v5[4];
        v9[3] = v12;
        v14 = v5[5];
        v9[4] = v13;
        v15 = v5[6];
        v9[5] = v14;
        v16 = v5[7];
        v5 += 8;
        v9[6] = v15;
        v9 += 8;
        *(v9 - 1) = v16;
        --v7;
      }
      while ( v7 );
      v17 = *((_QWORD *)a2 + 2);
      v18 = v5[1];
      *v9 = *v5;
      v19 = v5[2];
      v9[1] = v18;
      v20 = v5[3];
      v9[2] = v19;
      v21 = v5[4];
      v9[3] = v20;
      v22 = v5[5];
      v23 = *((_QWORD *)v5 + 12);
      v9[4] = v21;
      v9[5] = v22;
      *((_QWORD *)v9 + 12) = v23;
      v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v4 + 56LL))(
              v4,
              &v175,
              v17,
              &v172);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xD9,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v24,
          v171);
      break;
  }
  if ( *((_DWORD *)a2 + 17) == 2 )
  {
    if ( *(_DWORD *)a2 == 0x2000 )
      v150 = 0LL;
    else
      v150 = *((unsigned int *)a2 + 67);
    MPCSpatialGestureRecognizerHandler::SetMode(this, v150);
    v151 = *((_QWORD *)this + 3);
    v152 = *(_OWORD *)((char *)a2 + 328);
    v153 = *((_QWORD *)a2 + 2);
    v172 = *(_OWORD *)((char *)a2 + 312);
    v154 = *(_OWORD *)((char *)a2 + 344);
    v173 = v152;
    v155 = *((_OWORD *)a2 + 142);
    v174 = v154;
    v175 = *((_OWORD *)a2 + 141);
    v156 = *((_OWORD *)a2 + 143);
    v176 = v155;
    v157 = *((_OWORD *)a2 + 144);
    v177 = v156;
    v158 = *((_OWORD *)a2 + 145);
    v178 = v157;
    v159 = *((_OWORD *)a2 + 146);
    v179 = v158;
    v160 = *((_OWORD *)a2 + 147);
    v180 = v159;
    v161 = *((_OWORD *)a2 + 148);
    v181 = v160;
    v162 = *((_OWORD *)a2 + 149);
    v182 = v161;
    v163 = *((_OWORD *)a2 + 150);
    v183 = v162;
    v164 = *((_OWORD *)a2 + 151);
    v184 = v163;
    v165 = *((_OWORD *)a2 + 152);
    v185 = v164;
    v166 = *((_OWORD *)a2 + 153);
    v186 = v165;
    v167 = *((_OWORD *)a2 + 154);
    v187 = v166;
    v168 = *((_OWORD *)a2 + 155);
    v169 = *((_QWORD *)a2 + 312);
    v188 = v167;
    v189 = v168;
    v190 = v169;
    v170 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v151 + 80LL))(
             v151,
             &v175,
             v153,
             &v172);
    if ( v170 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x10D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v170,
        v171);
  }
  else
  {
    switch ( *((_DWORD *)a2 + 17) )
    {
      case 3:
LABEL_39:
        v130 = *((_QWORD *)this + 3);
        v131 = *(_OWORD *)((char *)a2 + 328);
        v132 = *((_QWORD *)a2 + 2);
        v172 = *(_OWORD *)((char *)a2 + 312);
        v133 = *(_OWORD *)((char *)a2 + 344);
        v173 = v131;
        v134 = *((_OWORD *)a2 + 142);
        v174 = v133;
        v175 = *((_OWORD *)a2 + 141);
        v135 = *((_OWORD *)a2 + 143);
        v176 = v134;
        v136 = *((_OWORD *)a2 + 144);
        v177 = v135;
        v137 = *((_OWORD *)a2 + 145);
        v178 = v136;
        v138 = *((_OWORD *)a2 + 146);
        v179 = v137;
        v139 = *((_OWORD *)a2 + 147);
        v180 = v138;
        v140 = *((_OWORD *)a2 + 148);
        v181 = v139;
        v141 = *((_OWORD *)a2 + 149);
        v182 = v140;
        v142 = *((_OWORD *)a2 + 150);
        v183 = v141;
        v143 = *((_OWORD *)a2 + 151);
        v184 = v142;
        v144 = *((_OWORD *)a2 + 152);
        v185 = v143;
        v145 = *((_OWORD *)a2 + 153);
        v186 = v144;
        v146 = *((_OWORD *)a2 + 154);
        v187 = v145;
        v147 = *((_OWORD *)a2 + 155);
        v148 = *((_QWORD *)a2 + 312);
        v188 = v146;
        v189 = v147;
        v190 = v148;
        v149 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v130 + 88LL))(
                 v130,
                 &v175,
                 v132,
                 &v172);
        if ( v149 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x117,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
            (const char *)(unsigned int)v149,
            v171);
        goto LABEL_31;
      case 4:
        v90 = *((_QWORD *)this + 3);
        v91 = *(_OWORD *)((char *)a2 + 328);
        v92 = *((_QWORD *)a2 + 2);
        v172 = *(_OWORD *)((char *)a2 + 312);
        v93 = *(_OWORD *)((char *)a2 + 344);
        v173 = v91;
        v94 = *((_OWORD *)a2 + 142);
        v174 = v93;
        v175 = *((_OWORD *)a2 + 141);
        v95 = *((_OWORD *)a2 + 143);
        v176 = v94;
        v96 = *((_OWORD *)a2 + 144);
        v177 = v95;
        v97 = *((_OWORD *)a2 + 145);
        v178 = v96;
        v98 = *((_OWORD *)a2 + 146);
        v179 = v97;
        v99 = *((_OWORD *)a2 + 147);
        v180 = v98;
        v100 = *((_OWORD *)a2 + 148);
        v181 = v99;
        v101 = *((_OWORD *)a2 + 149);
        v182 = v100;
        v102 = *((_OWORD *)a2 + 150);
        v183 = v101;
        v103 = *((_OWORD *)a2 + 151);
        v184 = v102;
        v104 = *((_OWORD *)a2 + 152);
        v185 = v103;
        v105 = *((_OWORD *)a2 + 153);
        v186 = v104;
        v106 = *((_OWORD *)a2 + 154);
        v187 = v105;
        v107 = *((_OWORD *)a2 + 155);
        v108 = *((_QWORD *)a2 + 312);
        v188 = v106;
        v189 = v107;
        v190 = v108;
        v109 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v90 + 96LL))(
                 v90,
                 &v175,
                 v92,
                 &v172);
        if ( v109 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x120,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
            (const char *)(unsigned int)v109,
            v171);
        break;
      case 5:
        break;
      case 6:
        goto LABEL_39;
      default:
        goto LABEL_31;
    }
    v110 = *((_QWORD *)this + 3);
    v111 = *(_OWORD *)((char *)a2 + 328);
    v112 = *((_QWORD *)a2 + 2);
    v172 = *(_OWORD *)((char *)a2 + 312);
    v113 = *(_OWORD *)((char *)a2 + 344);
    v173 = v111;
    v114 = *((_OWORD *)a2 + 142);
    v174 = v113;
    v175 = *((_OWORD *)a2 + 141);
    v115 = *((_OWORD *)a2 + 143);
    v176 = v114;
    v116 = *((_OWORD *)a2 + 144);
    v177 = v115;
    v117 = *((_OWORD *)a2 + 145);
    v178 = v116;
    v118 = *((_OWORD *)a2 + 146);
    v179 = v117;
    v119 = *((_OWORD *)a2 + 147);
    v180 = v118;
    v120 = *((_OWORD *)a2 + 148);
    v181 = v119;
    v121 = *((_OWORD *)a2 + 149);
    v182 = v120;
    v122 = *((_OWORD *)a2 + 150);
    v183 = v121;
    v123 = *((_OWORD *)a2 + 151);
    v184 = v122;
    v124 = *((_OWORD *)a2 + 152);
    v185 = v123;
    v125 = *((_OWORD *)a2 + 153);
    v186 = v124;
    v126 = *((_OWORD *)a2 + 154);
    v187 = v125;
    v127 = *((_OWORD *)a2 + 155);
    v128 = *((_QWORD *)a2 + 312);
    v188 = v126;
    v189 = v127;
    v190 = v128;
    v129 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int128 *))(*(_QWORD *)v110 + 104LL))(
             v110,
             &v175,
             v112,
             &v172);
    if ( v129 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x128,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v129,
        v171);
  }
LABEL_31:
  if ( *((_BYTE *)this + 200) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    *((_BYTE *)this + 200) = 0;
  }
  if ( *((_BYTE *)this + 172) )
    v89 = *((_DWORD *)this + 42);
  else
    v89 = 0;
  *((_DWORD *)a2 + 199) = v89;
  *((_DWORD *)a2 + 200) = *((_DWORD *)this + 44);
  *((_DWORD *)a2 + 201) = *((_DWORD *)this + 45);
  *((_QWORD *)this + 13) = 0LL;
}

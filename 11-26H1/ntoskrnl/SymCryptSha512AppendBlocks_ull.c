/*
 * XREFs of SymCryptSha512AppendBlocks_ull @ 0x14055EFDC
 * Callers:
 *     SymCryptSha512Append @ 0x14055EEFC (SymCryptSha512Append.c)
 *     SymCryptSha512Result @ 0x1405605A4 (SymCryptSha512Result.c)
 * Callees:
 *     SymCryptWipe @ 0x140556458 (SymCryptWipe.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha512AppendBlocks_ull(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rbx
  unsigned __int64 *v6; // r12
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // r13
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // r8
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r14
  __int64 v45; // rcx
  unsigned __int64 v46; // r11
  __int64 v47; // r8
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdi
  __int64 v57; // rcx
  unsigned __int64 v58; // r10
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int64 v63; // r11
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // r8
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // r14
  __int64 v69; // rdx
  unsigned __int64 v70; // rdi
  __int64 v71; // r15
  __int64 v72; // rdx
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // r11
  __int64 v75; // r9
  __int64 v76; // rdx
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rbx
  __int64 v79; // r10
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // r11
  unsigned __int64 v83; // r8
  unsigned __int64 v84; // r15
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // rdi
  unsigned __int64 v88; // r9
  __int64 v89; // r8
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // rsi
  unsigned __int64 v92; // r10
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // r14
  unsigned __int64 v95; // r11
  unsigned __int64 v96; // r8
  unsigned __int64 v97; // r15
  unsigned __int64 v98; // rbx
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // rdi
  unsigned __int64 v101; // r9
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // rsi
  unsigned __int64 v104; // r10
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // r14
  unsigned __int64 v107; // r11
  __int64 v108; // r8
  unsigned __int64 v109; // r8
  unsigned __int64 v110; // r15
  unsigned __int64 v111; // rbx
  unsigned __int64 v112; // r8
  unsigned __int64 v113; // rdi
  unsigned __int64 v114; // r9
  __int64 v115; // r8
  unsigned __int64 v116; // r8
  unsigned __int64 v117; // rsi
  unsigned __int64 v118; // r10
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // rdx
  __int64 v121; // rdx
  unsigned __int64 v122; // rdx
  bool v123; // zf
  __int64 *v125; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v127; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v128; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v129; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v130; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v131; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v132; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v133; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v134; // [rsp+70h] [rbp-90h]
  unsigned __int64 v135; // [rsp+80h] [rbp-80h]
  unsigned __int64 v136; // [rsp+90h] [rbp-70h]
  unsigned __int64 v137; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v138; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v139; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v140; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v141; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v142; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v143; // [rsp+100h] [rbp+0h]
  unsigned __int64 v144; // [rsp+108h] [rbp+8h]
  unsigned __int64 v145; // [rsp+110h] [rbp+10h]
  __int64 v146; // [rsp+118h] [rbp+18h]
  __int64 v147; // [rsp+120h] [rbp+20h]
  __int64 v148; // [rsp+128h] [rbp+28h]
  __int64 v149; // [rsp+130h] [rbp+30h]
  __int64 v150; // [rsp+138h] [rbp+38h]
  __int64 v151; // [rsp+140h] [rbp+40h]
  unsigned __int64 v152; // [rsp+148h] [rbp+48h]
  __int64 v153; // [rsp+150h] [rbp+50h]
  __int64 v154; // [rsp+158h] [rbp+58h]
  unsigned __int64 v155; // [rsp+160h] [rbp+60h]
  unsigned __int64 v157; // [rsp+170h] [rbp+70h]
  _QWORD v158[16]; // [rsp+180h] [rbp+80h] BYREF

  v4 = a4;
  if ( a3 >= 0x80 )
  {
    v5 = *a1;
    v6 = (unsigned __int64 *)(a2 + 16);
    v7 = a1[1];
    v8 = a1[2];
    v9 = a1[4];
    v10 = a1[5];
    v11 = a1[6];
    v12 = a1[7];
    v13 = a1[3];
    v155 = a3 >> 7;
    v146 = *a1;
    v147 = v7;
    v157 = -128LL * (a3 >> 7) + a3;
    v148 = v8;
    v150 = v9;
    v151 = v10;
    v153 = v11;
    v154 = v12;
    v149 = v13;
    v131 = (unsigned __int64 *)(a2 + 16);
    do
    {
      v14 = _byteswap_uint64(*(v6 - 2));
      v15 = __ROR8__(__ROR8__(v9, 4) ^ __ROR8__(v9, 27) ^ v9, 14)
          + v12
          + v14
          + (v11 ^ v9 & (v11 ^ v10))
          + 0x428A2F98D728AE22LL;
      v16 = v15 + v13;
      v17 = __ROR8__(__ROR8__(v5, 6) ^ __ROR8__(v5, 11) ^ v5, 28) + v15 + (v7 & v8 | v5 & (v7 | v8));
      v145 = _byteswap_uint64(*(v6 - 1));
      v18 = v11
          + v145
          + __ROR8__(v16 ^ __ROR8__(v16, 4) ^ __ROR8__(v16, 27), 14)
          + (v10 ^ v16 & (v10 ^ v9))
          + 0x7137449123EF65CDLL;
      v19 = v8 + v18;
      v20 = __ROR8__(v8 + v18, 27);
      v21 = __ROR8__(v8 + v18, 4);
      v22 = __ROR8__(__ROR8__(v17, 6) ^ __ROR8__(v17, 11) ^ v17, 28) + v18 + (v5 & v7 | v17 & (v5 | v7));
      v142 = _byteswap_uint64(*v6);
      v23 = v142 + v10 + __ROR8__(v19 ^ v21 ^ v20, 14) + (v9 ^ v19 & (v16 ^ v9)) - 0x4A3F043013B2C4D1LL;
      v24 = v23 + v7;
      v25 = __ROR8__(v23 + v7, 27);
      v26 = __ROR8__(v23 + v7, 4);
      v27 = __ROR8__(__ROR8__(v22, 6) ^ __ROR8__(v22, 11) ^ v22, 28) + v23 + (v5 & v17 | v22 & (v5 | v17));
      v132 = _byteswap_uint64(v6[1]);
      v28 = v9 + v132 + __ROR8__(v24 ^ v26 ^ v25, 14) + (v16 ^ v24 & (v16 ^ v19)) - 0x164A245A7E762444LL;
      v29 = v5 + v28;
      v30 = __ROR8__(v5 + v28, 27);
      v31 = __ROR8__(v5 + v28, 4);
      v32 = v28 + __ROR8__(__ROR8__(v27, 6) ^ __ROR8__(v27, 11) ^ v27, 28) + (v17 & v22 | v27 & (v17 | v22));
      v133 = _byteswap_uint64(v6[2]);
      v33 = v133 + __ROR8__(v29 ^ v31 ^ v30, 14) + v16 + (v19 ^ v29 & (v19 ^ v24)) + 0x3956C25BF348B538LL;
      v34 = v17 + v33;
      v35 = __ROR8__(v17 + v33, 27);
      v36 = __ROR8__(v32 ^ __ROR8__(v32, 6) ^ __ROR8__(v32, 11), 28) + v33 + (v22 & v27 | v32 & (v22 | v27));
      v37 = _byteswap_uint64(v6[3]);
      v38 = v37 + __ROR8__(v34 ^ __ROR8__(v34, 4) ^ v35, 14) + v19 + (v24 ^ v34 & (v29 ^ v24)) + 0x59F111F1B605D019LL;
      v135 = v37;
      v39 = v22 + v38;
      v40 = __ROR8__(v22 + v38, 27);
      v41 = __ROR8__(v22 + v38, 4);
      v42 = __ROR8__(__ROR8__(v36, 6) ^ __ROR8__(v36, 11) ^ v36, 28) + v38 + (v32 & v27 | v36 & (v32 | v27));
      v130 = _byteswap_uint64(v6[4]);
      v43 = v130 + __ROR8__(v39 ^ v41 ^ v40, 14) + v24 + (v29 ^ v39 & (v29 ^ v34)) - 0x6DC07D5B50E6B065LL;
      v44 = v27 + v43;
      v45 = __ROR8__(v27 + v43, 27);
      v46 = v43 + __ROR8__(__ROR8__(v42, 6) ^ __ROR8__(v42, 11) ^ v42, 28) + (v32 & v36 | v42 & (v32 | v36));
      v137 = _byteswap_uint64(v6[5]);
      v47 = v29 + v137 + __ROR8__(v44 ^ __ROR8__(v44, 4) ^ v45, 14) + (v34 ^ v44 & (v34 ^ v39)) - 0x54E3A12A25927EE8LL;
      v48 = v47 + v32;
      v49 = __ROR8__(v47 + v32, 27);
      v50 = __ROR8__(v47 + v32, 4);
      v51 = v47 + __ROR8__(__ROR8__(v46, 6) ^ __ROR8__(v46, 11) ^ v46, 28) + (v36 & v42 | v46 & (v36 | v42));
      v140 = _byteswap_uint64(v6[6]);
      v52 = v34 + v140 + __ROR8__(v48 ^ v50 ^ v49, 14) + (v39 ^ v48 & (v39 ^ v44)) - 0x27F855675CFCFDBELL;
      v53 = v52 + v36;
      v54 = v52 + __ROR8__(__ROR8__(v51, 6) ^ __ROR8__(v51, 11) ^ v51, 28) + (v42 & v46 | v51 & (v42 | v46));
      v143 = _byteswap_uint64(v131[7]);
      v55 = v39
          + __ROR8__(__ROR8__(v53, 4) ^ __ROR8__(v53, 27) ^ v53, 14)
          + (v44 ^ v53 & (v44 ^ v48))
          + v143
          + 0x12835B0145706FBELL;
      v56 = v55 + v42;
      v57 = __ROR8__(v55 + v42, 27);
      v58 = v55 + __ROR8__(v54 ^ __ROR8__(v54, 6) ^ __ROR8__(v54, 11), 28) + (v46 & v51 | v54 & (v46 | v51));
      v134 = _byteswap_uint64(v131[8]);
      v59 = v44 + v134 + __ROR8__(v56 ^ __ROR8__(v56, 4) ^ v57, 14) + (v48 ^ v56 & (v48 ^ v53)) + 0x243185BE4EE4B28CLL;
      v60 = v59 + v46;
      v61 = __ROR8__(v59 + v46, 27);
      v62 = __ROR8__(v59 + v46, 4);
      v63 = v59 + __ROR8__(v58 ^ __ROR8__(v58, 6) ^ __ROR8__(v58, 11), 28) + (v51 & v54 | v58 & (v51 | v54));
      v144 = _byteswap_uint64(v131[9]);
      v64 = v48 + v144 + __ROR8__(v60 ^ v62 ^ v61, 14) + (v53 ^ v60 & (v53 ^ v56)) + 0x550C7DC3D5FFB4E2LL;
      v65 = v64 + v51;
      v66 = __ROR8__(v63 ^ __ROR8__(v63, 6) ^ __ROR8__(v63, 11), 28) + (v54 & v58 | v63 & (v54 | v58)) + v64;
      v136 = _byteswap_uint64(v131[10]);
      v67 = v53
          + __ROR8__(v65 ^ __ROR8__(v65, 4) ^ __ROR8__(v65, 27), 14)
          + (v56 ^ v65 & (v56 ^ v60))
          + v136
          + 0x72BE5D74F27B896FLL;
      v127 = v67 + v54;
      v68 = __ROR8__(v66 ^ __ROR8__(v66, 6) ^ __ROR8__(v66, 11), 28) + v67 + (v58 & v63 | v66 & (v58 | v63));
      v139 = _byteswap_uint64(v131[11]);
      v69 = __ROR8__((v67 + v54) ^ __ROR8__(v67 + v54, 4) ^ __ROR8__(v67 + v54, 27), 14)
          + v139
          + v56
          + (v60 ^ (v67 + v54) & (v60 ^ v65))
          - 0x7F214E01C4E9694FLL;
      v70 = v69 + v58;
      v71 = __ROR8__(v68 ^ __ROR8__(v68, 6) ^ __ROR8__(v68, 11), 28) + v69 + (v63 & v66 | v68 & (v63 | v66));
      v138 = _byteswap_uint64(v131[12]);
      v72 = __ROR8__(v70 ^ __ROR8__(v70, 4) ^ __ROR8__(v70, 27), 14)
          + v138
          + v60
          + (v65 ^ v70 & (v127 ^ v65))
          - 0x6423F958DA38EDCBLL;
      v141 = _byteswap_uint64(v131[13]);
      v73 = v72 + v63;
      v74 = v127;
      v75 = __ROR8__(v71 ^ __ROR8__(v71, 6) ^ __ROR8__(v71, 11), 28) + v72 + (v68 & v66 | v71 & (v68 | v66));
      v76 = __ROR8__(v73 ^ __ROR8__(v73, 4) ^ __ROR8__(v73, 27), 14)
          + v141
          + v65
          + (v127 ^ v73 & (v70 ^ v127))
          - 0x3E640E8B3096D96CLL;
      v77 = v76 + v66;
      v128 = v77;
      v78 = v138;
      v125 = qword_140024A90;
      v79 = __ROR8__(v75 ^ __ROR8__(v75, 6) ^ __ROR8__(v75, 11), 28) + v76 + (v71 & v68 | v75 & (v71 | v68));
      do
      {
        v14 += v143
             + (__ROR8__(__ROR8__(v78, 42) ^ v78, 19) ^ (v78 >> 6))
             + (__ROR8__(v145 ^ __ROR8__(v145, 7), 1) ^ (v145 >> 7));
        v80 = v74
            + v14
            + __ROR8__(v77 ^ __ROR8__(v77, 4) ^ __ROR8__(v77, 27), 14)
            + *(v125 - 2)
            + (v70 ^ v77 & (v73 ^ v70));
        v81 = v80 + v68;
        v82 = v80 + __ROR8__(v79 ^ __ROR8__(v79, 6) ^ __ROR8__(v79, 11), 28) + (v75 & v71 | v79 & (v75 | v71));
        v145 += v134
              + (__ROR8__(v142 ^ __ROR8__(v142, 7), 1) ^ (v142 >> 7))
              + (__ROR8__(__ROR8__(v141, 42) ^ v141, 19) ^ (v141 >> 6));
        v158[1] = v145;
        v83 = v70
            + v145
            + __ROR8__(v81 ^ __ROR8__(v81, 4) ^ __ROR8__(v81, 27), 14)
            + *(v125 - 1)
            + (v73 ^ v81 & (v128 ^ v73));
        v84 = v83 + v71;
        v85 = v83 + __ROR8__(v82 ^ __ROR8__(v82, 6) ^ __ROR8__(v82, 11), 28) + (v79 & v75 | v82 & (v79 | v75));
        v142 += v144
              + (__ROR8__(v132 ^ __ROR8__(v132, 7), 1) ^ (v132 >> 7))
              + (__ROR8__(__ROR8__(v14, 42) ^ v14, 19) ^ (v14 >> 6));
        v158[2] = v142;
        v86 = *v125
            + v73
            + __ROR8__(v84 ^ __ROR8__(v84, 4) ^ __ROR8__(v84, 27), 14)
            + (v128 ^ v84 & (v128 ^ v81))
            + v142;
        v87 = v86 + v75;
        v88 = v86 + __ROR8__(v85 ^ __ROR8__(v85, 6) ^ __ROR8__(v85, 11), 28) + (v79 & v82 | v85 & (v79 | v82));
        v89 = v125[1] + (v81 ^ v87 & (v81 ^ v84));
        v132 += v136
              + (__ROR8__(v133 ^ __ROR8__(v133, 7), 1) ^ (v133 >> 7))
              + (__ROR8__(__ROR8__(v145, 42) ^ v145, 19) ^ (v145 >> 6));
        v158[3] = v132;
        v90 = v128 + v132 + __ROR8__(v87 ^ __ROR8__(v87, 4) ^ __ROR8__(v87, 27), 14) + v89;
        v91 = v90 + v79;
        v92 = v90 + __ROR8__(v88 ^ __ROR8__(v88, 6) ^ __ROR8__(v88, 11), 28) + (v82 & v85 | v88 & (v82 | v85));
        v133 += v139
              + (__ROR8__(v135 ^ __ROR8__(v135, 7), 1) ^ (v135 >> 7))
              + (__ROR8__(__ROR8__(v142, 42) ^ v142, 19) ^ (v142 >> 6));
        v158[4] = v133;
        v93 = v133
            + __ROR8__(v91 ^ __ROR8__(v91, 4) ^ __ROR8__(v91, 27), 14)
            + v81
            + v125[2]
            + (v84 ^ v91 & (v84 ^ v87));
        v94 = v82 + v93;
        v95 = __ROR8__(v92 ^ __ROR8__(v92, 6) ^ __ROR8__(v92, 11), 28) + v93 + (v85 & v88 | v92 & (v85 | v88));
        v135 += v138
              + (__ROR8__(v130 ^ __ROR8__(v130, 7), 1) ^ (v130 >> 7))
              + (__ROR8__(__ROR8__(v132, 42) ^ v132, 19) ^ (v132 >> 6));
        v158[5] = v135;
        v96 = __ROR8__(__ROR8__(v94, 4) ^ __ROR8__(v94, 27) ^ v94, 14)
            + v84
            + v125[3]
            + (v87 ^ v94 & (v87 ^ v91))
            + v135;
        v97 = v85 + v96;
        v98 = __ROR8__(__ROR8__(v95, 6) ^ __ROR8__(v95, 11) ^ v95, 28) + v96 + (v88 & v92 | v95 & (v88 | v92));
        v130 += v141
              + (__ROR8__(v137 ^ __ROR8__(v137, 7), 1) ^ (v137 >> 7))
              + (__ROR8__(v133 ^ __ROR8__(v133, 42), 19) ^ (v133 >> 6));
        v158[6] = v130;
        v99 = __ROR8__(__ROR8__(v97, 4) ^ __ROR8__(v97, 27) ^ v97, 14)
            + v87
            + v125[4]
            + (v91 ^ v97 & (v94 ^ v91))
            + v130;
        v100 = v88 + v99;
        v101 = __ROR8__(__ROR8__(v98, 6) ^ __ROR8__(v98, 11) ^ v98, 28) + v99 + (v95 & v92 | v98 & (v95 | v92));
        v137 += v14
              + (__ROR8__(v140 ^ __ROR8__(v140, 7), 1) ^ (v140 >> 7))
              + (__ROR8__(v135 ^ __ROR8__(v135, 42), 19) ^ (v135 >> 6));
        v158[7] = v137;
        v102 = __ROR8__(__ROR8__(v100, 4) ^ __ROR8__(v100, 27) ^ v100, 14)
             + v91
             + v125[5]
             + (v94 ^ v100 & (v94 ^ v97))
             + v137;
        v103 = v92 + v102;
        v104 = __ROR8__(__ROR8__(v101, 6) ^ __ROR8__(v101, 11) ^ v101, 28) + v102 + (v95 & v98 | v101 & (v95 | v98));
        v140 += v145
              + (__ROR8__(v143 ^ __ROR8__(v143, 7), 1) ^ (v143 >> 7))
              + (__ROR8__(v130 ^ __ROR8__(v130, 42), 19) ^ (v130 >> 6));
        v158[8] = v140;
        v105 = v94
             + __ROR8__(__ROR8__(v103, 4) ^ __ROR8__(v103, 27) ^ v103, 14)
             + v125[6]
             + (v97 ^ v103 & (v97 ^ v100))
             + v140;
        v106 = v105 + v95;
        v107 = v105 + __ROR8__(__ROR8__(v104, 6) ^ __ROR8__(v104, 11) ^ v104, 28) + (v98 & v101 | v104 & (v98 | v101));
        v143 += v142
              + (__ROR8__(v134 ^ __ROR8__(v134, 7), 1) ^ (v134 >> 7))
              + (__ROR8__(v137 ^ __ROR8__(v137, 42), 19) ^ (v137 >> 6));
        v108 = v125[7] + (v100 ^ v106 & (v100 ^ v103));
        v158[9] = v143;
        v109 = v143 + v97 + __ROR8__(v106 ^ __ROR8__(v106, 4) ^ __ROR8__(v106, 27), 14) + v108;
        v110 = v109 + v98;
        v111 = v109 + __ROR8__(v107 ^ __ROR8__(v107, 6) ^ __ROR8__(v107, 11), 28) + (v101 & v104 | v107 & (v101 | v104));
        v134 += v132
              + (__ROR8__(v144 ^ __ROR8__(v144, 7), 1) ^ (v144 >> 7))
              + (__ROR8__(v140 ^ __ROR8__(v140, 42), 19) ^ (v140 >> 6));
        v158[10] = v134;
        v112 = v134
             + v100
             + __ROR8__(v110 ^ __ROR8__(v110, 4) ^ __ROR8__(v110, 27), 14)
             + v125[8]
             + (v103 ^ v110 & (v106 ^ v103));
        v113 = v112 + v101;
        v114 = v112 + __ROR8__(v111 ^ __ROR8__(v111, 6) ^ __ROR8__(v111, 11), 28) + (v104 & v107 | v111 & (v104 | v107));
        v144 += v133
              + (__ROR8__(v136 ^ __ROR8__(v136, 7), 1) ^ (v136 >> 7))
              + (__ROR8__(v143 ^ __ROR8__(v143, 42), 19) ^ (v143 >> 6));
        v115 = v125[9] + (v106 ^ v113 & (v106 ^ v110));
        v158[11] = v144;
        v116 = v144 + v103 + __ROR8__(v113 ^ __ROR8__(v113, 4) ^ __ROR8__(v113, 27), 14) + v115;
        v117 = v116 + v104;
        v118 = v116 + __ROR8__(v114 ^ __ROR8__(v114, 6) ^ __ROR8__(v114, 11), 28) + (v107 & v111 | v114 & (v107 | v111));
        v136 += v135
              + (__ROR8__(v139 ^ __ROR8__(v139, 7), 1) ^ (v139 >> 7))
              + (__ROR8__(v134 ^ __ROR8__(v134, 42), 19) ^ (v134 >> 6));
        v158[12] = v136;
        v119 = __ROR8__(v117 ^ __ROR8__(v117, 4) ^ __ROR8__(v117, 27), 14)
             + v106
             + v125[10]
             + (v110 ^ v117 & (v110 ^ v113))
             + v136;
        v74 = v119 + v107;
        v68 = __ROR8__(v118 ^ __ROR8__(v118, 6) ^ __ROR8__(v118, 11), 28) + v119 + (v111 & v114 | v118 & (v111 | v114));
        v139 += v130
              + (__ROR8__(v138 ^ __ROR8__(v138, 7), 1) ^ (v138 >> 7))
              + (__ROR8__(v144 ^ __ROR8__(v144, 42), 19) ^ (v144 >> 6));
        v158[13] = v139;
        v120 = __ROR8__(v74 ^ __ROR8__(v74, 4) ^ __ROR8__(v74, 27), 14)
             + v110
             + v125[11]
             + (v113 ^ v74 & (v113 ^ v117))
             + v139;
        v71 = __ROR8__(v68 ^ __ROR8__(v68, 6) ^ __ROR8__(v68, 11), 28) + v120 + (v114 & v118 | v68 & (v114 | v118));
        v152 = v120 + v111;
        v78 = v137
            + (__ROR8__(v136 ^ __ROR8__(v136, 42), 19) ^ (v136 >> 6))
            + (__ROR8__(v141 ^ __ROR8__(v141, 7), 1) ^ (v141 >> 7))
            + v138;
        v138 = v78;
        v158[14] = v78;
        v121 = __ROR8__(v152 ^ __ROR8__(v152, 4) ^ __ROR8__(v152, 27), 14)
             + v113
             + v78
             + v125[12]
             + (v117 ^ v152 & (v74 ^ v117));
        v73 = v121 + v114;
        v75 = __ROR8__(v71 ^ __ROR8__(v71, 6) ^ __ROR8__(v71, 11), 28) + v121 + (v68 & v118 | v71 & (v68 | v118));
        v70 = v152;
        v141 += v140
              + (__ROR8__(__ROR8__(v14, 7) ^ v14, 1) ^ (v14 >> 7))
              + (__ROR8__(v139 ^ __ROR8__(v139, 42), 19) ^ (v139 >> 6));
        v158[15] = v141;
        v122 = __ROR8__(v73 ^ __ROR8__(v73, 4) ^ __ROR8__(v73, 27), 14)
             + v117
             + v125[13]
             + (v74 ^ v73 & (v152 ^ v74))
             + v141;
        v77 = v122 + v118;
        v128 = v122 + v118;
        v79 = __ROR8__(v75 ^ __ROR8__(v75, 6) ^ __ROR8__(v75, 11), 28) + v122 + (v71 & v68 | v75 & (v71 | v68));
        v125 += 16;
      }
      while ( (__int64)v125 < (__int64)&SymCryptSha384InitialState );
      v5 = v79 + v146;
      v13 = v68 + v149;
      v8 = v71 + v148;
      v10 = v73 + v151;
      v9 = v77 + v150;
      v6 = v131 + 16;
      v11 = v152 + v153;
      v129 = v74;
      v7 = v75 + v147;
      v158[0] = v14;
      v12 = v129 + v154;
      v123 = v155-- == 1;
      v146 = v5;
      *a1 = v5;
      v147 = v7;
      a1[1] = v7;
      v148 = v8;
      a1[2] = v8;
      v149 = v13;
      a1[3] = v13;
      v150 = v9;
      a1[4] = v9;
      v151 = v10;
      a1[5] = v10;
      v153 = v11;
      a1[6] = v11;
      v154 = v12;
      a1[7] = v12;
      v131 += 16;
    }
    while ( !v123 );
    a3 = v157;
    v4 = a4;
  }
  *v4 = a3;
  SymCryptWipe((__int64)v158, 0x80uLL);
  return 0LL;
}

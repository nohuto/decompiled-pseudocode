/*
 * XREFs of SymCryptSha512AppendBlocks_ull @ 0x140561500
 * Callers:
 *     SymCryptSha512Append @ 0x140561420 (SymCryptSha512Append.c)
 *     SymCryptSha512Result @ 0x140562AC0 (SymCryptSha512Result.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha512AppendBlocks_ull(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // rbx
  unsigned __int64 *v6; // r13
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // r14
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdi
  __int64 v40; // rcx
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r14
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  __int64 v53; // r8
  __int64 v54; // r15
  __int64 v55; // r9
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // r11
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r15
  __int64 v71; // rdx
  unsigned __int64 v72; // rdi
  __int64 v73; // r14
  __int64 v74; // rdx
  unsigned __int64 v75; // r12
  __int64 v76; // r11
  __int64 v77; // r9
  __int64 v78; // rdx
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // r13
  unsigned __int64 v81; // rbx
  __int64 v82; // r10
  __int64 v83; // r8
  __int64 v84; // r15
  __int64 v85; // r11
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // r14
  unsigned __int64 v88; // rbx
  unsigned __int64 v89; // r8
  unsigned __int64 v90; // rdi
  unsigned __int64 v91; // r9
  __int64 v92; // r8
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // rsi
  unsigned __int64 v95; // r10
  __int64 v96; // r8
  __int64 v97; // r15
  __int64 v98; // r11
  unsigned __int64 v99; // r8
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // rbx
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // rdi
  unsigned __int64 v104; // r9
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // rsi
  unsigned __int64 v107; // r10
  unsigned __int64 v108; // r8
  __int64 v109; // r15
  unsigned __int64 v110; // r11
  __int64 v111; // r8
  unsigned __int64 v112; // r8
  unsigned __int64 v113; // r14
  unsigned __int64 v114; // rbx
  unsigned __int64 v115; // r8
  unsigned __int64 v116; // rdi
  unsigned __int64 v117; // r9
  __int64 v118; // r8
  unsigned __int64 v119; // r8
  unsigned __int64 v120; // rsi
  unsigned __int64 v121; // r10
  __int64 v122; // rdx
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rdx
  bool v127; // zf
  __int64 *v129; // [rsp+20h] [rbp-E0h]
  __int64 v131; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v132; // [rsp+30h] [rbp-D0h]
  __int64 v133; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v134; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v135; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v136; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v137; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v138; // [rsp+70h] [rbp-90h]
  unsigned __int64 v139; // [rsp+80h] [rbp-80h]
  unsigned __int64 v140; // [rsp+90h] [rbp-70h]
  unsigned __int64 v141; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v142; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v143; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v144; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v145; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v146; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v147; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v148; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v149; // [rsp+100h] [rbp+0h]
  unsigned __int64 v150; // [rsp+100h] [rbp+0h]
  __int64 v151; // [rsp+110h] [rbp+10h]
  __int64 v152; // [rsp+118h] [rbp+18h]
  __int64 v153; // [rsp+120h] [rbp+20h]
  __int64 v154; // [rsp+128h] [rbp+28h]
  __int64 v155; // [rsp+130h] [rbp+30h]
  __int64 v156; // [rsp+138h] [rbp+38h]
  __int64 v157; // [rsp+140h] [rbp+40h]
  __int64 v158; // [rsp+148h] [rbp+48h]
  __int64 v159; // [rsp+150h] [rbp+50h]
  unsigned __int64 v160; // [rsp+158h] [rbp+58h]
  unsigned __int64 v162; // [rsp+168h] [rbp+68h]
  _QWORD v163[16]; // [rsp+170h] [rbp+70h] BYREF

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
    v160 = a3 >> 7;
    v152 = *a1;
    v153 = v7;
    v162 = -128LL * (a3 >> 7) + a3;
    v154 = v8;
    v155 = v9;
    v156 = v10;
    v157 = v11;
    v158 = v12;
    v151 = v13;
    v159 = a2 + 16;
    do
    {
      v149 = _byteswap_uint64(*(v6 - 2));
      v14 = __ROR8__(__ROR8__(v9, 4) ^ __ROR8__(v9, 27) ^ v9, 14)
          + v12
          + (v11 ^ v9 & (v11 ^ v10))
          + v149
          + 0x428A2F98D728AE22LL;
      v15 = v14 + v13;
      v16 = __ROR8__(__ROR8__(v5, 6) ^ __ROR8__(v5, 11) ^ v5, 28) + v14 + (v7 & v8 | v5 & (v7 | v8));
      v145 = _byteswap_uint64(*(v6 - 1));
      v17 = v11
          + v145
          + __ROR8__(v15 ^ __ROR8__(v15, 4) ^ __ROR8__(v15, 27), 14)
          + (v10 ^ v15 & (v10 ^ v9))
          + 0x7137449123EF65CDLL;
      v18 = v8 + v17;
      v19 = __ROR8__(v8 + v17, 27);
      v20 = __ROR8__(v8 + v17, 4);
      v21 = __ROR8__(v16 ^ __ROR8__(v16, 6) ^ __ROR8__(v16, 11), 28) + v17 + (v5 & v7 | v16 & (v5 | v7));
      v146 = _byteswap_uint64(*v6);
      v22 = v146 + v10 + __ROR8__(v18 ^ v20 ^ v19, 14) + (v9 ^ v18 & (v15 ^ v9)) - 0x4A3F043013B2C4D1LL;
      v23 = v22 + v7;
      v24 = __ROR8__(v22 + v7, 27);
      v25 = __ROR8__(v22 + v7, 4);
      v26 = __ROR8__(v21 ^ __ROR8__(v21, 6) ^ __ROR8__(v21, 11), 28) + v22 + (v5 & v16 | v21 & (v5 | v16));
      v27 = _byteswap_uint64(v6[1]);
      v28 = v27 + v9 + __ROR8__(v23 ^ v25 ^ v24, 14) + (v15 ^ v23 & (v15 ^ v18)) - 0x164A245A7E762444LL;
      v136 = v27;
      v29 = v28 + v5;
      v30 = __ROR8__(v28 + v5, 27);
      v31 = __ROR8__(v26 ^ __ROR8__(v26, 6) ^ __ROR8__(v26, 11), 28) + v28 + (v16 & v21 | v26 & (v16 | v21));
      v137 = _byteswap_uint64(v6[2]);
      v32 = v15 + v137 + __ROR8__(v29 ^ __ROR8__(v29, 4) ^ v30, 14) + (v18 ^ v29 & (v18 ^ v23)) + 0x3956C25BF348B538LL;
      v33 = v16 + v32;
      v34 = __ROR8__(v16 + v32, 27);
      v35 = __ROR8__(v16 + v32, 4);
      v36 = v32 + __ROR8__(v31 ^ __ROR8__(v31, 6) ^ __ROR8__(v31, 11), 28) + (v21 & v26 | v31 & (v21 | v26));
      v37 = _byteswap_uint64(v6[3]);
      v38 = v37 + __ROR8__(v33 ^ v35 ^ v34, 14) + v18 + (v23 ^ v33 & (v23 ^ v29)) + 0x59F111F1B605D019LL;
      v139 = v37;
      v39 = v21 + v38;
      v40 = __ROR8__(v21 + v38, 27);
      v41 = __ROR8__(v36 ^ __ROR8__(v36, 6) ^ __ROR8__(v36, 11), 28) + v38 + (v26 & v31 | v36 & (v26 | v31));
      v134 = _byteswap_uint64(v6[4]);
      v42 = v134 + __ROR8__(v39 ^ __ROR8__(v39, 4) ^ v40, 14) + v23 + (v29 ^ v39 & (v33 ^ v29)) - 0x6DC07D5B50E6B065LL;
      v43 = v26 + v42;
      v44 = __ROR8__(v26 + v42, 27);
      v45 = __ROR8__(v26 + v42, 4);
      v46 = v42 + __ROR8__(__ROR8__(v41, 6) ^ __ROR8__(v41, 11) ^ v41, 28) + (v36 & v31 | v41 & (v36 | v31));
      v47 = _byteswap_uint64(v6[5]);
      v48 = v47 + __ROR8__(v43 ^ v45 ^ v44, 14) + v29 + (v33 ^ v43 & (v33 ^ v39)) - 0x54E3A12A25927EE8LL;
      v135 = v47;
      v49 = v31 + v48;
      v50 = __ROR8__(v31 + v48, 27);
      v51 = __ROR8__(v31 + v48, 4);
      v52 = v48 + __ROR8__(__ROR8__(v46, 6) ^ __ROR8__(v46, 11) ^ v46, 28) + (v36 & v41 | v46 & (v36 | v41));
      v143 = _byteswap_uint64(v6[6]);
      v53 = v33 + v143 + __ROR8__(v49 ^ v51 ^ v50, 14) + (v39 ^ v49 & (v39 ^ v43)) - 0x27F855675CFCFDBELL;
      v54 = v53 + v36;
      v55 = v53 + __ROR8__(__ROR8__(v52, 6) ^ __ROR8__(v52, 11) ^ v52, 28) + (v41 & v46 | v52 & (v41 | v46));
      v147 = _byteswap_uint64(v6[7]);
      v56 = v39
          + __ROR8__(__ROR8__(v54, 4) ^ __ROR8__(v54, 27) ^ v54, 14)
          + (v43 ^ v54 & (v43 ^ v49))
          + v147
          + 0x12835B0145706FBELL;
      v57 = v56 + v41;
      v58 = __ROR8__(v56 + v41, 27);
      v59 = __ROR8__(v56 + v41, 4);
      v60 = v56 + __ROR8__(v55 ^ __ROR8__(v55, 6) ^ __ROR8__(v55, 11), 28) + (v46 & v52 | v55 & (v46 | v52));
      v138 = _byteswap_uint64(v6[8]);
      v61 = v43 + v138 + __ROR8__(v57 ^ v59 ^ v58, 14) + (v49 ^ v57 & (v49 ^ v54)) + 0x243185BE4EE4B28CLL;
      v62 = v61 + v46;
      v63 = __ROR8__(v61 + v46, 27);
      v64 = __ROR8__(v61 + v46, 4);
      v65 = v61 + __ROR8__(v60 ^ __ROR8__(v60, 6) ^ __ROR8__(v60, 11), 28) + (v52 & v55 | v60 & (v52 | v55));
      v148 = _byteswap_uint64(v6[9]);
      v66 = v49 + v148 + __ROR8__(v62 ^ v64 ^ v63, 14) + (v54 ^ v62 & (v54 ^ v57)) + 0x550C7DC3D5FFB4E2LL;
      v67 = v66 + v52;
      v68 = __ROR8__(v65 ^ __ROR8__(v65, 6) ^ __ROR8__(v65, 11), 28) + (v55 & v60 | v65 & (v55 | v60)) + v66;
      v140 = _byteswap_uint64(v6[10]);
      v69 = v54
          + __ROR8__(v67 ^ __ROR8__(v67, 4) ^ __ROR8__(v67, 27), 14)
          + (v57 ^ v67 & (v57 ^ v62))
          + v140
          + 0x72BE5D74F27B896FLL;
      v131 = v69 + v55;
      v70 = v69 + __ROR8__(v68 ^ __ROR8__(v68, 6) ^ __ROR8__(v68, 11), 28) + (v60 & v65 | v68 & (v60 | v65));
      v142 = _byteswap_uint64(v6[11]);
      v71 = __ROR8__((v69 + v55) ^ __ROR8__(v69 + v55, 4) ^ __ROR8__(v69 + v55, 27), 14)
          + v142
          + v57
          + (v62 ^ (v69 + v55) & (v62 ^ v67))
          - 0x7F214E01C4E9694FLL;
      v72 = v71 + v60;
      v73 = __ROR8__(v70 ^ __ROR8__(v70, 6) ^ __ROR8__(v70, 11), 28) + v71 + (v65 & v68 | v70 & (v65 | v68));
      v141 = _byteswap_uint64(v6[12]);
      v74 = __ROR8__((v71 + v60) ^ __ROR8__(v71 + v60, 4) ^ __ROR8__(v71 + v60, 27), 14)
          + v141
          + v62
          + (v67 ^ (v71 + v60) & (v131 ^ v67))
          - 0x6423F958DA38EDCBLL;
      v75 = v74 + v65;
      v76 = v131;
      v77 = __ROR8__(v73 ^ __ROR8__(v73, 6) ^ __ROR8__(v73, 11), 28) + v74 + (v70 & v68 | v73 & (v70 | v68));
      v144 = _byteswap_uint64(v6[13]);
      v78 = __ROR8__(v75 ^ __ROR8__(v75, 4) ^ __ROR8__(v75, 27), 14)
          + v144
          + v67
          + (v131 ^ v75 & (v72 ^ v131))
          - 0x3E640E8B3096D96CLL;
      v79 = v78 + v68;
      v132 = v79;
      v80 = v149;
      v81 = v141;
      v82 = __ROR8__(v77 ^ __ROR8__(v77, 6) ^ __ROR8__(v77, 11), 28) + v78 + (v73 & v70 | v77 & (v73 | v70));
      v129 = qword_140024350;
      do
      {
        v80 += v147
             + (__ROR8__(__ROR8__(v81, 42) ^ v81, 19) ^ (v81 >> 6))
             + (__ROR8__(v145 ^ __ROR8__(v145, 7), 1) ^ (v145 >> 7));
        v83 = v76
            + v80
            + __ROR8__(v79 ^ __ROR8__(v79, 4) ^ __ROR8__(v79, 27), 14)
            + *(v129 - 2)
            + (v72 ^ v79 & (v75 ^ v72));
        v84 = v83 + v70;
        v85 = v83 + __ROR8__(v82 ^ __ROR8__(v82, 6) ^ __ROR8__(v82, 11), 28) + (v77 & v73 | v82 & (v77 | v73));
        v145 += v138
              + (__ROR8__(__ROR8__(v144, 42) ^ v144, 19) ^ (v144 >> 6))
              + (__ROR8__(v146 ^ __ROR8__(v146, 7), 1) ^ (v146 >> 7));
        v163[1] = v145;
        v86 = v72
            + v145
            + __ROR8__(v84 ^ __ROR8__(v84, 4) ^ __ROR8__(v84, 27), 14)
            + *(v129 - 1)
            + (v75 ^ v84 & (v132 ^ v75));
        v87 = v86 + v73;
        v88 = v86 + __ROR8__(v85 ^ __ROR8__(v85, 6) ^ __ROR8__(v85, 11), 28) + (v82 & v77 | v85 & (v82 | v77));
        v146 += v148
              + (__ROR8__(v136 ^ __ROR8__(v136, 7), 1) ^ (v136 >> 7))
              + (__ROR8__(__ROR8__(v80, 42) ^ v80, 19) ^ (v80 >> 6));
        v163[2] = v146;
        v89 = *v129
            + v75
            + __ROR8__(v87 ^ __ROR8__(v87, 4) ^ __ROR8__(v87, 27), 14)
            + (v132 ^ v87 & (v132 ^ v84))
            + v146;
        v90 = v89 + v77;
        v91 = v89 + __ROR8__(v88 ^ __ROR8__(v88, 6) ^ __ROR8__(v88, 11), 28) + (v82 & v85 | v88 & (v82 | v85));
        v92 = v129[1] + (v84 ^ v90 & (v84 ^ v87));
        v136 += v140
              + (__ROR8__(v137 ^ __ROR8__(v137, 7), 1) ^ (v137 >> 7))
              + (__ROR8__(__ROR8__(v145, 42) ^ v145, 19) ^ (v145 >> 6));
        v163[3] = v136;
        v93 = v132 + v136 + __ROR8__(v90 ^ __ROR8__(v90, 4) ^ __ROR8__(v90, 27), 14) + v92;
        v94 = v93 + v82;
        v95 = v93 + __ROR8__(v91 ^ __ROR8__(v91, 6) ^ __ROR8__(v91, 11), 28) + (v85 & v88 | v91 & (v85 | v88));
        v137 += v142
              + (__ROR8__(v139 ^ __ROR8__(v139, 7), 1) ^ (v139 >> 7))
              + (__ROR8__(__ROR8__(v146, 42) ^ v146, 19) ^ (v146 >> 6));
        v163[4] = v137;
        v96 = v84
            + v137
            + __ROR8__(v94 ^ __ROR8__(v94, 4) ^ __ROR8__(v94, 27), 14)
            + v129[2]
            + (v87 ^ v94 & (v87 ^ v90));
        v97 = v85 + v96;
        v98 = v96 + __ROR8__(v95 ^ __ROR8__(v95, 6) ^ __ROR8__(v95, 11), 28) + (v88 & v91 | v95 & (v88 | v91));
        v139 += v141
              + (__ROR8__(__ROR8__(v136, 42) ^ v136, 19) ^ (v136 >> 6))
              + (__ROR8__(v134 ^ __ROR8__(v134, 7), 1) ^ (v134 >> 7));
        v163[5] = v139;
        v99 = __ROR8__(__ROR8__(v97, 4) ^ __ROR8__(v97, 27) ^ v97, 14)
            + v87
            + v129[3]
            + (v90 ^ v97 & (v90 ^ v94))
            + v139;
        v100 = v88 + v99;
        v101 = __ROR8__(__ROR8__(v98, 6) ^ __ROR8__(v98, 11) ^ v98, 28) + v99 + (v91 & v95 | v98 & (v91 | v95));
        v134 += v144
              + (__ROR8__(v135 ^ __ROR8__(v135, 7), 1) ^ (v135 >> 7))
              + (__ROR8__(__ROR8__(v137, 42) ^ v137, 19) ^ (v137 >> 6));
        v163[6] = v134;
        v102 = __ROR8__(__ROR8__(v100, 4) ^ __ROR8__(v100, 27) ^ v100, 14)
             + v90
             + v129[4]
             + (v94 ^ v100 & (v97 ^ v94))
             + v134;
        v103 = v91 + v102;
        v104 = __ROR8__(v101 ^ __ROR8__(v101, 6) ^ __ROR8__(v101, 11), 28) + v102 + (v95 & v98 | v101 & (v95 | v98));
        v135 += v80
              + (__ROR8__(v143 ^ __ROR8__(v143, 7), 1) ^ (v143 >> 7))
              + (__ROR8__(v139 ^ __ROR8__(v139, 42), 19) ^ (v139 >> 6));
        v163[7] = v135;
        v105 = __ROR8__(__ROR8__(v103, 4) ^ __ROR8__(v103, 27) ^ v103, 14)
             + v94
             + v129[5]
             + (v97 ^ v103 & (v97 ^ v100))
             + v135;
        v106 = v95 + v105;
        v107 = __ROR8__(__ROR8__(v104, 6) ^ __ROR8__(v104, 11) ^ v104, 28) + v105 + (v101 & v98 | v104 & (v101 | v98));
        v143 += v145
              + (__ROR8__(v147 ^ __ROR8__(v147, 7), 1) ^ (v147 >> 7))
              + (__ROR8__(v134 ^ __ROR8__(v134, 42), 19) ^ (v134 >> 6));
        v163[8] = v143;
        v108 = v97
             + __ROR8__(__ROR8__(v106, 4) ^ __ROR8__(v106, 27) ^ v106, 14)
             + v129[6]
             + (v100 ^ v106 & (v100 ^ v103))
             + v143;
        v109 = v98 + v108;
        v110 = v108 + __ROR8__(__ROR8__(v107, 6) ^ __ROR8__(v107, 11) ^ v107, 28) + (v101 & v104 | v107 & (v101 | v104));
        v147 += v146
              + (__ROR8__(v138 ^ __ROR8__(v138, 7), 1) ^ (v138 >> 7))
              + (__ROR8__(v135 ^ __ROR8__(v135, 42), 19) ^ (v135 >> 6));
        v111 = v129[7] + (v103 ^ v109 & (v103 ^ v106));
        v163[9] = v147;
        v112 = v147 + v100 + __ROR8__(v109 ^ __ROR8__(v109, 4) ^ __ROR8__(v109, 27), 14) + v111;
        v113 = v112 + v101;
        v114 = v112 + __ROR8__(v110 ^ __ROR8__(v110, 6) ^ __ROR8__(v110, 11), 28) + (v104 & v107 | v110 & (v104 | v107));
        v138 += v136
              + (__ROR8__(v148 ^ __ROR8__(v148, 7), 1) ^ (v148 >> 7))
              + (__ROR8__(v143 ^ __ROR8__(v143, 42), 19) ^ (v143 >> 6));
        v163[10] = v138;
        v115 = v138
             + v103
             + __ROR8__(v113 ^ __ROR8__(v113, 4) ^ __ROR8__(v113, 27), 14)
             + v129[8]
             + (v106 ^ v113 & (v109 ^ v106));
        v116 = v115 + v104;
        v117 = v115 + __ROR8__(v114 ^ __ROR8__(v114, 6) ^ __ROR8__(v114, 11), 28) + (v107 & v110 | v114 & (v107 | v110));
        v148 += v137
              + (__ROR8__(v140 ^ __ROR8__(v140, 7), 1) ^ (v140 >> 7))
              + (__ROR8__(v147 ^ __ROR8__(v147, 42), 19) ^ (v147 >> 6));
        v118 = v129[9] + (v109 ^ v116 & (v109 ^ v113));
        v163[11] = v148;
        v119 = v148 + v106 + __ROR8__(v116 ^ __ROR8__(v116, 4) ^ __ROR8__(v116, 27), 14) + v118;
        v120 = v119 + v107;
        v121 = v119 + __ROR8__(v117 ^ __ROR8__(v117, 6) ^ __ROR8__(v117, 11), 28) + (v110 & v114 | v117 & (v110 | v114));
        v140 += v139
              + (__ROR8__(v142 ^ __ROR8__(v142, 7), 1) ^ (v142 >> 7))
              + (__ROR8__(v138 ^ __ROR8__(v138, 42), 19) ^ (v138 >> 6));
        v163[12] = v140;
        v122 = v109
             + __ROR8__(v120 ^ __ROR8__(v120, 4) ^ __ROR8__(v120, 27), 14)
             + v129[10]
             + (v113 ^ v120 & (v113 ^ v116))
             + v140;
        v76 = v122 + v110;
        v70 = v122 + __ROR8__(v121 ^ __ROR8__(v121, 6) ^ __ROR8__(v121, 11), 28) + (v114 & v117 | v121 & (v114 | v117));
        v142 += v134
              + (__ROR8__(v148 ^ __ROR8__(v148, 42), 19) ^ (v148 >> 6))
              + (__ROR8__(v141 ^ __ROR8__(v141, 7), 1) ^ (v141 >> 7));
        v163[13] = v142;
        v123 = __ROR8__(v76 ^ __ROR8__(v76, 4) ^ __ROR8__(v76, 27), 14)
             + v113
             + v129[11]
             + (v116 ^ v76 & (v116 ^ v120))
             + v142;
        v73 = __ROR8__(v70 ^ __ROR8__(v70, 6) ^ __ROR8__(v70, 11), 28) + v123 + (v117 & v121 | v70 & (v117 | v121));
        v150 = v123 + v114;
        v81 = v135
            + (__ROR8__(v140 ^ __ROR8__(v140, 42), 19) ^ (v140 >> 6))
            + (__ROR8__(v144 ^ __ROR8__(v144, 7), 1) ^ (v144 >> 7))
            + v141;
        v141 = v81;
        v124 = v116 + v81 + v129[12] + (v120 ^ v150 & (v76 ^ v120));
        v163[14] = v81;
        v125 = __ROR8__(v150 ^ __ROR8__(v150, 4) ^ __ROR8__(v150, 27), 14) + v124;
        v75 = v125 + v117;
        v77 = __ROR8__(v73 ^ __ROR8__(v73, 6) ^ __ROR8__(v73, 11), 28) + v125 + (v70 & v121 | v73 & (v70 | v121));
        v72 = v150;
        v144 += v143
              + (__ROR8__(__ROR8__(v80, 7) ^ v80, 1) ^ (v80 >> 7))
              + (__ROR8__(v142 ^ __ROR8__(v142, 42), 19) ^ (v142 >> 6));
        v163[15] = v144;
        v126 = __ROR8__(v75 ^ __ROR8__(v75, 4) ^ __ROR8__(v75, 27), 14)
             + v120
             + v129[13]
             + (v76 ^ v75 & (v150 ^ v76))
             + v144;
        v79 = v126 + v121;
        v132 = v126 + v121;
        v82 = __ROR8__(v77 ^ __ROR8__(v77, 6) ^ __ROR8__(v77, 11), 28) + v126 + (v73 & v70 | v77 & (v73 | v70));
        v129 += 16;
      }
      while ( (__int64)v129 < (__int64)&SymCryptSha384InitialState );
      v5 = v82 + v152;
      v8 = v73 + v154;
      v13 = v70 + v151;
      v9 = v79 + v155;
      v11 = v150 + v157;
      v133 = v76;
      v7 = v77 + v153;
      v163[0] = v80;
      v12 = v133 + v158;
      v6 = (unsigned __int64 *)(v159 + 128);
      v10 = v75 + v156;
      v127 = v160-- == 1;
      v152 = v5;
      *a1 = v5;
      v153 = v7;
      a1[1] = v7;
      v154 = v8;
      a1[2] = v8;
      v151 = v13;
      a1[3] = v13;
      v155 = v9;
      a1[4] = v9;
      v156 = v10;
      a1[5] = v10;
      v157 = v11;
      a1[6] = v11;
      v158 = v12;
      a1[7] = v12;
      v159 += 128LL;
    }
    while ( !v127 );
    a3 = v162;
    v4 = a4;
  }
  *v4 = a3;
  SymCryptWipe((__int64)v163, 0x80uLL);
  return 0LL;
}

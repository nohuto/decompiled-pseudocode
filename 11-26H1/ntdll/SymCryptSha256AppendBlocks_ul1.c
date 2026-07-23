/*
 * XREFs of SymCryptSha256AppendBlocks_ul1 @ 0x1800FD880
 * Callers:
 *     SymCryptSha256Result @ 0x1800FD764 (SymCryptSha256Result.c)
 *     SymCryptSha256Append @ 0x180120F44 (SymCryptSha256Append.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha256AppendBlocks_ul1(__m128i *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // rax
  __m128i *v5; // rdi
  __m128i v6; // xmm4
  unsigned int *v7; // r13
  __m128i v8; // xmm5
  __int32 v9; // esi
  __int32 v10; // ebp
  __int32 v11; // r9d
  __int32 v12; // r11d
  __int32 v13; // ebx
  __int32 v14; // r10d
  int v15; // r8d
  int v16; // r14d
  int v17; // edi
  unsigned __int32 v18; // r8d
  unsigned __int32 v19; // r15d
  int v20; // r9d
  unsigned __int32 v21; // r8d
  unsigned __int32 v22; // r12d
  int v23; // r10d
  int v24; // r8d
  __int32 v25; // esi
  int v26; // r11d
  unsigned __int32 v27; // r8d
  unsigned __int32 v28; // ebp
  int v29; // ebx
  unsigned __int32 v30; // r8d
  unsigned __int32 v31; // r14d
  int v32; // ecx
  int v33; // r9d
  unsigned __int32 v34; // r8d
  unsigned __int32 v35; // r15d
  int v36; // r10d
  unsigned __int32 v37; // r8d
  unsigned __int32 v38; // edi
  int v39; // ecx
  int v40; // r11d
  unsigned __int32 v41; // r8d
  unsigned __int32 v42; // esi
  int v43; // ebx
  int v44; // r8d
  int v45; // r14d
  int v46; // ecx
  int v47; // r9d
  int v48; // r8d
  int v49; // r15d
  int v50; // r10d
  unsigned __int32 v51; // r8d
  unsigned __int32 v52; // edi
  int v53; // ecx
  int v54; // r11d
  unsigned __int32 v55; // r8d
  unsigned int v56; // r12d
  unsigned __int32 v57; // r8d
  unsigned int v58; // ebx
  unsigned int v59; // r9d
  unsigned int v60; // esi
  unsigned __int32 v61; // r14d
  unsigned __int32 v62; // r8d
  unsigned int v63; // r15d
  unsigned int v64; // ebp
  unsigned int v65; // r10d
  unsigned __int32 v66; // r13d
  _DWORD *v67; // r8
  int v68; // edx
  unsigned int v69; // edi
  unsigned __int32 v70; // r11d
  unsigned int v71; // ebx
  unsigned int v72; // r8d
  unsigned int v73; // edi
  int v74; // r9d
  unsigned __int32 v75; // r8d
  unsigned __int32 v76; // esi
  int v77; // r10d
  unsigned __int32 v78; // r8d
  unsigned __int32 v79; // ebp
  int v80; // r11d
  unsigned __int32 v81; // r8d
  unsigned __int32 v82; // r14d
  int v83; // ebx
  unsigned __int32 v84; // r8d
  unsigned __int32 v85; // edi
  int v86; // r9d
  unsigned __int32 v87; // r8d
  unsigned __int32 v88; // esi
  int v89; // r10d
  unsigned __int32 v90; // r8d
  unsigned __int32 v91; // ebp
  int v92; // r11d
  unsigned __int32 v93; // r8d
  unsigned __int32 v94; // r14d
  int v95; // ebx
  unsigned __int32 v96; // r8d
  unsigned __int32 v97; // edi
  int v98; // r9d
  unsigned __int32 v99; // r8d
  unsigned __int32 v100; // esi
  int v101; // r10d
  unsigned __int32 v102; // r8d
  unsigned __int32 v103; // ebp
  int v104; // r11d
  unsigned __int32 v105; // r8d
  unsigned __int32 v106; // r14d
  int v107; // ebx
  unsigned __int32 v108; // r8d
  unsigned __int32 v109; // r8d
  unsigned __int32 v110; // r8d
  unsigned __int32 v111; // r8d
  bool v112; // zf
  _DWORD *v114; // [rsp+0h] [rbp-168h]
  unsigned int v115; // [rsp+10h] [rbp-158h]
  unsigned int v116; // [rsp+10h] [rbp-158h]
  unsigned __int32 v117; // [rsp+20h] [rbp-148h]
  unsigned __int32 v118; // [rsp+30h] [rbp-138h]
  unsigned __int32 v119; // [rsp+34h] [rbp-134h]
  unsigned __int32 v120; // [rsp+38h] [rbp-130h]
  unsigned __int32 v121; // [rsp+40h] [rbp-128h]
  unsigned __int32 v122; // [rsp+50h] [rbp-118h]
  unsigned __int32 v123; // [rsp+60h] [rbp-108h]
  unsigned __int32 v124; // [rsp+68h] [rbp-100h]
  unsigned __int32 v125; // [rsp+70h] [rbp-F8h]
  unsigned __int32 v126; // [rsp+78h] [rbp-F0h]
  unsigned __int32 v127; // [rsp+80h] [rbp-E8h]
  unsigned __int32 v128; // [rsp+90h] [rbp-D8h]
  unsigned __int32 v129; // [rsp+94h] [rbp-D4h]
  unsigned __int32 v130; // [rsp+98h] [rbp-D0h]
  unsigned __int32 v131; // [rsp+A0h] [rbp-C8h]
  unsigned __int32 v132; // [rsp+B0h] [rbp-B8h]
  __int64 v133; // [rsp+C0h] [rbp-A8h]
  unsigned __int64 v134; // [rsp+C8h] [rbp-A0h]
  unsigned __int64 v136; // [rsp+D8h] [rbp-90h]

  v4 = a4;
  v5 = a1;
  if ( a3 >= 0x40 )
  {
    v6 = _mm_loadu_si128(a1);
    v7 = (unsigned int *)(a2 + 8);
    v8 = _mm_loadu_si128(a1 + 1);
    v134 = a3 >> 6;
    v133 = a2 + 8;
    v136 = -64LL * (a3 >> 6) + a3;
    do
    {
      v9 = v5[1].m128i_i32[0];
      v10 = v5->m128i_i32[0];
      v11 = v5[1].m128i_i32[2];
      v12 = v5[1].m128i_i32[1];
      v13 = v5->m128i_i32[1];
      v14 = v5->m128i_i32[2];
      v132 = _byteswap_ulong(*(v7 - 2));
      v15 = v132
          + 1116352408
          + (__ROR4__(v9, 11) ^ __ROR4__(v9, 25) ^ __ROR4__(v9, 6))
          + (v11 ^ v9 & (v12 ^ v11))
          + v5[1].m128i_i32[3];
      v16 = v15 + v5->m128i_i32[3];
      v17 = v15
          + (__ROR4__(v5->m128i_i32[0], 2) ^ __ROR4__(v5->m128i_i32[0], 13) ^ __ROR4__(v5->m128i_i32[0], 22))
          + (v13 & v14 | v5->m128i_i32[0] & (v13 | v14));
      v130 = _byteswap_ulong(*(v7 - 1));
      v18 = v11
          + 1899447441
          + (__ROR4__(v16, 11) ^ __ROR4__(v16, 25) ^ __ROR4__(v16, 6))
          + (v12 ^ v16 & (v9 ^ v12))
          + v130;
      v19 = v14 + v18;
      v20 = v18 + (__ROR4__(v17, 2) ^ __ROR4__(v17, 13) ^ __ROR4__(v17, 22)) + (v10 & v13 | v17 & (v10 | v13));
      v131 = _byteswap_ulong(*v7);
      v21 = v12
          + (v9 ^ (v14 + v18) & (v16 ^ v9))
          - 1245643825
          + (__ROR4__(v14 + v18, 6) ^ __ROR4__(v14 + v18, 11) ^ __ROR4__(v14 + v18, 25))
          + v131;
      v22 = v21 + v13;
      v23 = v21 + (__ROR4__(v20, 2) ^ __ROR4__(v20, 13) ^ __ROR4__(v20, 22)) + (v17 & v10 | v20 & (v17 | v10));
      v129 = _byteswap_ulong(v7[1]);
      v24 = v129
          + (__ROR4__(v21 + v13, 11) ^ __ROR4__(v21 + v13, 25) ^ __ROR4__(v21 + v13, 6))
          + (v16 ^ (v21 + v13) & (v16 ^ v19))
          + v9
          - 373957723;
      v25 = v24 + v10;
      v26 = v24 + (__ROR4__(v23, 2) ^ __ROR4__(v23, 13) ^ __ROR4__(v23, 22)) + (v17 & v20 | v23 & (v17 | v20));
      v117 = _byteswap_ulong(v7[2]);
      v27 = v16
          + (v19 ^ (v24 + v10) & (v19 ^ v22))
          + 961987163
          + (__ROR4__(v24 + v10, 6) ^ __ROR4__(v24 + v10, 11) ^ __ROR4__(v24 + v10, 25))
          + v117;
      v28 = v27 + v17;
      v29 = v27 + (__ROR4__(v26, 2) ^ __ROR4__(v26, 13) ^ __ROR4__(v26, 22)) + (v20 & v23 | v26 & (v20 | v23));
      v118 = _byteswap_ulong(v7[3]);
      v30 = v19
          + (v22 ^ (v27 + v17) & (v22 ^ v25))
          + 1508970993
          + (__ROR4__(v27 + v17, 6) ^ __ROR4__(v27 + v17, 11) ^ __ROR4__(v27 + v17, 25))
          + v118;
      v31 = v30 + v20;
      v32 = (v30 + v20) & (v25 ^ v28);
      v33 = v30 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v23 & v26 | v29 & (v23 | v26));
      v120 = _byteswap_ulong(v7[4]);
      v34 = v22 + (v25 ^ v32) - 1841331548 + (__ROR4__(v31, 6) ^ __ROR4__(v31, 11) ^ __ROR4__(v31, 25)) + v120;
      v35 = v34 + v23;
      v36 = v34 + (__ROR4__(v33, 2) ^ __ROR4__(v33, 13) ^ __ROR4__(v33, 22)) + (v26 & v29 | v33 & (v26 | v29));
      v121 = _byteswap_ulong(v7[5]);
      v37 = v25
          + (v28 ^ v35 & (v28 ^ v31))
          - 1424204075
          + (__ROR4__(v35, 6) ^ __ROR4__(v35, 11) ^ __ROR4__(v35, 25))
          + v121;
      v38 = v37 + v26;
      v39 = (v37 + v26) & (v31 ^ v35);
      v40 = v37 + (__ROR4__(v36, 2) ^ __ROR4__(v36, 13) ^ __ROR4__(v36, 22)) + (v29 & v33 | v36 & (v29 | v33));
      v122 = _byteswap_ulong(v7[6]);
      v41 = v28 + (v31 ^ v39) - 670586216 + (__ROR4__(v38, 6) ^ __ROR4__(v38, 11) ^ __ROR4__(v38, 25)) + v122;
      v42 = v41 + v29;
      v43 = v41 + (__ROR4__(v40, 2) ^ __ROR4__(v40, 13) ^ __ROR4__(v40, 22)) + (v33 & v36 | v40 & (v33 | v36));
      v125 = _byteswap_ulong(v7[7]);
      v44 = v31
          + 310598401
          + (v35 ^ v42 & (v35 ^ v38))
          + (__ROR4__(v42, 11) ^ __ROR4__(v42, 25) ^ __ROR4__(v42, 6))
          + v125;
      v45 = v44 + v33;
      v46 = (v44 + v33) & (v38 ^ v42);
      v47 = v44 + (__ROR4__(v43, 2) ^ __ROR4__(v43, 13) ^ __ROR4__(v43, 22)) + (v36 & v40 | v43 & (v36 | v40));
      v126 = _byteswap_ulong(v7[8]);
      v48 = v35 + 607225278 + (v38 ^ v46) + (__ROR4__(v45, 11) ^ __ROR4__(v45, 25) ^ __ROR4__(v45, 6)) + v126;
      v49 = v48 + v36;
      v50 = v48 + (__ROR4__(v47, 2) ^ __ROR4__(v47, 13) ^ __ROR4__(v47, 22)) + (v40 & v43 | v47 & (v40 | v43));
      v119 = _byteswap_ulong(v7[9]);
      v51 = v38
          + 1426881987
          + (__ROR4__(v49, 11) ^ __ROR4__(v49, 25) ^ __ROR4__(v49, 6))
          + (v42 ^ v49 & (v42 ^ v45))
          + v119;
      v52 = v40 + v51;
      v53 = v45 ^ (v40 + v51) & (v45 ^ v49);
      v54 = v51 + (__ROR4__(v50, 2) ^ __ROR4__(v50, 13) ^ __ROR4__(v50, 22)) + (v43 & v47 | v50 & (v43 | v47));
      v127 = _byteswap_ulong(v7[10]);
      v55 = v42 + (__ROR4__(v52, 11) ^ __ROR4__(v52, 25) ^ __ROR4__(v52, 6)) + 1925078388 + v53 + v127;
      v115 = v55 + v43;
      v56 = v55 + (__ROR4__(v54, 2) ^ __ROR4__(v54, 13) ^ __ROR4__(v54, 22)) + (v50 & v47 | v54 & (v50 | v47));
      v128 = _byteswap_ulong(v7[11]);
      v57 = v45
          - 2132889090
          + (__ROR4__(v55 + v43, 11) ^ __ROR4__(v55 + v43, 25) ^ __ROR4__(v55 + v43, 6))
          + (v49 ^ (v55 + v43) & (v52 ^ v49))
          + v128;
      v58 = v47 + v57;
      v59 = v115;
      v60 = v57 + (__ROR4__(v56, 2) ^ __ROR4__(v56, 13) ^ __ROR4__(v56, 22)) + (v50 & v54 | v56 & (v50 | v54));
      v61 = _byteswap_ulong(v7[12]);
      v62 = v61
          + v49
          - 1680079193
          + (__ROR4__(v58, 11) ^ __ROR4__(v58, 25) ^ __ROR4__(v58, 6))
          + (v52 ^ v58 & (v52 ^ v115));
      v124 = v61;
      v63 = v62 + v50;
      v64 = v62 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22)) + (v54 & v56 | v60 & (v54 | v56));
      v123 = _byteswap_ulong(v7[13]);
      v65 = v58;
      v66 = v132;
      v67 = &unk_180182348;
      v68 = v123
          + (__ROR4__(v63, 11) ^ __ROR4__(v63, 25) ^ __ROR4__(v63, 6))
          + (v115 ^ v63 & (v115 ^ v58))
          + v52
          - 1046744716;
      v114 = &unk_180182348;
      v69 = v68 + v54;
      v70 = v123;
      v116 = v69;
      v71 = v68 + (__ROR4__(v64, 2) ^ __ROR4__(v64, 13) ^ __ROR4__(v64, 22)) + (v56 & v60 | v64 & (v56 | v60));
      do
      {
        v66 += ((v61 >> 10) ^ __ROR4__(v61, 17) ^ __ROR4__(v61, 19))
             + v125
             + ((v130 >> 3) ^ __ROR4__(v130, 7) ^ __ROR4__(v130, 18));
        v72 = v59
            + *(v67 - 2)
            + (v65 ^ v69 & (v63 ^ v65))
            + (__ROR4__(v69, 6) ^ __ROR4__(v69, 11) ^ __ROR4__(v69, 25))
            + v66;
        v73 = v72 + v56;
        v74 = v72 + (__ROR4__(v71, 2) ^ __ROR4__(v71, 13) ^ __ROR4__(v71, 22)) + (v64 & v60 | v71 & (v64 | v60));
        v130 += ((v70 >> 10) ^ __ROR4__(v70, 17) ^ __ROR4__(v70, 19))
              + v126
              + ((v131 >> 3) ^ __ROR4__(v131, 7) ^ __ROR4__(v131, 18));
        v75 = v65
            + v130
            + *(v114 - 1)
            + (v63 ^ v73 & (v116 ^ v63))
            + (__ROR4__(v73, 6) ^ __ROR4__(v72 + v56, 11) ^ __ROR4__(v72 + v56, 25));
        v76 = v75 + v60;
        v77 = v75 + (__ROR4__(v74, 2) ^ __ROR4__(v74, 13) ^ __ROR4__(v74, 22)) + (v71 & v64 | v74 & (v71 | v64));
        v131 += ((v129 >> 3) ^ __ROR4__(v129, 7) ^ __ROR4__(v129, 18))
              + v119
              + ((v66 >> 10) ^ __ROR4__(v66, 17) ^ __ROR4__(v66, 19));
        v78 = v63
            + v131
            + *v114
            + (v116 ^ v76 & (v116 ^ v73))
            + (__ROR4__(v76, 6) ^ __ROR4__(v76, 11) ^ __ROR4__(v76, 25));
        v79 = v78 + v64;
        v80 = v78 + (__ROR4__(v77, 2) ^ __ROR4__(v77, 13) ^ __ROR4__(v77, 22)) + (v71 & v74 | v77 & (v71 | v74));
        v129 += ((v117 >> 3) ^ __ROR4__(v117, 7) ^ __ROR4__(v117, 18))
              + v127
              + ((v130 >> 10) ^ __ROR4__(v130, 17) ^ __ROR4__(v130, 19));
        v81 = v116
            + v129
            + v114[1]
            + (v73 ^ v79 & (v73 ^ v76))
            + (__ROR4__(v79, 6) ^ __ROR4__(v79, 11) ^ __ROR4__(v79, 25));
        v82 = v81 + v71;
        v83 = v81 + (__ROR4__(v80, 2) ^ __ROR4__(v80, 13) ^ __ROR4__(v80, 22)) + (v74 & v77 | v80 & (v74 | v77));
        v117 += ((v131 >> 10) ^ __ROR4__(v131, 17) ^ __ROR4__(v131, 19))
              + v128
              + ((v118 >> 3) ^ __ROR4__(v118, 7) ^ __ROR4__(v118, 18));
        v84 = v117
            + v73
            + v114[2]
            + (v76 ^ v82 & (v76 ^ v79))
            + (__ROR4__(v82, 6) ^ __ROR4__(v82, 11) ^ __ROR4__(v82, 25));
        v85 = v84 + v74;
        v86 = v84 + (__ROR4__(v83, 2) ^ __ROR4__(v83, 13) ^ __ROR4__(v83, 22)) + (v77 & v80 | v83 & (v77 | v80));
        v118 += ((v120 >> 3) ^ __ROR4__(v120, 7) ^ __ROR4__(v120, 18))
              + v124
              + ((v129 >> 10) ^ __ROR4__(v129, 17) ^ __ROR4__(v129, 19));
        v87 = v118
            + v76
            + v114[3]
            + (v79 ^ v85 & (v82 ^ v79))
            + (__ROR4__(v85, 6) ^ __ROR4__(v85, 11) ^ __ROR4__(v85, 25));
        v88 = v87 + v77;
        v89 = v87 + (__ROR4__(v86, 2) ^ __ROR4__(v86, 13) ^ __ROR4__(v86, 22)) + (v83 & v80 | v86 & (v83 | v80));
        v120 += ((v121 >> 3) ^ __ROR4__(v121, 7) ^ __ROR4__(v121, 18))
              + v123
              + ((v117 >> 10) ^ __ROR4__(v117, 17) ^ __ROR4__(v117, 19));
        v90 = v120
            + v79
            + v114[4]
            + (v82 ^ v88 & (v82 ^ v85))
            + (__ROR4__(v88, 6) ^ __ROR4__(v88, 11) ^ __ROR4__(v88, 25));
        v91 = v80 + v90;
        v92 = v90 + (__ROR4__(v89, 2) ^ __ROR4__(v89, 13) ^ __ROR4__(v89, 22)) + (v83 & v86 | v89 & (v83 | v86));
        v121 += ((v118 >> 10) ^ __ROR4__(v118, 17) ^ __ROR4__(v118, 19))
              + v66
              + ((v122 >> 3) ^ __ROR4__(v122, 7) ^ __ROR4__(v122, 18));
        v93 = v82
            + v121
            + v114[5]
            + (v85 ^ v91 & (v85 ^ v88))
            + (__ROR4__(v91, 6) ^ __ROR4__(v91, 11) ^ __ROR4__(v91, 25));
        v94 = v93 + v83;
        v95 = v93 + (__ROR4__(v92, 2) ^ __ROR4__(v92, 13) ^ __ROR4__(v92, 22)) + (v86 & v89 | v92 & (v86 | v89));
        v122 += ((v125 >> 3) ^ __ROR4__(v125, 7) ^ __ROR4__(v125, 18))
              + v130
              + ((v120 >> 10) ^ __ROR4__(v120, 17) ^ __ROR4__(v120, 19));
        v96 = v85
            + v122
            + v114[6]
            + (v88 ^ v94 & (v88 ^ v91))
            + (__ROR4__(v94, 6) ^ __ROR4__(v94, 11) ^ __ROR4__(v94, 25));
        v97 = v96 + v86;
        v98 = v96 + (__ROR4__(v95, 2) ^ __ROR4__(v95, 13) ^ __ROR4__(v95, 22)) + (v89 & v92 | v95 & (v89 | v92));
        v125 += v131
              + ((v126 >> 3) ^ __ROR4__(v126, 7) ^ __ROR4__(v126, 18))
              + ((v121 >> 10) ^ __ROR4__(v121, 17) ^ __ROR4__(v121, 19));
        v99 = v88
            + v125
            + v114[7]
            + (v91 ^ v97 & (v91 ^ v94))
            + (__ROR4__(v97, 6) ^ __ROR4__(v97, 11) ^ __ROR4__(v97, 25));
        v100 = v99 + v89;
        v101 = v99 + (__ROR4__(v98, 2) ^ __ROR4__(v98, 13) ^ __ROR4__(v98, 22)) + (v92 & v95 | v98 & (v92 | v95));
        v126 += v129
              + ((v119 >> 3) ^ __ROR4__(v119, 7) ^ __ROR4__(v119, 18))
              + ((v122 >> 10) ^ __ROR4__(v122, 17) ^ __ROR4__(v122, 19));
        v102 = v91
             + v126
             + v114[8]
             + (v94 ^ v100 & (v94 ^ v97))
             + (__ROR4__(v100, 6) ^ __ROR4__(v100, 11) ^ __ROR4__(v100, 25));
        v103 = v102 + v92;
        v104 = v102 + (__ROR4__(v101, 2) ^ __ROR4__(v101, 13) ^ __ROR4__(v101, 22)) + (v95 & v98 | v101 & (v95 | v98));
        v119 += ((v125 >> 10) ^ __ROR4__(v125, 17) ^ __ROR4__(v125, 19))
              + v117
              + ((v127 >> 3) ^ __ROR4__(v127, 7) ^ __ROR4__(v127, 18));
        v105 = v94
             + v119
             + v114[9]
             + (v97 ^ v103 & (v97 ^ v100))
             + (__ROR4__(v103, 6) ^ __ROR4__(v103, 11) ^ __ROR4__(v103, 25));
        v106 = v105 + v95;
        v107 = v105 + (__ROR4__(v104, 2) ^ __ROR4__(v104, 13) ^ __ROR4__(v104, 22)) + (v98 & v101 | v104 & (v98 | v101));
        v127 += ((v128 >> 3) ^ __ROR4__(v128, 7) ^ __ROR4__(v128, 18))
              + v118
              + ((v126 >> 10) ^ __ROR4__(v126, 17) ^ __ROR4__(v126, 19));
        v108 = v97
             + v127
             + v114[10]
             + (v100 ^ v106 & (v100 ^ v103))
             + (__ROR4__(v106, 6) ^ __ROR4__(v106, 11) ^ __ROR4__(v106, 25));
        v59 = v108 + v98;
        v56 = v108
            + (__ROR4__(v107, 2) ^ __ROR4__(v107, 13) ^ __ROR4__(v107, 22))
            + (v101 & v104 | v107 & (v101 | v104));
        v128 += ((v124 >> 3) ^ __ROR4__(v124, 7) ^ __ROR4__(v124, 18))
              + v120
              + ((v119 >> 10) ^ __ROR4__(v119, 17) ^ __ROR4__(v119, 19));
        v109 = v100
             + v128
             + v114[11]
             + (v103 ^ v59 & (v103 ^ v106))
             + (__ROR4__(v59, 6) ^ __ROR4__(v59, 11) ^ __ROR4__(v59, 25));
        v65 = v109 + v101;
        v60 = v109 + (__ROR4__(v56, 2) ^ __ROR4__(v56, 13) ^ __ROR4__(v56, 22)) + (v104 & v107 | v56 & (v104 | v107));
        v124 += ((v123 >> 3) ^ __ROR4__(v123, 7) ^ __ROR4__(v123, 18))
              + v121
              + ((v127 >> 10) ^ __ROR4__(v127, 17) ^ __ROR4__(v127, 19));
        v110 = v103
             + v114[12]
             + (v106 ^ v65 & (v106 ^ v59))
             + (__ROR4__(v65, 6) ^ __ROR4__(v65, 11) ^ __ROR4__(v65, 25))
             + v124;
        v63 = v110 + v104;
        v64 = v110 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22)) + (v107 & v56 | v60 & (v107 | v56));
        v70 = ((v66 >> 3) ^ __ROR4__(v66, 7) ^ __ROR4__(v66, 18))
            + v122
            + ((v128 >> 10) ^ __ROR4__(v128, 17) ^ __ROR4__(v128, 19))
            + v123;
        v123 = v70;
        v111 = v106
             + v70
             + v114[13]
             + (v59 ^ v63 & (v59 ^ v65))
             + (__ROR4__(v63, 6) ^ __ROR4__(v63, 11) ^ __ROR4__(v63, 25));
        v61 = v124;
        v69 = v111 + v107;
        v116 = v111 + v107;
        v71 = v111 + (__ROR4__(v64, 2) ^ __ROR4__(v64, 13) ^ __ROR4__(v64, 22)) + (v56 & v60 | v64 & (v56 | v60));
        v67 = v114 + 16;
        v114 = v67;
      }
      while ( (__int64)v67 < (__int64)((_DWORD *)&xmmword_180182400 + 2) );
      v5 = a1;
      v7 = (unsigned int *)(v133 + 64);
      v112 = v134-- == 1;
      v6 = _mm_add_epi32(
             _mm_unpacklo_epi64(
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v71), _mm_cvtsi32_si128(v64)),
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), _mm_cvtsi32_si128(v56))),
             v6);
      *a1 = v6;
      v133 += 64LL;
      v8 = _mm_add_epi32(
             _mm_unpacklo_epi64(
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v116), _mm_cvtsi32_si128(v63)),
               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v65), _mm_cvtsi32_si128(v59))),
             v8);
      a1[1] = v8;
    }
    while ( !v112 );
    a3 = v136;
    v4 = a4;
  }
  *v4 = a3;
  return 0LL;
}

/*
 * XREFs of SymCryptSha256AppendBlocks_xmm_ssse3_asm @ 0x140558920
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x140555A30 (SymCryptSha256AppendBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha256AppendBlocks_xmm_ssse3_asm(
        int *a1,
        const __m128i *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  int v4; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v11; // r10d
  int v12; // r11d
  int v13; // esi
  unsigned __int64 i; // rdi
  unsigned __int64 v15; // rdi
  __m128i si128; // xmm8
  __int64 v17; // r12
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm0
  __m128i v24; // xmm5
  __m128i v25; // xmm2
  __int64 v26; // r12
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  __m128i v31; // xmm4
  __m128i v32; // xmm0
  __m128i v33; // xmm5
  __m128i v34; // xmm2
  __int64 v35; // r12
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm0
  __m128i v42; // xmm5
  __m128i v43; // xmm2
  __int64 v44; // r12
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  __m128i v48; // xmm3
  __m128i v49; // xmm4
  __m128i v50; // xmm0
  __m128i v51; // xmm5
  __m128i v52; // xmm2
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  __m128i v55; // xmm2
  __m128i v56; // xmm3
  __m128i v57; // xmm4
  __m128i v58; // xmm5
  __m128i v59; // xmm6
  __m128i v60; // xmm7
  __m128i v61; // xmm8
  __m128i *v62; // r14
  unsigned int *v63; // r15
  __m128i v64; // xmm9
  __m128i v65; // xmm0
  __m128i v66; // xmm1
  __m128i v67; // xmm0
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  int v71; // esi
  int v72; // r8d
  int v73; // esi
  int v74; // r11d
  int v75; // edx
  int v76; // r11d
  int v77; // r10d
  int v78; // ecx
  int v79; // r10d
  int v80; // r9d
  int v81; // eax
  int v82; // r9d
  int v83; // r8d
  int v84; // edx
  int v85; // ecx
  int v86; // eax
  int v87; // esi
  int v88; // r8d
  int v89; // esi
  int v90; // r11d
  int v91; // edx
  int v92; // r11d
  int v93; // r10d
  int v94; // ecx
  int v95; // r10d
  int v96; // r9d
  int v97; // eax
  int v98; // r9d
  int v99; // r8d
  int v100; // edx
  int v101; // ecx
  int v102; // eax
  __int32 *v103; // r14
  int v104; // r15d
  int v105; // esi
  int v106; // r8d
  int v107; // esi
  int v108; // r11d
  int v109; // edx
  int v110; // r11d
  int v111; // r10d
  int v112; // ecx
  int v113; // r10d
  int v114; // r9d
  int v115; // eax
  int v116; // r9d
  int v117; // r8d
  int v118; // edx
  int v119; // ecx
  int v120; // eax
  __int64 v121; // rbp
  unsigned __int64 v122; // rbp
  __m128i v123; // xmm13
  __m128i v124; // xmm14
  __m128i v125; // xmm15
  const __m128i *v126; // r15
  __m128i v127; // xmm0
  __m128i v128; // xmm1
  __m128i v129; // xmm2
  __m128i v130; // xmm3
  __m128i v131; // xmm9
  __m128i v132; // xmm10
  __m128i v133; // xmm11
  __int32 v134; // esi
  __int32 v135; // r8d
  int v136; // esi
  __int32 v137; // r11d
  __int32 v138; // edx
  int v139; // r11d
  __int32 v140; // r10d
  __int32 v141; // ecx
  int v142; // r10d
  __int32 v143; // r9d
  __int32 v144; // eax
  int v145; // r9d
  __m128i v146; // xmm5
  __m128i v147; // xmm4
  __m128i v148; // xmm0
  __m128i v149; // xmm4
  __int32 v150; // r8d
  __int32 v151; // esi
  int v152; // r8d
  __int32 v153; // edx
  __int32 v154; // r11d
  int v155; // edx
  __int32 v156; // ecx
  __int32 v157; // r10d
  int v158; // ecx
  __int32 v159; // eax
  __int32 v160; // r9d
  int v161; // eax
  __m128i v162; // xmm5
  __m128i v163; // xmm4
  __m128i v164; // xmm1
  __m128i v165; // xmm4
  __int32 v166; // esi
  __int32 v167; // r8d
  int v168; // esi
  int v169; // r11d
  int v170; // edx
  int v171; // r11d
  int v172; // r10d
  int v173; // ecx
  int v174; // r10d
  int v175; // r9d
  int v176; // eax
  int v177; // r9d
  __m128i v178; // xmm5
  __m128i v179; // xmm4
  __m128i v180; // xmm2
  __m128i v181; // xmm4
  __int32 v182; // r8d
  int v183; // edx
  int v184; // ecx
  int v185; // eax
  __m128i v186; // xmm5
  __m128i v187; // xmm4
  __m128i v188; // xmm3
  __m128i v189; // xmm4
  __m128i *v190; // r14
  int v191; // esi
  int v192; // r8d
  int v193; // esi
  int v194; // r11d
  int v195; // edx
  int v196; // r11d
  int v197; // r10d
  int v198; // ecx
  int v199; // r10d
  int v200; // r9d
  int v201; // eax
  int v202; // r9d
  int v203; // r8d
  int v204; // edx
  int v205; // ecx
  int v206; // eax
  __int64 result; // rax
  __m128i v208; // [rsp+0h] [rbp-4F8h] BYREF
  __m128i v209; // [rsp+10h] [rbp-4E8h] BYREF
  __m128i v210; // [rsp+20h] [rbp-4D8h]
  __m128i v211; // [rsp+30h] [rbp-4C8h]
  _OWORD v212[5]; // [rsp+40h] [rbp-4B8h] BYREF
  __m128i v213; // [rsp+90h] [rbp-468h] BYREF
  __m128i v214; // [rsp+A0h] [rbp-458h] BYREF
  __m128i v215; // [rsp+B0h] [rbp-448h] BYREF
  __m128i v216; // [rsp+C0h] [rbp-438h] BYREF
  __m128i v217; // [rsp+D0h] [rbp-428h] BYREF
  __m128i v218; // [rsp+E0h] [rbp-418h] BYREF
  __m128i v219[49]; // [rsp+F0h] [rbp-408h] BYREF
  unsigned __int64 v220; // [rsp+400h] [rbp-F8h]
  int v221; // [rsp+408h] [rbp-F0h]
  unsigned __int64 v224; // [rsp+510h] [rbp+18h]

  v224 = a3;
  v4 = 64;
  if ( a3 >= 0xC0 )
    v4 = 1024;
  v221 = v4;
  v6 = *a1;
  v7 = a1[1];
  v8 = a1[2];
  v9 = a1[3];
  v10 = a1[4];
  v11 = a1[5];
  v12 = a1[6];
  v13 = a1[7];
  for ( i = v224; i >= 0xC0; v224 = i )
  {
    v15 = i >> 6;
    if ( v15 > 4 )
      v15 = 4LL;
    v220 = v15;
    si128 = _mm_load_si128((const __m128i *)&BYTE_REVERSE_32);
    v17 = 8LL;
    if ( v15 == 4 )
      v17 = 12LL;
    v18 = _mm_shuffle_epi8(_mm_loadu_si128(a2), si128);
    v19 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 4), si128);
    v20 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 8), si128);
    v21 = _mm_shuffle_epi8(_mm_loadu_si128(&a2[v17]), si128);
    v22 = _mm_unpackhi_epi32(v18, v19);
    v23 = _mm_unpacklo_epi32(v18, v19);
    v24 = _mm_unpackhi_epi32(v20, v21);
    v25 = _mm_unpacklo_epi32(v20, v21);
    v208 = _mm_unpacklo_epi64(v23, v25);
    v209 = _mm_unpackhi_epi64(v23, v25);
    v210 = _mm_unpacklo_epi64(v22, v24);
    v211 = _mm_unpackhi_epi64(v22, v24);
    v26 = 9LL;
    if ( v15 == 4 )
      v26 = 13LL;
    v27 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 1), si128);
    v28 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 5), si128);
    v29 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 9), si128);
    v30 = _mm_shuffle_epi8(_mm_loadu_si128(&a2[v26]), si128);
    v31 = _mm_unpackhi_epi32(v27, v28);
    v32 = _mm_unpacklo_epi32(v27, v28);
    v33 = _mm_unpackhi_epi32(v29, v30);
    v34 = _mm_unpacklo_epi32(v29, v30);
    v212[0] = _mm_unpacklo_epi64(v32, v34);
    v212[1] = _mm_unpackhi_epi64(v32, v34);
    v212[2] = _mm_unpacklo_epi64(v31, v33);
    v212[3] = _mm_unpackhi_epi64(v31, v33);
    v35 = 10LL;
    if ( v15 == 4 )
      v35 = 14LL;
    v36 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 2), si128);
    v37 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 6), si128);
    v38 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 10), si128);
    v39 = _mm_shuffle_epi8(_mm_loadu_si128(&a2[v35]), si128);
    v40 = _mm_unpackhi_epi32(v36, v37);
    v41 = _mm_unpacklo_epi32(v36, v37);
    v42 = _mm_unpackhi_epi32(v38, v39);
    v43 = _mm_unpacklo_epi32(v38, v39);
    v212[4] = _mm_unpacklo_epi64(v41, v43);
    v213 = _mm_unpackhi_epi64(v41, v43);
    v214 = _mm_unpacklo_epi64(v40, v42);
    v215 = _mm_unpackhi_epi64(v40, v42);
    v44 = 11LL;
    if ( v15 == 4 )
      v44 = 15LL;
    v45 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 3), si128);
    v46 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 7), si128);
    v47 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 11), si128);
    v48 = _mm_shuffle_epi8(_mm_loadu_si128(&a2[v44]), si128);
    v49 = _mm_unpackhi_epi32(v45, v46);
    v50 = _mm_unpacklo_epi32(v45, v46);
    v51 = _mm_unpackhi_epi32(v47, v48);
    v52 = _mm_unpacklo_epi32(v47, v48);
    v216 = _mm_unpacklo_epi64(v50, v52);
    v217 = _mm_unpackhi_epi64(v50, v52);
    v218 = _mm_unpacklo_epi64(v49, v51);
    v219[0] = _mm_unpackhi_epi64(v49, v51);
    v53 = _mm_load_si128(&v208);
    v54 = _mm_load_si128(&v209);
    v55 = _mm_load_si128(&v213);
    v56 = _mm_load_si128(&v214);
    v57 = _mm_load_si128(&v215);
    v58 = _mm_load_si128(&v216);
    v59 = _mm_load_si128(&v217);
    v60 = _mm_load_si128(&v218);
    v61 = _mm_load_si128(v219);
    v62 = &v208;
    v63 = (unsigned int *)&SymCryptSha256K;
    do
    {
      *v62 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(*v63), 0), v53);
      v64 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v54, 7u), _mm_slli_epi32(v54, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v54, 0x12u), _mm_slli_epi32(v54, 0xEu))),
                  _mm_srli_epi32(v54, 3u)),
                _mm_add_epi32(v53, v55)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v60, 0x11u), _mm_slli_epi32(v60, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v60, 0x13u), _mm_slli_epi32(v60, 0xDu))),
                _mm_srli_epi32(v60, 0xAu)));
      v65 = _mm_load_si128(v62 + 2);
      v62[16] = v64;
      v62[1] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[1]), 0), v54);
      v55 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v65, 7u), _mm_slli_epi32(v65, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v65, 0x12u), _mm_slli_epi32(v65, 0xEu))),
                  _mm_srli_epi32(v65, 3u)),
                _mm_add_epi32(v54, v56)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v61, 0x11u), _mm_slli_epi32(v61, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v61, 0x13u), _mm_slli_epi32(v61, 0xDu))),
                _mm_srli_epi32(v61, 0xAu)));
      v66 = _mm_load_si128(v62 + 3);
      v62[17] = v55;
      v62[2] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[2]), 0), v65);
      v56 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v66, 7u), _mm_slli_epi32(v66, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v66, 0x12u), _mm_slli_epi32(v66, 0xEu))),
                  _mm_srli_epi32(v66, 3u)),
                _mm_add_epi32(v65, v57)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v64, 0x11u), _mm_slli_epi32(v64, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v64, 0x13u), _mm_slli_epi32(v64, 0xDu))),
                _mm_srli_epi32(v64, 0xAu)));
      v67 = _mm_load_si128(v62 + 4);
      v62[18] = v56;
      v62[3] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[3]), 0), v66);
      v57 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v67, 7u), _mm_slli_epi32(v67, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v67, 0x12u), _mm_slli_epi32(v67, 0xEu))),
                  _mm_srli_epi32(v67, 3u)),
                _mm_add_epi32(v66, v58)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v55, 0x11u), _mm_slli_epi32(v55, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v55, 0x13u), _mm_slli_epi32(v55, 0xDu))),
                _mm_srli_epi32(v55, 0xAu)));
      v68 = _mm_load_si128(v62 + 5);
      v62[19] = v57;
      v62[4] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[4]), 0), v67);
      v58 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v68, 7u), _mm_slli_epi32(v68, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v68, 0x12u), _mm_slli_epi32(v68, 0xEu))),
                  _mm_srli_epi32(v68, 3u)),
                _mm_add_epi32(v67, v59)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v56, 0x11u), _mm_slli_epi32(v56, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v56, 0x13u), _mm_slli_epi32(v56, 0xDu))),
                _mm_srli_epi32(v56, 0xAu)));
      v69 = _mm_load_si128(v62 + 6);
      v62[20] = v58;
      v62[5] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[5]), 0), v68);
      v59 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v69, 7u), _mm_slli_epi32(v69, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v69, 0x12u), _mm_slli_epi32(v69, 0xEu))),
                  _mm_srli_epi32(v69, 3u)),
                _mm_add_epi32(v68, v60)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v57, 0x11u), _mm_slli_epi32(v57, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v57, 0x13u), _mm_slli_epi32(v57, 0xDu))),
                _mm_srli_epi32(v57, 0xAu)));
      v70 = _mm_load_si128(v62 + 7);
      v62[21] = v59;
      v62[6] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[6]), 0), v69);
      v60 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v70, 7u), _mm_slli_epi32(v70, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v70, 0x12u), _mm_slli_epi32(v70, 0xEu))),
                  _mm_srli_epi32(v70, 3u)),
                _mm_add_epi32(v69, v61)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v58, 0x11u), _mm_slli_epi32(v58, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v58, 0x13u), _mm_slli_epi32(v58, 0xDu))),
                _mm_srli_epi32(v58, 0xAu)));
      v53 = _mm_load_si128(v62 + 8);
      v62[22] = v60;
      v62[7] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[7]), 0), v70);
      v61 = _mm_add_epi32(
              _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(_mm_srli_epi32(v53, 7u), _mm_slli_epi32(v53, 0x19u)),
                    _mm_xor_si128(_mm_srli_epi32(v53, 0x12u), _mm_slli_epi32(v53, 0xEu))),
                  _mm_srli_epi32(v53, 3u)),
                _mm_add_epi32(v70, v64)),
              _mm_xor_si128(
                _mm_xor_si128(
                  _mm_xor_si128(_mm_srli_epi32(v59, 0x11u), _mm_slli_epi32(v59, 0xFu)),
                  _mm_xor_si128(_mm_srli_epi32(v59, 0x13u), _mm_slli_epi32(v59, 0xDu))),
                _mm_srli_epi32(v59, 0xAu)));
      v54 = _mm_load_si128(v62 + 9);
      v62[23] = v61;
      v71 = (__ROR4__(v10, 25) ^ __ROR4__(v10, 11) ^ __ROR4__(v10, 6))
          + (v12 & ~v10 ^ v10 & v11)
          + v62->m128i_i32[0]
          + v13;
      v72 = v71 + v9;
      v73 = (__ROR4__(v6, 22) ^ __ROR4__(v6, 13) ^ __ROR4__(v6, 2)) + (v6 & (v8 | v7) | v8 & v7) + v71;
      v74 = (__ROR4__(v72, 25) ^ __ROR4__(v72, 11) ^ __ROR4__(v72, 6))
          + (v11 & ~v72 ^ v72 & v10)
          + v62[1].m128i_i32[0]
          + v12;
      v75 = v74 + v8;
      v76 = (__ROR4__(v73, 22) ^ __ROR4__(v73, 13) ^ __ROR4__(v73, 2)) + (v73 & (v7 | v6) | v7 & v6) + v74;
      v77 = (__ROR4__(v75, 25) ^ __ROR4__(v75, 11) ^ __ROR4__(v75, 6))
          + (v10 & ~v75 ^ v75 & v72)
          + v62[2].m128i_i32[0]
          + v11;
      v78 = v77 + v7;
      v79 = (__ROR4__(v76, 22) ^ __ROR4__(v76, 13) ^ __ROR4__(v76, 2)) + (v76 & (v6 | v73) | v6 & v73) + v77;
      v80 = (__ROR4__(v78, 25) ^ __ROR4__(v78, 11) ^ __ROR4__(v78, 6))
          + (v72 & ~v78 ^ v78 & v75)
          + v62[3].m128i_i32[0]
          + v10;
      v81 = v80 + v6;
      v82 = (__ROR4__(v79, 22) ^ __ROR4__(v79, 13) ^ __ROR4__(v79, 2)) + (v79 & (v73 | v76) | v73 & v76) + v80;
      v83 = (__ROR4__(v81, 25) ^ __ROR4__(v81, 11) ^ __ROR4__(v81, 6))
          + (v75 & ~v81 ^ v81 & v78)
          + v62[4].m128i_i32[0]
          + v72;
      v13 = v83 + v73;
      v9 = (__ROR4__(v82, 22) ^ __ROR4__(v82, 13) ^ __ROR4__(v82, 2)) + (v82 & (v76 | v79) | v76 & v79) + v83;
      v84 = (__ROR4__(v13, 25) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 6))
          + (v78 & ~v13 ^ v13 & v81)
          + v62[5].m128i_i32[0]
          + v75;
      v12 = v84 + v76;
      v8 = (__ROR4__(v9, 22) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 2)) + (v9 & (v79 | v82) | v79 & v82) + v84;
      v85 = (__ROR4__(v12, 25) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 6))
          + (v81 & ~v12 ^ v12 & v13)
          + v62[6].m128i_i32[0]
          + v78;
      v11 = v85 + v79;
      v7 = (__ROR4__(v8, 22) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 2)) + (v8 & (v82 | v9) | v82 & v9) + v85;
      v86 = (__ROR4__(v11, 25) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 6))
          + (v13 & ~v11 ^ v11 & v12)
          + v62[7].m128i_i32[0]
          + v81;
      v10 = v86 + v82;
      v6 = (__ROR4__(v7, 22) ^ __ROR4__(v7, 13) ^ __ROR4__(v7, 2)) + (v7 & (v9 | v8) | v9 & v8) + v86;
      v62 += 8;
      v63 += 8;
    }
    while ( v63 < (unsigned int *)&xmmword_140023BC0 );
    do
    {
      *v62 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(*v63), 0), _mm_load_si128(v62));
      v62[1] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[1]), 0), _mm_load_si128(v62 + 1));
      v62[2] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[2]), 0), _mm_load_si128(v62 + 2));
      v62[3] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[3]), 0), _mm_load_si128(v62 + 3));
      v62[4] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[4]), 0), _mm_load_si128(v62 + 4));
      v62[5] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[5]), 0), _mm_load_si128(v62 + 5));
      v62[6] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[6]), 0), _mm_load_si128(v62 + 6));
      v62[7] = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v63[7]), 0), _mm_load_si128(v62 + 7));
      v87 = (__ROR4__(v10, 25) ^ __ROR4__(v10, 11) ^ __ROR4__(v10, 6))
          + (v12 & ~v10 ^ v10 & v11)
          + v62->m128i_i32[0]
          + v13;
      v88 = v87 + v9;
      v89 = (__ROR4__(v6, 22) ^ __ROR4__(v6, 13) ^ __ROR4__(v6, 2)) + (v6 & (v8 | v7) | v8 & v7) + v87;
      v90 = (__ROR4__(v88, 25) ^ __ROR4__(v88, 11) ^ __ROR4__(v88, 6))
          + (v11 & ~v88 ^ v88 & v10)
          + v62[1].m128i_i32[0]
          + v12;
      v91 = v90 + v8;
      v92 = (__ROR4__(v89, 22) ^ __ROR4__(v89, 13) ^ __ROR4__(v89, 2)) + (v89 & (v7 | v6) | v7 & v6) + v90;
      v93 = (__ROR4__(v91, 25) ^ __ROR4__(v91, 11) ^ __ROR4__(v91, 6))
          + (v10 & ~v91 ^ v91 & v88)
          + v62[2].m128i_i32[0]
          + v11;
      v94 = v93 + v7;
      v95 = (__ROR4__(v92, 22) ^ __ROR4__(v92, 13) ^ __ROR4__(v92, 2)) + (v92 & (v6 | v89) | v6 & v89) + v93;
      v96 = (__ROR4__(v94, 25) ^ __ROR4__(v94, 11) ^ __ROR4__(v94, 6))
          + (v88 & ~v94 ^ v94 & v91)
          + v62[3].m128i_i32[0]
          + v10;
      v97 = v96 + v6;
      v98 = (__ROR4__(v95, 22) ^ __ROR4__(v95, 13) ^ __ROR4__(v95, 2)) + (v95 & (v89 | v92) | v89 & v92) + v96;
      v99 = (__ROR4__(v97, 25) ^ __ROR4__(v97, 11) ^ __ROR4__(v97, 6))
          + (v91 & ~v97 ^ v97 & v94)
          + v62[4].m128i_i32[0]
          + v88;
      v13 = v99 + v89;
      v9 = (__ROR4__(v98, 22) ^ __ROR4__(v98, 13) ^ __ROR4__(v98, 2)) + (v98 & (v92 | v95) | v92 & v95) + v99;
      v100 = (__ROR4__(v13, 25) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 6))
           + (v94 & ~v13 ^ v13 & v97)
           + v62[5].m128i_i32[0]
           + v91;
      v12 = v100 + v92;
      v8 = (__ROR4__(v9, 22) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 2)) + (v9 & (v95 | v98) | v95 & v98) + v100;
      v101 = (__ROR4__(v12, 25) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 6))
           + (v97 & ~v12 ^ v12 & v13)
           + v62[6].m128i_i32[0]
           + v94;
      v11 = v101 + v95;
      v7 = (__ROR4__(v8, 22) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 2)) + (v8 & (v98 | v9) | v98 & v9) + v101;
      v102 = (__ROR4__(v11, 25) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 6))
           + (v13 & ~v11 ^ v11 & v12)
           + v62[7].m128i_i32[0]
           + v97;
      v10 = v102 + v98;
      v6 = (__ROR4__(v7, 22) ^ __ROR4__(v7, 13) ^ __ROR4__(v7, 2)) + (v7 & (v9 | v8) | v9 & v8) + v102;
      v62 += 8;
      v63 += 8;
    }
    while ( v63 < (unsigned int *)&_xmm );
    v6 += *a1;
    *a1 = v6;
    v7 += a1[1];
    a1[1] = v7;
    v8 += a1[2];
    a1[2] = v8;
    v9 += a1[3];
    a1[3] = v9;
    v10 += a1[4];
    a1[4] = v10;
    v11 += a1[5];
    a1[5] = v11;
    v12 += a1[6];
    a1[6] = v12;
    v13 += a1[7];
    a1[7] = v13;
    --v220;
    v103 = &v208.m128i_i32[1];
    do
    {
      v104 = 8;
      do
      {
        v105 = (__ROR4__(v10, 25) ^ __ROR4__(v10, 11) ^ __ROR4__(v10, 6)) + (v12 & ~v10 ^ v10 & v11) + *v103 + v13;
        v106 = v105 + v9;
        v107 = (__ROR4__(v6, 22) ^ __ROR4__(v6, 13) ^ __ROR4__(v6, 2)) + (v6 & (v8 | v7) | v8 & v7) + v105;
        v108 = (__ROR4__(v106, 25) ^ __ROR4__(v106, 11) ^ __ROR4__(v106, 6))
             + (v11 & ~v106 ^ v106 & v10)
             + v103[4]
             + v12;
        v109 = v108 + v8;
        v110 = (__ROR4__(v107, 22) ^ __ROR4__(v107, 13) ^ __ROR4__(v107, 2)) + (v107 & (v7 | v6) | v7 & v6) + v108;
        v111 = (__ROR4__(v109, 25) ^ __ROR4__(v109, 11) ^ __ROR4__(v109, 6))
             + (v10 & ~v109 ^ v109 & v106)
             + v103[8]
             + v11;
        v112 = v111 + v7;
        v113 = (__ROR4__(v110, 22) ^ __ROR4__(v110, 13) ^ __ROR4__(v110, 2)) + (v110 & (v6 | v107) | v6 & v107) + v111;
        v114 = (__ROR4__(v112, 25) ^ __ROR4__(v112, 11) ^ __ROR4__(v112, 6))
             + (v106 & ~v112 ^ v112 & v109)
             + v103[12]
             + v10;
        v115 = v114 + v6;
        v116 = (__ROR4__(v113, 22) ^ __ROR4__(v113, 13) ^ __ROR4__(v113, 2))
             + (v113 & (v107 | v110) | v107 & v110)
             + v114;
        v117 = (__ROR4__(v115, 25) ^ __ROR4__(v115, 11) ^ __ROR4__(v115, 6))
             + (v109 & ~v115 ^ v115 & v112)
             + v103[16]
             + v106;
        v13 = v117 + v107;
        v9 = (__ROR4__(v116, 22) ^ __ROR4__(v116, 13) ^ __ROR4__(v116, 2)) + (v116 & (v110 | v113) | v110 & v113) + v117;
        v118 = (__ROR4__(v13, 25) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 6)) + (v112 & ~v13 ^ v13 & v115) + v103[20] + v109;
        v12 = v118 + v110;
        v8 = (__ROR4__(v9, 22) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 2)) + (v9 & (v113 | v116) | v113 & v116) + v118;
        v119 = (__ROR4__(v12, 25) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 6)) + (v115 & ~v12 ^ v12 & v13) + v103[24] + v112;
        v11 = v119 + v113;
        v7 = (__ROR4__(v8, 22) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 2)) + (v8 & (v116 | v9) | v116 & v9) + v119;
        v120 = (__ROR4__(v11, 25) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 6)) + (v13 & ~v11 ^ v11 & v12) + v103[28] + v115;
        v10 = v120 + v116;
        v6 = (__ROR4__(v7, 22) ^ __ROR4__(v7, 13) ^ __ROR4__(v7, 2)) + (v7 & (v9 | v8) | v9 & v8) + v120;
        v103 += 32;
        --v104;
      }
      while ( v104 );
      v103 -= 255;
      v6 += *a1;
      *a1 = v6;
      v7 += a1[1];
      a1[1] = v7;
      v8 += a1[2];
      a1[2] = v8;
      v9 += a1[3];
      a1[3] = v9;
      v10 += a1[4];
      a1[4] = v10;
      v11 += a1[5];
      a1[5] = v11;
      v12 += a1[6];
      a1[6] = v12;
      v13 += a1[7];
      a1[7] = v13;
      --v220;
    }
    while ( v220 );
    v121 = v224;
    if ( v224 > 0x100 )
      v121 = 256LL;
    v122 = v121 & 0xFFFFFFFFFFFFFFC0uLL;
    i = v224 - v122;
    a2 = (const __m128i *)((char *)a2 + v122);
  }
  if ( i >= 0x40 )
  {
    v123 = _mm_load_si128((const __m128i *)&BYTE_REVERSE_32);
    v124 = _mm_load_si128((const __m128i *)&XMM_PACKLOW);
    v125 = _mm_load_si128((const __m128i *)&XMM_PACKHIGH);
    do
    {
      v126 = (const __m128i *)&SymCryptSha256K;
      v127 = _mm_shuffle_epi8(_mm_loadu_si128(a2), v123);
      v128 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 1), v123);
      v129 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 2), v123);
      v130 = _mm_shuffle_epi8(_mm_loadu_si128(a2 + 3), v123);
      v131 = _mm_add_epi32(_mm_load_si128((const __m128i *)&SymCryptSha256K + 1), v128);
      v132 = _mm_add_epi32(_mm_load_si128((const __m128i *)&SymCryptSha256K + 2), v129);
      v133 = _mm_add_epi32(_mm_load_si128((const __m128i *)&SymCryptSha256K + 3), v130);
      v208 = _mm_add_epi32(_mm_load_si128((const __m128i *)&SymCryptSha256K), v127);
      v209 = v131;
      v210 = v132;
      v211 = v133;
      do
      {
        v126 += 4;
        v134 = (__ROR4__(v10, 25) ^ __ROR4__(v10, 11) ^ __ROR4__(v10, 6))
             + (v12 & ~v10 ^ v10 & v11)
             + v208.m128i_i32[0]
             + v13;
        v135 = v134 + v9;
        v136 = (__ROR4__(v6, 22) ^ __ROR4__(v6, 13) ^ __ROR4__(v6, 2)) + (v6 & (v8 | v7) | v8 & v7) + v134;
        v137 = (__ROR4__(v135, 25) ^ __ROR4__(v135, 11) ^ __ROR4__(v135, 6))
             + (v11 & ~v135 ^ v135 & v10)
             + v208.m128i_i32[1]
             + v12;
        v138 = v137 + v8;
        v139 = (__ROR4__(v136, 22) ^ __ROR4__(v136, 13) ^ __ROR4__(v136, 2)) + (v136 & (v7 | v6) | v7 & v6) + v137;
        v140 = (__ROR4__(v138, 25) ^ __ROR4__(v138, 11) ^ __ROR4__(v138, 6))
             + (v10 & ~v138 ^ v138 & v135)
             + v208.m128i_i32[2]
             + v11;
        v141 = v140 + v7;
        v142 = (__ROR4__(v139, 22) ^ __ROR4__(v139, 13) ^ __ROR4__(v139, 2)) + (v139 & (v6 | v136) | v6 & v136) + v140;
        v143 = (__ROR4__(v141, 25) ^ __ROR4__(v141, 11) ^ __ROR4__(v141, 6))
             + (v135 & ~v141 ^ v141 & v138)
             + v208.m128i_i32[3]
             + v10;
        v144 = v143 + v6;
        v145 = (__ROR4__(v142, 22) ^ __ROR4__(v142, 13) ^ __ROR4__(v142, 2))
             + (v142 & (v136 | v139) | v136 & v139)
             + v143;
        v146 = _mm_alignr_epi8(v128, v127, 4);
        v147 = _mm_shuffle_epi32(v130, 250);
        v148 = _mm_add_epi32(
                 _mm_add_epi32(
                   v127,
                   _mm_shuffle_epi8(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi64(v147, 0x11u), _mm_srli_epi64(v147, 0x13u)),
                       _mm_srli_epi32(v147, 0xAu)),
                     v124)),
                 _mm_add_epi32(
                   _mm_alignr_epi8(v130, v129, 4),
                   _mm_xor_si128(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi32(v146, 7u), _mm_slli_epi32(v146, 0x19u)),
                       _mm_xor_si128(_mm_srli_epi32(v146, 0x12u), _mm_slli_epi32(v146, 0xEu))),
                     _mm_srli_epi32(v146, 3u))));
        v149 = _mm_shuffle_epi32(v148, 80);
        v127 = _mm_add_epi32(
                 v148,
                 _mm_shuffle_epi8(
                   _mm_xor_si128(
                     _mm_xor_si128(_mm_srli_epi64(v149, 0x11u), _mm_srli_epi64(v149, 0x13u)),
                     _mm_srli_epi32(v149, 0xAu)),
                   v125));
        v208 = _mm_add_epi32(_mm_load_si128(v126), v127);
        v150 = (__ROR4__(v144, 25) ^ __ROR4__(v144, 11) ^ __ROR4__(v144, 6))
             + (v138 & ~v144 ^ v144 & v141)
             + v209.m128i_i32[0]
             + v135;
        v151 = v150 + v136;
        v152 = (__ROR4__(v145, 22) ^ __ROR4__(v145, 13) ^ __ROR4__(v145, 2))
             + (v145 & (v139 | v142) | v139 & v142)
             + v150;
        v153 = (__ROR4__(v151, 25) ^ __ROR4__(v151, 11) ^ __ROR4__(v151, 6))
             + (v141 & ~v151 ^ v151 & v144)
             + v209.m128i_i32[1]
             + v138;
        v154 = v153 + v139;
        v155 = (__ROR4__(v152, 22) ^ __ROR4__(v152, 13) ^ __ROR4__(v152, 2))
             + (v152 & (v142 | v145) | v142 & v145)
             + v153;
        v156 = (__ROR4__(v154, 25) ^ __ROR4__(v154, 11) ^ __ROR4__(v154, 6))
             + (v144 & ~v154 ^ v154 & v151)
             + v209.m128i_i32[2]
             + v141;
        v157 = v156 + v142;
        v158 = (__ROR4__(v155, 22) ^ __ROR4__(v155, 13) ^ __ROR4__(v155, 2))
             + (v155 & (v145 | v152) | v145 & v152)
             + v156;
        v159 = (__ROR4__(v157, 25) ^ __ROR4__(v157, 11) ^ __ROR4__(v157, 6))
             + (v151 & ~v157 ^ v157 & v154)
             + v209.m128i_i32[3]
             + v144;
        v160 = v159 + v145;
        v161 = (__ROR4__(v158, 22) ^ __ROR4__(v158, 13) ^ __ROR4__(v158, 2))
             + (v158 & (v152 | v155) | v152 & v155)
             + v159;
        v162 = _mm_alignr_epi8(v129, v128, 4);
        v163 = _mm_shuffle_epi32(v127, 250);
        v164 = _mm_add_epi32(
                 _mm_add_epi32(
                   v128,
                   _mm_shuffle_epi8(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi64(v163, 0x11u), _mm_srli_epi64(v163, 0x13u)),
                       _mm_srli_epi32(v163, 0xAu)),
                     v124)),
                 _mm_add_epi32(
                   _mm_alignr_epi8(v127, v130, 4),
                   _mm_xor_si128(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi32(v162, 7u), _mm_slli_epi32(v162, 0x19u)),
                       _mm_xor_si128(_mm_srli_epi32(v162, 0x12u), _mm_slli_epi32(v162, 0xEu))),
                     _mm_srli_epi32(v162, 3u))));
        v165 = _mm_shuffle_epi32(v164, 80);
        v128 = _mm_add_epi32(
                 v164,
                 _mm_shuffle_epi8(
                   _mm_xor_si128(
                     _mm_xor_si128(_mm_srli_epi64(v165, 0x11u), _mm_srli_epi64(v165, 0x13u)),
                     _mm_srli_epi32(v165, 0xAu)),
                   v125));
        v209 = _mm_add_epi32(_mm_load_si128(v126 + 1), v128);
        v166 = (__ROR4__(v160, 25) ^ __ROR4__(v160, 11) ^ __ROR4__(v160, 6))
             + (v154 & ~v160 ^ v160 & v157)
             + v210.m128i_i32[0]
             + v151;
        v167 = v166 + v152;
        v168 = (__ROR4__(v161, 22) ^ __ROR4__(v161, 13) ^ __ROR4__(v161, 2))
             + (v161 & (v155 | v158) | v155 & v158)
             + v166;
        v169 = (__ROR4__(v167, 25) ^ __ROR4__(v167, 11) ^ __ROR4__(v167, 6))
             + (v157 & ~v167 ^ v167 & v160)
             + v210.m128i_i32[1]
             + v154;
        v170 = v169 + v155;
        v171 = (__ROR4__(v168, 22) ^ __ROR4__(v168, 13) ^ __ROR4__(v168, 2))
             + (v168 & (v158 | v161) | v158 & v161)
             + v169;
        v172 = (__ROR4__(v170, 25) ^ __ROR4__(v170, 11) ^ __ROR4__(v170, 6))
             + (v160 & ~v170 ^ v170 & v167)
             + v210.m128i_i32[2]
             + v157;
        v173 = v172 + v158;
        v174 = (__ROR4__(v171, 22) ^ __ROR4__(v171, 13) ^ __ROR4__(v171, 2))
             + (v171 & (v161 | v168) | v161 & v168)
             + v172;
        v175 = (__ROR4__(v173, 25) ^ __ROR4__(v173, 11) ^ __ROR4__(v173, 6))
             + (v167 & ~v173 ^ v173 & v170)
             + v210.m128i_i32[3]
             + v160;
        v176 = v175 + v161;
        v177 = (__ROR4__(v174, 22) ^ __ROR4__(v174, 13) ^ __ROR4__(v174, 2))
             + (v174 & (v168 | v171) | v168 & v171)
             + v175;
        v178 = _mm_alignr_epi8(v130, v129, 4);
        v179 = _mm_shuffle_epi32(v128, 250);
        v180 = _mm_add_epi32(
                 _mm_add_epi32(
                   v129,
                   _mm_shuffle_epi8(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi64(v179, 0x11u), _mm_srli_epi64(v179, 0x13u)),
                       _mm_srli_epi32(v179, 0xAu)),
                     v124)),
                 _mm_add_epi32(
                   _mm_alignr_epi8(v128, v127, 4),
                   _mm_xor_si128(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi32(v178, 7u), _mm_slli_epi32(v178, 0x19u)),
                       _mm_xor_si128(_mm_srli_epi32(v178, 0x12u), _mm_slli_epi32(v178, 0xEu))),
                     _mm_srli_epi32(v178, 3u))));
        v181 = _mm_shuffle_epi32(v180, 80);
        v129 = _mm_add_epi32(
                 v180,
                 _mm_shuffle_epi8(
                   _mm_xor_si128(
                     _mm_xor_si128(_mm_srli_epi64(v181, 0x11u), _mm_srli_epi64(v181, 0x13u)),
                     _mm_srli_epi32(v181, 0xAu)),
                   v125));
        v210 = _mm_add_epi32(_mm_load_si128(v126 + 2), v129);
        v182 = (__ROR4__(v176, 25) ^ __ROR4__(v176, 11) ^ __ROR4__(v176, 6))
             + (v170 & ~v176 ^ v176 & v173)
             + v211.m128i_i32[0]
             + v167;
        v13 = v182 + v168;
        v9 = (__ROR4__(v177, 22) ^ __ROR4__(v177, 13) ^ __ROR4__(v177, 2)) + (v177 & (v171 | v174) | v171 & v174) + v182;
        v183 = (__ROR4__(v13, 25) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 6))
             + (v173 & ~v13 ^ v13 & v176)
             + v211.m128i_i32[1]
             + v170;
        v12 = v183 + v171;
        v8 = (__ROR4__(v9, 22) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 2)) + (v9 & (v174 | v177) | v174 & v177) + v183;
        v184 = (__ROR4__(v12, 25) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 6))
             + (v176 & ~v12 ^ v12 & v13)
             + v211.m128i_i32[2]
             + v173;
        v11 = v184 + v174;
        v7 = (__ROR4__(v8, 22) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 2)) + (v8 & (v177 | v9) | v177 & v9) + v184;
        v185 = (__ROR4__(v11, 25) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 6))
             + (v13 & ~v11 ^ v11 & v12)
             + v211.m128i_i32[3]
             + v176;
        v10 = v185 + v177;
        v6 = (__ROR4__(v7, 22) ^ __ROR4__(v7, 13) ^ __ROR4__(v7, 2)) + (v7 & (v9 | v8) | v9 & v8) + v185;
        v186 = _mm_alignr_epi8(v127, v130, 4);
        v187 = _mm_shuffle_epi32(v129, 250);
        v188 = _mm_add_epi32(
                 _mm_add_epi32(
                   v130,
                   _mm_shuffle_epi8(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi64(v187, 0x11u), _mm_srli_epi64(v187, 0x13u)),
                       _mm_srli_epi32(v187, 0xAu)),
                     v124)),
                 _mm_add_epi32(
                   _mm_alignr_epi8(v129, v128, 4),
                   _mm_xor_si128(
                     _mm_xor_si128(
                       _mm_xor_si128(_mm_srli_epi32(v186, 7u), _mm_slli_epi32(v186, 0x19u)),
                       _mm_xor_si128(_mm_srli_epi32(v186, 0x12u), _mm_slli_epi32(v186, 0xEu))),
                     _mm_srli_epi32(v186, 3u))));
        v189 = _mm_shuffle_epi32(v188, 80);
        v130 = _mm_add_epi32(
                 v188,
                 _mm_shuffle_epi8(
                   _mm_xor_si128(
                     _mm_xor_si128(_mm_srli_epi64(v189, 0x11u), _mm_srli_epi64(v189, 0x13u)),
                     _mm_srli_epi32(v189, 0xAu)),
                   v125));
        v211 = _mm_add_epi32(_mm_load_si128(v126 + 3), v130);
      }
      while ( v126 < (const __m128i *)&xmmword_140023BC0 );
      v190 = &v208;
      do
      {
        v191 = (__ROR4__(v10, 25) ^ __ROR4__(v10, 11) ^ __ROR4__(v10, 6))
             + (v12 & ~v10 ^ v10 & v11)
             + v190->m128i_i32[0]
             + v13;
        v192 = v191 + v9;
        v193 = (__ROR4__(v6, 22) ^ __ROR4__(v6, 13) ^ __ROR4__(v6, 2)) + (v6 & (v8 | v7) | v8 & v7) + v191;
        v194 = (__ROR4__(v192, 25) ^ __ROR4__(v192, 11) ^ __ROR4__(v192, 6))
             + (v11 & ~v192 ^ v192 & v10)
             + v190->m128i_i32[1]
             + v12;
        v195 = v194 + v8;
        v196 = (__ROR4__(v193, 22) ^ __ROR4__(v193, 13) ^ __ROR4__(v193, 2)) + (v193 & (v7 | v6) | v7 & v6) + v194;
        v197 = (__ROR4__(v195, 25) ^ __ROR4__(v195, 11) ^ __ROR4__(v195, 6))
             + (v10 & ~v195 ^ v195 & v192)
             + v190->m128i_i32[2]
             + v11;
        v198 = v197 + v7;
        v199 = (__ROR4__(v196, 22) ^ __ROR4__(v196, 13) ^ __ROR4__(v196, 2)) + (v196 & (v6 | v193) | v6 & v193) + v197;
        v200 = (__ROR4__(v198, 25) ^ __ROR4__(v198, 11) ^ __ROR4__(v198, 6))
             + (v192 & ~v198 ^ v198 & v195)
             + v190->m128i_i32[3]
             + v10;
        v201 = v200 + v6;
        v202 = (__ROR4__(v199, 22) ^ __ROR4__(v199, 13) ^ __ROR4__(v199, 2))
             + (v199 & (v193 | v196) | v193 & v196)
             + v200;
        v203 = (__ROR4__(v201, 25) ^ __ROR4__(v201, 11) ^ __ROR4__(v201, 6))
             + (v195 & ~v201 ^ v201 & v198)
             + v190[1].m128i_i32[0]
             + v192;
        v13 = v203 + v193;
        v9 = (__ROR4__(v202, 22) ^ __ROR4__(v202, 13) ^ __ROR4__(v202, 2)) + (v202 & (v196 | v199) | v196 & v199) + v203;
        v204 = (__ROR4__(v13, 25) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 6))
             + (v198 & ~v13 ^ v13 & v201)
             + v190[1].m128i_i32[1]
             + v195;
        v12 = v204 + v196;
        v8 = (__ROR4__(v9, 22) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 2)) + (v9 & (v199 | v202) | v199 & v202) + v204;
        v205 = (__ROR4__(v12, 25) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 6))
             + (v201 & ~v12 ^ v12 & v13)
             + v190[1].m128i_i32[2]
             + v198;
        v11 = v205 + v199;
        v7 = (__ROR4__(v8, 22) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 2)) + (v8 & (v202 | v9) | v202 & v9) + v205;
        v206 = (__ROR4__(v11, 25) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 6))
             + (v13 & ~v11 ^ v11 & v12)
             + v190[1].m128i_i32[3]
             + v201;
        v10 = v206 + v202;
        v6 = (__ROR4__(v7, 22) ^ __ROR4__(v7, 13) ^ __ROR4__(v7, 2)) + (v7 & (v9 | v8) | v9 & v8) + v206;
        v190 += 2;
      }
      while ( v190 < (__m128i *)v212 );
      v6 += *a1;
      *a1 = v6;
      v7 += a1[1];
      a1[1] = v7;
      v8 += a1[2];
      a1[2] = v8;
      v9 += a1[3];
      a1[3] = v9;
      v10 += a1[4];
      a1[4] = v10;
      v11 += a1[5];
      a1[5] = v11;
      v12 += a1[6];
      a1[6] = v12;
      v13 += a1[7];
      a1[7] = v13;
      i = v224 - 64;
      a2 += 4;
      v224 = i;
    }
    while ( i >= 0x40 );
  }
  *a4 = i;
  result = 0LL;
  v208 = 0LL;
  v209 = 0LL;
  v210 = 0LL;
  v211 = 0LL;
  if ( v221 != 64 )
    memset(v212, 0, (unsigned int)(v221 - 64));
  return result;
}

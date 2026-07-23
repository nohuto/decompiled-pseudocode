/*
 * XREFs of SymCryptParallelSha256AppendBlocks_xmm @ 0x140557468
 * Callers:
 *     SymCryptParallelSha256Append @ 0x140557370 (SymCryptParallelSha256Append.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall SymCryptParallelSha256AppendBlocks_xmm(__m128i **a1, __int64 a2, unsigned __int64 a3, __m128i *a4)
{
  __m128i v4; // xmm6
  __m128i v5; // xmm0
  __m128i v6; // xmm3
  __m128i v7; // xmm6
  __m128i v8; // xmm4
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm4
  __m128i v12; // xmm6
  __m128i v13; // xmm5
  __m128i v14; // xmm0
  __m128i v15; // xmm3
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm4
  unsigned __int64 v21; // r10
  __m128i *v22; // r8
  __int64 v23; // rsi
  __m128i v24; // xmm4
  __m128i v25; // xmm4
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __m128i v34; // xmm3
  __m128i v35; // xmm5
  __m128i *v36; // rax
  __m128i v37; // xmm4
  __int64 v38; // r8
  __m128i v39; // xmm6
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  __m128i v42; // xmm7
  __m128i v43; // xmm8
  __m128i v44; // xmm9
  __m128i v45; // xmm10
  __m128i v46; // xmm12
  __m128i v47; // xmm13
  __m128i v48; // xmm3
  __m128i v49; // xmm4
  __m128i v50; // xmm4
  __m128 v51; // xmm7
  unsigned int *v52; // r8
  __m128 v53; // xmm8
  __m128i *v54; // rsi
  __m128 v55; // xmm9
  __m128 v56; // xmm10
  __m128 v57; // xmm12
  __m128 v58; // xmm6
  __m128 v59; // xmm5
  __m128 v60; // xmm3
  __m128i v61; // xmm2
  __m128i v62; // xmm2
  __m128 v63; // xmm4
  __m128i v64; // xmm2
  __m128 v65; // xmm3
  __m128i v66; // xmm2
  __m128i v67; // xmm7
  __m128i v68; // xmm8
  __m128i v69; // xmm9
  __m128i v70; // xmm10
  __m128i **v71; // rdx
  __m128i **v72; // r8
  __m128i **v73; // r10
  __m128i v74; // xmm0
  __m128i v75; // xmm2
  __m128i v76; // xmm3
  __m128i v77; // xmm4
  __m128i v78; // xmm3
  __m128i v79; // xmm0
  __m128i v80; // xmm1
  __m128i v81; // xmm2
  __m128i v82; // xmm0
  __m128i v83; // xmm5
  __m128i v84; // xmm3
  __m128i v85; // xmm4
  __m128i v86; // xmm5
  __m128i v87; // xmm0
  __m128i v88; // xmm1
  __m128i v89; // xmm3
  __m128i *result; // rax

  v4 = _mm_loadu_si128(*a1);
  v5 = _mm_loadu_si128(a1[1]);
  v6 = _mm_unpacklo_epi32(v4, v5);
  v7 = _mm_unpackhi_epi32(v4, v5);
  v8 = _mm_loadu_si128(a1[2]);
  v9 = _mm_loadu_si128(a1[3]);
  v10 = _mm_unpacklo_epi32(v8, v9);
  a4[11] = _mm_unpacklo_epi64(v6, v10);
  a4[10] = _mm_unpackhi_epi64(v6, v10);
  v11 = _mm_unpackhi_epi32(v8, v9);
  a4[9] = _mm_unpacklo_epi64(v7, v11);
  v12 = _mm_unpackhi_epi64(v7, v11);
  a4[8] = v12;
  v13 = _mm_loadu_si128(*a1 + 1);
  v14 = _mm_loadu_si128(a1[1] + 1);
  v15 = _mm_unpacklo_epi32(v13, v14);
  v16 = _mm_unpackhi_epi32(v13, v14);
  v17 = _mm_loadu_si128(a1[2] + 1);
  v18 = _mm_loadu_si128(a1[3] + 1);
  v19 = _mm_unpacklo_epi32(v17, v18);
  a4[7] = _mm_unpacklo_epi64(v15, v19);
  v20 = _mm_unpackhi_epi32(v17, v18);
  a4[5] = _mm_unpacklo_epi64(v16, v20);
  a4[6] = _mm_unpackhi_epi64(v15, v19);
  a4[4] = _mm_unpackhi_epi64(v16, v20);
  *a4 = v12;
  a4[1] = _mm_loadu_si128(a4 + 9);
  a4[2] = _mm_loadu_si128(a4 + 10);
  a4[3] = _mm_loadu_si128(a4 + 11);
  if ( a3 < 0x40 )
  {
    v71 = a1 + 1;
    v72 = a1 + 2;
    v73 = a1 + 3;
  }
  else
  {
    v21 = a3 >> 6;
    do
    {
      v22 = a4 + 14;
      v23 = 4LL;
      do
      {
        v24 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a2);
        *(_QWORD *)a2 += 16LL;
        v25 = _mm_shuffle_epi8(v24, (__m128i)_xmm);
        v26 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 8));
        *(_QWORD *)(a2 + 8) += 16LL;
        v27 = _mm_shuffle_epi8(v26, (__m128i)_xmm);
        v28 = _mm_unpacklo_epi32(v25, v27);
        v29 = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 16)), (__m128i)_xmm);
        *(_QWORD *)(a2 + 16) += 16LL;
        v30 = _mm_unpackhi_epi32(v25, v27);
        v31 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
        v32 = _mm_shuffle_epi8(v31, (__m128i)_xmm);
        v33 = _mm_unpacklo_epi32(v29, v32);
        v34 = _mm_unpackhi_epi32(v29, v32);
        v22[-2] = _mm_unpacklo_epi64(v28, v33);
        *v22 = _mm_unpacklo_epi64(v30, v34);
        v22[-1] = _mm_unpackhi_epi64(v28, v33);
        v22[1] = _mm_unpackhi_epi64(v30, v34);
        v22 += 4;
        --v23;
      }
      while ( v23 );
      v35 = _mm_loadu_si128(a4 + 27);
      v36 = a4 + 21;
      v37 = _mm_loadu_si128(a4 + 26);
      v38 = 24LL;
      v39 = _mm_loadu_si128(a4 + 12);
      v40 = v37;
      v41 = v37;
      v42 = v37;
      v43 = v37;
      v44 = v35;
      v45 = v35;
      v46 = v35;
      v47 = v35;
      do
      {
        v48 = _mm_loadu_si128(v36 - 8);
        v49 = _mm_add_epi32(
                (__m128i)_mm_xor_ps(
                           _mm_xor_ps(
                             _mm_xor_ps(
                               _mm_xor_ps((__m128)_mm_slli_epi32(v40, 0xFu), (__m128)_mm_srli_epi32(v37, 0x11u)),
                               (__m128)_mm_slli_epi32(v41, 0xDu)),
                             (__m128)_mm_srli_epi32(v42, 0x13u)),
                           (__m128)_mm_srli_epi32(v43, 0xAu)),
                v39);
        v39 = _mm_loadu_si128(v36 - 7);
        v50 = _mm_add_epi32(v49, *v36);
        v36 += 2;
        v37 = _mm_add_epi32(
                v50,
                (__m128i)_mm_xor_ps(
                           _mm_xor_ps(
                             _mm_xor_ps(
                               _mm_xor_ps((__m128)_mm_slli_epi32(v48, 0x19u), (__m128)_mm_srli_epi32(v48, 7u)),
                               (__m128)_mm_slli_epi32(v48, 0xEu)),
                             (__m128)_mm_srli_epi32(v48, 0x12u)),
                           (__m128)_mm_srli_epi32(v48, 3u)));
        v36[5] = v37;
        v42 = v37;
        v43 = v37;
        v40 = v37;
        v35 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    (__m128i)_mm_xor_ps(
                               _mm_xor_ps(
                                 _mm_xor_ps(
                                   _mm_xor_ps((__m128)_mm_slli_epi32(v44, 0xFu), (__m128)_mm_srli_epi32(v35, 0x11u)),
                                   (__m128)_mm_slli_epi32(v45, 0xDu)),
                                 (__m128)_mm_srli_epi32(v46, 0x13u)),
                               (__m128)_mm_srli_epi32(v47, 0xAu)),
                    v48),
                  v36[-1]),
                (__m128i)_mm_xor_ps(
                           _mm_xor_ps(
                             _mm_xor_ps(
                               _mm_xor_ps((__m128)_mm_slli_epi32(v39, 0x19u), (__m128)_mm_srli_epi32(v39, 7u)),
                               (__m128)_mm_slli_epi32(v39, 0xEu)),
                             (__m128)_mm_srli_epi32(v39, 0x12u)),
                           (__m128)_mm_srli_epi32(v39, 3u)));
        v41 = v37;
        v36[6] = v35;
        v44 = v35;
        v45 = v35;
        v46 = v35;
        v47 = v35;
        --v38;
      }
      while ( v38 );
      v51 = (__m128)_mm_loadu_si128(a4 + 11);
      v52 = (unsigned int *)&SymCryptSha256K + 2;
      v53 = (__m128)_mm_loadu_si128(a4 + 10);
      v54 = a4 + 4;
      v55 = (__m128)_mm_loadu_si128(a4 + 9);
      v56 = (__m128)_mm_loadu_si128(a4 + 8);
      v57 = (__m128)_mm_loadu_si128(a4 + 4);
      do
      {
        v58 = (__m128)_mm_loadu_si128(v54 + 3);
        v59 = (__m128)_mm_loadu_si128(v54 + 2);
        v60 = (__m128)_mm_loadu_si128(v54 + 1);
        v61 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      (__m128i)_mm_xor_ps(
                                 _mm_xor_ps(
                                   _mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         (__m128)_mm_slli_epi32((__m128i)v58, 0x1Au),
                                         (__m128)_mm_srli_epi32((__m128i)v58, 6u)),
                                       (__m128)_mm_slli_epi32((__m128i)v58, 0x15u)),
                                     (__m128)_mm_srli_epi32((__m128i)v58, 0xBu)),
                                   (__m128)_mm_slli_epi32((__m128i)v58, 7u)),
                                 (__m128)_mm_srli_epi32((__m128i)v58, 0x19u)),
                      v54[8]),
                    (__m128i)v57),
                  (__m128i)_mm_xor_ps(_mm_and_ps(_mm_xor_ps(v59, v60), v58), v60)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v52 - 2)), 0));
        v57 = (__m128)_mm_add_epi32(v61, (__m128i)v56);
        v54[4] = (__m128i)v57;
        v56 = (__m128)_mm_add_epi32(
                        _mm_add_epi32(
                          (__m128i)_mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         _mm_xor_ps(
                                           _mm_xor_ps(
                                             (__m128)_mm_slli_epi32((__m128i)v51, 0x1Eu),
                                             (__m128)_mm_srli_epi32((__m128i)v51, 2u)),
                                           (__m128)_mm_slli_epi32((__m128i)v51, 0x13u)),
                                         (__m128)_mm_srli_epi32((__m128i)v51, 0xDu)),
                                       (__m128)_mm_slli_epi32((__m128i)v51, 0xAu)),
                                     (__m128)_mm_srli_epi32((__m128i)v51, 0x16u)),
                          v61),
                        (__m128i)_mm_or_ps(_mm_and_ps(_mm_or_ps(v53, v51), v55), _mm_and_ps(v53, v51)));
        v62 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      (__m128i)_mm_xor_ps(
                                 _mm_xor_ps(
                                   _mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         (__m128)_mm_slli_epi32((__m128i)v57, 0x1Au),
                                         (__m128)_mm_srli_epi32((__m128i)v57, 6u)),
                                       (__m128)_mm_slli_epi32((__m128i)v57, 0x15u)),
                                     (__m128)_mm_srli_epi32((__m128i)v57, 0xBu)),
                                   (__m128)_mm_slli_epi32((__m128i)v57, 7u)),
                                 (__m128)_mm_srli_epi32((__m128i)v57, 0x19u)),
                      v54[9]),
                    (__m128i)v60),
                  (__m128i)_mm_xor_ps(_mm_and_ps(_mm_xor_ps(v59, v58), v57), v59)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v52 - 1)), 0));
        v63 = (__m128)_mm_add_epi32(v62, (__m128i)v55);
        v54[5] = (__m128i)v63;
        v55 = (__m128)_mm_add_epi32(
                        _mm_add_epi32(
                          (__m128i)_mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         _mm_xor_ps(
                                           _mm_xor_ps(
                                             (__m128)_mm_slli_epi32((__m128i)v56, 0x1Eu),
                                             (__m128)_mm_srli_epi32((__m128i)v56, 2u)),
                                           (__m128)_mm_slli_epi32((__m128i)v56, 0x13u)),
                                         (__m128)_mm_srli_epi32((__m128i)v56, 0xDu)),
                                       (__m128)_mm_slli_epi32((__m128i)v56, 0xAu)),
                                     (__m128)_mm_srli_epi32((__m128i)v56, 0x16u)),
                          v62),
                        (__m128i)_mm_or_ps(_mm_and_ps(_mm_or_ps(v56, v51), v53), _mm_and_ps(v56, v51)));
        v64 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      (__m128i)_mm_xor_ps(
                                 _mm_xor_ps(
                                   _mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         (__m128)_mm_slli_epi32((__m128i)v63, 0x1Au),
                                         (__m128)_mm_srli_epi32((__m128i)v63, 6u)),
                                       (__m128)_mm_slli_epi32((__m128i)v63, 0x15u)),
                                     (__m128)_mm_srli_epi32((__m128i)v63, 0xBu)),
                                   (__m128)_mm_slli_epi32((__m128i)v63, 7u)),
                                 (__m128)_mm_srli_epi32((__m128i)v63, 0x19u)),
                      v54[10]),
                    (__m128i)v59),
                  (__m128i)_mm_xor_ps(_mm_and_ps(_mm_xor_ps(v57, v58), v63), v58)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*v52), 0));
        v65 = (__m128)_mm_add_epi32(v64, (__m128i)v53);
        v54[6] = (__m128i)v65;
        v54 += 4;
        v53 = (__m128)_mm_add_epi32(
                        _mm_add_epi32(
                          (__m128i)_mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         _mm_xor_ps(
                                           _mm_xor_ps(
                                             (__m128)_mm_slli_epi32((__m128i)v55, 0x1Eu),
                                             (__m128)_mm_srli_epi32((__m128i)v55, 2u)),
                                           (__m128)_mm_slli_epi32((__m128i)v55, 0x13u)),
                                         (__m128)_mm_srli_epi32((__m128i)v55, 0xDu)),
                                       (__m128)_mm_slli_epi32((__m128i)v55, 0xAu)),
                                     (__m128)_mm_srli_epi32((__m128i)v55, 0x16u)),
                          v64),
                        (__m128i)_mm_or_ps(_mm_and_ps(_mm_or_ps(v55, v56), v51), _mm_and_ps(v55, v56)));
        v66 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      (__m128i)_mm_xor_ps(
                                 _mm_xor_ps(
                                   _mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         (__m128)_mm_slli_epi32((__m128i)v65, 0x1Au),
                                         (__m128)_mm_srli_epi32((__m128i)v65, 6u)),
                                       (__m128)_mm_slli_epi32((__m128i)v65, 0x15u)),
                                     (__m128)_mm_srli_epi32((__m128i)v65, 0xBu)),
                                   (__m128)_mm_slli_epi32((__m128i)v65, 7u)),
                                 (__m128)_mm_srli_epi32((__m128i)v65, 0x19u)),
                      v54[7]),
                    (__m128i)v58),
                  (__m128i)_mm_xor_ps(_mm_and_ps(_mm_xor_ps(v63, v57), v65), v57)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(v52[1]), 0));
        v52 += 4;
        v54[3] = _mm_add_epi32(v66, (__m128i)v51);
        v51 = (__m128)_mm_add_epi32(
                        _mm_add_epi32(
                          (__m128i)_mm_xor_ps(
                                     _mm_xor_ps(
                                       _mm_xor_ps(
                                         _mm_xor_ps(
                                           _mm_xor_ps(
                                             (__m128)_mm_slli_epi32((__m128i)v53, 0x1Eu),
                                             (__m128)_mm_srli_epi32((__m128i)v53, 2u)),
                                           (__m128)_mm_slli_epi32((__m128i)v53, 0x13u)),
                                         (__m128)_mm_srli_epi32((__m128i)v53, 0xDu)),
                                       (__m128)_mm_slli_epi32((__m128i)v53, 0xAu)),
                                     (__m128)_mm_srli_epi32((__m128i)v53, 0x16u)),
                          v66),
                        (__m128i)_mm_or_ps(_mm_and_ps(_mm_or_ps(v53, v55), v56), _mm_and_ps(v53, v55)));
      }
      while ( (__int64)v52 < (__int64)((unsigned int *)&_xmm + 2) );
      v67 = _mm_add_epi32((__m128i)v51, a4[3]);
      a4[11] = v67;
      v68 = _mm_add_epi32((__m128i)v53, a4[2]);
      a4[3] = v67;
      a4[10] = v68;
      v69 = _mm_add_epi32((__m128i)v55, a4[1]);
      a4[2] = v68;
      a4[9] = v69;
      v70 = _mm_add_epi32((__m128i)v56, *a4);
      a4[1] = v69;
      a4[8] = v70;
      *a4 = v70;
      a4[7] = _mm_add_epi32(_mm_loadu_si128(a4 + 71), a4[7]);
      a4[6] = _mm_add_epi32(_mm_loadu_si128(a4 + 70), a4[6]);
      a4[5] = _mm_add_epi32(_mm_loadu_si128(a4 + 69), a4[5]);
      a4[4] = _mm_add_epi32(_mm_loadu_si128(a4 + 68), a4[4]);
      --v21;
    }
    while ( v21 );
    v71 = a1 + 1;
    v72 = a1 + 2;
    v73 = a1 + 3;
  }
  v74 = _mm_loadu_si128(a4 + 10);
  v75 = _mm_loadu_si128(a4 + 9);
  v76 = _mm_loadu_si128(a4 + 11);
  v77 = _mm_unpackhi_epi32(v76, v74);
  v78 = _mm_unpacklo_epi32(v76, v74);
  v79 = _mm_loadu_si128(a4 + 8);
  v80 = _mm_unpacklo_epi32(v75, v79);
  v81 = _mm_unpackhi_epi32(v75, v79);
  **a1 = _mm_unpacklo_epi64(v78, v80);
  *a1[1] = _mm_unpackhi_epi64(v78, v80);
  *a1[2] = _mm_unpacklo_epi64(v77, v81);
  *a1[3] = _mm_unpackhi_epi64(v77, v81);
  v82 = _mm_loadu_si128(a4 + 6);
  v83 = _mm_loadu_si128(a4 + 7);
  v84 = _mm_loadu_si128(a4 + 5);
  v85 = _mm_unpacklo_epi32(v83, v82);
  v86 = _mm_unpackhi_epi32(v83, v82);
  v87 = _mm_loadu_si128(a4 + 4);
  v88 = _mm_unpacklo_epi32(v84, v87);
  v89 = _mm_unpackhi_epi32(v84, v87);
  (*a1)[1] = _mm_unpacklo_epi64(v85, v88);
  (*v71)[1] = _mm_unpackhi_epi64(v85, v88);
  (*v72)[1] = _mm_unpacklo_epi64(v86, v89);
  result = *v73;
  (*v73)[1] = _mm_unpackhi_epi64(v86, v89);
  return result;
}

/*
 * XREFs of sub_1400997E0 @ 0x1400997E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000F30C @ 0x14000F30C (sub_14000F30C.c)
 *     sub_14000F3C4 @ 0x14000F3C4 (sub_14000F3C4.c)
 *     sub_14000F5B0 @ 0x14000F5B0 (sub_14000F5B0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400B50A4 @ 0x1400B50A4 (sub_1400B50A4.c)
 */

__int64 __fastcall sub_1400997E0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  int v10; // r8d
  unsigned int v11; // r10d
  __int64 v12; // r12
  __m128i v13; // xmm6
  __int64 v14; // xmm9_8
  __m128i v15; // xmm8
  int v16; // ecx
  unsigned int v17; // r13d
  unsigned int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rbx
  unsigned int v22; // r8d
  __int64 v23; // r14
  __int64 v24; // rcx
  __int32 v25; // esi
  int v26; // r13d
  unsigned __int64 v27; // xmm0_8
  int v28; // ecx
  double v29; // xmm1_8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r11
  int v32; // ecx
  double v33; // xmm1_8
  unsigned __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r14d
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int32 v44; // r8d
  __int64 v45; // r8
  __int64 result; // rax
  unsigned int v47; // r12d
  __int64 v48; // rcx
  unsigned __int64 v49; // r10
  __int64 v50; // r9
  __int64 v51; // r8
  unsigned int v52; // edx
  __int32 v53; // ecx
  int v54; // eax
  int v55; // ecx
  double v56; // xmm1_8
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r11
  int v59; // ecx
  double v60; // xmm1_8
  unsigned __int64 v61; // rax
  __int64 v62; // r10
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  _QWORD *v66; // rdx
  __int32 v67; // r9d
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  bool v71; // zf
  __int32 v72; // eax
  __int64 v73; // rcx
  __int32 v74; // r8d
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned __int64 v78; // r10
  __int64 v79; // r15
  unsigned int v80; // r8d
  __int64 v81; // r11
  __int64 v82; // rcx
  unsigned int v83; // edx
  __int32 v84; // r12d
  __int64 v85; // r9
  int v86; // eax
  char v87; // r11
  int v88; // ecx
  double v89; // xmm1_8
  unsigned __int64 v90; // rax
  int v91; // ecx
  double v92; // xmm1_8
  unsigned __int64 v93; // rax
  __int64 v94; // r10
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // r8
  unsigned int v98; // r11d
  _QWORD *v99; // rdx
  __int32 v100; // r9d
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r8
  __int32 v104; // eax
  __int64 v105; // rcx
  __int32 v106; // r8d
  __int64 v107; // rdx
  __int64 v108; // r8
  unsigned int v109; // ebx
  int v110; // r14d
  unsigned int *v111; // rcx
  unsigned int v112; // edx
  __int64 v113; // r10
  __int64 v114; // r9
  __int32 v115; // r11d
  unsigned __int64 v116; // rsi
  unsigned __int64 v117; // r12
  unsigned int v118; // eax
  unsigned int v119; // esi
  __int64 v120; // r10
  _DWORD *v121; // r14
  unsigned __int64 v122; // r8
  int v123; // eax
  int v124; // ecx
  int v125; // edx
  __int64 v126; // r15
  int v127; // r13d
  int v128; // ecx
  int v129; // eax
  int v130; // r15d
  int v131; // ecx
  double v132; // xmm1_8
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rsi
  int v135; // ecx
  double v136; // xmm1_8
  unsigned __int64 v137; // rax
  char v138; // r10
  __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // r8
  unsigned int v143; // r13d
  __int32 v144; // r10d
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // r8
  __int32 v148; // eax
  __int64 v149; // rcx
  __int32 v150; // r8d
  __int64 v151; // r8
  __int64 v152; // [rsp+38h] [rbp-A9h]
  __int64 v153; // [rsp+38h] [rbp-A9h]
  __int64 v154; // [rsp+38h] [rbp-A9h]
  __int64 v155; // [rsp+38h] [rbp-A9h]
  unsigned int v156; // [rsp+58h] [rbp-89h]
  int v157; // [rsp+58h] [rbp-89h]
  int v158; // [rsp+58h] [rbp-89h]
  char v159; // [rsp+60h] [rbp-81h]
  unsigned __int64 v160; // [rsp+68h] [rbp-79h]
  unsigned __int64 v161; // [rsp+68h] [rbp-79h]
  int v162; // [rsp+70h] [rbp-71h]
  unsigned __int64 v163; // [rsp+78h] [rbp-69h]
  __int32 v164; // [rsp+88h] [rbp-59h]
  __int128 v165; // [rsp+A0h] [rbp-41h]
  __int64 v166; // [rsp+B0h] [rbp-31h]
  int v167; // [rsp+148h] [rbp+67h]
  unsigned int v168; // [rsp+148h] [rbp+67h]
  int v169; // [rsp+148h] [rbp+67h]
  bool v170; // [rsp+148h] [rbp+67h]
  int v172; // [rsp+158h] [rbp+77h]
  int v173; // [rsp+158h] [rbp+77h]
  int v174; // [rsp+158h] [rbp+77h]
  unsigned int v175; // [rsp+158h] [rbp+77h]
  int v176; // [rsp+160h] [rbp+7Fh]
  int v177; // [rsp+160h] [rbp+7Fh]
  int v178; // [rsp+160h] [rbp+7Fh]

  v2 = (__int64 *)(a1 + 136);
  v3 = a2;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000F5B0(a1, a2, *v2, 11, *(_DWORD *)(a2 + 8), 0, 0);
  v5 = *(unsigned int *)(v3 + 8);
  v176 = v5;
  if ( (_DWORD)v5 && (*(_DWORD *)(*(_QWORD *)(*v2 + 88) + 164LL) & 1) != 0 )
  {
    v6 = *(_QWORD *)(*v2 + 88);
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), 0LL, 0LL);
    v8 = *v2;
    v9 = *(_QWORD *)(*v2 + 88);
    if ( v7 < 0 )
    {
      if ( (byte_1400E8401 & 4) != 0 )
        sub_14009D41C(v6, v5, *v2);
      sub_140048108();
      _InterlockedAnd((volatile signed __int32 *)(v9 + 164), 0xFFFFFFFE);
      goto LABEL_51;
    }
    v10 = *(_DWORD *)(v3 + 12);
    v172 = v10;
    if ( !v10 )
      goto LABEL_51;
    v11 = *(_DWORD *)(v8 + 104) * v5;
    v12 = *(_QWORD *)(v8 + 96);
    v13 = *(__m128i *)(a1 + 112);
    v14 = *(_QWORD *)(a1 + 128);
    v15 = *(__m128i *)(a1 + 96);
    v156 = v11;
    v16 = *(_DWORD *)(v8 + 504);
    v5 = *(_DWORD *)(v12 + 160) + (unsigned int)(v7 % *(unsigned int *)(v8 + 168));
    v162 = *(_DWORD *)(v12 + 160) + v7 % *(unsigned int *)(v8 + 168);
    LODWORD(v166) = v14;
    if ( v16 )
    {
      if ( v16 != 1 )
        goto LABEL_51;
      v17 = *(_DWORD *)(a1 + 88);
      v18 = *(_DWORD *)(v12 + 164);
      if ( !v17 )
        v17 = v11;
      if ( (unsigned int)v5 + v17 <= v18 )
      {
        if ( v10 != 2 )
          memcpy((void *)(*(_QWORD *)(v8 + 80) + (unsigned int)v5), *(const void **)(v8 + 128), v17);
        _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 16LL), v17);
        v19 = *(_QWORD *)(a1 + 136);
        v20 = *(unsigned int *)(v3 + 12);
        v167 = v17 / *(_DWORD *)(v19 + 104);
        v21 = *(unsigned int *)(*(_QWORD *)(v19 + 88) + 4LL);
        v22 = **(_DWORD **)(v19 + 88);
        v23 = v19;
        v24 = *(_QWORD *)(v19 + 96);
        v5 = *(unsigned int *)(v24 + 132);
        if ( (unsigned int)v21 >= (unsigned int)v5 || v22 >= (unsigned int)v5 )
          goto LABEL_39;
        v25 = 0;
        if ( (_DWORD)v21 + 1 != (_DWORD)v5 )
          v25 = v21 + 1;
        if ( v25 == v22 )
        {
          sub_1400B50A4(v24, v23, v22, v21, **(unsigned int **)(*(_QWORD *)(a1 + 136) + 88LL));
LABEL_40:
          sub_140048108();
LABEL_50:
          v3 = a2;
          goto LABEL_51;
        }
        v26 = 12;
        v27 = _mm_srli_si128(v15, 8).m128i_u64[0];
        if ( (unsigned int)v5 > 5 )
          v26 = 4;
        if ( v15.m128i_i64[0] < v27 )
        {
          v32 = v27 - v15.m128i_i32[0];
          if ( (__int64)(v27 - v15.m128i_i64[0]) < 0 )
          {
            v34 = v32 & 1 | ((v27 - v15.m128i_i64[0]) >> 1);
            v33 = (double)(int)v34 + (double)(int)v34;
          }
          else
          {
            v33 = (double)v32;
          }
          v31 = _mm_srli_si128(v13, 8).m128i_u64[0] + (unsigned int)(int)(v33 * 10000000.0 / *(float *)&v14 + 0.5);
        }
        else
        {
          v28 = v15.m128i_i32[0] - v27;
          if ( (__int64)(v15.m128i_i64[0] - v27) < 0 )
          {
            v30 = v28 & 1 | ((v15.m128i_i64[0] - v27) >> 1);
            v29 = (double)(int)v30 + (double)(int)v30;
          }
          else
          {
            v29 = (double)v28;
          }
          v31 = _mm_srli_si128(v13, 8).m128i_u64[0] - (unsigned int)(int)(v29 * 10000000.0 / *(float *)&v14 + 0.5);
        }
        v35 = v21 << 6;
        *(_DWORD *)(v35 + *(_QWORD *)(v23 + 136)) = 1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v35 + 4) = v162;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v35 + 56) = v167;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v35 + 8) = v20;
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL);
        *(__m128i *)(v36 + v35 + 16) = v15;
        *(__m128i *)(v36 + v35 + 32) = v13;
        *(_QWORD *)(v36 + v35 + 48) = v14;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v35 + 40) = v31;
        if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 136) + 176LL), 0) == 1 )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v35 + 52) = 1;
        v37 = *(_QWORD *)(a1 + 136);
        if ( *(_DWORD *)(*(_QWORD *)(v37 + 96) + 152LL) != -1 )
        {
          v38 = *(unsigned int *)(*(_QWORD *)(v37 + 88) + 12LL);
          v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 8LL);
          if ( (unsigned int)v38 >= (unsigned int)v5 || v39 >= (unsigned int)v5 )
          {
LABEL_39:
            sub_140048108();
            goto LABEL_40;
          }
          v5 = *(_QWORD *)(a1 + 136);
          v20 = 0LL;
          v40 = *(_QWORD *)(v5 + 152);
          if ( (_DWORD)v38 + 1 != *(_DWORD *)(*(_QWORD *)(v5 + 96) + 132LL) )
            v20 = (unsigned int)(v38 + 1);
          v41 = *(_QWORD *)(v5 + 136);
          v42 = v38 << 6;
          *(_OWORD *)(v42 + v40) = *(_OWORD *)(v41 + (v21 << 6));
          *(_OWORD *)(v42 + v40 + 16) = *(_OWORD *)(v41 + v35 + 16);
          *(_OWORD *)(v42 + v40 + 32) = *(_OWORD *)(v41 + v35 + 32);
          *(_OWORD *)(v42 + v40 + 48) = *(_OWORD *)(v41 + v35 + 48);
          _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 12LL), v20);
          if ( (_DWORD)v20 == v39 )
          {
            v43 = *(_QWORD *)(a1 + 136);
            v5 = v39 + 1;
            v44 = 0;
            if ( (_DWORD)v5 != *(_DWORD *)(*(_QWORD *)(v43 + 96) + 132LL) )
              v44 = v39 + 1;
            _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v43 + 88) + 8LL), v44);
          }
        }
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 4LL), v25);
        if ( (byte_1400E8401 & 4) != 0 )
        {
          sub_14000F30C(
            v21 << 6,
            *(int *)((v21 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
            *(_QWORD *)(a1 + 136),
            v20,
            *(_DWORD *)((v21 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
            v13.m128i_i8[0],
            v31,
            v15.m128i_i8[0],
            v27);
          if ( (byte_1400E8401 & 4) != 0 )
          {
            v45 = *(_QWORD *)(a1 + 136);
            v152 = *(_QWORD *)((v21 << 6) + *(_QWORD *)(v45 + 136) + 40);
            sub_14000F3C4(v152, v5, v45, v26, v21, 0, v152);
          }
        }
        goto LABEL_50;
      }
      v47 = v18 - v5;
      if ( v10 != 2 )
      {
        memcpy((void *)(*(_QWORD *)(v8 + 80) + (unsigned int)v5), *(const void **)(v8 + 128), v47);
        memcpy(
          (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL)
                 + *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 96LL) + 160LL)),
          (const void *)(v47 + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 128LL)),
          v17 - v47);
      }
      v48 = *(_QWORD *)(a1 + 136);
      v177 = *(_DWORD *)(v3 + 12);
      v49 = _mm_srli_si128(v15, 8).m128i_u64[0];
      v173 = v47 / *(_DWORD *)(v48 + 104);
      v50 = *(unsigned int *)(*(_QWORD *)(v48 + 88) + 4LL);
      v168 = v50;
      v160 = _mm_srli_si128(v13, 8).m128i_u64[0];
      v163 = v49;
      v51 = **(unsigned int **)(v48 + 88);
      v52 = *(_DWORD *)(*(_QWORD *)(v48 + 96) + 132LL);
      if ( (unsigned int)v50 >= v52 || (unsigned int)v51 >= v52 )
        goto LABEL_78;
      v53 = 0;
      if ( (_DWORD)v50 + 1 != v52 )
        v53 = v50 + 1;
      v164 = v53;
      if ( v53 == (_DWORD)v51 )
      {
        sub_1400B50A4(v53, *(_QWORD *)(a1 + 136), v51, v50, v51);
LABEL_79:
        sub_140048108();
        goto LABEL_89;
      }
      v54 = 12;
      if ( v52 > 5 )
        v54 = 4;
      v157 = v54;
      if ( v15.m128i_i64[0] < v49 )
      {
        v59 = v49 - v15.m128i_i32[0];
        if ( (__int64)(v49 - v15.m128i_i64[0]) < 0 )
        {
          v61 = v59 & 1 | ((v49 - v15.m128i_i64[0]) >> 1);
          v60 = (double)(int)v61 + (double)(int)v61;
        }
        else
        {
          v60 = (double)v59;
        }
        v58 = v160 + (unsigned int)(int)(v60 * 10000000.0 / *(float *)&v14 + 0.5);
      }
      else
      {
        v55 = v15.m128i_i32[0] - v49;
        if ( (__int64)(v15.m128i_i64[0] - v49) < 0 )
        {
          v57 = v55 & 1 | ((v15.m128i_i64[0] - v49) >> 1);
          v56 = (double)(int)v57 + (double)(int)v57;
        }
        else
        {
          v56 = (double)v55;
        }
        v58 = v160 - (unsigned int)(int)(v56 * 10000000.0 / *(float *)&v14 + 0.5);
      }
      v62 = v50 << 6;
      *(_DWORD *)(v62 + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL)) = 1;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v62 + 4) = v162;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v62 + 56) = v173;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v62 + 8) = v177;
      v63 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL);
      *(__m128i *)(v63 + v62 + 16) = v15;
      *(__m128i *)(v63 + v62 + 32) = v13;
      *(_QWORD *)(v63 + v62 + 48) = v14;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v62 + 40) = v58;
      if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 136) + 176LL), 0) == 1 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v62 + 52) = 1;
      v64 = *(_QWORD *)(a1 + 136);
      if ( *(_DWORD *)(*(_QWORD *)(v64 + 96) + 152LL) != -1 )
      {
        v65 = *(unsigned int *)(*(_QWORD *)(v64 + 88) + 12LL);
        v174 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 8LL);
        if ( (unsigned int)v65 >= v52 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 8LL) >= v52 )
        {
LABEL_78:
          sub_140048108();
          goto LABEL_79;
        }
        v66 = *(_QWORD **)(a1 + 136);
        v67 = 0;
        v68 = v66[19];
        if ( (_DWORD)v65 + 1 != *(_DWORD *)(v66[12] + 132LL) )
          v67 = v65 + 1;
        v69 = v66[17];
        v70 = v65 << 6;
        v71 = v67 == v174;
        *(_OWORD *)(v70 + v68) = *(_OWORD *)(v69 + v62);
        *(_OWORD *)(v70 + v68 + 16) = *(_OWORD *)(v69 + v62 + 16);
        *(_OWORD *)(v70 + v68 + 32) = *(_OWORD *)(v69 + v62 + 32);
        *(_OWORD *)(v70 + v68 + 48) = *(_OWORD *)(v69 + v62 + 48);
        v72 = v67;
        v50 = v168;
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 12LL), v72);
        if ( v71 )
        {
          v73 = *(_QWORD *)(a1 + 136);
          v74 = 0;
          if ( v174 + 1 != *(_DWORD *)(*(_QWORD *)(v73 + 96) + 132LL) )
            v74 = v174 + 1;
          _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v73 + 88) + 8LL), v74);
        }
      }
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 4LL), v164);
      if ( (byte_1400E8401 & 4) != 0 )
      {
        sub_14000F30C(
          (unsigned __int64)(unsigned int)v50 << 6,
          *(int *)(((unsigned __int64)(unsigned int)v50 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
          *(_QWORD *)(a1 + 136),
          v50,
          *(_DWORD *)(((unsigned __int64)(unsigned int)v50 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
          v13.m128i_i8[0],
          v58,
          v15.m128i_i8[0],
          v163);
        if ( (byte_1400E8401 & 4) != 0 )
        {
          v75 = *(_QWORD *)(a1 + 136);
          v153 = *(_QWORD *)(((unsigned __int64)v168 << 6) + *(_QWORD *)(v75 + 136) + 40);
          sub_14000F3C4(v153, v168, v75, v157, v168, 0, v153);
        }
      }
LABEL_89:
      v76 = *(_QWORD *)(a1 + 136);
      HIDWORD(v166) = 2;
      v77 = v47 / *(_DWORD *)(v76 + 104);
      v159 = v13.m128i_i8[0] - v77;
      *(_QWORD *)&v165 = v13.m128i_i64[0] - v77;
      v78 = (unsigned int)(int)((double)(int)v77 * 10000000.0 / *(float *)(v76 + 172) + 0.5) + v160;
      *((_QWORD *)&v165 + 1) = v78;
      v178 = *(_DWORD *)(a2 + 12);
      v175 = (v17 - v47) / *(_DWORD *)(v76 + 104);
      v169 = *(_DWORD *)(*(_QWORD *)(v76 + 96) + 160LL);
      v79 = *(unsigned int *)(*(_QWORD *)(v76 + 88) + 4LL);
      v80 = **(_DWORD **)(v76 + 88);
      v81 = *(_QWORD *)(a1 + 136);
      v82 = *(_QWORD *)(v81 + 96);
      v83 = *(_DWORD *)(v82 + 132);
      if ( (unsigned int)v79 >= v83 || v80 >= v83 )
        goto LABEL_111;
      v84 = 0;
      if ( (_DWORD)v79 + 1 != v83 )
        v84 = v79 + 1;
      if ( v84 == v80 )
      {
        sub_1400B50A4(v82, v81, v80, v79, **(unsigned int **)(*(_QWORD *)(a1 + 136) + 88LL));
LABEL_112:
        sub_140048108();
LABEL_123:
        v5 = v17;
        _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 16LL), v17);
        goto LABEL_50;
      }
      v85 = v163;
      v86 = 12;
      v87 = v15.m128i_i8[0];
      if ( v83 > 5 )
        v86 = 4;
      v158 = v86;
      if ( v15.m128i_i64[0] < v163 )
      {
        v91 = v163 - v15.m128i_i32[0];
        if ( (__int64)(v163 - v15.m128i_i64[0]) < 0 )
        {
          v93 = v91 & 1 | ((v163 - v15.m128i_i64[0]) >> 1);
          v92 = (double)(int)v93 + (double)(int)v93;
        }
        else
        {
          v92 = (double)v91;
        }
        v161 = v78 + (unsigned int)(int)(v92 * 10000000.0 / *(float *)&v14 + 0.5);
      }
      else
      {
        v88 = v15.m128i_i32[0] - v163;
        if ( (__int64)(v15.m128i_i64[0] - v163) < 0 )
        {
          v90 = v88 & 1 | ((v15.m128i_i64[0] - v163) >> 1);
          v89 = (double)(int)v90 + (double)(int)v90;
        }
        else
        {
          v89 = (double)v88;
        }
        v161 = v78 - (unsigned int)(int)(v89 * 10000000.0 / *(float *)&v14 + 0.5);
      }
      v94 = v79 << 6;
      *(_DWORD *)(v94 + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL)) = 1;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v94 + 4) = v169;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v94 + 56) = v175;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v94 + 8) = v178;
      v95 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL);
      *(__m128i *)(v95 + v94 + 16) = v15;
      *(_OWORD *)(v95 + v94 + 32) = v165;
      *(_QWORD *)(v95 + v94 + 48) = v166;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v94 + 40) = v161;
      if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 136) + 176LL), 0) == 1 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v94 + 52) = 1;
      v96 = *(_QWORD *)(a1 + 136);
      if ( *(_DWORD *)(*(_QWORD *)(v96 + 96) + 152LL) != -1 )
      {
        v97 = *(unsigned int *)(*(_QWORD *)(v96 + 88) + 12LL);
        v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 8LL);
        if ( (unsigned int)v97 >= v83 || v98 >= v83 )
        {
LABEL_111:
          sub_140048108();
          goto LABEL_112;
        }
        v99 = *(_QWORD **)(a1 + 136);
        v100 = 0;
        v101 = v99[19];
        if ( (_DWORD)v97 + 1 != *(_DWORD *)(v99[12] + 132LL) )
          v100 = v97 + 1;
        v102 = v99[17];
        v103 = v97 << 6;
        v71 = v100 == v98;
        *(_OWORD *)(v103 + v101) = *(_OWORD *)(v102 + (v79 << 6));
        *(_OWORD *)(v103 + v101 + 16) = *(_OWORD *)(v102 + v94 + 16);
        *(_OWORD *)(v103 + v101 + 32) = *(_OWORD *)(v102 + v94 + 32);
        *(_OWORD *)(v103 + v101 + 48) = *(_OWORD *)(v102 + v94 + 48);
        v104 = v100;
        v85 = v163;
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 12LL), v104);
        if ( v71 )
        {
          v105 = *(_QWORD *)(a1 + 136);
          v106 = 0;
          if ( v98 + 1 != *(_DWORD *)(*(_QWORD *)(v105 + 96) + 132LL) )
            v106 = v98 + 1;
          _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v105 + 88) + 8LL), v106);
        }
        v87 = v15.m128i_i8[0];
      }
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 4LL), v84);
      if ( (byte_1400E8401 & 4) != 0 )
      {
        sub_14000F30C(
          v79 << 6,
          *(int *)((v79 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
          *(_QWORD *)(a1 + 136),
          v85,
          *(_DWORD *)((v79 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
          v159,
          v161,
          v87,
          v85);
        if ( (byte_1400E8401 & 4) != 0 )
        {
          v108 = *(_QWORD *)(a1 + 136);
          v154 = *(_QWORD *)((v79 << 6) + *(_QWORD *)(v108 + 136) + 40);
          sub_14000F3C4(v154, v107, v108, v158, v79, 0, v154);
        }
      }
      goto LABEL_123;
    }
    v109 = *(_DWORD *)(v9 + 4);
    LOBYTE(v110) = 0;
    v170 = 0;
    v111 = *(unsigned int **)(*v2 + 88);
    v112 = *v111;
    v113 = *v2;
    v114 = *(unsigned int *)(*(_QWORD *)(*v2 + 96) + 132LL);
    if ( v109 >= (unsigned int)v114 || v112 >= (unsigned int)v114 )
      goto LABEL_177;
    v115 = 0;
    if ( v109 + 1 != (_DWORD)v114 )
      v115 = v109 + 1;
    if ( v115 == v112 )
    {
      sub_1400B50A4((_DWORD)v111, v113, v10, v109, *v111);
LABEL_178:
      sub_140048108();
LABEL_188:
      v3 = a2;
      if ( *(_DWORD *)(a2 + 12) )
      {
        v5 = v156;
        _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 16LL), v156);
      }
      goto LABEL_51;
    }
    v116 = *(_QWORD *)(a1 + 96);
    v117 = _mm_srli_si128(v15, 8).m128i_u64[0];
    if ( (unsigned int)v114 <= 5 )
    {
      v130 = 8;
    }
    else
    {
      v118 = v109 - v112;
      if ( v112 > v109 )
        v118 += v114;
      if ( v118 >= 5 )
      {
        v119 = v109 - 1;
        if ( !v109 )
          v119 = v114 - 1;
        v120 = *(_QWORD *)(v113 + 136);
        v121 = *(_DWORD **)(a1 + 136);
        v122 = (unsigned __int64)v119 << 6;
        v123 = *(_DWORD *)(v120 + v122) != 1;
        if ( v121[44] || v172 != 1 || HIDWORD(v14) != 2 )
          v123 |= 2u;
        v124 = v123 | 4;
        if ( *(_DWORD *)(v120 + v122 + 8) == 1 )
          v124 = v123;
        v125 = v124 | 8;
        if ( (*(_DWORD *)(v120 + v122 + 52) & 0xFFFFFFFC) == 0 )
          v125 = v124;
        if ( *(float *)(v120 + v122 + 48) != *(float *)&v14 )
          v125 |= 0x10u;
        v126 = *(unsigned int *)(v120 + v122 + 56);
        v127 = v162;
        v128 = v125 | 0x20;
        if ( (unsigned int)v126 < v121[28] )
          v128 = v125;
        v129 = v121[26] * *(_DWORD *)(v120 + v122 + 56);
        v110 = v128 | 0x40;
        if ( *(_DWORD *)(v120 + v122 + 4) + v129 == v162 )
          v110 = v128;
        if ( v126 + *(_QWORD *)(v120 + v122 + 16) != v15.m128i_i64[0] || v126 + *(_QWORD *)(v122 + v120 + 24) != v117 )
          v110 |= 0x80u;
        if ( !v110 )
        {
          v115 = v109;
          v109 = v119;
        }
        v10 = v172;
        v170 = v110 == 0;
        v116 = *(_QWORD *)(a1 + 96);
        v130 = v110 != 0;
LABEL_160:
        if ( v116 < v117 )
        {
          v135 = v117 - v116;
          if ( (__int64)(v117 - v116) < 0 )
          {
            v137 = v135 & 1 | ((v117 - v116) >> 1);
            v136 = (double)(int)v137 + (double)(int)v137;
          }
          else
          {
            v136 = (double)v135;
          }
          v134 = _mm_srli_si128(v13, 8).m128i_u64[0] + (unsigned int)(int)(v136 * 10000000.0 / *(float *)&v14 + 0.5);
        }
        else
        {
          v131 = v116 - v117;
          if ( (__int64)(v116 - v117) < 0 )
          {
            v133 = v131 & 1 | ((v116 - v117) >> 1);
            v132 = (double)(int)v133 + (double)(int)v133;
          }
          else
          {
            v132 = (double)v131;
          }
          v134 = _mm_srli_si128(v13, 8).m128i_u64[0] - (unsigned int)(int)(v132 * 10000000.0 / *(float *)&v14 + 0.5);
        }
        v138 = *(_OWORD *)(a1 + 112);
        v5 = (unsigned __int64)v109 << 6;
        v139 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL);
        if ( v170 )
        {
          *(_DWORD *)(v139 + v5 + 56) += v176;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v5 + 32) += v13.m128i_i64[0];
        }
        else
        {
          *(_DWORD *)(v139 + ((unsigned __int64)v109 << 6)) = 1;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v5 + 4) = v127;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v5 + 56) = v176;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v5 + 8) = v10;
          v140 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL);
          *(__m128i *)(v140 + v5 + 16) = v15;
          *(__m128i *)(v140 + v5 + 32) = v13;
          *(_QWORD *)(v140 + v5 + 48) = v14;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v5 + 40) = v134;
        }
        if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 136) + 176LL), 0) == 1 )
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + v5 + 52) = 1;
        v141 = *(_QWORD *)(a1 + 136);
        if ( *(_DWORD *)(*(_QWORD *)(v141 + 96) + 152LL) != -1 )
        {
          v142 = *(unsigned int *)(*(_QWORD *)(v141 + 88) + 12LL);
          v143 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 8LL);
          if ( (unsigned int)v142 >= (unsigned int)v114 || v143 >= (unsigned int)v114 )
          {
LABEL_177:
            sub_140048108();
            goto LABEL_178;
          }
          v5 = *(_QWORD *)(a1 + 136);
          v144 = 0;
          v145 = *(_QWORD *)(v5 + 152);
          if ( (_DWORD)v142 + 1 != *(_DWORD *)(*(_QWORD *)(v5 + 96) + 132LL) )
            v144 = v142 + 1;
          v146 = *(_QWORD *)(v5 + 136);
          v114 = (unsigned __int64)v109 << 6;
          v147 = v142 << 6;
          v71 = v144 == v143;
          *(_OWORD *)(v147 + v145) = *(_OWORD *)(v114 + v146);
          *(_OWORD *)(v147 + v145 + 16) = *(_OWORD *)(v114 + v146 + 16);
          *(_OWORD *)(v147 + v145 + 32) = *(_OWORD *)(v114 + v146 + 32);
          *(_OWORD *)(v147 + v145 + 48) = *(_OWORD *)(v114 + v146 + 48);
          v148 = v144;
          v138 = v13.m128i_i8[0];
          _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 12LL), v148);
          if ( v71 )
          {
            v149 = *(_QWORD *)(a1 + 136);
            v5 = v143 + 1;
            v150 = 0;
            if ( (_DWORD)v5 != *(_DWORD *)(*(_QWORD *)(v149 + 96) + 132LL) )
              v150 = v143 + 1;
            _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v149 + 88) + 8LL), v150);
          }
        }
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 88LL) + 4LL), v115);
        if ( (byte_1400E8401 & 4) != 0 )
        {
          sub_14000F30C(
            (unsigned __int64)v109 << 6,
            *(int *)(((unsigned __int64)v109 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
            *(_QWORD *)(a1 + 136),
            v114,
            *(_DWORD *)(((unsigned __int64)v109 << 6) + *(_QWORD *)(*(_QWORD *)(a1 + 136) + 136LL) + 52),
            v138,
            v134,
            v15.m128i_i8[0],
            v117);
          if ( (byte_1400E8401 & 4) != 0 )
          {
            v151 = *(_QWORD *)(a1 + 136);
            v155 = *(_QWORD *)(((unsigned __int64)v109 << 6) + *(_QWORD *)(v151 + 136) + 40);
            sub_14000F3C4(v155, v5, v151, v130, v109, v110, v155);
          }
        }
        goto LABEL_188;
      }
      v130 = 2;
    }
    v127 = v162;
    goto LABEL_160;
  }
LABEL_51:
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 504LL) = 3;
  result = 4LL;
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000F5B0(
             *(unsigned int *)(v3 + 8),
             v5,
             *(_QWORD *)(a1 + 136),
             12,
             *(_DWORD *)(v3 + 8),
             0,
             *(_DWORD *)(v3 + 12));
  return result;
}

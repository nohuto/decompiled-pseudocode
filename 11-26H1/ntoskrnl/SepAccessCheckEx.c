/*
 * XREFs of SepAccessCheckEx @ 0x1403AEA10
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepSinglePrivilegeCheck @ 0x1403AB750 (SepSinglePrivilegeCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepAssemblePrivileges @ 0x140A9B378 (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        unsigned __int64 a14,
        int a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        _BYTE *a20)
{
  __int64 v20; // rbx
  unsigned int v22; // esi
  __int128 *v23; // r15
  __int64 v24; // r8
  __m128i v25; // xmm3
  unsigned int v26; // r12d
  __m128i si128; // xmm4
  unsigned int v28; // r11d
  __m128i v29; // xmm2
  __int64 v30; // rax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  __m128i v33; // xmm1
  __int64 v34; // rax
  __m128i v35; // xmm1
  __int64 v36; // rax
  __int64 v37; // rcx
  __m128i v38; // xmm1
  __int64 v39; // rax
  __m128i v40; // xmm1
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 LowPart; // r8
  __int64 v44; // rdx
  int v45; // edi
  __int64 *v46; // r9
  __int64 v47; // r10
  __int64 v48; // r8
  __int64 v49; // rdx
  int v50; // ecx
  char v51; // cl
  unsigned int v53; // ebx
  __int64 *v54; // r9
  __int64 v55; // r10
  __int64 v56; // r8
  __int64 v57; // rdx
  int v58; // ecx
  __int16 v59; // dx
  __int16 v60; // cx
  __int64 v61; // r10
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 *v68; // r9
  __int64 v69; // r10
  __int64 v70; // r8
  int v71; // ecx
  unsigned int v72; // edx
  int v73; // r13d
  __int64 *v74; // r9
  __int64 v75; // r10
  __int64 v76; // r8
  int v77; // ecx
  unsigned int v78; // edx
  int v79; // ecx
  _QWORD *v80; // rsi
  __int64 *v81; // r9
  __int64 v82; // r10
  __int64 v83; // r8
  __int64 v84; // rdx
  int v85; // eax
  int v86; // eax
  int v87; // ecx
  __int64 v88; // r13
  int IsEnabledDeviceUsageNoInline; // eax
  int v90; // edx
  int v91; // esi
  int v92; // ecx
  int v93; // esi
  __int64 *v94; // r9
  __int64 v95; // r10
  __int64 v96; // r8
  __int64 v97; // rdx
  int v98; // ecx
  int v99; // eax
  int v100; // ecx
  __int64 v101; // r13
  int v102; // r14d
  int v103; // eax
  int v104; // edx
  __int64 *v105; // r9
  __int64 v106; // r10
  __int64 v107; // r8
  int v108; // ecx
  unsigned int v109; // edx
  int v110; // eax
  int *v111; // rax
  __int64 *v112; // r15
  __int64 v113; // r9
  __int64 v114; // r8
  int v115; // ecx
  unsigned int v116; // edx
  signed __int32 v117[8]; // [rsp+0h] [rbp-100h] BYREF
  int v118; // [rsp+50h] [rbp-B0h]
  __int64 v119; // [rsp+68h] [rbp-98h]
  unsigned __int8 v120; // [rsp+70h] [rbp-90h]
  unsigned __int8 v121; // [rsp+71h] [rbp-8Fh]
  unsigned __int8 v122; // [rsp+72h] [rbp-8Eh]
  int v123; // [rsp+74h] [rbp-8Ch]
  __int64 v124; // [rsp+78h] [rbp-88h]
  int *v125; // [rsp+80h] [rbp-80h]
  unsigned int *v126; // [rsp+88h] [rbp-78h]
  __int64 v127; // [rsp+90h] [rbp-70h] BYREF
  __int64 v128; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v129; // [rsp+A0h] [rbp-60h]
  __int64 v130; // [rsp+A8h] [rbp-58h]
  __int64 v131; // [rsp+B0h] [rbp-50h]
  __int64 v132; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v133; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v134; // [rsp+C8h] [rbp-38h]
  _QWORD *v135; // [rsp+D0h] [rbp-30h]
  __int128 v136; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v137; // [rsp+E8h] [rbp-18h]
  __int128 v138; // [rsp+F8h] [rbp-8h]

  v20 = a4;
  v22 = a5;
  v23 = a6;
  v129 = a8;
  v126 = a11;
  v135 = a12;
  v125 = a13;
  v130 = a19;
  v131 = a3;
  v123 = 0;
  if ( !a4 )
    v20 = a3;
  v122 = 0;
  v24 = 0LL;
  v121 = 0;
  v120 = 0;
  v25 = _mm_unpacklo_epi64((__m128i)a14, (__m128i)a14);
  v134 = a20;
  v124 = v20;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  if ( !a7 )
  {
    v23 = &v136;
    DWORD1(v137) = -1;
    v26 = 1;
LABEL_9:
    v41 = (__int64)&v23[3 * v24 + 2] + 8;
    do
    {
      v41 += 48LL;
      v42 = (unsigned __int64)(unsigned int)v24 << 7;
      LODWORD(v24) = v24 + 1;
      *(_QWORD *)(v41 - 48) = a14 + v42;
    }
    while ( (unsigned int)v24 < v26 );
    goto LABEL_11;
  }
  v26 = a7;
  if ( a7 < 8 )
    goto LABEL_9;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v28 = 2;
  do
  {
    v29 = _mm_move_epi64(si128);
    v30 = 3 * v24;
    v31 = _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v24), 0), v29), (__m128i)0LL);
    v24 = (unsigned int)(v24 + 8);
    v32 = _mm_add_epi64(_mm_slli_epi64(v31, 7u), v25);
    *((_QWORD *)&a6[v30 + 2] + 1) = v32.m128i_i64[0];
    *((_QWORD *)&a6[3 * v28 - 1] + 1) = _mm_srli_si128(v32, 8).m128i_u64[0];
    v33 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v28), 0), v29), (__m128i)0LL),
              7u),
            v25);
    *((_QWORD *)&a6[3 * v28 + 2] + 1) = v33.m128i_i64[0];
    *((_QWORD *)&a6[3 * v28 + 5] + 1) = _mm_srli_si128(v33, 8).m128i_u64[0];
    v34 = v28 + 2;
    v35 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v34), 0), v29), (__m128i)0LL),
              7u),
            v25);
    *((_QWORD *)&a6[3 * v34 + 2] + 1) = v35.m128i_i64[0];
    *((_QWORD *)&a6[3 * v28 + 11] + 1) = _mm_srli_si128(v35, 8).m128i_u64[0];
    v36 = v28 + 4;
    v37 = 3 * v36;
    v38 = _mm_slli_epi64(
            _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v36), 0), v29), (__m128i)0LL),
            7u);
    v39 = 3LL * (v28 + 5);
    v40 = _mm_add_epi64(v38, v25);
    v28 += 8;
    *((_QWORD *)&a6[v37 + 2] + 1) = v40.m128i_i64[0];
    *((_QWORD *)&a6[v39 + 2] + 1) = _mm_srli_si128(v40, 8).m128i_u64[0];
  }
  while ( (unsigned int)v24 < (a7 & 0xFFFFFFF8) );
  if ( (unsigned int)v24 < a7 )
    goto LABEL_9;
LABEL_11:
  if ( (a5 & 0x1000000) != 0 )
  {
    LowPart = SeSecurityPrivilege.LowPart;
    v127 = 0LL;
    v128 = 0LL;
    if ( a10 )
    {
      _InterlockedExchange64(&v127, *(_QWORD *)(v20 + 72));
      _InterlockedExchange64(&v128, *(_QWORD *)(v20 + 64));
      v44 = v127 & v128;
      _InterlockedOr(v117, 0);
      if ( !_bittest64(&v44, LowPart) )
      {
        v45 = -1073741727;
        v46 = (__int64 *)v23 + 5;
        v47 = v26;
        do
        {
          v48 = *v46;
          v49 = 0LL;
          v50 = 1;
          if ( *v46 )
          {
            while ( v50 )
            {
              if ( (v50 & 0x1000000) != 0 && !*(_DWORD *)(v48 + 4 * v49) )
                *(_DWORD *)(v48 + 4 * v49) = 1048584;
              v49 = (unsigned int)(v49 + 1);
              v50 *= 2;
            }
          }
          v46 += 6;
          --v47;
        }
        while ( v47 );
LABEL_22:
        *v125 = v45;
LABEL_23:
        *v126 = 0;
LABEL_24:
        v51 = 1;
LABEL_25:
        if ( v134 )
          *v134 = 0;
        return v51;
      }
    }
    v22 = a5 & 0xFEFFFFFF;
    v53 = a9 | 0x1000000;
    v54 = (__int64 *)v23 + 5;
    v55 = v26;
    do
    {
      v56 = *v54;
      v57 = 0LL;
      v58 = 1;
      if ( *v54 )
      {
        while ( v58 )
        {
          if ( (v58 & 0x1000000) != 0 && !*(_DWORD *)(v56 + 4 * v57) )
            *(_DWORD *)(v56 + 4 * v57) = 2097160;
          v57 = (unsigned int)(v57 + 1);
          v58 *= 2;
        }
      }
      v54 += 6;
      --v55;
    }
    while ( v55 );
    v123 = 1;
    v122 = 1;
    if ( !v22 )
      goto LABEL_190;
  }
  else
  {
    v53 = a9;
  }
  v59 = *(_WORD *)(a1 + 2);
  v60 = v59 & 0x8000;
  if ( (v59 & 4) != 0 )
  {
    if ( v60 )
    {
      v62 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v62 )
        v61 = v62 + a1;
      else
        v61 = 0LL;
    }
    else
    {
      v61 = *(_QWORD *)(a1 + 32);
      v60 = 0;
    }
  }
  else
  {
    v61 = 0LL;
  }
  v128 = v61;
  if ( (v59 & 0x10) != 0 )
  {
    if ( v60 )
    {
      v63 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v63 )
      {
        v127 = 0LL;
        goto LABEL_54;
      }
      v64 = a1 + v63;
    }
    else
    {
      v64 = *(_QWORD *)(a1 + 24);
    }
    v127 = v64;
    goto LABEL_54;
  }
  v127 = 0LL;
LABEL_54:
  if ( (v59 & 4) == 0 || !v61 )
  {
    v53 |= a5;
    if ( (a5 & 0x2000000) != 0 )
    {
      v53 = v129[3] | v53 & 0xFDFFFFFF;
      v105 = (__int64 *)v23 + 5;
      v106 = v26;
      do
      {
        v107 = *v105;
        v108 = 1;
        v109 = 0;
        if ( *v105 )
        {
          while ( v108 )
          {
            if ( (v108 & v53) != 0 && !*(_DWORD *)(v107 + 4LL * v109) )
              *(_DWORD *)(v107 + 4LL * v109) = 5242880;
            ++v109;
            v108 *= 2;
          }
        }
        v105 += 6;
        --v106;
      }
      while ( v106 );
    }
    else
    {
      v112 = (__int64 *)v23 + 5;
      v113 = v26;
      do
      {
        v114 = *v112;
        v115 = 1;
        v116 = 0;
        if ( *v112 )
        {
          while ( v115 )
          {
            if ( (v115 & a5) != 0 && !*(_DWORD *)(v114 + 4LL * v116) )
              *(_DWORD *)(v114 + 4LL * v116) = 5242880;
            ++v116;
            v115 *= 2;
          }
        }
        v112 += 6;
        --v113;
      }
      while ( v113 );
    }
    v110 = *(_DWORD *)(v124 + 200);
    if ( (v110 & 0x4000) != 0 )
    {
      if ( (v110 & 0x3000000) != 0x3000000 )
      {
        v111 = v125;
        *(_BYTE *)(a18 + 21) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        *v111 = -1073741790;
        *v126 = 0;
        goto LABEL_24;
      }
      *(_BYTE *)(a18 + 23) = 1;
      *(_DWORD *)(a18 + 4) = v53;
      *(_BYTE *)(a18 + 21) = 1;
      *(_DWORD *)a18 = 0;
    }
    goto LABEL_190;
  }
  if ( (v22 & 0x80000) == 0 )
    goto LABEL_80;
  v65 = (unsigned int)SeTakeOwnershipPrivilege;
  v133 = 0LL;
  v132 = 0LL;
  if ( a10 )
  {
    v66 = v124;
    _InterlockedExchange64(&v133, *(_QWORD *)(v124 + 72));
    _InterlockedExchange64(&v132, *(_QWORD *)(v66 + 64));
    v67 = v133 & v132;
    _InterlockedOr(v117, 0);
    if ( !_bittest64(&v67, v65) )
    {
      if ( SepSinglePrivilegeCheck(SeRelabelPrivilege, v66, a10) )
      {
        v22 &= ~0x80000u;
        v53 |= 0x80000u;
        v68 = (__int64 *)v23 + 5;
        v69 = v26;
        do
        {
          v70 = *v68;
          v71 = 1;
          v72 = 0;
          if ( *v68 )
          {
            while ( v71 )
            {
              if ( (v71 & 0x80000) != 0 && !*(_DWORD *)(v70 + 4LL * v72) )
                *(_DWORD *)(v70 + 4LL * v72) = 2097184;
              ++v72;
              v71 *= 2;
            }
          }
          v68 += 6;
          --v69;
        }
        while ( v69 );
        v61 = v128;
        v73 = v123 + 1;
        v120 = 1;
        ++v123;
        if ( !v22 )
          goto LABEL_191;
LABEL_81:
        if ( !*(_WORD *)(v61 + 4) )
        {
          *(_DWORD *)(a18 + 12) = v22;
          Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
          v79 = *(_DWORD *)(v124 + 200);
          if ( (v79 & 0x4000) != 0 )
            v53 &= ~*(_DWORD *)a18;
          if ( v22 == 0x2000000 )
          {
            if ( v53 )
              goto LABEL_86;
          }
          else if ( !v22 && *(_DWORD *)a18 && v53 && (v79 & 0x6000) == 0 )
          {
            goto LABEL_86;
          }
          v45 = -1073741790;
          v81 = (__int64 *)v23 + 5;
          v82 = v26;
          do
          {
            v83 = *v81;
            v84 = 0LL;
            v85 = 1;
            if ( *v81 )
            {
              while ( v85 )
              {
                if ( (v85 & 0xFDFFFFFF) != 0 && !*(_DWORD *)(v83 + 4 * v84) )
                  *(_DWORD *)(v83 + 4 * v84) = 6291456;
                v84 = (unsigned int)(v84 + 1);
                v85 *= 2;
              }
            }
            v81 += 6;
            --v82;
          }
          while ( v82 );
          goto LABEL_22;
        }
        v119 = a18;
        if ( (a5 & 0x2000000) == 0 )
        {
          SepNormalAccessCheckEx(v22, v124, v131, v61, v127, v130, 0, v26, (__int64)v23, a7, 0, a16, a17, v119);
          *(_DWORD *)(a18 + 12) = *((_DWORD *)v23 + 6);
          if ( *((_DWORD *)v23 + 6) )
          {
            *v125 = -1073741790;
            *v126 = 0;
            goto LABEL_24;
          }
          v86 = *(_DWORD *)(v124 + 200);
          if ( (v86 & 0x10) != 0
            && ((v86 & 8) == 0 ? (v87 = v129[3] | 0x1FFFFF) : (v87 = v129[1] & ~(*v129 | v129[2]) | 0x10D0000),
                (v87 & a5) != 0) )
          {
            v88 = v124;
            SepNormalAccessCheckEx(v22 & v87, v124, v131, v128, v127, v130, 0, v26, (__int64)v23, a7, 1, a16, a17, a18);
          }
          else
          {
            v88 = v124;
          }
          *(_DWORD *)(a18 + 12) = *((_DWORD *)v23 + 6);
          if ( *((_DWORD *)v23 + 6) )
          {
LABEL_115:
            *v125 = -1073741790;
            *v126 = 0;
            goto LABEL_24;
          }
          IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
          v90 = *(_DWORD *)(v88 + 200);
          if ( IsEnabledDeviceUsageNoInline )
          {
            if ( (*(_DWORD *)(v88 + 200) & 0x6000) != 0x2000 )
            {
              v93 = a5 | v22;
              if ( (v90 & 0x4000) != 0 )
              {
                v93 = (*(_DWORD *)a18 | v93) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
                if ( v93 && !*(_DWORD *)(a18 + 12) && (v90 & 0x3000000) == 0x3000000 )
                {
                  *(_BYTE *)(a18 + 23) = 1;
                  v93 = 0;
                }
              }
              else if ( (v90 & 0x2000) == 0 )
              {
                if ( !*(_BYTE *)(a18 + 20) )
                {
LABEL_138:
                  *((_DWORD *)v23 + 6) = 0;
                  goto LABEL_139;
                }
                v93 = (*(_DWORD *)a18 | v93) & ~*(_DWORD *)(a18 + 4);
              }
              *((_DWORD *)v23 + 6) = v93;
              if ( v93 )
                goto LABEL_115;
            }
          }
          else if ( (v90 & 0x2000) == 0 )
          {
            v91 = a5 | v22;
            if ( (v90 & 0x4000) != 0 )
            {
              v92 = (*(_DWORD *)a18 | v91) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
              if ( v92 && !*(_DWORD *)(a18 + 12) && (v90 & 0x3000000) == 0x3000000 )
              {
                *(_BYTE *)(a18 + 23) = 1;
                v92 = 0;
              }
LABEL_125:
              *((_DWORD *)v23 + 6) = v92;
              if ( v92 )
                goto LABEL_115;
              goto LABEL_139;
            }
            if ( *(_BYTE *)(a18 + 20) )
            {
              v92 = (*(_DWORD *)a18 | v91) & ~*(_DWORD *)(a18 + 4);
              goto LABEL_125;
            }
            goto LABEL_138;
          }
LABEL_139:
          v53 |= a5;
          goto LABEL_190;
        }
        LOBYTE(v118) = 0;
        SepMaximumAccessCheckEx(v124, v131, v61, v127, v130, 0, v26, (__int64)v23, a7, 0, v118, a16, a17, v119);
        v94 = (__int64 *)v23 + 5;
        v95 = v26;
        do
        {
          v96 = *v94;
          v97 = 0LL;
          v98 = 1;
          if ( *v94 )
          {
            while ( v98 )
            {
              if ( !*(_DWORD *)(v96 + 4 * v97) )
                *(_DWORD *)(v96 + 4 * v97) = 0x800000;
              v97 = (unsigned int)(v97 + 1);
              v98 *= 2;
            }
          }
          v94 += 6;
          --v95;
        }
        while ( v95 );
        v99 = *(_DWORD *)(v124 + 200);
        if ( (v99 & 0x10) != 0 )
        {
          if ( (v99 & 8) != 0 )
            v100 = v129[1] & ~(*v129 | v129[2]) | 0x10D0000;
          else
            v100 = v129[3] | 0x1FFFFF;
          v101 = v124;
          LOBYTE(v118) = 1;
          SepMaximumAccessCheckEx(v124, v131, v128, v127, v130, 0, v26, (__int64)v23, a7, v100, v118, a16, a17, a18);
        }
        else
        {
          v101 = v124;
        }
        v102 = *((_DWORD *)v23 + 7);
        v103 = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
        v104 = *(_DWORD *)(v101 + 200);
        if ( v103 )
        {
          if ( (v104 & 0x4000) != 0 )
          {
LABEL_158:
            v102 &= *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
            if ( v102 != *((_DWORD *)v23 + 7) && (v104 & 0x3000000) == 0x3000000 && !v102 )
            {
              *(_BYTE *)(a18 + 23) = 1;
              v102 = *((_DWORD *)v23 + 7);
              goto LABEL_166;
            }
LABEL_165:
            v53 &= ~*(_DWORD *)a18;
            goto LABEL_166;
          }
          if ( (v104 & 0x2000) != 0 )
            goto LABEL_166;
        }
        else
        {
          if ( (v104 & 0x2000) != 0 )
          {
LABEL_166:
            if ( (~(v102 | 0x2000000) & v22) != 0 )
              goto LABEL_115;
            v53 |= v102;
LABEL_190:
            v73 = v123;
            goto LABEL_191;
          }
          if ( (v104 & 0x4000) != 0 )
            goto LABEL_158;
        }
        if ( !*(_BYTE *)(a18 + 20) )
          goto LABEL_166;
        v102 &= *(_DWORD *)(a18 + 4);
        goto LABEL_165;
      }
LABEL_80:
      v73 = v123;
      goto LABEL_81;
    }
  }
  v22 &= ~0x80000u;
  v53 |= 0x80000u;
  v74 = (__int64 *)v23 + 5;
  v75 = v26;
  do
  {
    v76 = *v74;
    v77 = 1;
    v78 = 0;
    if ( *v74 )
    {
      while ( v77 )
      {
        if ( (v77 & 0x80000) != 0 && !*(_DWORD *)(v76 + 4LL * v78) )
          *(_DWORD *)(v76 + 4LL * v78) = 2097161;
        ++v78;
        v77 *= 2;
      }
    }
    v74 += 6;
    --v75;
  }
  while ( v75 );
  v61 = v128;
  v73 = v123 + 1;
  v121 = 1;
  ++v123;
  if ( v22 )
    goto LABEL_81;
LABEL_191:
  if ( !v53 )
  {
    *v125 = -1073741790;
    goto LABEL_23;
  }
LABEL_86:
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( v73 )
    {
      v80 = v135;
      SepAssemblePrivileges(v73, v122, v121, v120, (__int64)v135);
      if ( v80 )
      {
        if ( !*v80 )
        {
          v51 = 0;
          *v125 = -1073741801;
          *v126 = 0;
          goto LABEL_25;
        }
      }
    }
  }
  *v125 = 0;
  *v126 = v53;
  if ( v134 )
    *v134 = 1;
  return 1;
}

/*
 * XREFs of SepAccessCheckEx @ 0x1402AE5D0
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1402AD130 (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepSinglePrivilegeCheck @ 0x1402AAC70 (SepSinglePrivilegeCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1402ACD9C (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1402AF210 (SepNormalAccessCheckEx.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x14048F488 (AuthzBasepSetTypeListAccessReasons.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SepAssemblePrivileges @ 0x140A971F8 (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int128 *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        _DWORD *a13,
        unsigned __int64 a14,
        int a15,
        char a16,
        char a17,
        __int64 a18,
        _QWORD *a19,
        _BYTE *a20)
{
  __int64 v20; // r10
  __int64 v21; // r13
  __int128 *v22; // r14
  unsigned int v23; // ebp
  __int64 v24; // r8
  __m128i v25; // xmm3
  unsigned int v26; // r15d
  unsigned int v27; // edi
  __m128i v28; // xmm2
  __int64 v29; // rax
  __m128i v30; // xmm1
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  __int64 v33; // rax
  __m128i v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rcx
  __m128i v37; // xmm1
  __int64 v38; // rax
  __m128i v39; // xmm1
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned int v42; // edi
  __int16 v43; // cx
  _QWORD **v44; // r8
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // r11
  unsigned int v48; // eax
  int v49; // edx
  __int64 v50; // r9
  int v51; // eax
  int v52; // edx
  int v53; // ecx
  unsigned __int8 v54; // cl
  char v56; // cl
  __int64 v57; // rax
  __int64 v58; // r10
  __int64 v59; // rdx
  int v60; // ecx
  __int64 *v61; // r9
  __int64 v62; // r10
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // eax
  int v66; // eax
  int v67; // edx
  int v68; // r8d
  int v69; // ecx
  int v70; // eax
  __int64 *v71; // r14
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // rdx
  int v75; // ecx
  int v76; // r10d
  int v77; // r8d
  __int64 v78; // r10
  __int64 v79; // rdx
  int v80; // ecx
  int v81; // eax
  int v82; // ecx
  __int64 v83; // r11
  __int64 v84; // rdx
  int v85; // ecx
  __int64 v86; // r10
  __int64 v87; // rdx
  int v88; // ecx
  __int64 v89; // r10
  __int64 v90; // rdx
  int v91; // ecx
  int v92; // ecx
  int v93; // ecx
  char v94; // [rsp+70h] [rbp-C8h]
  unsigned __int8 v95; // [rsp+71h] [rbp-C7h]
  unsigned __int8 v96; // [rsp+72h] [rbp-C6h]
  unsigned int v97; // [rsp+74h] [rbp-C4h]
  int v98; // [rsp+78h] [rbp-C0h]
  unsigned int v99; // [rsp+7Ch] [rbp-BCh]
  __int64 v100; // [rsp+90h] [rbp-A8h]
  __int128 v102; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v103; // [rsp+D8h] [rbp-60h]
  __int128 v104; // [rsp+E8h] [rbp-50h]

  v20 = a1;
  v21 = (__int64)a4;
  v22 = a6;
  if ( !a4 )
    v21 = a3;
  v23 = a5;
  v24 = 0LL;
  v25 = _mm_unpacklo_epi64((__m128i)a14, (__m128i)a14);
  v98 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v99 = a5;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  if ( !a7 )
  {
    v26 = 1;
    DWORD1(v103) = -1;
    v97 = 1;
    v22 = &v102;
LABEL_8:
    v40 = (__int64)&v22[3 * v24 + 2] + 8;
    do
    {
      v40 += 48LL;
      v41 = (unsigned __int64)(unsigned int)v24 << 7;
      LODWORD(v24) = v24 + 1;
      *(_QWORD *)(v40 - 48) = a14 + v41;
    }
    while ( (unsigned int)v24 < v26 );
    goto LABEL_10;
  }
  v97 = a7;
  v26 = a7;
  if ( a7 < 8 )
    goto LABEL_8;
  v27 = 2;
  LODWORD(a4) = a7 & 0xFFFFFFF8;
  do
  {
    v28 = _mm_loadl_epi64((const __m128i *)&_xmm);
    v29 = 3 * v24;
    v30 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v24), 0);
    v24 = (unsigned int)(v24 + 8);
    v31 = _mm_add_epi64(_mm_slli_epi64(_mm_unpacklo_epi32(_mm_add_epi32(v30, v28), (__m128i)0LL), 7u), v25);
    *((_QWORD *)&a6[v29 + 2] + 1) = v31.m128i_i64[0];
    *((_QWORD *)&a6[3 * v27 - 1] + 1) = _mm_srli_si128(v31, 8).m128i_u64[0];
    v32 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v27), 0), v28), (__m128i)0LL),
              7u),
            v25);
    *((_QWORD *)&a6[3 * v27 + 2] + 1) = v32.m128i_i64[0];
    *((_QWORD *)&a6[3 * v27 + 5] + 1) = _mm_srli_si128(v32, 8).m128i_u64[0];
    v33 = v27 + 2;
    v34 = _mm_add_epi64(
            _mm_slli_epi64(
              _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v33), 0), v28), (__m128i)0LL),
              7u),
            v25);
    *((_QWORD *)&a6[3 * v33 + 2] + 1) = v34.m128i_i64[0];
    *((_QWORD *)&a6[3 * v27 + 11] + 1) = _mm_srli_si128(v34, 8).m128i_u64[0];
    v35 = v27 + 4;
    v36 = 3 * v35;
    v37 = _mm_slli_epi64(
            _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v35), 0), v28), (__m128i)0LL),
            7u);
    v38 = 3LL * (v27 + 5);
    v39 = _mm_add_epi64(v37, v25);
    v27 += 8;
    *((_QWORD *)&a6[v36 + 2] + 1) = v39.m128i_i64[0];
    *((_QWORD *)&a6[v38 + 2] + 1) = _mm_srli_si128(v39, 8).m128i_u64[0];
  }
  while ( (unsigned int)v24 < (unsigned int)a4 );
  if ( (unsigned int)v24 < a7 )
    goto LABEL_8;
LABEL_10:
  if ( (a5 & 0x1000000) != 0 )
  {
    if ( !SepSinglePrivilegeCheck(SeSecurityPrivilege.LowPart, v21, a10) )
    {
      v71 = (__int64 *)v22 + 5;
      v72 = v26;
      do
      {
        v73 = *v71;
        v74 = 0LL;
        v75 = 1;
        if ( *v71 )
        {
          while ( v75 )
          {
            if ( (v75 & 0x1000000) != 0 && !*(_DWORD *)(v73 + 4 * v74) )
              *(_DWORD *)(v73 + 4 * v74) = 1048584;
            v74 = (unsigned int)(v74 + 1);
            v75 *= 2;
          }
        }
        v71 += 6;
        --v72;
      }
      while ( v72 );
      *a13 = -1073741727;
      *a11 = 0;
      goto LABEL_37;
    }
    v23 = a5 & 0xFEFFFFFF;
    v42 = a9 | 0x1000000;
    v99 = a5 & 0xFEFFFFFF;
    v44 = (_QWORD **)v22 + 5;
    v83 = v26;
    do
    {
      a4 = *v44;
      v84 = 0LL;
      v85 = 1;
      if ( *v44 )
      {
        while ( v85 )
        {
          if ( (v85 & 0x1000000) != 0 && !*((_DWORD *)a4 + v84) )
            *((_DWORD *)a4 + v84) = 2097160;
          v84 = (unsigned int)(v84 + 1);
          v85 *= 2;
        }
      }
      v44 += 6;
      --v83;
    }
    while ( v83 );
    v49 = 1;
    v98 = 1;
    v54 = 1;
    v94 = 1;
    if ( !v23 )
      goto LABEL_68;
  }
  else
  {
    v42 = a9;
  }
  v43 = *(_WORD *)(v20 + 2);
  LODWORD(v44) = (unsigned __int16)v43;
  LOWORD(v44) = v43 & 4;
  if ( (v43 & 4) != 0 )
  {
    if ( v43 >= 0 )
    {
      v46 = *(_QWORD *)(v20 + 32);
    }
    else
    {
      v45 = *(unsigned int *)(v20 + 16);
      if ( (_DWORD)v45 )
        v46 = v20 + v45;
      else
        v46 = 0LL;
    }
  }
  else
  {
    v46 = 0LL;
  }
  if ( (v43 & 0x10) != 0 )
  {
    if ( v43 < 0 )
    {
      v57 = *(unsigned int *)(v20 + 12);
      if ( (_DWORD)v57 )
        v47 = v20 + v57;
      else
        v47 = 0LL;
    }
    else
    {
      v47 = *(_QWORD *)(v20 + 24);
    }
  }
  else
  {
    v47 = 0LL;
  }
  v100 = v47;
  if ( (v43 & 4) == 0 || !v46 )
  {
    v42 |= a5;
    if ( (a5 & 0x2000000) != 0 )
    {
      v42 = a8[3] | v42 & 0xFDFFFFFF;
      a4 = (_QWORD *)v22 + 5;
      v78 = v97;
      do
      {
        v44 = (_QWORD **)*a4;
        v79 = 0LL;
        v80 = 1;
        if ( *a4 )
        {
          while ( v80 )
          {
            if ( (v80 & v42) != 0 && !*((_DWORD *)v44 + v79) )
              *((_DWORD *)v44 + v79) = 5242880;
            v79 = (unsigned int)(v79 + 1);
            v80 *= 2;
          }
        }
        a4 += 6;
        --v78;
      }
      while ( v78 );
      v81 = *(_DWORD *)(v21 + 200);
      if ( (v81 & 0x4000) == 0 )
        goto LABEL_67;
      if ( (v81 & 0x3000000) == 0x3000000 )
        goto LABEL_173;
      AuthzBasepSetTypeListAccessReasons(0, 5242880, 0, (_DWORD)v22, v97, 1);
    }
    else
    {
      v44 = (_QWORD **)v22 + 5;
      v58 = v97;
      do
      {
        a4 = *v44;
        v59 = 0LL;
        v60 = 1;
        if ( *v44 )
        {
          while ( v60 )
          {
            if ( (v60 & a5) != 0 && !*((_DWORD *)a4 + v59) )
              *((_DWORD *)a4 + v59) = 5242880;
            v59 = (unsigned int)(v59 + 1);
            v60 *= 2;
          }
        }
        v44 += 6;
        --v58;
      }
      while ( v58 );
      v70 = *(_DWORD *)(v21 + 200);
      if ( (v70 & 0x4000) == 0 )
        goto LABEL_67;
      if ( (v70 & 0x3000000) == 0x3000000 )
      {
LABEL_173:
        *(_DWORD *)a18 = 0;
        *(_BYTE *)(a18 + 21) = 1;
        *(_DWORD *)(a18 + 4) = v42;
        *(_BYTE *)(a18 + 23) = 1;
LABEL_67:
        v49 = v98;
        v54 = v94;
LABEL_68:
        LOBYTE(v44) = 0;
        LOBYTE(a4) = 0;
        goto LABEL_30;
      }
      AuthzBasepSetTypeListAccessReasons(0, 5242880, 0, (_DWORD)v22, v97, 0);
    }
    *(_BYTE *)(a18 + 21) = 0;
    *(_DWORD *)(a18 + 4) = 0;
    *a13 = -1073741790;
    *a11 = 0;
    goto LABEL_37;
  }
  if ( (v23 & 0x80000) == 0 )
    goto LABEL_21;
  if ( SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, v21, a10) )
  {
    v23 &= ~0x80000u;
    v42 |= 0x80000u;
    v99 = v23;
    v44 = (_QWORD **)v22 + 5;
    v89 = v97;
    do
    {
      a4 = *v44;
      v90 = 0LL;
      v91 = 1;
      if ( *v44 )
      {
        while ( v91 )
        {
          if ( (v91 & 0x80000) != 0 && !*((_DWORD *)a4 + v90) )
            *((_DWORD *)a4 + v90) = 2097161;
          v90 = (unsigned int)(v90 + 1);
          v91 *= 2;
        }
      }
      v44 += 6;
      --v89;
    }
    while ( v89 );
    v48 = v97;
    LOBYTE(v44) = 1;
    v49 = v98 + 1;
    v95 = 1;
    ++v98;
    if ( !v23 )
    {
      v54 = v94;
      LOBYTE(a4) = 0;
      goto LABEL_30;
    }
    goto LABEL_22;
  }
  if ( !SepSinglePrivilegeCheck(SeRelabelPrivilege, v21, a10) )
  {
LABEL_21:
    v48 = v97;
    LOBYTE(v44) = 0;
    v49 = v98;
LABEL_22:
    LOBYTE(a4) = 0;
    goto LABEL_23;
  }
  v23 &= ~0x80000u;
  v42 |= 0x80000u;
  v99 = v23;
  v44 = (_QWORD **)v22 + 5;
  v86 = v97;
  do
  {
    a4 = *v44;
    v87 = 0LL;
    v88 = 1;
    if ( *v44 )
    {
      while ( v88 )
      {
        if ( (v88 & 0x80000) != 0 && !*((_DWORD *)a4 + v87) )
          *((_DWORD *)a4 + v87) = 2097184;
        v87 = (unsigned int)(v87 + 1);
        v88 *= 2;
      }
    }
    v44 += 6;
    --v86;
  }
  while ( v86 );
  v48 = v97;
  LOBYTE(a4) = 1;
  v49 = v98 + 1;
  v96 = 1;
  ++v98;
  if ( !v23 )
  {
    v54 = v94;
    LOBYTE(v44) = 0;
    goto LABEL_30;
  }
  LOBYTE(v44) = 0;
LABEL_23:
  if ( *(_WORD *)(v46 + 4) )
  {
    if ( (a5 & 0x2000000) == 0 )
    {
      SepNormalAccessCheckEx(v99, v21, a3, v46, v47, (__int64)a19, 0, v48, (__int64)v22, a7, 0, a16, a17, a18);
      v50 = a18;
      *(_DWORD *)(a18 + 12) = *((_DWORD *)v22 + 6);
      if ( *((_DWORD *)v22 + 6) )
      {
        *a13 = -1073741790;
        *a11 = 0;
        goto LABEL_37;
      }
      v51 = *(_DWORD *)(v21 + 200);
      if ( (v51 & 0x10) != 0 )
      {
        v82 = (v51 & 8) != 0 ? a8[1] & ~(*a8 | a8[2]) | 0x10D0000 : a8[3] | 0x1FFFFF;
        if ( (v82 & a5) != 0 )
        {
          SepNormalAccessCheckEx(
            v99 & v82,
            v21,
            a3,
            v46,
            v100,
            (__int64)a19,
            0,
            v97,
            (__int64)v22,
            a7,
            1,
            a16,
            a17,
            a18);
          v50 = a18;
        }
      }
      v52 = *((_DWORD *)v22 + 6);
      *(_DWORD *)(v50 + 12) = v52;
      if ( *((_DWORD *)v22 + 6) )
      {
        *a13 = -1073741790;
        *a11 = 0;
        goto LABEL_37;
      }
      v53 = *(_DWORD *)(v21 + 200);
      if ( (v53 & 0x2000) != 0 )
        goto LABEL_29;
      v76 = a5 | v99;
      if ( (v53 & 0x4000) != 0 )
      {
        v77 = (*(_DWORD *)v50 | v76) & ~(*(_DWORD *)(v50 + 4) | *(_DWORD *)(v50 + 8));
        if ( v77 && !v52 && (v53 & 0x3000000) == 0x3000000 )
        {
          *(_BYTE *)(v50 + 23) = 1;
          v77 = 0;
        }
      }
      else
      {
        if ( !*(_BYTE *)(v50 + 20) )
        {
          *((_DWORD *)v22 + 6) = 0;
LABEL_29:
          v49 = v98;
          v54 = v94;
          v42 |= a5;
          LODWORD(v44) = v95;
          LODWORD(a4) = v96;
LABEL_30:
          if ( v42 )
            goto LABEL_31;
          *a13 = -1073741790;
          *a11 = 0;
LABEL_37:
          v56 = 1;
          goto LABEL_38;
        }
        v77 = (*(_DWORD *)v50 | v76) & ~*(_DWORD *)(v50 + 4);
      }
      *((_DWORD *)v22 + 6) = v77;
      if ( v77 )
      {
        *a13 = -1073741790;
        *a11 = 0;
        goto LABEL_37;
      }
      goto LABEL_29;
    }
    SepMaximumAccessCheckEx(v21, a3, v46, v47, a19, 0, v48, (__int64)v22, a7, 0, 0, a16, a17, (_DWORD *)a18);
    v61 = (__int64 *)v22 + 5;
    v62 = v97;
    do
    {
      v63 = *v61;
      v64 = 0LL;
      v65 = 1;
      if ( *v61 )
      {
        while ( v65 )
        {
          if ( !*(_DWORD *)(v63 + 4 * v64) )
            *(_DWORD *)(v63 + 4 * v64) = 0x800000;
          v64 = (unsigned int)(v64 + 1);
          v65 *= 2;
        }
      }
      v61 += 6;
      --v62;
    }
    while ( v62 );
    v66 = *(_DWORD *)(v21 + 200);
    if ( (v66 & 0x10) != 0 )
    {
      if ( (v66 & 8) != 0 )
        v93 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v93 = a8[3] | 0x1FFFFF;
      SepMaximumAccessCheckEx(v21, a3, v46, v100, a19, 0, v97, (__int64)v22, a7, v93, 1, a16, a17, (_DWORD *)a18);
    }
    v67 = *(_DWORD *)(v21 + 200);
    v68 = *((_DWORD *)v22 + 7);
    v69 = v68;
    if ( (v67 & 0x2000) != 0 )
    {
LABEL_63:
      if ( (~(v69 | 0x2000000) & v23) != 0 )
      {
        *a13 = -1073741790;
        *a11 = 0;
        goto LABEL_37;
      }
      v49 = v98;
      v42 |= v69;
      v54 = v94;
      LODWORD(v44) = v95;
      LODWORD(a4) = v96;
      goto LABEL_30;
    }
    if ( (v67 & 0x4000) != 0 )
    {
      v69 = v68 & (*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
      if ( v69 != v68 && (v67 & 0x3000000) == 0x3000000 && !v69 )
      {
        *(_BYTE *)(a18 + 23) = 1;
        v69 = *((_DWORD *)v22 + 7);
        goto LABEL_63;
      }
    }
    else
    {
      if ( !*(_BYTE *)(a18 + 20) )
        goto LABEL_63;
      v69 = *(_DWORD *)(a18 + 4) & v68;
    }
    v42 &= ~*(_DWORD *)a18;
    goto LABEL_63;
  }
  *(_DWORD *)(a18 + 12) = v23;
  v92 = *(_DWORD *)(v21 + 200);
  if ( (v92 & 0x4000) != 0 )
  {
    v42 &= ~*(_DWORD *)a18;
    v48 = v97;
  }
  if ( v23 != 0x2000000 )
  {
    if ( !v23 && *(_DWORD *)a18 && v42 && (v92 & 0x6000) == 0 )
      goto LABEL_162;
LABEL_167:
    AuthzBasepSetTypeListAccessReasons(-33554433, 6291456, 0, (_DWORD)v22, v48, 0);
    *a13 = -1073741790;
    *a11 = 0;
    goto LABEL_37;
  }
  if ( !v42 )
    goto LABEL_167;
LABEL_162:
  v54 = v94;
LABEL_31:
  if ( KeGetCurrentIrql() >= 2u
    || !v49
    || (SepAssemblePrivileges(v98, v54, (_DWORD)v44, (_DWORD)a4, (__int64)a12), !a12)
    || *a12 )
  {
    *a13 = 0;
    *a11 = v42;
    if ( a20 )
      *a20 = 1;
    return 1;
  }
  v56 = 0;
  *a13 = -1073741801;
  *a11 = 0;
LABEL_38:
  if ( a20 )
    *a20 = 0;
  return v56;
}

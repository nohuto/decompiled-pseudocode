/*
 * XREFs of sub_140C7FA90 @ 0x140C7FA90
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x140555648 (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     SdbpCheckDll @ 0x140C81440 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140C81700 (KeGuardCheckICall.c)
 */

__int64 __fastcall sub_140C7FA90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax
  int v6; // ecx
  int v7; // esi
  _QWORD *v8; // r9
  int v9; // r10d
  const char *v10; // rax
  __int64 v11; // r11
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r8
  _QWORD *v29; // rdx
  unsigned __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rax
  _BYTE *v33; // rax
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // r10d
  unsigned int v37; // edx
  int v38; // r11d
  __int64 v39; // r9
  unsigned int v40; // r8d
  int *v41; // rbx
  __int64 v42; // r10
  __int64 v43; // rax
  int v44; // eax
  _QWORD *v45; // r11
  int v46; // r14d
  int v47; // eax
  unsigned __int64 v48; // r15
  _QWORD *v49; // r9
  __int64 v50; // r8
  const char *v51; // rax
  unsigned __int64 v52; // rsi
  unsigned int v53; // r10d
  __int64 v54; // rax
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  bool v60; // zf
  unsigned __int64 i; // rax
  unsigned int v62; // esi
  BOOL v63; // r12d
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // r15
  int v69; // eax
  __int64 v70; // rsi
  __int64 v71; // r14
  __int64 v72; // r15
  __int64 v73; // r12
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v75; // r9
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // rcx
  __int64 v83; // r10
  __int64 v84; // r8
  _QWORD *v85; // rdx
  unsigned __int64 v86; // r9
  int v87; // ecx
  __int64 v88; // rax
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // r14
  unsigned __int64 v91; // r15
  _QWORD *v92; // rsi
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  __int64 v95; // r12
  unsigned __int64 v96; // r8
  _QWORD *v97; // rcx
  unsigned __int64 v98; // r9
  signed __int64 v99; // r8
  unsigned int v100; // ebx
  __int64 v101; // r10
  unsigned __int64 *v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // r9
  unsigned __int64 v105; // rax
  __int64 *v106; // r13
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rcx
  unsigned int v110; // r10d
  _QWORD *v111; // r9
  unsigned int v112; // r11d
  unsigned __int64 v113; // rbx
  char *v114; // r9
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // r8
  unsigned __int64 v118; // rax
  __int64 v119; // rdx
  __int64 *v120; // r9
  unsigned __int64 *v121; // rcx
  __int64 v122; // r11
  unsigned __int64 v123; // rax
  __int64 v124; // r10
  __int64 *v125; // r11
  __int64 v126; // rax
  unsigned __int64 v127; // rdx
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // r8
  __int64 v130; // r8
  unsigned __int64 v131; // rax
  __int64 v132; // rcx
  _QWORD *v133; // r9
  unsigned __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rdx
  char *v138; // rdx
  _QWORD *v139; // rcx
  __int64 v140; // r8
  char v141; // al
  unsigned __int64 v142; // r9
  unsigned __int64 v144; // rcx
  unsigned __int64 v145; // rax
  int v146; // ecx
  int v147; // ecx
  int v148; // ecx
  int v149; // ecx
  int v150; // ecx
  volatile signed __int32 *v151; // rax
  signed __int32 v152[8]; // [rsp+8h] [rbp-99h] BYREF
  int v153; // [rsp+48h] [rbp-59h]
  _BYTE v154[12]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int64 v155; // [rsp+60h] [rbp-41h]
  unsigned __int64 v156; // [rsp+68h] [rbp-39h]
  unsigned __int64 v157; // [rsp+70h] [rbp-31h]
  unsigned __int64 v158; // [rsp+78h] [rbp-29h]
  __int64 v159; // [rsp+80h] [rbp-21h]
  char v160; // [rsp+88h] [rbp-19h] BYREF
  _QWORD v161[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v162; // [rsp+A0h] [rbp-1h]
  __int64 v163; // [rsp+A8h] [rbp+7h]
  unsigned __int64 j; // [rsp+B0h] [rbp+Fh]
  _QWORD v165[4]; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v166; // [rsp+110h] [rbp+6Fh] BYREF

  v166 = a2;
  v2 = a2;
  if ( (*(_DWORD *)(a2 + 2520) & 0x88000) != 0x88000 )
  {
    v3 = *(_QWORD *)(a2 + 2304);
    v4 = 38LL;
    v5 = (_QWORD *)v3;
    v6 = 304;
    do
    {
      *v5 = 0LL;
      v6 -= 8;
      ++v5;
      --v4;
    }
    while ( v4 );
    for ( ; v6; --v6 )
    {
      *(_BYTE *)v5 = 0;
      v5 = (_QWORD *)((char *)v5 + 1);
    }
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v2 + 2152);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(v2 + 2168);
    *(_OWORD *)(v3 + 288) = *(_OWORD *)(v2 + 2184);
    *(_WORD *)v154 = 303;
    *(_QWORD *)&v154[2] = v3;
    *(_WORD *)(v3 + 16) = v2 + 2200;
    *(_DWORD *)(v3 + 24) = (unsigned __int64)(v2 + 2200) >> 32;
    *(_WORD *)(v3 + 22) = (unsigned int)(v2 + 2200) >> 16;
    _disable();
    if ( (*(_DWORD *)(v2 + 2520) & 0x40000000) != 0 || (*(_DWORD *)(v2 + 2524) & 0x800000) != 0 )
    {
      __writedr(7u, 0LL);
    }
    else
    {
      __sidt(v161);
      __lidt(v154);
      __writedr(7u, 0LL);
      __lidt(v161);
    }
    _enable();
  }
  *(_DWORD *)(v2 + 2120) += 1584;
  v7 = *(_DWORD *)(v2 + 196);
  v8 = (_QWORD *)v2;
  v9 = *(_DWORD *)(v2 + 2100);
  v10 = (const char *)v2;
  v11 = *(_QWORD *)(v2 + 2104);
  *(_DWORD *)(v2 + 196) = 0;
  if ( v2 < (unsigned __int64)(v2 + 1584) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < v2 + 1584 );
  }
  v12 = v11;
  v13 = 12;
  do
  {
    v14 = 8LL;
    do
    {
      v15 = *v8 ^ v12;
      v16 = v8 + 1;
      v17 = *v16 ^ __ROL8__(v15, v9);
      v8 = v16 + 1;
      v12 = __ROL8__(v17, v9);
      --v14;
    }
    while ( v14 );
    v18 = __ROL8__(v11 ^ ((unsigned __int64)v8 - v2), 17) ^ v11 ^ ((unsigned __int64)v8 - v2);
    v9 = ((unsigned __int8)(v18 ^ ((v18 * (unsigned __int128)0x7010008004002001uLL) >> 64)) ^ (unsigned __int8)v9) & 0x3F;
    if ( !v9 )
      LOBYTE(v9) = 1;
    --v13;
  }
  while ( v13 );
  v19 = 48;
  v20 = 6LL;
  v21 = 64;
  do
  {
    v12 = __ROL8__(*v8++ ^ v12, v9);
    v19 -= 8;
    --v20;
  }
  while ( v20 );
  for ( ; v19; --v19 )
  {
    v22 = *(unsigned __int8 *)v8;
    v8 = (_QWORD *)((char *)v8 + 1);
    v12 = __ROL8__(v22 ^ v12, v9);
  }
  *(_DWORD *)(v2 + 196) = v7;
  if ( *(_QWORD *)(v2 + 2664) != v12 )
  {
    v23 = *(_DWORD *)(v2 + 2052);
    v24 = *(_QWORD *)(v2 + 1416);
    *(_QWORD *)v24 = v2;
    *(_DWORD *)(v24 + 16) = v23;
    if ( !*(_DWORD *)(v2 + 2328) )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = v12 ^ *(_QWORD *)(v2 + 2664);
      if ( !*(_DWORD *)(v2 + 2328) )
      {
        v25 = *(_DWORD *)(v2 + 2520);
        *(_QWORD *)(v2 + 2336) = v2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2 + 2344) = 0LL;
        *(_QWORD *)(v2 + 2352) = 265LL;
        *(_QWORD *)(v2 + 2360) = v12;
        *(_DWORD *)(v2 + 2328) = 1;
        if ( (v25 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2524) & 0x200000) != 0 && (v25 & 1) != 0 )
        {
          v26 = *(unsigned int *)(v2 + 2676);
          v27 = *(_QWORD *)(v2 + 2104);
          v28 = *(_QWORD *)(v2 + 2680);
          v29 = (_QWORD *)(v26 + v2);
          v30 = v26 + v2 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v2 + 2052) - v26) >> 3);
          while ( v29 != (_QWORD *)v30 )
          {
            *v29 ^= v28;
            v28 = ((v27 ^ *v29++) + __ROR8__(v28, v28 & 0x3F)) ^ 0xF05;
          }
          *(_DWORD *)(v2 + 2524) &= ~0x200000u;
          if ( v28 != *(_QWORD *)(v2 + 2688) )
          {
            v31 = *(_DWORD *)(v2 + 2052);
            v32 = *(_QWORD *)(v2 + 1416);
            *(_QWORD *)v32 = v2;
            *(_DWORD *)(v32 + 16) = v31;
            if ( !*(_DWORD *)(v2 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = v28 ^ *(_QWORD *)(v2 + 2688);
            sub_140C7F03C(v2, 0LL, v28, 256LL);
          }
        }
      }
    }
  }
  *(_QWORD *)v154 = 0LL;
  v33 = &v154[8];
  v34 = 4;
  do
  {
    *v33++ = 0;
    --v34;
  }
  while ( v34 );
  v35 = 0;
  LODWORD(v155) = 0;
  if ( *(_DWORD *)(v2 + 2048) )
  {
    v36 = *(_DWORD *)&v154[8];
    v37 = *(_DWORD *)&v154[4];
    v38 = *(_DWORD *)v154;
    while ( 1 )
    {
      v39 = v2;
      v40 = 0;
      if ( *(_QWORD *)(v2 + 2752) )
        v39 = *(_QWORD *)(v2 + 2752);
      v41 = (int *)(v39 + *(unsigned int *)(v39 + 2088));
      if ( v38 && v37 <= v35 )
      {
        v40 = v37;
        v41 = (int *)(v39 + v36);
      }
      if ( v40 != v35 )
        break;
LABEL_65:
      v45 = (_QWORD *)*((_QWORD *)v41 + 1);
      v46 = *(_DWORD *)(v2 + 2100);
      v47 = (_DWORD)v41 - v39;
      v48 = *(_QWORD *)(v2 + 2104);
      v49 = v45;
      LODWORD(v156) = v40;
      v50 = (unsigned int)v41[4];
      *(_DWORD *)(v2 + 2120) += v50;
      LODWORD(v157) = v47;
      v51 = (const char *)v45;
      v153 = 1;
      if ( v45 < (_QWORD *)((char *)v45 + v50) )
      {
        do
        {
          _mm_prefetch(v51, 0);
          v51 += 64;
        }
        while ( v51 < (const char *)v45 + v50 );
      }
      v52 = v48;
      v53 = (unsigned int)v50 >> 7;
      if ( (unsigned int)v50 >> 7 )
      {
        do
        {
          v54 = 8LL;
          do
          {
            v55 = v49[1] ^ __ROL8__(*v49 ^ v52, v46);
            v49 += 2;
            v52 = __ROL8__(v55, v46);
            --v54;
          }
          while ( v54 );
          v56 = __ROL8__(v48 ^ ((char *)v49 - (char *)v45), 17) ^ v48 ^ ((char *)v49 - (char *)v45);
          v46 = ((unsigned __int8)(v56 ^ ((v56 * (unsigned __int128)0x7010008004002001uLL) >> 64)) ^ (unsigned __int8)v46) & 0x3F;
          if ( !v46 )
            LOBYTE(v46) = 1;
          --v53;
        }
        while ( v53 );
        v2 = v166;
      }
      v57 = v50 & 0x7F;
      if ( (unsigned int)v57 >= 8 )
      {
        v58 = (unsigned __int64)(unsigned int)v57 >> 3;
        do
        {
          v52 = __ROL8__(*v49++ ^ v52, v46);
          v57 = (unsigned int)(v57 - 8);
          --v58;
        }
        while ( v58 );
      }
      if ( (_DWORD)v57 )
      {
        do
        {
          v59 = *(unsigned __int8 *)v49;
          v49 = (_QWORD *)((char *)v49 + 1);
          v52 = __ROL8__(v59 ^ v52, v46);
          v60 = (_DWORD)v57 == 1;
          v57 = (unsigned int)(v57 - 1);
        }
        while ( !v60 );
      }
      for ( i = v52; ; LODWORD(v52) = i ^ v52 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v62 = v52 & 0x7FFFFFFF;
      v63 = 0;
      if ( v62 != v41[5] )
      {
        if ( !*v41 )
          v63 = v41[6] != 0;
        v64 = (unsigned int)v41[4];
        v65 = *((_QWORD *)v41 + 1);
        if ( v41[4] && (*(_DWORD *)(v2 + 2524) & 0x40) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v67 = v65 & 0xFFFFFFFFFFFFF000uLL;
          v159 = (v65 + v64 - 1) | 0xFFF;
          v158 = (v65 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v68 = CurrentIrql;
            while ( 1 )
            {
              v69 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v2 + 1128))(
                      v67,
                      0LL,
                      v57,
                      v49);
              if ( v69 != -1073741267 )
                break;
              if ( v63 )
                goto LABEL_106;
              if ( CurrentIrql > 1u )
                goto LABEL_94;
              v68 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v69 < 0 )
            {
LABEL_106:
              __writecr8(v68);
              goto LABEL_107;
            }
LABEL_94:
            v57 = 4096LL;
            v67 += 4096LL;
            v158 += 4096LL;
            if ( v158 != v159 )
              continue;
            break;
          }
          __writecr8(v68);
        }
        else
        {
LABEL_107:
          if ( !*(_DWORD *)(v2 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = v62 ^ (unsigned __int64)(unsigned int)v41[5];
          v79 = *((_QWORD *)v41 + 1);
          if ( !*(_DWORD *)(v2 + 2328) )
          {
            *(_QWORD *)(v2 + 2336) = v2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v2 + 2344) = (char *)v41 - 0x4C48B4211BBACBEBLL;
            v80 = *v41;
            *(_QWORD *)(v2 + 2360) = v79;
            v81 = *(_DWORD *)(v2 + 2520);
            *(_QWORD *)(v2 + 2352) = v80;
            *(_DWORD *)(v2 + 2328) = 1;
            if ( (v81 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2524) & 0x200000) != 0 && (v81 & 1) != 0 )
            {
              v82 = *(unsigned int *)(v2 + 2676);
              v83 = *(_QWORD *)(v2 + 2104);
              v84 = *(_QWORD *)(v2 + 2680);
              v85 = (_QWORD *)(v82 + v2);
              v86 = v82 + v2 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v2 + 2052) - v82) >> 3);
              while ( v85 != (_QWORD *)v86 )
              {
                *v85 ^= v84;
                v84 = ((v83 ^ *v85++) + __ROR8__(v84, v84 & 0x3F)) ^ 0xF05;
              }
              *(_DWORD *)(v2 + 2524) &= ~0x200000u;
              if ( v84 != *(_QWORD *)(v2 + 2688) )
              {
                v87 = *(_DWORD *)(v2 + 2052);
                v88 = *(_QWORD *)(v2 + 1416);
                *(_QWORD *)v88 = v2;
                *(_DWORD *)(v88 + 16) = v87;
                if ( !*(_DWORD *)(v2 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = v84 ^ *(_QWORD *)(v2 + 2688);
                sub_140C7F03C(v2, 0LL, v84, 256LL);
              }
            }
          }
        }
      }
      v21 = 64;
      v37 = v156;
      v35 = v155 + 1;
      v36 = v157;
      v38 = v153;
      LODWORD(v155) = v35;
      if ( v35 >= *(_DWORD *)(v2 + 2048) )
        goto LABEL_97;
    }
    v42 = v35 - v40;
    v40 = v35;
    while ( 1 )
    {
      if ( *v41 == 1 )
      {
LABEL_63:
        v43 = 4 * (v41[4] / 0xCu) + 48;
        goto LABEL_64;
      }
      if ( *v41 == 7 )
      {
        v43 = (unsigned int)(24 * (v41[6] + 2));
        goto LABEL_64;
      }
      if ( *v41 == 8 )
        break;
      switch ( *v41 )
      {
        case 10:
          v43 = (unsigned int)(16 * (v41[7] + 3));
          break;
        case 28:
          v44 = *((unsigned __int16 *)v41 + 20);
LABEL_61:
          v43 = (v44 + 55) & 0xFFFFFFF8;
          break;
        case 30:
          v43 = (((v41[9] != 0 ? v41[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v41 + 20) + 2);
          break;
        case 33:
          v43 = 20 * (unsigned int)(((v41[8] & 0xFFF) + (unsigned __int64)(unsigned int)v41[10] + 4095) >> 12) + 48;
          break;
        case 43:
          goto LABEL_63;
        default:
          v43 = 48LL;
          break;
      }
LABEL_64:
      v41 = (int *)((char *)v41 + v43);
      if ( !--v42 )
        goto LABEL_65;
    }
    v44 = *((unsigned __int16 *)v41 + 16);
    goto LABEL_61;
  }
LABEL_97:
  if ( *(_DWORD *)(v2 + 2328) )
  {
    v70 = *(_QWORD *)(v2 + 2352);
    v71 = *(_QWORD *)(v2 + 2360);
    v72 = *(_QWORD *)(v2 + 2344);
    v73 = *(_QWORD *)(v2 + 2336);
    v162 = v70;
    v163 = v71;
    v159 = v72;
    *(_QWORD *)v154 = v73;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v75 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1600));
    v76 = *(_QWORD *)(v2 + 1608);
    v156 = v75;
    v77 = *(_QWORD *)(v2 + 1928) + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v76);
    v78 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1624));
    v161[0] = v78;
    if ( (unsigned __int64)&v160 > v75 || (unsigned __int64)&v160 < v75 - *(unsigned int *)(v2 + 1532) )
    {
      if ( *((_BYTE *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1616))
        && (unsigned __int64)&v160 <= v77
        && (unsigned __int64)&v160 >= v77 - *(unsigned int *)(v2 + 1528) )
      {
        v156 = v77;
      }
      else
      {
        v156 = *(_QWORD *)(v78 + *(_QWORD *)(v2 + 1672));
      }
    }
    if ( (*(_DWORD *)(v2 + 2520) & 0x4000000) == 0 )
    {
      v155 = 0LL;
      if ( (*(_DWORD *)(v2 + 2524) & 0x400000) == 0 )
      {
        v89 = __readcr0();
        v155 = v89;
        __writecr0(v89 & 0xFFFFFFFFFFFEFFFFuLL);
      }
      v90 = v2 + 2800;
      v77 = 0LL;
      v91 = v2 + 2800 + 16LL * *(unsigned int *)(v2 + 2792);
      v92 = (_QWORD *)v91;
      for ( j = v91; (unsigned int)v77 < *(_DWORD *)(v2 + 2796); v77 = (unsigned int)(v77 + 1) )
      {
        *(_QWORD *)*v92 = v92[1];
        v93 = __readcr4();
        if ( (v93 & 0x20080) != 0 )
        {
          __writecr4(v93 ^ 0x80);
          __writecr4(v93);
        }
        else
        {
          v94 = __readcr3();
          __writecr3(v94);
        }
        v92 += 2;
      }
      if ( v90 < v91 )
      {
        do
        {
          v95 = *(unsigned int *)(v90 + 8);
          v96 = *(_QWORD *)v90;
          v153 = *(_DWORD *)(v90 + 8);
          if ( (*(_DWORD *)(v2 + 2524) & 0x400000) != 0 )
          {
            v157 = (unsigned __int64)v92;
            v100 = v95;
            v77 = ((v96 & 0xFFF) + v95 + 4095) >> 12;
            LODWORD(v166) = v95;
            if ( (_DWORD)v77 )
            {
              v158 = (unsigned int)v77;
              do
              {
                v101 = *(_QWORD *)(v2 + 1496);
                v102 = v165;
                v103 = 4LL;
                LODWORD(v104) = 4;
                v105 = v101 + ((v96 >> 9) & 0x7FFFFFFFF8LL);
                do
                {
                  *v102++ = v105;
                  v105 = v101 + ((v105 >> 9) & 0x7FFFFFFFF8LL);
                  --v103;
                }
                while ( v103 );
                do
                {
                  v60 = (_DWORD)v104 == 1;
                  v104 = (unsigned int)(v104 - 1);
                }
                while ( !v60 && (*(_DWORD *)v165[v104] & 0x80) == 0 );
                v106 = (__int64 *)v165[v104];
                v107 = *v106 | 0x62;
                *v106 = v107;
                v108 = __readcr4();
                if ( (v108 & 0x20080) != 0 )
                {
                  __writecr4(v108 ^ 0x80);
                  __writecr4(v108);
                }
                else
                {
                  v109 = __readcr3();
                  __writecr3(v109);
                }
                v110 = v100;
                v111 = (_QWORD *)v96;
                if ( 4096 - (v96 & 0xFFF) < v100 )
                  v110 = 4096 - (v96 & 0xFFF);
                v77 = v157;
                v112 = v110;
                if ( v110 >= 8 )
                {
                  v113 = (unsigned __int64)v110 >> 3;
                  do
                  {
                    v112 -= 8;
                    *v111 = *(_QWORD *)v77;
                    v77 += 8LL;
                    ++v111;
                    --v113;
                  }
                  while ( v113 );
                  v100 = v166;
                }
                if ( v112 )
                {
                  v114 = (char *)v111 - v77;
                  do
                  {
                    v114[v77] = *(_BYTE *)v77;
                    ++v77;
                    --v112;
                  }
                  while ( v112 );
                }
                v157 += v110;
                v96 += v110;
                v100 -= v110;
                *v106 = v107;
                LODWORD(v166) = v100;
                v115 = __readcr4();
                if ( (v115 & 0x20080) != 0 )
                {
                  __writecr4(v115 ^ 0x80);
                  __writecr4(v115);
                }
                else
                {
                  v116 = __readcr3();
                  __writecr3(v116);
                }
                --v158;
              }
              while ( v158 );
              v91 = j;
              LODWORD(v95) = v153;
            }
          }
          else
          {
            v77 = (unsigned int)v95;
            v97 = v92;
            if ( (unsigned int)v95 >= 8 )
            {
              v98 = (unsigned __int64)(unsigned int)v95 >> 3;
              do
              {
                v77 = (unsigned int)(v77 - 8);
                *(_QWORD *)v96 = *v97++;
                v96 += 8LL;
                --v98;
              }
              while ( v98 );
            }
            if ( (_DWORD)v77 )
            {
              v99 = v96 - (_QWORD)v97;
              do
              {
                *((_BYTE *)v97 + v99) = *(_BYTE *)v97;
                v97 = (_QWORD *)((char *)v97 + 1);
                v60 = (_DWORD)v77 == 1;
                v77 = (unsigned int)(v77 - 1);
              }
              while ( !v60 );
            }
          }
          v90 += 16LL;
          v92 = (_QWORD *)((char *)v92 + (unsigned int)v95);
        }
        while ( v90 < v91 );
        v78 = v161[0];
        LODWORD(v73) = *(_DWORD *)v154;
      }
      v117 = *(_QWORD *)(v2 + 552);
      if ( (*(_DWORD *)(v2 + 2524) & 0x400000) != 0 )
      {
        v119 = *(_QWORD *)(v2 + 1496);
        v120 = &v166;
        LOBYTE(v166) = -61;
        v121 = v165;
        v122 = 4LL;
        v123 = v119 + ((v117 >> 9) & 0x7FFFFFFFF8LL);
        LODWORD(v124) = 4;
        do
        {
          *v121++ = v123;
          v123 = v119 + ((v123 >> 9) & 0x7FFFFFFFF8LL);
          --v122;
        }
        while ( v122 );
        do
          v124 = (unsigned int)(v124 - 1);
        while ( (_DWORD)v124 && (*(_DWORD *)v165[v124] & 0x80) == 0 );
        v125 = (__int64 *)v165[v124];
        v126 = *v125 | 0x62;
        *v125 = v126;
        v127 = __readcr4();
        if ( (v127 & 0x20080) != 0 )
        {
          __writecr4(v127 ^ 0x80);
          __writecr4(v127);
        }
        else
        {
          v128 = __readcr3();
          __writecr3(v128);
        }
        v77 = (v117 & 0xFFF) != 4096;
        if ( (v117 & 0xFFF) != 0x1000 )
        {
          v129 = v117 - (_QWORD)&v166;
          do
          {
            *((_BYTE *)v120 + v129) = *(_BYTE *)v120;
            v120 = (__int64 *)((char *)v120 + 1);
            v77 = (unsigned int)(v77 - 1);
          }
          while ( (_DWORD)v77 );
        }
        *v125 = v126;
        v144 = __readcr4();
        if ( (v144 & 0x20080) != 0 )
        {
          __writecr4(v144 ^ 0x80);
          __writecr4(v144);
        }
        else
        {
          v145 = __readcr3();
          __writecr3(v145);
        }
      }
      else
      {
        v118 = v155;
        *(_BYTE *)v117 = -61;
        __writecr0(v118);
      }
      LODWORD(v72) = v159;
      LODWORD(v71) = v163;
      v70 = v162;
    }
    if ( *(_DWORD *)(v2 + 2376) && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v146 = *(_DWORD *)(v2 + 2376);
    if ( v146 )
    {
      v147 = v146 - 1;
      if ( v147 )
      {
        v148 = v147 - 1;
        if ( v148 )
        {
          v149 = v148 - 1;
          if ( v149 )
          {
            v150 = v149 - 1;
            if ( v150 )
            {
              if ( v150 == 1 )
              {
                v77 = (*(_DWORD *)(v2 + 2520) >> 9) & 0x1F;
                _interlockedbittestandset(
                  *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1624)),
                  v77);
              }
              else
              {
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2 + 1456) + 832LL), 1uLL);
              }
            }
            else
            {
              v77 = *(_QWORD *)(*(_QWORD *)(v2 + 1720)
                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1624))
                              + *(_QWORD *)(v2 + 1688));
              _interlockedbittestandset((volatile signed __int32 *)v77, (*(_DWORD *)(v2 + 2520) >> 9) & 0x1F);
            }
            goto LABEL_214;
          }
          v151 = *(volatile signed __int32 **)(v2 + 1368);
        }
        else
        {
          v151 = *(volatile signed __int32 **)(v2 + 1360);
        }
      }
      else
      {
        v151 = *(volatile signed __int32 **)(v2 + 1344);
      }
      _interlockedbittestandset64(v151, 0LL);
    }
LABEL_214:
    *(_QWORD *)(v78 + *(_QWORD *)(v2 + 1696)) = 0LL;
    *(_QWORD *)(v78 + *(_QWORD *)(v2 + 1712)) = 0LL;
    KeGuardCheckICall(*(_QWORD *)(v2 + 360), v77);
    SdbpCheckDll(265, v73, v72, v71, v70, *(_QWORD *)(v2 + 360), v156 - 8);
    JUMPOUT(0x140C80A75LL);
  }
  v130 = v2 + *(unsigned int *)(v2 + 2064);
  if ( (*(_DWORD *)(v2 + 2520) & 0x8000000) != 0 )
  {
    v131 = __rdtsc();
    v132 = __ROR8__(v131, 3);
    v130 = (__int64)KiMachineCheckControl
         + 16
         * (((unsigned __int8)(v132 ^ v131) ^ (unsigned __int8)(((v132 ^ v131) * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0xF);
  }
  v133 = *(_QWORD **)(v2 + 2640);
  if ( v133 )
  {
    v134 = __rdtsc();
    v135 = __ROR8__(v134, 3);
    v136 = (0x7010008004002001LL * (v135 ^ v134)) ^ (((v135 ^ v134) * (unsigned __int128)0x7010008004002001uLL) >> 64);
    v133[3] = v136;
    v133[4] = v130 ^ v136;
    v133[2] = v2 ^ v136;
    _InterlockedOr(v152, 0);
    v130 = *(_QWORD *)(v2 + 760);
  }
  else
  {
    v133 = (_QWORD *)v2;
  }
  *(_QWORD *)(v2 + 1992) = v130;
  *(_QWORD *)(v2 + 2000) = v133;
  *(_QWORD *)(v2 + 1976) = 0LL;
  _disable();
  _enable();
  LOBYTE(v137) = (*(__int64 (__fastcall **)(__int64))(v2 + 640))(v2 + 2080);
  (*(void (__fastcall **)(__int64, __int64))(v2 + 648))(v2 + 2080, v137);
  switch ( *(_DWORD *)(v2 + 2136) )
  {
    case 3:
      _disable();
      *(_QWORD *)(v2 + 2528) = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1624));
      _enable();
      break;
    case 4:
      v142 = *(_QWORD *)(v2 + 2600);
      if ( (*(_DWORD *)(v2 + 2524) & 1) == 0 )
        *(_QWORD *)(*(_QWORD *)(v142 + 56) ^ *(_QWORD *)(v142 + 64)) = v142 ^ *(_QWORD *)(v142 + 72) ^ *(_QWORD *)(v142 + 64);
      *(_QWORD *)(v142 + 72) = 0LL;
      *(_QWORD *)(v142 + 56) = 0LL;
      break;
    case 5:
      v138 = (char *)(v2 + 2536);
      v139 = (_QWORD *)(*(_QWORD *)(v2 + 2528) + 8LL);
      v140 = 8LL;
      do
      {
        v21 -= 8;
        *v139 = *(_QWORD *)v138;
        v138 += 8;
        ++v139;
        --v140;
      }
      while ( v140 );
      for ( ; v21; --v21 )
      {
        v141 = *v138++;
        *(_BYTE *)v139 = v141;
        v139 = (_QWORD *)((char *)v139 + 1);
      }
      break;
  }
  _InterlockedOr(v152, 0);
  return v2;
}

/*
 * XREFs of sub_140C7CE10 @ 0x140C7CE10
 * Callers:
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C7A754 @ 0x140C7A754 (sub_140C7A754.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1404D0428 (KeInitializeGate.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     sub_140C7E7A8 @ 0x140C7E7A8 (sub_140C7E7A8.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140C7CE10(
        __int64 *a1,
        unsigned int *a2,
        unsigned int a3,
        ULONG_PTR a4,
        int a5,
        int *a6,
        unsigned int *a7)
{
  _BYTE *v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // r15d
  unsigned int v12; // r13d
  unsigned int v13; // eax
  __int64 v14; // rdi
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  unsigned __int64 v19; // rdx
  int v20; // ebx
  _QWORD *v21; // rax
  int v23; // ecx
  unsigned int *v24; // rsi
  __int64 v25; // rdx
  unsigned int *v26; // r9
  const char *v27; // rax
  int v28; // r10d
  unsigned __int64 v29; // r8
  unsigned int v30; // r11d
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int128 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  bool v37; // zf
  unsigned __int64 i; // rax
  __int64 *v39; // rax
  _OWORD *v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // r14d
  unsigned int *v44; // rcx
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  ULONG_PTR v49; // r14
  _QWORD *v50; // rax
  unsigned __int64 v51; // rcx
  unsigned int v52; // r12d
  int v53; // eax
  int v54; // ecx
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned __int64 v59; // r9
  _DWORD *v60; // r15
  int v61; // ecx
  _DWORD *v62; // rax
  char *v63; // rdx
  char *v64; // r9
  __int64 v65; // r8
  char *v66; // r10
  int v67; // r14d
  char *v68; // r11
  char v69; // cl
  char v70; // al
  int v71; // r11d
  __int16 v72; // cx
  unsigned int v73; // edx
  char *v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rax
  char v77; // cl
  char v78; // al
  int v79; // r8d
  __int64 v80; // rdx
  char v81; // cl
  char v82; // al
  int v83; // r8d
  __int64 v84; // rdx
  char v85; // cl
  char v86; // al
  int v87; // eax
  unsigned int v88; // edx
  unsigned int v89; // ecx
  unsigned int *v90; // r10
  unsigned int v91; // eax
  unsigned int v92; // r8d
  unsigned int v93; // eax
  __int64 v94; // r8
  unsigned __int64 v95; // r15
  __int64 v96; // r13
  char v97; // al
  _DWORD *v98; // r11
  unsigned __int8 v99; // r12
  unsigned __int64 v100; // r14
  int v101; // eax
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  unsigned int v104; // r8d
  int v105; // eax
  char v106; // cl
  int v107; // eax
  int v108; // eax
  int v109; // r9d
  unsigned int v110; // r9d
  unsigned __int64 v111; // rdx
  __int64 v112; // rcx
  unsigned int v113; // r8d
  __int64 v114; // rax
  _BYTE *v115; // r14
  _DWORD *v116; // rax
  unsigned int v117; // r15d
  unsigned int v118; // r8d
  __int64 v119; // r8
  __int64 v120; // rax
  _DWORD *v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r10
  __int64 v124; // r8
  _QWORD *v125; // rdx
  int v126; // ecx
  __int64 v127; // rax
  int v128; // r10d
  const char *v129; // rax
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // r8
  unsigned int v132; // r11d
  __int64 v133; // rax
  __int64 v134; // r8
  unsigned __int128 v135; // rax
  unsigned int v136; // r13d
  unsigned __int64 v137; // rax
  __int64 v138; // rax
  unsigned __int64 j; // rax
  unsigned int *v140; // r12
  unsigned __int64 v141; // rax
  __int64 v142; // rcx
  unsigned int v143; // r8d
  unsigned int v144; // r9d
  char v145; // cl
  int v146; // eax
  int v147; // eax
  int v148; // r9d
  int v149; // eax
  unsigned __int64 v150; // rax
  __int64 v151; // rcx
  unsigned int v152; // r9d
  __int64 v153; // rax
  _BYTE *v154; // r14
  int v155; // edx
  unsigned __int64 v156; // rax
  __int64 v157; // rcx
  unsigned int v158; // r8d
  int v159; // eax
  char v160; // cl
  int v161; // eax
  int v162; // eax
  int v163; // r10d
  unsigned int v164; // r10d
  unsigned __int64 v165; // rax
  __int64 v166; // rcx
  unsigned int v167; // r10d
  __int64 v168; // rax
  _BYTE *v169; // rbx
  int v170; // ecx
  ULONG_PTR v171; // rdi
  __int64 v172; // rcx
  __int64 v173; // r10
  __int64 v174; // r8
  _QWORD *v175; // rdx
  unsigned __int64 v176; // r9
  int v177; // ecx
  __int64 v178; // rax
  unsigned __int64 v179; // rax
  __int64 v180; // rcx
  unsigned int v181; // r8d
  int v182; // eax
  char v183; // cl
  int v184; // eax
  int v185; // r9d
  unsigned int v186; // r9d
  unsigned __int64 v187; // rax
  __int64 v188; // rcx
  unsigned int v189; // r8d
  __int64 v190; // rax
  _BYTE *v191; // rbx
  int v192; // eax
  unsigned int v193; // [rsp+38h] [rbp-D0h]
  int v194; // [rsp+3Ch] [rbp-CCh]
  unsigned int v195; // [rsp+40h] [rbp-C8h]
  unsigned int v196; // [rsp+44h] [rbp-C4h]
  int v197; // [rsp+48h] [rbp-C0h]
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v199; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v200; // [rsp+50h] [rbp-B8h]
  _DWORD *v201; // [rsp+58h] [rbp-B0h]
  unsigned int *v202; // [rsp+60h] [rbp-A8h]
  _DWORD *v203; // [rsp+68h] [rbp-A0h]
  __int64 v204; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v205[24]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v206; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v207[88]; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD *v208; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v209; // [rsp+100h] [rbp-8h]
  int v210; // [rsp+108h] [rbp+0h]
  unsigned int v211; // [rsp+10Ch] [rbp+4h]
  __int64 v212; // [rsp+110h] [rbp+8h]
  __int64 v213; // [rsp+118h] [rbp+10h]
  __int64 v214; // [rsp+120h] [rbp+18h]
  _DWORD *v215; // [rsp+128h] [rbp+20h]
  unsigned int *v216; // [rsp+130h] [rbp+28h]
  __int64 (__fastcall **v217)(__int64, ULONG_PTR, __int64, unsigned __int64); // [rsp+138h] [rbp+30h]
  int v219; // [rsp+188h] [rbp+80h]
  unsigned int v220; // [rsp+188h] [rbp+80h]
  int v221; // [rsp+188h] [rbp+80h]
  int v222; // [rsp+188h] [rbp+80h]

  v7 = (_BYTE *)*a1;
  v8 = a3;
  v212 = (*(__int64 (__fastcall **)(ULONG_PTR))(*a1 + 520))(a4);
  if ( !v212 )
    return 3221225595LL;
  v9 = *((unsigned int *)v7 + 513);
  v10 = *((unsigned int *)v7 + 593);
  v202 = 0LL;
  v193 = 0;
  v203 = 0LL;
  v209 = v8 / 0xC;
  v11 = 4 * (v8 / 0xC);
  v12 = (a5 & 0x10) != 0 ? 43 : 1;
  v13 = v11 + v9 + 48;
  if ( v13 <= *((_DWORD *)v7 + 665) )
  {
    v14 = (__int64)v7;
    *((_DWORD *)v7 + 513) = v13;
  }
  else
  {
    v14 = sub_140C7E7A8(v7, v13, v10);
    if ( !v14 )
      return 3221225626LL;
    v15 = *((_DWORD *)v7 + 630);
    if ( (v15 & 2) == 0 )
    {
      v16 = *((_DWORD *)v7 + 513);
      v17 = *((_QWORD *)v7 + 253);
      v18 = (v15 & 0x10000000) != 0 ? *((_DWORD *)v7 + 593) : 0;
      if ( v16 >= 8 )
      {
        v19 = (unsigned __int64)v16 >> 3;
        do
        {
          *(_QWORD *)v7 = 0LL;
          v16 -= 8;
          v7 += 8;
          --v19;
        }
        while ( v19 );
      }
      for ( ; v16; --v16 )
        *v7++ = 0;
      v20 = *(_DWORD *)(v14 + 2372);
      *(_DWORD *)(v14 + 2372) = v18;
      if ( v18 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v14 + 880))(v17);
      }
      else if ( (*(_DWORD *)(v14 + 2520) & 0x8000000) != 0 || !v18 )
      {
        (*(void (__fastcall **)(__int64))(v14 + 264))(v17);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v14 + 568))(v17 - 8, *(_QWORD *)(v17 - 8));
      }
      *(_DWORD *)(v14 + 2372) = v20;
    }
    *(_DWORD *)(v14 + 2520) &= ~2u;
  }
  ++*(_DWORD *)(v14 + 2092);
  v21 = (_QWORD *)(v14 + v9);
  if ( !v14 )
    return 3221225626LL;
  v23 = 48;
  v24 = (unsigned int *)(v14 + v9);
  v25 = 6LL;
  do
  {
    *v21 = 0LL;
    v23 -= 8;
    ++v21;
    --v25;
  }
  while ( v25 );
  for ( ; v23; --v23 )
  {
    *(_BYTE *)v21 = 0;
    v21 = (_QWORD *)((char *)v21 + 1);
  }
  *v24 = v12;
  v26 = a2;
  *((_QWORD *)v24 + 1) = a2;
  v27 = (const char *)a2;
  v24[4] = v8;
  *(_DWORD *)(v14 + 2120) += v8;
  v28 = *(_DWORD *)(v14 + 2100);
  if ( v27 < &v27[v8] )
  {
    do
    {
      _mm_prefetch(v27, 0);
      v27 += 64;
    }
    while ( v27 < (const char *)a2 + v8 );
  }
  v29 = *(_QWORD *)(v14 + 2104);
  v30 = (unsigned int)v8 >> 7;
  if ( (unsigned int)v8 >> 7 )
  {
    do
    {
      v31 = 8LL;
      do
      {
        v32 = *((_QWORD *)v26 + 1) ^ __ROL8__(*(_QWORD *)v26 ^ v29, v28);
        v26 += 4;
        v29 = __ROL8__(v32, v28);
        --v31;
      }
      while ( v31 );
      v33 = (__ROL8__(*(_QWORD *)(v14 + 2104) ^ ((char *)v26 - (char *)a2), 17) ^ *(_QWORD *)(v14 + 2104) ^ (unsigned __int64)((char *)v26 - (char *)a2))
          * (unsigned __int128)0x7010008004002001uLL;
      v28 = (BYTE8(v33) ^ (unsigned __int8)(v33 ^ v28)) & 0x3F;
      if ( !v28 )
        LOBYTE(v28) = 1;
      --v30;
    }
    while ( v30 );
    v12 = (a5 & 0x10) != 0 ? 43 : 1;
  }
  v34 = v8 & 0x7F;
  if ( (unsigned int)v34 >= 8 )
  {
    v35 = (v8 & 0x7F) >> 3;
    do
    {
      v29 = __ROL8__(*(_QWORD *)v26 ^ v29, v28);
      v26 += 2;
      v34 = (unsigned int)(v34 - 8);
      --v35;
    }
    while ( v35 );
  }
  if ( (_DWORD)v34 )
  {
    do
    {
      v36 = *(unsigned __int8 *)v26;
      v26 = (unsigned int *)((char *)v26 + 1);
      v29 = __ROL8__(v36 ^ v29, v28);
      v37 = (_DWORD)v34 == 1;
      v34 = (unsigned int)(v34 - 1);
    }
    while ( !v37 );
  }
  for ( i = v29; ; v29 = (unsigned int)i ^ (unsigned int)v29 )
  {
    i >>= 31;
    if ( !i )
      break;
  }
  v39 = a1;
  v40 = v24 + 6;
  LODWORD(v29) = v29 & 0x7FFFFFFF;
  v219 = -1073741275;
  v24[5] = v29;
  *(_DWORD *)(v14 + 2120) += v8;
  *v39 = v14;
  v41 = *(_QWORD *)(v14 + 1336);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int *))(v14 + 352))(v41, v34, v29, v26);
  v42 = v14;
  v43 = 24;
  v44 = **(unsigned int ***)(v14 + 1568);
  v45 = (unsigned __int64)(v44 + 4);
  while ( *(_QWORD *)(v45 + 8) != a4 )
  {
    v45 += 24LL;
    if ( v45 >= (unsigned __int64)&v44[6 * *v44 + 4] )
      goto LABEL_47;
  }
  *v40 = *(_OWORD *)v45;
  v219 = 0;
  *((_QWORD *)v24 + 5) = *(_QWORD *)(v45 + 16);
LABEL_47:
  (*(void (__fastcall **)(_QWORD))(v14 + 416))(*(_QWORD *)(v14 + 1336));
  __writecr8(CurrentIrql);
  if ( v219 >= 0 )
  {
    v49 = a4;
  }
  else
  {
    v46 = v24 + 6;
    v47 = 3LL;
    do
    {
      *v46 = 0LL;
      v43 -= 8;
      ++v46;
      --v47;
    }
    while ( v47 );
    for ( ; v43; --v43 )
    {
      *(_BYTE *)v46 = 0;
      v46 = (_QWORD *)((char *)v46 + 1);
    }
    v48 = v212;
    v49 = a4;
    *((_QWORD *)v24 + 4) = a4;
    v24[10] = *(_DWORD *)(v48 + 80);
    *(_QWORD *)v40 = 1LL;
  }
  v50 = v24 + 12;
  v201 = v24 + 12;
  if ( v11 >= 8 )
  {
    v51 = (unsigned __int64)v11 >> 3;
    do
    {
      *v50 = -1LL;
      v11 -= 8;
      ++v50;
      --v51;
    }
    while ( v51 );
  }
  for ( ; v11; --v11 )
  {
    *(_BYTE *)v50 = -1;
    v50 = (_QWORD *)((char *)v50 + 1);
  }
  v52 = 0;
  v195 = -1;
  v196 = 0;
  v199 = 0LL;
  v208 = (_DWORD *)(v14 + 2524);
  v37 = (*(_DWORD *)(v14 + 2524) & 0x40) == 0;
  v53 = -9;
  v216 = &a2[3 * (unsigned int)v209];
  if ( !v37 )
    v53 = a5;
  v210 = v53;
  if ( a2 == &a2[3 * (unsigned int)v209] )
  {
    *a6 = 0;
    *a7 = 0;
    return 0LL;
  }
  v37 = (*(_DWORD *)(v14 + 2520) & 0x100000) == 0;
  v215 = (_DWORD *)(v14 + 2520);
  if ( v37 )
  {
    v220 = 1024;
    v204 = v14;
    v206 = 0LL;
    KeInitializeGate((__int64)v205, 0);
  }
  else
  {
    v54 = 120;
    v220 = 0;
    v55 = &v204;
    v56 = 15LL;
    do
    {
      *v55 = 0LL;
      v54 -= 8;
      ++v55;
      --v56;
    }
    while ( v56 );
    for ( ; v54; --v54 )
    {
      *(_BYTE *)v55 = 0;
      v55 = (__int64 *)((char *)v55 + 1);
    }
  }
  v57 = *a2;
  v217 = (__int64 (__fastcall **)(__int64, ULONG_PTR, __int64, unsigned __int64))(v14 + 544);
  v58 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(v14 + 544))(v212, v49, v57);
  v213 = v58;
  v59 = 1920421956LL;
  v209 = v12;
  if ( !v58 )
  {
LABEL_304:
    v170 = *(_DWORD *)(v14 + 2520);
    if ( (v170 & 0x100000) == 0 )
      KeBugCheckEx(__ROR4__(-402653175, 123), 0xAuLL, a4, 8uLL, 0LL);
    if ( *(_DWORD *)(v14 + 2328) )
    {
      v171 = a4;
    }
    else
    {
      *(_QWORD *)(v14 + 2344) = 0LL;
      *(_QWORD *)(v14 + 2336) = v14 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v14 + 2352) = 271LL;
      v171 = a4;
      *(_QWORD *)(v42 + 2360) = a4;
      *(_DWORD *)(v42 + 2328) = 1;
      if ( (v170 & 0x20000000) == 0 && (*(_DWORD *)(v42 + 2524) & 0x200000) != 0 && (v170 & 1) != 0 )
      {
        v172 = *(unsigned int *)(v42 + 2676);
        v173 = *(_QWORD *)(v42 + 2104);
        v174 = *(_QWORD *)(v42 + 2680);
        v175 = (_QWORD *)(v172 + v42);
        v176 = v172 + v42 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v42 + 2052) - v172) >> 3);
        while ( v175 != (_QWORD *)v176 )
        {
          *v175 ^= v174;
          v174 = ((v173 ^ *v175++) + __ROR8__(v174, v174 & 0x3F)) ^ 0xF05;
        }
        *(_DWORD *)(v42 + 2524) &= ~0x200000u;
        if ( v174 != *(_QWORD *)(v42 + 2688) )
        {
          v177 = *(_DWORD *)(v42 + 2052);
          v178 = *(_QWORD *)(v42 + 1416);
          *(_QWORD *)v178 = v42;
          *(_DWORD *)(v178 + 16) = v177;
          if ( !*(_DWORD *)(v42 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v42 + 1416) + 24LL) = v174 ^ *(_QWORD *)(v42 + 2688);
          sub_140C7F03C(v42, 0LL, v174, 256LL);
        }
      }
    }
    if ( !v220 )
      return 3221225595LL;
    if ( !v193 )
      goto LABEL_353;
    v179 = __rdtsc();
    v180 = __ROR8__(v179, 3);
    v181 = ((0x7010008004002001LL * (v180 ^ v179)) ^ (((v180 ^ v179) * (unsigned __int128)0x7010008004002001uLL) >> 64))
         % 0xB;
    if ( v181 > 5 )
    {
      if ( v181 != 6 )
      {
        if ( v181 == 7 )
        {
          v182 = 1666411585;
          goto LABEL_330;
        }
        if ( v181 != 8 )
        {
          if ( v181 != 9 )
          {
            v187 = __rdtsc();
            v188 = __ROR8__(v187, 3);
            v189 = (((v188 ^ v187) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v188 ^ v187));
            v186 = ((((((v189 % 0x1A + 97) << 8) | ((v189 >> 5) % 0x1A + 65)) << 8) | ((v189 >> 10) % 0x1A + 97)) << 8) | ((v189 >> 15) % 0x1A + 65);
            goto LABEL_344;
          }
          v183 = 33;
          v222 = __ROL4__(1480806214, 33) ^ 9;
          goto LABEL_342;
        }
        v184 = 1113876033;
        goto LABEL_328;
      }
      v183 = 24;
      v222 = __ROL4__(1464235086, 24) ^ 6;
    }
    else
    {
      if ( v181 == 5 )
      {
        v184 = 1766089295;
        goto LABEL_328;
      }
      if ( v181 )
      {
        if ( v181 == 1 )
        {
          v182 = 1700422467;
          goto LABEL_330;
        }
        if ( v181 != 2 )
        {
          if ( v181 != 3 )
          {
            v182 = 1886800198;
LABEL_330:
            v186 = __ROL4__(__ROR4__(v182, v181), v181);
            goto LABEL_344;
          }
          v183 = 15;
          v222 = __ROL4__(1920421956, 15) ^ 3;
          goto LABEL_342;
        }
        v184 = 1634559043;
LABEL_328:
        v183 = v181;
        v185 = __ROL4__(v184, v181);
LABEL_343:
        v186 = __ROR4__(v185, v183);
LABEL_344:
        v190 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v42 + 256))(64LL, 80LL, v186);
        v191 = v207;
        if ( v190 )
          v191 = (_BYTE *)v190;
        *(_QWORD *)v191 = &v204;
        *((_QWORD *)v191 + 2) = v202;
        *((_QWORD *)v191 + 3) = v203;
        *((_QWORD *)v191 + 8) = sub_140C88510;
        *((_QWORD *)v191 + 1) = v171;
        *((_DWORD *)v191 + 8) = v193;
        *((_DWORD *)v191 + 10) = 0;
        *((_QWORD *)v191 + 9) = v191;
        *((_QWORD *)v191 + 6) = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
          KeWaitForGate((__int64)v205, 0LL);
        HIDWORD(v206) = 1;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v191 + 48), CriticalWorkQueue);
        if ( v191 == v207 )
        {
          if ( !HIDWORD(v206) )
            return 3221225595LL;
          do
            KeWaitForGate((__int64)v205, 0LL);
          while ( (_DWORD)v206 );
          v206 = 0LL;
          v192 = 0;
LABEL_355:
          while ( v192 )
          {
            KeWaitForGate((__int64)v205, 0LL);
            v192 = v206;
          }
          return 3221225595LL;
        }
LABEL_353:
        v192 = HIDWORD(v206);
        goto LABEL_355;
      }
      v183 = 6;
      v222 = __ROL4__(1665295171, 6);
    }
LABEL_342:
    v185 = v181 ^ v222;
    goto LABEL_343;
  }
  v60 = (_DWORD *)v58;
LABEL_72:
  if ( (v60[9] & 0x2000000) != 0 )
    goto LABEL_85;
  v61 = *v60;
  v62 = v60 + 1;
  if ( *v60 == 1414090313 )
  {
    if ( *v62 == 1195525195 )
      goto LABEL_85;
    goto LABEL_75;
  }
  if ( v61 != 1162297680 )
  {
LABEL_75:
    if ( v61 != 1095914053 || *(_WORD *)v62 != 16724 )
      goto LABEL_77;
LABEL_85:
    v71 = 1;
    goto LABEL_103;
  }
  v72 = *(_WORD *)v62;
  if ( *(_WORD *)v62 == 30839 || v72 == 29303 || v72 == 30583 )
    goto LABEL_85;
LABEL_77:
  v63 = *(char **)(v14 + 2384);
  v64 = *(char **)(v14 + 2392);
  v65 = (char *)v60 - v63;
  v66 = *(char **)(v14 + 2400);
  v67 = 7;
  v68 = *(char **)(v14 + 2408);
  while ( 1 )
  {
    v69 = v63[v65];
    v70 = *v63++;
    if ( v69 != v70 )
      break;
    if ( !--v67 )
    {
LABEL_80:
      v71 = 1;
      goto LABEL_102;
    }
  }
  v73 = 8;
  v74 = (char *)v60;
  while ( 1 )
  {
    v75 = *(_QWORD *)v74;
    v74 += 8;
    v76 = *(_QWORD *)v64;
    v64 += 8;
    if ( v75 != v76 )
      break;
    v73 -= 8;
    if ( v73 < 8 )
    {
      if ( !v73 )
        goto LABEL_80;
      while ( 1 )
      {
        v77 = *v74++;
        v78 = *v64++;
        if ( v77 != v78 )
          goto LABEL_93;
        if ( !--v73 )
          goto LABEL_80;
      }
    }
  }
LABEL_93:
  v79 = 4;
  v80 = (char *)v60 - v66;
  while ( 1 )
  {
    v81 = v66[v80];
    v82 = *v66++;
    if ( v81 != v82 )
      break;
    if ( !--v79 )
      goto LABEL_80;
  }
  v83 = 6;
  v84 = (char *)v60 - v68;
  while ( 1 )
  {
    v85 = v68[v84];
    v86 = *v68++;
    if ( v85 != v86 )
      break;
    if ( !--v83 )
      goto LABEL_80;
  }
  v71 = 0;
LABEL_102:
  v59 = 1920421956LL;
LABEL_103:
  v87 = v60[9];
  if ( v87 < 0 )
    v71 = 1;
  v197 = v71;
  if ( v209 == 43 && (v87 & 0x20000000) == 0 )
  {
    v71 = 1;
    v197 = 1;
LABEL_109:
    if ( *v60 == 1414090313 && v60[1] == 1195525195 )
    {
      if ( (*v208 & 0x2000) != 0 )
        v71 = 0;
      v197 = v71;
    }
    goto LABEL_114;
  }
  if ( v71 )
    goto LABEL_109;
LABEL_114:
  v88 = v60[4];
  v89 = v60[3];
  v90 = a2;
  if ( v88 <= v60[2] )
    v88 = v60[2];
  v211 = v89 + v88;
  while ( 1 )
  {
    v91 = v90[2];
    if ( (v91 & 1) == 0 )
    {
      v92 = v90[2];
      if ( v91 >= v195 )
        v92 = v195;
      v195 = v92;
      if ( v91 > v196 )
      {
        v196 = v90[2];
        v195 = v92;
      }
    }
    v93 = *v90;
    v94 = 0LL;
    v95 = a4 + *v90;
    v96 = v90[1] - *v90;
    v194 = v90[1] - *v90;
    if ( v209 != 43 )
    {
      if ( v71 )
        goto LABEL_143;
      goto LABEL_133;
    }
    if ( v71
      || v89 - v93 < 6
      || v93 - v52 < 6
      || (v97 = *(_BYTE *)(v95 - 1), *(_BYTE *)(v95 - 6) != 76)
      || *(_BYTE *)(v95 - 5) != 0x87
      || *(_BYTE *)(v95 - 4)
      || *(_BYTE *)(v95 - 3) != 0x98
      || *(_BYTE *)(v95 - 2) != 0xC3
      || v97 != -112 && v97 != -15 )
    {
LABEL_143:
      if ( !v193 )
        goto LABEL_179;
      v102 = __rdtsc();
      v103 = __ROR8__(v102, 3);
      v104 = ((0x7010008004002001LL * (v103 ^ v102)) ^ (((v103 ^ v102) * (unsigned __int128)0x7010008004002001uLL) >> 64))
           % 0xB;
      if ( v104 > 5 )
      {
        if ( v104 == 6 )
        {
          v106 = 24;
          v107 = 1464235086;
          goto LABEL_167;
        }
        if ( v104 != 7 )
        {
          if ( v104 != 8 )
          {
            if ( v104 == 9 )
            {
              v106 = 33;
              v107 = 1480806214;
              goto LABEL_167;
            }
            v111 = __rdtsc();
            v112 = __ROR8__(v111, 3);
            v113 = (((v112 ^ v111) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v112 ^ v111));
            v110 = ((((((v113 % 0x1A + 97) << 8) | ((v113 >> 5) % 0x1A + 65)) << 8) | ((v113 >> 10) % 0x1A + 97)) << 8) | ((v113 >> 15) % 0x1A + 65);
            goto LABEL_169;
          }
          v108 = 1113876033;
          goto LABEL_153;
        }
        v105 = 1666411585;
      }
      else
      {
        if ( v104 == 5 )
        {
          v108 = 1766089295;
          goto LABEL_153;
        }
        if ( !v104 )
        {
          v106 = 6;
          v107 = 1665295171;
          goto LABEL_167;
        }
        if ( v104 != 1 )
        {
          if ( v104 != 2 )
          {
            if ( v104 != 3 )
            {
              v105 = 1886800198;
              goto LABEL_155;
            }
            v106 = 15;
            v107 = 1920421956;
LABEL_167:
            v109 = __ROL4__(v107, v106);
LABEL_168:
            v110 = __ROR4__(v109, v106);
LABEL_169:
            v114 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v14 + 256))(64LL, 80LL, v110);
            v115 = v207;
            if ( v114 )
              v115 = (_BYTE *)v114;
            *(_QWORD *)v115 = &v204;
            *((_QWORD *)v115 + 1) = a4;
            *((_QWORD *)v115 + 2) = v202;
            *((_QWORD *)v115 + 3) = v203;
            *((_DWORD *)v115 + 8) = v193;
            *((_QWORD *)v115 + 8) = sub_140C88510;
            *((_DWORD *)v115 + 10) = 0;
            *((_QWORD *)v115 + 9) = v115;
            *((_QWORD *)v115 + 6) = 0LL;
            if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
              KeWaitForGate((__int64)v205, 0LL);
            HIDWORD(v206) = 1;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v115 + 48), CriticalWorkQueue);
            if ( v115 == v207 && HIDWORD(v206) )
            {
              do
                KeWaitForGate((__int64)v205, 0LL);
              while ( (_DWORD)v206 );
              v206 = 0LL;
            }
            v90 = a2;
            v193 = 0;
LABEL_179:
            v116 = v201;
            v117 = v193;
            v118 = v220;
            *v201 = 0x80000000;
            goto LABEL_180;
          }
          v108 = 1634559043;
LABEL_153:
          v106 = v104;
          v109 = __ROL4__(v108, v104);
          goto LABEL_168;
        }
        v105 = 1700422467;
      }
LABEL_155:
      v110 = __ROL4__(__ROR4__(v105, v104), v104);
      goto LABEL_169;
    }
LABEL_133:
    if ( (v210 & 8) == 0 )
      goto LABEL_204;
    v59 = 4095LL;
    if ( (((v95 & 0xFFF) + v96 + 4095) & 0xFFFFFFFFFFFFF000uLL) == 0x1000 && (v95 & 0xFFFFFFFFFFFFF000uLL) == v199 )
      goto LABEL_204;
    v98 = v208;
    if ( !(_DWORD)v96 || (*v208 & 0x40) == 0 )
      goto LABEL_189;
    v99 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v100 = v95 & 0xFFFFFFFFFFFFF000uLL;
    v214 = ((unsigned int)v96 + v95 - 1) | 0xFFF;
    v200 = (v95 & 0xFFFFFFFFFFFFF000uLL) - 1;
    while ( 1 )
    {
      v101 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(v14 + 1128))(v100, 1LL, v94);
      if ( v101 != -1073741267 )
        break;
      if ( v99 > 1u )
      {
LABEL_186:
        v100 += 4096LL;
        v200 += 4096LL;
        if ( v200 == v214 )
        {
          __writecr8(v99);
          goto LABEL_203;
        }
      }
      else
      {
        __writecr8(v99);
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
    }
    v94 = 0LL;
    if ( v101 >= 0 )
      goto LABEL_186;
    __writecr8(v99);
    v98 = v208;
LABEL_189:
    if ( !*(_DWORD *)(v14 + 2328) )
    {
      *(_QWORD *)(v14 + 2336) = v14 - 0x5C5FC0A76E374B18LL;
      if ( v24 )
      {
        *(_QWORD *)(v14 + 2344) = (char *)v24 - 0x4C48B4211BBACBEBLL;
        v120 = (int)*v24;
      }
      else
      {
        *(_QWORD *)(v14 + 2344) = 0LL;
        v120 = 0LL;
      }
      *(_QWORD *)(v14 + 2352) = v120;
      v121 = v215;
      *(_QWORD *)(v14 + 2360) = v95;
      *(_DWORD *)(v14 + 2328) = 1;
      if ( (*v121 & 0x20000000) == 0 && (*v98 & 0x200000) != 0 && (*v121 & 1) != 0 )
      {
        v122 = *(unsigned int *)(v14 + 2676);
        v123 = *(_QWORD *)(v14 + 2104);
        v124 = *(_QWORD *)(v14 + 2680);
        v125 = (_QWORD *)(v122 + v14);
        v59 = v122 + v14 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v14 + 2052) - v122) >> 3);
        while ( v125 != (_QWORD *)v59 )
        {
          *v125 ^= v124;
          v124 = ((v123 ^ *v125++) + __ROR8__(v124, v124 & 0x3F)) ^ 0xF05;
        }
        *v98 &= ~0x200000u;
        if ( v124 != *(_QWORD *)(v14 + 2688) )
        {
          v126 = *(_DWORD *)(v14 + 2052);
          v127 = *(_QWORD *)(v14 + 1416);
          *(_QWORD *)v127 = v14;
          *(_DWORD *)(v127 + 16) = v126;
          if ( !*(_DWORD *)(v14 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v14 + 1416) + 24LL) = v124 ^ *(_QWORD *)(v14 + 2688);
          sub_140C7F03C(v14, 0LL, v124, 256LL);
        }
      }
    }
LABEL_203:
    v90 = a2;
    v199 = (v95 + (unsigned int)v96) & 0xFFFFFFFFFFFFF000uLL;
LABEL_204:
    v118 = v220;
    if ( !v220 )
    {
      *(_DWORD *)(v14 + 2120) += v96;
      v59 = v95;
      v128 = *(_DWORD *)(v14 + 2100);
      v129 = (const char *)v95;
      v130 = v95 + (unsigned int)v96;
      if ( v95 < v130 )
      {
        do
        {
          _mm_prefetch(v129, 0);
          v129 += 64;
        }
        while ( (unsigned __int64)v129 < v130 );
      }
      v131 = *(_QWORD *)(v14 + 2104);
      v132 = (unsigned int)v96 >> 7;
      if ( (unsigned int)v96 >> 7 )
      {
        do
        {
          v133 = 8LL;
          do
          {
            v134 = *(_QWORD *)(v59 + 8) ^ __ROL8__(*(_QWORD *)v59 ^ v131, v128);
            v59 += 16LL;
            v131 = __ROL8__(v134, v128);
            --v133;
          }
          while ( v133 );
          v135 = (__ROL8__(*(_QWORD *)(v14 + 2104) ^ (v59 - v95), 17) ^ *(_QWORD *)(v14 + 2104) ^ (v59 - v95))
               * (unsigned __int128)0x7010008004002001uLL;
          v128 = (BYTE8(v135) ^ (unsigned __int8)(v135 ^ v128)) & 0x3F;
          if ( !v128 )
            LOBYTE(v128) = 1;
          --v132;
        }
        while ( v132 );
        LOBYTE(v96) = v194;
      }
      v136 = v96 & 0x7F;
      if ( v136 >= 8 )
      {
        v137 = (unsigned __int64)v136 >> 3;
        do
        {
          v131 = __ROL8__(*(_QWORD *)v59 ^ v131, v128);
          v59 += 8LL;
          v136 -= 8;
          --v137;
        }
        while ( v137 );
      }
      for ( ; v136; --v136 )
      {
        v138 = *(unsigned __int8 *)v59++;
        v131 = __ROL8__(v138 ^ v131, v128);
      }
      for ( j = v131; ; LODWORD(v131) = j ^ v131 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v116 = v201;
      v90 = a2;
      v117 = v193;
      *v201 = v131 & 0x7FFFFFFF;
      v118 = 0;
      goto LABEL_180;
    }
    v116 = v201;
    if ( v193 )
    {
      v140 = v202;
    }
    else
    {
      v140 = v90;
      v202 = v90;
      v203 = v201;
    }
    v117 = v193 + 1;
    v193 = v117;
    if ( v117 < v220 )
      goto LABEL_180;
    v141 = __rdtsc();
    v142 = __ROR8__(v141, 3);
    v143 = ((0x7010008004002001LL * (v142 ^ v141)) ^ (((v142 ^ v141) * (unsigned __int128)0x7010008004002001uLL) >> 64))
         % 0xB;
    if ( v143 > 5 )
    {
      if ( v143 == 6 )
      {
        v145 = 24;
        v146 = 1464235086;
        goto LABEL_250;
      }
      if ( v143 != 7 )
      {
        if ( v143 == 8 )
        {
          v147 = 1113876033;
          goto LABEL_236;
        }
        if ( v143 != 9 )
        {
          v150 = __rdtsc();
          v151 = __ROR8__(v150, 3);
          v152 = (67117057 * (v151 ^ v150)) ^ (((v151 ^ v150) * (unsigned __int128)0x7010008004002001uLL) >> 64);
          v144 = ((((((v152 % 0x1A + 97) << 8) | ((v152 >> 5)
                                                - 26
                                                * ((unsigned int)((1321528399 * (unsigned __int64)(v152 >> 5)) >> 32) >> 3)
                                                + 65)) << 8) | ((v152 >> 10) % 0x1A + 97)) << 8) | ((v152 >> 15) % 0x1A
                                                                                                  + 65);
          goto LABEL_252;
        }
        v145 = 33;
        v146 = 1480806214;
LABEL_250:
        v148 = __ROL4__(v146, v145);
        goto LABEL_251;
      }
      v149 = 1666411585;
LABEL_238:
      v144 = __ROL4__(__ROR4__(v149, v143), v143);
      goto LABEL_252;
    }
    switch ( v143 )
    {
      case 5u:
        v147 = 1766089295;
        goto LABEL_236;
      case 0u:
        v145 = 6;
        v146 = 1665295171;
        goto LABEL_250;
      case 1u:
        v149 = 1700422467;
        goto LABEL_238;
      case 2u:
        v147 = 1634559043;
LABEL_236:
        v145 = v143;
        v148 = __ROL4__(v147, v143);
LABEL_251:
        v144 = __ROR4__(v148, v145);
        goto LABEL_252;
      case 3u:
        v145 = 15;
        v146 = 1920421956;
        goto LABEL_250;
    }
    v144 = __ROL4__(__ROR4__(1886800198, v143), v143);
LABEL_252:
    v153 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v14 + 256))(64LL, 80LL, v144);
    v154 = v207;
    if ( v153 )
      v154 = (_BYTE *)v153;
    *(_QWORD *)v154 = &v204;
    *((_QWORD *)v154 + 1) = a4;
    *((_QWORD *)v154 + 3) = v203;
    *((_QWORD *)v154 + 2) = v140;
    *((_QWORD *)v154 + 8) = sub_140C88510;
    *((_DWORD *)v154 + 8) = v117;
    *((_DWORD *)v154 + 10) = 0;
    *((_QWORD *)v154 + 9) = v154;
    *((_QWORD *)v154 + 6) = 0LL;
    if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
      KeWaitForGate((__int64)v205, 0LL);
    HIDWORD(v206) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v154 + 48), CriticalWorkQueue);
    if ( v154 == v207 && HIDWORD(v206) )
    {
      do
        KeWaitForGate((__int64)v205, 0LL);
      while ( (_DWORD)v206 );
      v206 = 0LL;
    }
    v90 = a2;
    v117 = 0;
    v116 = v201;
    v118 = v220;
    v193 = 0;
LABEL_180:
    v52 = v90[1];
    v90 += 3;
    a2 = v90;
    if ( v90 == v216 )
      break;
    v119 = *v90;
    v201 = v116 + 1;
    v89 = *(_DWORD *)(v213 + 12);
    if ( (unsigned int)v119 >= v89 )
    {
      v59 = 1920421956LL;
      v71 = v197;
      if ( v90[1] <= v211 )
        continue;
    }
    v213 = (*v217)(v212, a4, v119, v59);
    v60 = (_DWORD *)v213;
    if ( !v213 )
      goto LABEL_304;
    v59 = 1920421956LL;
    goto LABEL_72;
  }
  v155 = v195;
  if ( v195 == -1 )
    v155 = -(v196 != 0);
  *a6 = v155;
  *a7 = v196;
  if ( !v118 )
    return 0LL;
  if ( !v117 )
  {
LABEL_301:
    if ( HIDWORD(v206) )
    {
      do
        KeWaitForGate((__int64)v205, 0LL);
      while ( (_DWORD)v206 );
    }
    return 0LL;
  }
  v156 = __rdtsc();
  v157 = __ROR8__(v156, 3);
  v158 = ((0x7010008004002001LL * (v157 ^ v156)) ^ (((v157 ^ v156) * (unsigned __int128)0x7010008004002001uLL) >> 64))
       % 0xB;
  if ( v158 > 5 )
  {
    if ( v158 == 6 )
    {
      v160 = 24;
      v221 = __ROL4__(1464235086, 24) ^ 6;
      goto LABEL_290;
    }
    if ( v158 != 7 )
    {
      if ( v158 != 8 )
      {
        if ( v158 == 9 )
        {
          v160 = 33;
          v161 = 1480806214;
          goto LABEL_274;
        }
        v165 = __rdtsc();
        v166 = __ROR8__(v165, 3);
        v167 = (67117057 * (v166 ^ v165)) ^ (((v166 ^ v165) * (unsigned __int128)0x7010008004002001uLL) >> 64);
        v164 = ((((((v167 % 0x1A + 97) << 8) | ((v167 >> 5)
                                              - 26
                                              * ((unsigned int)((1321528399 * (unsigned __int64)(v167 >> 5)) >> 32) >> 3)
                                              + 65)) << 8) | ((v167 >> 10)
                                                            - 26
                                                            * ((unsigned int)((1321528399
                                                                             * (unsigned __int64)(v167 >> 10)) >> 32) >> 3)
                                                            + 97)) << 8) | ((v167 >> 15) % 0x1A + 65);
        goto LABEL_292;
      }
      v162 = 1113876033;
LABEL_276:
      v160 = v158;
      v163 = __ROL4__(v162, v158);
      goto LABEL_291;
    }
    v159 = 1666411585;
LABEL_278:
    v164 = __ROL4__(__ROR4__(v159, v158), v158);
    goto LABEL_292;
  }
  switch ( v158 )
  {
    case 5u:
      v162 = 1766089295;
      goto LABEL_276;
    case 0u:
      v160 = 6;
      v161 = 1665295171;
      goto LABEL_274;
    case 1u:
      v159 = 1700422467;
      goto LABEL_278;
    case 2u:
      v162 = 1634559043;
      goto LABEL_276;
  }
  if ( v158 != 3 )
  {
    v159 = 1886800198;
    goto LABEL_278;
  }
  v160 = 15;
  v161 = 1920421956;
LABEL_274:
  v221 = v158 ^ __ROL4__(v161, v160);
LABEL_290:
  v163 = v158 ^ v221;
LABEL_291:
  v164 = __ROR4__(v163, v160);
LABEL_292:
  v168 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v14 + 256))(64LL, 80LL, v164);
  v169 = v207;
  if ( v168 )
    v169 = (_BYTE *)v168;
  *(_QWORD *)v169 = &v204;
  *((_QWORD *)v169 + 1) = a4;
  *((_QWORD *)v169 + 2) = v202;
  *((_QWORD *)v169 + 3) = v203;
  *((_QWORD *)v169 + 8) = sub_140C88510;
  *((_DWORD *)v169 + 8) = v117;
  *((_DWORD *)v169 + 10) = 0;
  *((_QWORD *)v169 + 9) = v169;
  *((_QWORD *)v169 + 6) = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
    KeWaitForGate((__int64)v205, 0LL);
  HIDWORD(v206) = 1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(v169 + 48), CriticalWorkQueue);
  if ( v169 != v207 )
    goto LABEL_301;
  if ( HIDWORD(v206) )
  {
    do
      KeWaitForGate((__int64)v205, 0LL);
    while ( (_DWORD)v206 );
    v206 = 0LL;
    goto LABEL_301;
  }
  return 0LL;
}

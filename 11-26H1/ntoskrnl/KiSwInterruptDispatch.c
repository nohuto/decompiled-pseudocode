/*
 * XREFs of KiSwInterruptDispatch @ 0x1405430B0
 * Callers:
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x140475F20 (KiGetTrapFrameMode.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     KiReadKernelDr7 @ 0x1405EE518 (KiReadKernelDr7.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     SdbpCheckDll @ 0x140C81440 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140C81700 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  const void *v1; // rdi
  __int64 v2; // r13
  _QWORD *Pool2; // rax
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  int v9; // r10d
  _QWORD *v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  const char *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned int i; // r11d
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r8
  _QWORD *v29; // rdx
  unsigned __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  unsigned int *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r15
  int v37; // r14d
  unsigned int v38; // ecx
  unsigned int v39; // r10d
  int v40; // r11d
  _QWORD *v41; // r9
  unsigned int v42; // r8d
  int *v43; // rsi
  __int64 v44; // r10
  __int64 v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rax
  _QWORD *v48; // r11
  __int64 v49; // r8
  _QWORD *v50; // r9
  const char *v51; // rax
  int v52; // r14d
  unsigned __int64 v53; // rdi
  unsigned int v54; // r10d
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // rcx
  __int64 v59; // r8
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  bool v62; // zf
  unsigned __int64 j; // rax
  unsigned int v64; // edi
  BOOL v65; // r12d
  __int64 v66; // rcx
  unsigned __int8 v67; // r13
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // r15
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // r10
  int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // rcx
  unsigned __int8 v79; // r14
  unsigned int *v80; // rcx
  unsigned int *v81; // rdi
  char v82; // r15
  unsigned __int64 v83; // r13
  __int64 v84; // rdx
  char *v85; // r8
  unsigned int *v86; // r9
  __int64 v87; // rcx
  __int64 v88; // rax
  char v89; // cl
  char v90; // al
  int v91; // ecx
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // r10
  __int64 v95; // r8
  _QWORD *v96; // rdx
  unsigned __int64 v97; // r9
  int v98; // ecx
  __int64 v99; // rax
  int v100; // ecx
  __int64 v101; // rcx
  __int64 v102; // r10
  __int64 v103; // r8
  _QWORD *v104; // rdx
  unsigned __int64 v105; // r9
  int v106; // ecx
  __int64 v107; // rax
  __int64 v108; // rcx
  unsigned __int8 v109; // r15
  unsigned __int64 v110; // rdx
  unsigned int *v111; // rcx
  unsigned int *v112; // rdi
  unsigned __int64 v113; // r14
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rax
  int v116; // ecx
  __int64 v117; // rcx
  __int64 v118; // r10
  __int64 v119; // r8
  _QWORD *v120; // rdx
  unsigned __int64 v121; // r9
  __int64 v122; // r8
  __int64 v123; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned int *v125; // rcx
  unsigned int *v126; // rdi
  char v127; // r15
  unsigned __int64 v128; // r12
  __int64 v129; // rdx
  char *v130; // r8
  unsigned int *v131; // r9
  __int64 v132; // rcx
  __int64 v133; // rax
  char v134; // cl
  char v135; // al
  int v136; // ecx
  int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // r10
  __int64 v140; // r8
  _QWORD *v141; // rdx
  unsigned __int64 v142; // r9
  int v143; // ecx
  __int64 v144; // rax
  int v145; // ecx
  __int64 v146; // rcx
  __int64 v147; // r10
  _QWORD *v148; // rdx
  unsigned __int64 v149; // r9
  int v150; // ecx
  __int64 v151; // rax
  __int64 v152; // rdi
  __int64 v153; // rsi
  __int64 v154; // r14
  __int64 v155; // r15
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v157; // r9
  unsigned __int64 v158; // rdx
  __int64 v159; // r11
  unsigned __int64 v160; // rcx
  unsigned __int64 v161; // r14
  unsigned __int64 v162; // r15
  _QWORD *v163; // r11
  unsigned __int64 v164; // rcx
  unsigned __int64 v165; // rax
  __int64 v166; // r12
  unsigned __int64 v167; // r8
  _QWORD *v168; // rcx
  unsigned __int64 v169; // r9
  signed __int64 v170; // r8
  unsigned int v171; // esi
  __int64 v172; // r10
  unsigned __int64 *v173; // rcx
  __int64 v174; // rdx
  __int64 v175; // r9
  unsigned __int64 v176; // rax
  __int64 *v177; // r13
  __int64 v178; // rax
  unsigned __int64 v179; // rdx
  unsigned __int64 v180; // rcx
  unsigned int v181; // r9d
  _QWORD *v182; // r10
  unsigned int v183; // edi
  unsigned __int64 v184; // rsi
  char *v185; // r10
  unsigned __int64 v186; // rcx
  unsigned __int64 v187; // rax
  unsigned __int64 v188; // r8
  __int64 v189; // rdx
  unsigned int *v190; // r9
  __int64 v191; // r11
  __int64 v192; // r10
  unsigned __int64 v193; // rax
  unsigned __int64 *v194; // rcx
  __int64 *v195; // r11
  __int64 v196; // rax
  unsigned __int64 v197; // rdx
  unsigned __int64 v198; // rcx
  unsigned __int64 v199; // r8
  int v200; // esi
  _QWORD *v201; // r9
  __int64 v202; // r11
  const char *v203; // rax
  int v204; // r10d
  int v205; // edi
  __int64 v206; // r8
  __int64 v207; // rax
  __int64 v208; // r8
  unsigned __int64 v209; // rcx
  __int64 v210; // rax
  void (__fastcall *v211)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  __int64 v213; // rcx
  unsigned __int64 v214; // rcx
  unsigned __int64 v215; // rax
  int v216; // ecx
  int v217; // ecx
  int v218; // ecx
  int v219; // ecx
  int v220; // ecx
  volatile signed __int32 *v221; // rax
  unsigned __int64 v223; // [rsp+40h] [rbp-69h]
  _QWORD *v224; // [rsp+48h] [rbp-61h]
  unsigned __int64 v225; // [rsp+48h] [rbp-61h]
  unsigned __int64 v226; // [rsp+50h] [rbp-59h]
  __int64 v227; // [rsp+50h] [rbp-59h]
  _QWORD *v228; // [rsp+58h] [rbp-51h]
  int v229; // [rsp+58h] [rbp-51h]
  __int64 v230; // [rsp+60h] [rbp-49h]
  int v231; // [rsp+60h] [rbp-49h]
  int v232; // [rsp+68h] [rbp-41h]
  unsigned int v233; // [rsp+70h] [rbp-39h] BYREF
  char v234; // [rsp+78h] [rbp-31h] BYREF
  __int64 v235; // [rsp+80h] [rbp-29h]
  unsigned __int64 k; // [rsp+88h] [rbp-21h]
  __int64 v237; // [rsp+90h] [rbp-19h]
  _QWORD v238[13]; // [rsp+98h] [rbp-11h] BYREF
  unsigned int v240; // [rsp+118h] [rbp+6Fh] BYREF
  _QWORD *v241; // [rsp+120h] [rbp+77h]
  unsigned __int64 v242; // [rsp+128h] [rbp+7Fh]

  v1 = *(const void **)&MaxDataSize;
  v2 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2524LL) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  __rdtsc();
  Pool2 = (_QWORD *)ExAllocatePool2(0x42uLL);
  v228 = Pool2;
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = Pool2 + 4;
    Pool2[3] = Pool2;
    *Pool2 = 0LL;
    Pool2[2] = sub_140553B50;
    v224 = Pool2 + 4;
    memmove(Pool2 + 4, v1, 0xAE8uLL);
    v4[348] = v1;
    v4[349] = v4 + 353;
    v6 = __rdtsc();
    *((_DWORD *)v4 + 538) = 0;
    v7 = __ROR8__(v6, 3);
    *((_DWORD *)v4 + 536) = ((((v7 ^ v6) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL
                                                                                             * (v7 ^ v6)))
                          % *((unsigned int *)v4 + 531);
    v8 = v4[348];
    v9 = *((_DWORD *)v4 + 533);
    v10 = (_QWORD *)v8;
    v11 = __rdtsc();
    v12 = __ROR8__(v11, 3);
    v13 = v4[267];
    *((_DWORD *)v4 + 540) = (((v12 ^ v11) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v12 ^ v11));
    v4[350] = ((unsigned __int64)v4 + 2879) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = (const char *)v8;
    v15 = *(unsigned int *)(v8 + 2052);
    if ( v8 < v8 + v15 )
    {
      do
      {
        _mm_prefetch(v14, 0);
        v14 += 64;
      }
      while ( (unsigned __int64)v14 < v8 + v15 );
    }
    v16 = v13;
    for ( i = (unsigned int)v15 >> 7; i; --i )
    {
      v18 = 8LL;
      do
      {
        v19 = v10[1] ^ __ROL8__(*v10 ^ v16, v9);
        v10 += 2;
        v16 = __ROL8__(v19, v9);
        --v18;
      }
      while ( v18 );
      v20 = __ROL8__(v13 ^ ((unsigned __int64)v10 - v8), 17) ^ v13 ^ ((unsigned __int64)v10 - v8);
      v9 = ((unsigned __int8)(v20 ^ ((v20 * (unsigned __int128)0x7010008004002001uLL) >> 64)) ^ (unsigned __int8)v9) & 0x3F;
      if ( !v9 )
        LOBYTE(v9) = 1;
    }
    v21 = *(_DWORD *)(v8 + 2052) & 0x7F;
    if ( v21 >= 8 )
    {
      v22 = (unsigned __int64)(v15 & 0x7F) >> 3;
      do
      {
        v16 = __ROL8__(*v10++ ^ v16, v9);
        v21 -= 8;
        --v22;
      }
      while ( v22 );
    }
    for ( ; v21; --v21 )
    {
      v23 = *(unsigned __int8 *)v10;
      v10 = (_QWORD *)((char *)v10 + 1);
      v16 = __ROL8__(v23 ^ v16, v9);
    }
    if ( v16 != qword_140FC0B50 )
    {
      v24 = v4[181];
      *(_QWORD *)v24 = v8;
      *(_DWORD *)(v24 + 16) = v15;
      if ( !*((_DWORD *)v4 + 590) )
      {
        *(_QWORD *)(v4[181] + 24LL) = qword_140FC0B50 ^ v16;
        if ( !*((_DWORD *)v4 + 590) )
        {
          v4[297] = 0LL;
          v25 = *((_DWORD *)v4 + 638);
          v4[296] = v4 - 0xB8BF814EDC6E95FLL;
          v4[298] = 273LL;
          v4[299] = v16;
          *((_DWORD *)v4 + 590) = 1;
          if ( (v25 & 0x20000000) == 0 && (*((_DWORD *)v4 + 639) & 0x200000) != 0 && (v25 & 1) != 0 )
          {
            v26 = *((unsigned int *)v4 + 677);
            v27 = v4[267];
            v28 = v4[339];
            v29 = (_QWORD *)((char *)v5 + v26);
            v30 = (unsigned __int64)&v5[(unsigned __int64)(unsigned int)(*((_DWORD *)v4 + 521) - v26) >> 3] + v26;
            while ( v29 != (_QWORD *)v30 )
            {
              *v29 ^= v28;
              v28 = ((v27 ^ *v29++) + __ROR8__(v28, v28 & 0x3F)) ^ 0xF05;
            }
            *((_DWORD *)v4 + 639) &= ~0x200000u;
            if ( v28 != v4[340] )
            {
              v31 = *((_DWORD *)v4 + 521);
              v32 = v4[181];
              *(_QWORD *)v32 = v5;
              *(_DWORD *)(v32 + 16) = v31;
              if ( !*((_DWORD *)v4 + 590) )
                *(_QWORD *)(v4[181] + 24LL) = v28 ^ v4[340];
              sub_140C7F03C(v4 + 4, 0LL, v28, 256LL);
            }
          }
        }
      }
    }
    v33 = 4;
    v34 = &v233;
    do
    {
      *(_BYTE *)v34 = 0;
      v34 = (unsigned int *)((char *)v34 + 1);
      --v33;
    }
    while ( v33 );
    v35 = 0LL;
    v240 = 0;
    v36 = 6LL;
    v37 = 48;
    if ( *((_DWORD *)v4 + 531) )
    {
      v38 = v233;
      v39 = 0;
      v40 = 0;
      while ( 1 )
      {
        v41 = v5;
        v42 = 0;
        if ( v5[344] )
          v41 = (_QWORD *)v5[344];
        v241 = v41;
        v43 = (int *)((char *)v41 + *((unsigned int *)v41 + 522));
        if ( v40 && v39 <= (unsigned int)v35 )
        {
          v42 = v39;
          v43 = (int *)((char *)v41 + v38);
        }
        if ( v42 != (_DWORD)v35 )
        {
          v44 = (unsigned int)v35 - v42;
          v42 = v35;
          while ( 1 )
          {
            if ( *v43 == 1 )
            {
LABEL_58:
              v45 = 4 * (v43[4] / 0xCu) + 48;
              goto LABEL_59;
            }
            if ( *v43 == 7 )
            {
              v45 = (unsigned int)(24 * (v43[6] + 2));
              goto LABEL_59;
            }
            if ( *v43 == 8 )
              break;
            switch ( *v43 )
            {
              case 10:
                v45 = (unsigned int)(16 * (v43[7] + 3));
                break;
              case 28:
                v46 = *((unsigned __int16 *)v43 + 20);
LABEL_56:
                v45 = (v46 + 55) & 0xFFFFFFF8;
                break;
              case 30:
                v45 = (((v43[9] != 0 ? v43[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                    + 24 * (*((unsigned __int16 *)v43 + 20) + 2);
                break;
              case 33:
                v45 = 20 * (unsigned int)(((v43[8] & 0xFFF) + (unsigned __int64)(unsigned int)v43[10] + 4095) >> 12)
                    + 48;
                break;
              case 43:
                goto LABEL_58;
              default:
                v45 = 48LL;
                break;
            }
LABEL_59:
            v43 = (int *)((char *)v43 + v45);
            if ( !--v44 )
            {
              v5 = v224;
              LODWORD(v41) = (_DWORD)v241;
              v35 = v240;
              goto LABEL_61;
            }
          }
          v46 = *((unsigned __int16 *)v43 + 16);
          goto LABEL_56;
        }
LABEL_61:
        v47 = *v43;
        v38 = (_DWORD)v43 - (_DWORD)v41;
        LODWORD(v242) = v42;
        v40 = 1;
        LODWORD(v241) = (_DWORD)v43 - (_DWORD)v41;
        v39 = v42;
        if ( (_DWORD)v47 == 36 )
          break;
        if ( (unsigned int)v47 > 0x2B )
          goto LABEL_196;
        v122 = 0x80200000002LL;
        if ( !_bittest64(&v122, v47) )
          goto LABEL_196;
        v123 = v5[167];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64, __int64))v5[44])(v123, v35);
        v125 = *(unsigned int **)v5[196];
        v126 = v125 + 4;
        v127 = *((_BYTE *)v125 + 12);
        v128 = (unsigned __int64)&v125[6 * *v125 + 4];
        do
        {
          v129 = 24LL;
          v130 = (char *)(v43 + 6);
          v131 = v126;
          while ( 1 )
          {
            v132 = *(_QWORD *)v131;
            v131 += 2;
            v133 = *(_QWORD *)v130;
            v130 += 8;
            if ( v132 != v133 )
              break;
            v129 = (unsigned int)(v129 - 8);
            if ( (unsigned int)v129 < 8 )
            {
              if ( !(_DWORD)v129 )
                goto LABEL_169;
              while ( 1 )
              {
                v134 = *(_BYTE *)v131;
                v131 = (unsigned int *)((char *)v131 + 1);
                v135 = *v130++;
                if ( v134 != v135 )
                  goto LABEL_168;
                v62 = (_DWORD)v129 == 1;
                v129 = (unsigned int)(v129 - 1);
                if ( v62 )
                  goto LABEL_169;
              }
            }
          }
LABEL_168:
          v126 += 6;
        }
        while ( (unsigned __int64)v126 < v128 );
LABEL_169:
        ((void (__fastcall *)(_QWORD, __int64, char *, unsigned int *))v5[52])(v5[167], v129, v130, v131);
        __writecr8(CurrentIrql);
        if ( !v127 )
          goto LABEL_187;
        v136 = *((_DWORD *)v5 + 631);
        if ( (v136 & 0x10) != 0 && !*((_DWORD *)v5 + 582) )
        {
          v5[292] = v5 - 0xB8BF814EDC6E963LL;
          v5[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
          v5[294] = *v43;
          v137 = *((_DWORD *)v5 + 630);
          v5[295] = 1LL;
          *((_DWORD *)v5 + 582) = 1;
          if ( (v137 & 0x20000000) == 0 && (v136 & 0x200000) != 0 && (v137 & 1) != 0 )
          {
            v138 = *((unsigned int *)v5 + 669);
            v139 = v5[263];
            v140 = v5[335];
            v141 = (_QWORD *)((char *)v5 + v138);
            v142 = (unsigned __int64)&v5[(unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 513) - v138) >> 3] + v138;
            while ( v141 != (_QWORD *)v142 )
            {
              *v141 ^= v140;
              v140 = ((v139 ^ *v141++) + __ROR8__(v140, v140 & 0x3F)) ^ 0xF05;
            }
            *((_DWORD *)v5 + 631) &= ~0x200000u;
            if ( v140 != v5[336] )
            {
              v143 = *((_DWORD *)v5 + 513);
              v144 = v5[177];
              *(_QWORD *)v144 = v5;
              *(_DWORD *)(v144 + 16) = v143;
              if ( !*((_DWORD *)v5 + 582) )
                *(_QWORD *)(v5[177] + 24LL) = v140 ^ v5[336];
              sub_140C7F03C(v5, 0LL, v140, 256LL);
            }
          }
        }
        if ( *((_QWORD *)v43 + 3) != 1LL )
        {
LABEL_187:
          if ( v126 == (unsigned int *)v128 && !*((_DWORD *)v5 + 582) )
          {
            v145 = *((_DWORD *)v5 + 630);
            v5[292] = v5 - 0xB8BF814EDC6E963LL;
            v5[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
            v5[294] = *v43;
            v5[295] = v126;
            *((_DWORD *)v5 + 582) = 1;
            if ( (v145 & 0x20000000) == 0 && (*((_DWORD *)v5 + 631) & 0x200000) != 0 && (v145 & 1) != 0 )
            {
              v146 = *((unsigned int *)v5 + 669);
              v147 = v5[263];
              v119 = v5[335];
              v148 = (_QWORD *)((char *)v5 + v146);
              v149 = (unsigned __int64)&v5[(unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 513) - v146) >> 3] + v146;
              while ( v148 != (_QWORD *)v149 )
              {
                *v148 ^= v119;
                v119 = ((v147 ^ *v148++) + __ROR8__(v119, v119 & 0x3F)) ^ 0xF05;
              }
LABEL_191:
              *((_DWORD *)v5 + 631) &= ~0x200000u;
              if ( v119 != v5[336] )
              {
                v150 = *((_DWORD *)v5 + 513);
                v151 = v5[177];
                *(_QWORD *)v151 = v5;
                *(_DWORD *)(v151 + 16) = v150;
                if ( !*((_DWORD *)v5 + 582) )
                  *(_QWORD *)(v5[177] + 24LL) = v119 ^ v5[336];
                sub_140C7F03C(v5, 0LL, v119, 256LL);
              }
            }
          }
        }
LABEL_195:
        v38 = (unsigned int)v241;
        v37 = 48;
        LODWORD(v35) = v240;
        v39 = v242;
        v40 = 1;
        v36 = 6LL;
LABEL_196:
        v35 = (unsigned int)(v35 + 1);
        v240 = v35;
        if ( (unsigned int)v35 >= *((_DWORD *)v5 + 523) )
        {
          v4 = v228;
          goto LABEL_198;
        }
      }
      v48 = (_QWORD *)*((_QWORD *)v43 + 1);
      v49 = (unsigned int)v43[4];
      v50 = v48;
      *((_DWORD *)v5 + 530) += v49;
      v51 = (const char *)v48;
      v52 = *((_DWORD *)v5 + 525);
      if ( v48 < (_QWORD *)((char *)v48 + v49) )
      {
        do
        {
          _mm_prefetch(v51, 0);
          v51 += 64;
        }
        while ( v51 < (const char *)v48 + v49 );
      }
      v53 = v5[263];
      v54 = (unsigned int)v49 >> 7;
      v55 = 1LL;
      if ( (unsigned int)v49 >> 7 )
      {
        do
        {
          v56 = 8LL;
          do
          {
            v57 = v50[1] ^ __ROL8__(*v50 ^ v53, v52);
            v50 += 2;
            v53 = __ROL8__(v57, v52);
            --v56;
          }
          while ( v56 );
          v58 = __ROL8__(v5[263] ^ ((char *)v50 - (char *)v48), 17) ^ v5[263] ^ ((char *)v50 - (char *)v48);
          v55 = 1LL;
          v52 = ((unsigned __int8)(((v58 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v58) ^ (unsigned __int8)v52) & 0x3F;
          if ( !v52 )
            LOBYTE(v52) = 1;
          --v54;
        }
        while ( v54 );
        v5 = v224;
      }
      v59 = v49 & 0x7F;
      if ( (unsigned int)v59 >= 8 )
      {
        v60 = (unsigned __int64)(unsigned int)v59 >> 3;
        do
        {
          v53 = __ROL8__(*v50++ ^ v53, v52);
          v59 = (unsigned int)(v59 - 8);
          --v60;
        }
        while ( v60 );
      }
      if ( (_DWORD)v59 )
      {
        do
        {
          v61 = *(unsigned __int8 *)v50;
          v50 = (_QWORD *)((char *)v50 + 1);
          v53 = __ROL8__(v61 ^ v53, v52);
          v62 = (_DWORD)v59 == 1;
          v59 = (unsigned int)(v59 - 1);
        }
        while ( !v62 );
      }
      for ( j = v53; ; LODWORD(v53) = j ^ v53 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v64 = v53 & 0x7FFFFFFF;
      v65 = 0;
      if ( v64 != v43[5] )
      {
        if ( !*v43 )
          v65 = v43[6] != 0;
        v66 = (unsigned int)v43[4];
        v55 = *((_QWORD *)v43 + 1);
        if ( v43[4] && (*((_DWORD *)v5 + 631) & 0x40) != 0 )
        {
          v67 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v68 = v55 & 0xFFFFFFFFFFFFF000uLL;
          v230 = (v55 + v66 - 1) | 0xFFF;
          v226 = (v55 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v69 = v67;
            while ( 1 )
            {
              v70 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v5[141])(v68, 0LL, v59, v50);
              if ( v70 != -1073741267 )
                break;
              if ( v65 )
                goto LABEL_93;
              if ( v67 > 1u )
                goto LABEL_91;
              v69 = v67;
              __writecr8(v67);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v70 < 0 )
            {
LABEL_93:
              __writecr8(v69);
              goto LABEL_94;
            }
LABEL_91:
            v68 += 4096LL;
            v226 += 4096LL;
            if ( v226 != v230 )
              continue;
            break;
          }
          __writecr8(v69);
        }
        else
        {
LABEL_94:
          if ( !*((_DWORD *)v5 + 582) )
            *(_QWORD *)(v5[177] + 24LL) = (unsigned int)v43[5] ^ (unsigned __int64)v64;
          v71 = *((_QWORD *)v43 + 1);
          if ( !*((_DWORD *)v5 + 582) )
          {
            v55 = 1LL;
            v5[292] = v5 - 0xB8BF814EDC6E963LL;
            v5[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
            v72 = *v43;
            v5[295] = v71;
            v73 = *((_DWORD *)v5 + 630);
            v5[294] = v72;
            *((_DWORD *)v5 + 582) = 1;
            if ( (v73 & 0x20000000) == 0 && (*((_DWORD *)v5 + 631) & 0x200000) != 0 && (v73 & 1) != 0 )
            {
              v74 = *((unsigned int *)v5 + 669);
              v75 = v5[263];
              v59 = v5[335];
              v55 = (__int64)v5 + v74;
              v50 = (_QWORD *)((char *)&v5[(unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 513) - v74) >> 3] + v74);
              while ( (_QWORD *)v55 != v50 )
              {
                *(_QWORD *)v55 ^= v59;
                v59 = ((v75 ^ *(_QWORD *)v55) + __ROR8__(v59, v59 & 0x3F)) ^ 0xF05;
                v55 += 8LL;
              }
              *((_DWORD *)v5 + 631) &= ~0x200000u;
              if ( v59 != v5[336] )
              {
                v76 = *((_DWORD *)v5 + 513);
                v77 = v5[177];
                *(_QWORD *)v77 = v5;
                *(_DWORD *)(v77 + 16) = v76;
                if ( !*((_DWORD *)v5 + 582) )
                  *(_QWORD *)(v5[177] + 24LL) = v59 ^ v5[336];
                sub_140C7F03C(v5, 0LL, v59, 256LL);
              }
            }
          }
        }
      }
      v78 = v5[167];
      v79 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v5[44])(v78, v55, v59, v50);
      v80 = *(unsigned int **)v5[196];
      v81 = v80 + 4;
      v82 = *((_BYTE *)v80 + 12);
      v83 = (unsigned __int64)&v80[6 * *v80 + 4];
      do
      {
        v84 = 24LL;
        v85 = (char *)(v43 + 6);
        v86 = v81;
        while ( 1 )
        {
          v87 = *(_QWORD *)v86;
          v86 += 2;
          v88 = *(_QWORD *)v85;
          v85 += 8;
          if ( v87 != v88 )
            break;
          v84 = (unsigned int)(v84 - 8);
          if ( (unsigned int)v84 < 8 )
          {
            if ( !(_DWORD)v84 )
              goto LABEL_116;
            while ( 1 )
            {
              v89 = *(_BYTE *)v86;
              v86 = (unsigned int *)((char *)v86 + 1);
              v90 = *v85++;
              if ( v89 != v90 )
                goto LABEL_115;
              v62 = (_DWORD)v84 == 1;
              v84 = (unsigned int)(v84 - 1);
              if ( v62 )
                goto LABEL_116;
            }
          }
        }
LABEL_115:
        v81 += 6;
      }
      while ( (unsigned __int64)v81 < v83 );
LABEL_116:
      ((void (__fastcall *)(_QWORD, __int64, char *, unsigned int *))v5[52])(v5[167], v84, v85, v86);
      __writecr8(v79);
      if ( !v82 )
        goto LABEL_309;
      v91 = *((_DWORD *)v5 + 631);
      if ( (v91 & 0x10) != 0 && !*((_DWORD *)v5 + 582) )
      {
        v5[292] = v5 - 0xB8BF814EDC6E963LL;
        v5[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
        v5[294] = *v43;
        v92 = *((_DWORD *)v5 + 630);
        v5[295] = 1LL;
        *((_DWORD *)v5 + 582) = 1;
        if ( (v92 & 0x20000000) == 0 && (v91 & 0x200000) != 0 && (v92 & 1) != 0 )
        {
          v93 = *((unsigned int *)v5 + 669);
          v94 = v5[263];
          v95 = v5[335];
          v96 = (_QWORD *)((char *)v5 + v93);
          v97 = (unsigned __int64)&v5[(unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 513) - v93) >> 3] + v93;
          while ( v96 != (_QWORD *)v97 )
          {
            *v96 ^= v95;
            v95 = ((v94 ^ *v96++) + __ROR8__(v95, v95 & 0x3F)) ^ 0xF05;
          }
          *((_DWORD *)v5 + 631) &= ~0x200000u;
          if ( v95 != v5[336] )
          {
            v98 = *((_DWORD *)v5 + 513);
            v99 = v5[177];
            *(_QWORD *)v99 = v5;
            *(_DWORD *)(v99 + 16) = v98;
            if ( !*((_DWORD *)v5 + 582) )
              *(_QWORD *)(v5[177] + 24LL) = v95 ^ v5[336];
            sub_140C7F03C(v5, 0LL, v95, 256LL);
          }
        }
      }
      if ( *((_QWORD *)v43 + 3) != 1LL )
      {
LABEL_309:
        if ( v81 == (unsigned int *)v83 && !*((_DWORD *)v5 + 582) )
        {
          v100 = *((_DWORD *)v5 + 630);
          v5[292] = v5 - 0xB8BF814EDC6E963LL;
          v5[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
          v5[294] = *v43;
          v5[295] = v81;
          *((_DWORD *)v5 + 582) = 1;
          if ( (v100 & 0x20000000) == 0 && (*((_DWORD *)v5 + 631) & 0x200000) != 0 && (v100 & 1) != 0 )
          {
            v101 = *((unsigned int *)v5 + 669);
            v102 = v5[263];
            v103 = v5[335];
            v104 = (_QWORD *)((char *)v5 + v101);
            v105 = (unsigned __int64)&v5[(unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 513) - v101) >> 3] + v101;
            while ( v104 != (_QWORD *)v105 )
            {
              *v104 ^= v103;
              v103 = ((v102 ^ *v104++) + __ROR8__(v103, v103 & 0x3F)) ^ 0xF05;
            }
            *((_DWORD *)v5 + 631) &= ~0x200000u;
            if ( v103 != v5[336] )
            {
              v106 = *((_DWORD *)v5 + 513);
              v107 = v5[177];
              *(_QWORD *)v107 = v5;
              *(_DWORD *)(v107 + 16) = v106;
              if ( !*((_DWORD *)v5 + 582) )
                *(_QWORD *)(v5[177] + 24LL) = v103 ^ v5[336];
              sub_140C7F03C(v5, 0LL, v103, 256LL);
            }
          }
        }
      }
      v108 = v5[167];
      v109 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v5[44])(v108);
      v110 = 0LL;
      v111 = *(unsigned int **)v5[196];
      v112 = v111 + 4;
      v113 = (unsigned __int64)&v111[6 * *v111 + 4];
      while ( 1 )
      {
        v112 += 6;
        if ( (unsigned __int64)v112 >= v113 )
          break;
        v114 = *((_QWORD *)v112 + 1);
        if ( v114 < v110 )
          break;
        if ( (v114 & 0xFFFFFFFFFFFFF000uLL) != v114 )
          break;
        v115 = v114 + v112[4];
        if ( v115 <= v114 || v115 == v110 )
          break;
        v110 = v114 + v112[4];
      }
      ((void (__fastcall *)(_QWORD))v5[52])(v5[167]);
      __writecr8(v109);
      if ( v112 == (unsigned int *)v113 )
        goto LABEL_195;
      if ( *((_DWORD *)v5 + 582) )
        goto LABEL_195;
      v116 = *((_DWORD *)v5 + 630);
      v5[292] = v5 - 0xB8BF814EDC6E963LL;
      v5[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
      v5[294] = *v43;
      v5[295] = v112;
      *((_DWORD *)v5 + 582) = 1;
      if ( (v116 & 0x20000000) != 0 || (*((_DWORD *)v5 + 631) & 0x200000) == 0 || (v116 & 1) == 0 )
        goto LABEL_195;
      v117 = *((unsigned int *)v5 + 669);
      v118 = v5[263];
      v119 = v5[335];
      v120 = (_QWORD *)((char *)v5 + v117);
      v121 = (unsigned __int64)&v5[(unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 513) - v117) >> 3] + v117;
      while ( v120 != (_QWORD *)v121 )
      {
        *v120 ^= v119;
        v119 = ((v118 ^ *v120++) + __ROR8__(v119, v119 & 0x3F)) ^ 0xF05;
      }
      goto LABEL_191;
    }
LABEL_198:
    if ( *((_DWORD *)v5 + 582) )
    {
      v152 = v5[294];
      v153 = v5[295];
      v154 = v5[293];
      v155 = v5[292];
      v237 = v152;
      v232 = v153;
      v229 = v154;
      v231 = v155;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v157 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v5[200]);
      v223 = v157;
      v158 = v5[241] + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v5[201]);
      v159 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v5[203]);
      v235 = v159;
      if ( (unsigned __int64)&v234 > v157 || (unsigned __int64)&v234 < v157 - *((unsigned int *)v5 + 383) )
      {
        if ( *((_BYTE *)&CurrentPrcb->MxCsr + v5[202])
          && (unsigned __int64)&v234 <= v158
          && (unsigned __int64)&v234 >= v158 - *((unsigned int *)v5 + 382) )
        {
          v223 = v158;
        }
        else
        {
          v223 = *(_QWORD *)(v159 + v5[209]);
        }
      }
      if ( (v5[315] & 0x4000000) == 0 )
      {
        v225 = 0LL;
        if ( (*((_DWORD *)v5 + 631) & 0x400000) == 0 )
        {
          v160 = __readcr0();
          v225 = v160;
          __writecr0(v160 & 0xFFFFFFFFFFFEFFFFuLL);
        }
        v161 = (unsigned __int64)(v5 + 350);
        v162 = (unsigned __int64)&v5[2 * *((unsigned int *)v5 + 698) + 350];
        v158 = 0LL;
        v163 = (_QWORD *)v162;
        for ( k = v162; (unsigned int)v158 < *((_DWORD *)v5 + 699); v158 = (unsigned int)(v158 + 1) )
        {
          *(_QWORD *)*v163 = v163[1];
          v164 = __readcr4();
          if ( (v164 & 0x20080) != 0 )
          {
            __writecr4(v164 ^ 0x80);
            __writecr4(v164);
          }
          else
          {
            v165 = __readcr3();
            __writecr3(v165);
          }
          v163 += 2;
        }
        if ( v161 < v162 )
        {
          do
          {
            v62 = (*((_DWORD *)v5 + 631) & 0x400000) == 0;
            v166 = *(unsigned int *)(v161 + 8);
            v167 = *(_QWORD *)v161;
            LODWORD(v241) = *(_DWORD *)(v161 + 8);
            if ( v62 )
            {
              v158 = (unsigned int)v166;
              v168 = v163;
              if ( (unsigned int)v166 >= 8 )
              {
                v169 = (unsigned __int64)(unsigned int)v166 >> 3;
                do
                {
                  v158 = (unsigned int)(v158 - 8);
                  *(_QWORD *)v167 = *v168++;
                  v167 += 8LL;
                  --v169;
                }
                while ( v169 );
              }
              if ( (_DWORD)v158 )
              {
                v170 = v167 - (_QWORD)v168;
                do
                {
                  *((_BYTE *)v168 + v170) = *(_BYTE *)v168;
                  v168 = (_QWORD *)((char *)v168 + 1);
                  v62 = (_DWORD)v158 == 1;
                  v158 = (unsigned int)(v158 - 1);
                }
                while ( !v62 );
              }
            }
            else
            {
              v240 = v166;
              v242 = (unsigned __int64)v163;
              v171 = v166;
              v158 = ((v167 & 0xFFF) + v166 + 4095) >> 12;
              if ( (_DWORD)v158 )
              {
                v227 = (unsigned int)v158;
                do
                {
                  v172 = v5[187];
                  v173 = v238;
                  v174 = 4LL;
                  LODWORD(v175) = 4;
                  v176 = v172 + ((v167 >> 9) & 0x7FFFFFFFF8LL);
                  do
                  {
                    *v173++ = v176;
                    v176 = v172 + ((v176 >> 9) & 0x7FFFFFFFF8LL);
                    --v174;
                  }
                  while ( v174 );
                  do
                  {
                    v62 = (_DWORD)v175 == 1;
                    v175 = (unsigned int)(v175 - 1);
                  }
                  while ( !v62 && (*(_DWORD *)v238[v175] & 0x80) == 0 );
                  v177 = (__int64 *)v238[v175];
                  v178 = *v177 | 0x62;
                  *v177 = v178;
                  v179 = __readcr4();
                  if ( (v179 & 0x20080) != 0 )
                  {
                    __writecr4(v179 ^ 0x80);
                    __writecr4(v179);
                  }
                  else
                  {
                    v180 = __readcr3();
                    __writecr3(v180);
                  }
                  v181 = v171;
                  v182 = (_QWORD *)v167;
                  if ( 4096 - (v167 & 0xFFF) < v171 )
                    v181 = 4096 - (v167 & 0xFFF);
                  v158 = v242;
                  v183 = v181;
                  if ( v181 >= 8 )
                  {
                    v184 = (unsigned __int64)v181 >> 3;
                    do
                    {
                      v183 -= 8;
                      *v182 = *(_QWORD *)v158;
                      v158 += 8LL;
                      ++v182;
                      --v184;
                    }
                    while ( v184 );
                    v171 = v240;
                  }
                  if ( v183 )
                  {
                    v185 = (char *)v182 - v158;
                    do
                    {
                      v185[v158] = *(_BYTE *)v158;
                      ++v158;
                      --v183;
                    }
                    while ( v183 );
                  }
                  v242 += v181;
                  v167 += v181;
                  v171 -= v181;
                  *v177 = v178;
                  v240 = v171;
                  v186 = __readcr4();
                  if ( (v186 & 0x20080) != 0 )
                  {
                    __writecr4(v186 ^ 0x80);
                    __writecr4(v186);
                  }
                  else
                  {
                    v187 = __readcr3();
                    __writecr3(v187);
                  }
                  --v227;
                }
                while ( v227 );
                v162 = k;
                LODWORD(v166) = (_DWORD)v241;
              }
            }
            v161 += 16LL;
            v163 = (_QWORD *)((char *)v163 + (unsigned int)v166);
          }
          while ( v161 < v162 );
          v152 = v237;
          LODWORD(v153) = v232;
        }
        v188 = v5[69];
        if ( (*((_DWORD *)v5 + 631) & 0x400000) != 0 )
        {
          v189 = v5[187];
          v190 = &v240;
          LOBYTE(v240) = -61;
          v191 = 4LL;
          LODWORD(v192) = 4;
          v193 = v189 + ((v188 >> 9) & 0x7FFFFFFFF8LL);
          v194 = v238;
          do
          {
            *v194++ = v193;
            v193 = v189 + ((v193 >> 9) & 0x7FFFFFFFF8LL);
            --v191;
          }
          while ( v191 );
          do
            v192 = (unsigned int)(v192 - 1);
          while ( (_DWORD)v192 && (*(_DWORD *)v238[v192] & 0x80) == 0 );
          v195 = (__int64 *)v238[v192];
          v196 = *v195 | 0x62;
          *v195 = v196;
          v197 = __readcr4();
          if ( (v197 & 0x20080) != 0 )
          {
            __writecr4(v197 ^ 0x80);
            __writecr4(v197);
          }
          else
          {
            v198 = __readcr3();
            __writecr3(v198);
          }
          v158 = (v188 & 0xFFF) != 4096;
          if ( (v188 & 0xFFF) != 0x1000 )
          {
            v199 = v188 - (_QWORD)&v240;
            do
            {
              *((_BYTE *)v190 + v199) = *(_BYTE *)v190;
              v190 = (unsigned int *)((char *)v190 + 1);
              v158 = (unsigned int)(v158 - 1);
            }
            while ( (_DWORD)v158 );
          }
          *v195 = v196;
          v214 = __readcr4();
          if ( (v214 & 0x20080) != 0 )
          {
            __writecr4(v214 ^ 0x80);
            __writecr4(v214);
          }
          else
          {
            v215 = __readcr3();
            __writecr3(v215);
          }
        }
        else
        {
          *(_BYTE *)v188 = -61;
          __writecr0(v225);
        }
        LODWORD(v155) = v231;
        LODWORD(v154) = v229;
        v159 = v235;
      }
      if ( *((_DWORD *)v5 + 594) && KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v216 = *((_DWORD *)v5 + 594);
      if ( v216 )
      {
        v217 = v216 - 1;
        if ( v217 )
        {
          v218 = v217 - 1;
          if ( v218 )
          {
            v219 = v218 - 1;
            if ( v219 )
            {
              v220 = v219 - 1;
              if ( v220 )
              {
                if ( v220 == 1 )
                {
                  v158 = (*((_DWORD *)v5 + 630) >> 9) & 0x1F;
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v5[203]),
                    v158);
                }
                else
                {
                  _InterlockedOr64((volatile signed __int64 *)(v5[182] + 832LL), 1uLL);
                }
              }
              else
              {
                v158 = *(_QWORD *)(v5[215] + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v5[203]) + v5[211]);
                _interlockedbittestandset((volatile signed __int32 *)v158, (*((_DWORD *)v5 + 630) >> 9) & 0x1F);
              }
              goto LABEL_304;
            }
            v221 = (volatile signed __int32 *)v5[171];
          }
          else
          {
            v221 = (volatile signed __int32 *)v5[170];
          }
        }
        else
        {
          v221 = (volatile signed __int32 *)v5[168];
        }
        _interlockedbittestandset64(v221, 0LL);
      }
LABEL_304:
      *(_QWORD *)(v159 + v5[212]) = 0LL;
      *(_QWORD *)(v159 + v5[214]) = 0LL;
      KeGuardCheckICall(v5[45], v158);
      SdbpCheckDll(265, v155, v154, v153, v152, v5[45], v223 - 8);
      JUMPOUT(0x14054484ALL);
    }
    *((_DWORD *)v5 + 530) += 1584;
    v200 = *((_DWORD *)v5 + 49);
    v201 = v5;
    v202 = v5[263];
    v203 = (const char *)v5;
    *((_DWORD *)v5 + 49) = 0;
    v204 = *((_DWORD *)v5 + 525);
    if ( v5 < v5 + 198 )
    {
      do
      {
        _mm_prefetch(v203, 0);
        v203 += 64;
      }
      while ( v203 < (const char *)v5 + 1584 );
    }
    v205 = 12;
    v206 = v202;
    do
    {
      v207 = 8LL;
      do
      {
        v208 = v201[1] ^ __ROL8__(*v201 ^ v206, v204);
        v201 += 2;
        v206 = __ROL8__(v208, v204);
        --v207;
      }
      while ( v207 );
      v209 = __ROL8__(v202 ^ ((char *)v201 - (char *)v5), 17) ^ v202 ^ ((char *)v201 - (char *)v5);
      v204 = ((unsigned __int8)((v209 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v209 ^ v204)) & 0x3F;
      if ( !v204 )
        LOBYTE(v204) = 1;
      --v205;
    }
    while ( v205 );
    v2 = a1;
    do
    {
      v206 = __ROL8__(*v201++ ^ v206, v204);
      v37 -= 8;
      --v36;
    }
    while ( v36 );
    for ( ; v37; --v37 )
    {
      v210 = *(unsigned __int8 *)v201;
      v201 = (_QWORD *)((char *)v201 + 1);
      v206 = __ROL8__(v210 ^ v206, v204);
    }
    v211 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v5[36];
    *((_DWORD *)v5 + 49) = v200;
    v5[333] = v206;
    v211(v4, 1LL, v206, v201);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v2);
  v213 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1624LL));
    _enable();
    LODWORD(v213) = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !(_DWORD)v213 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}

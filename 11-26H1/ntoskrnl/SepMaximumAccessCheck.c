/*
 * XREFs of SepMaximumAccessCheck @ 0x14051A140
 * Callers:
 *     SepAccessCheck @ 0x1405196A0 (SepAccessCheck.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x1402FCF70 (SepMatchPackage.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 *     SepIsPackageSid @ 0x1404591B0 (SepIsPackageSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x14045EB20 (AuthzBasepAddAccessTypeList.c)
 *     SepIsCapabilitySid @ 0x140461B10 (SepIsCapabilitySid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepUpdateParentTypeList @ 0x1404EFD68 (AuthzBasepUpdateParentTypeList.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        unsigned __int8 *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  __int64 v13; // rsi
  char v14; // bp
  int v15; // ebx
  int v16; // edi
  __int64 v17; // rdx
  __int64 result; // rax
  char *v19; // r13
  unsigned int v20; // r14d
  int v21; // r8d
  unsigned __int8 *v22; // r10
  char v23; // al
  bool v24; // al
  _DWORD *v25; // rsi
  int v26; // r9d
  int v27; // esi
  int v28; // eax
  __int64 v29; // r10
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rdi
  int v33; // r9d
  int v34; // r10d
  int v35; // r8d
  __int64 i; // rdx
  __int64 v37; // rcx
  unsigned __int16 v38; // ax
  int v39; // r9d
  int v40; // r9d
  __int64 v41; // r10
  __int64 v42; // r8
  int v43; // ecx
  unsigned int v44; // ebx
  __int64 v45; // r10
  int v46; // ecx
  int v47; // r9d
  int v48; // r9d
  __int64 v49; // r11
  __int64 v50; // r8
  bool v51; // al
  int v52; // eax
  int v53; // r9d
  int v54; // esi
  int v55; // eax
  __int64 v56; // r10
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rdi
  int v60; // r9d
  int v61; // r10d
  int v62; // r8d
  __int64 j; // rdx
  __int64 v64; // rcx
  unsigned __int16 v65; // ax
  int v66; // r9d
  int v67; // r9d
  __int64 v68; // r10
  __int64 v69; // r8
  int v70; // ecx
  unsigned int v71; // ebx
  __int64 v72; // r10
  int v73; // ecx
  int v74; // r9d
  int v75; // r9d
  __int64 v76; // r11
  __int64 v77; // r8
  unsigned int v78; // eax
  __int64 v79; // rdi
  __int64 v80; // rdx
  int v81; // r9d
  char v82; // r11
  int v83; // ebp
  int v84; // eax
  int v85; // r9d
  int v86; // r10d
  int v87; // r8d
  __int64 v88; // rsi
  __int64 jj; // rdx
  __int64 v90; // rcx
  unsigned __int16 v91; // ax
  int v92; // r9d
  int v93; // r9d
  __int64 v94; // r10
  __int64 v95; // r8
  int v96; // ecx
  __int64 v97; // r10
  __int64 v98; // r8
  int v99; // r9d
  __int64 v100; // rbx
  __int64 v101; // rdi
  unsigned int *v102; // r11
  int v103; // edx
  int v104; // r9d
  int v105; // r9d
  __int64 v106; // r10
  __int64 v107; // r8
  _DWORD *v108; // rcx
  __int64 v109; // rdx
  int v110; // r9d
  int v111; // esi
  int v112; // eax
  __int64 v113; // r10
  __int64 v114; // r8
  int v115; // r9d
  __int64 v116; // rdi
  int v117; // r9d
  int v118; // r10d
  int v119; // r8d
  __int64 ii; // rdx
  __int64 v121; // rcx
  unsigned __int16 v122; // ax
  int v123; // r9d
  int v124; // r9d
  __int64 v125; // r10
  __int64 v126; // r8
  int v127; // ecx
  unsigned int v128; // ebx
  __int64 v129; // r10
  int v130; // ecx
  int v131; // r9d
  int v132; // r9d
  __int64 v133; // r11
  __int64 v134; // r8
  int v135; // r9d
  int v136; // esi
  int v137; // eax
  __int64 v138; // r10
  __int64 v139; // r8
  int v140; // r9d
  __int64 v141; // rdi
  int v142; // r9d
  int v143; // r10d
  int v144; // r8d
  __int64 k; // rdx
  __int64 v146; // rcx
  unsigned __int16 v147; // ax
  int v148; // r9d
  int v149; // r9d
  __int64 v150; // r10
  __int64 v151; // r8
  int v152; // ecx
  unsigned int v153; // ebx
  __int64 v154; // r10
  int v155; // ecx
  int v156; // r9d
  int v157; // r9d
  __int64 v158; // r11
  __int64 v159; // r8
  int v160; // r9d
  int v161; // esi
  int v162; // eax
  __int64 v163; // r10
  __int64 v164; // r8
  int v165; // r9d
  __int64 v166; // rdi
  int v167; // r9d
  int v168; // r8d
  int v169; // r10d
  __int64 m; // rdx
  __int64 v171; // rcx
  unsigned __int16 v172; // ax
  int v173; // r9d
  int v174; // r9d
  __int64 v175; // r10
  __int64 v176; // r8
  int v177; // ecx
  unsigned int v178; // ebx
  __int64 v179; // r10
  int v180; // ecx
  int v181; // r9d
  int v182; // r9d
  __int64 v183; // r11
  __int64 v184; // r8
  unsigned int v185; // ebx
  __int64 v186; // r8
  int v187; // r9d
  int v188; // esi
  int v189; // eax
  __int64 v190; // r10
  __int64 v191; // r8
  int v192; // r9d
  __int64 v193; // rdi
  int v194; // r9d
  int v195; // r8d
  int v196; // r10d
  __int64 n; // rdx
  __int64 v198; // rcx
  unsigned __int16 v199; // ax
  int v200; // r9d
  int v201; // r9d
  __int64 v202; // r10
  __int64 v203; // r8
  int v204; // ecx
  unsigned int v205; // ebx
  __int64 v206; // r10
  int v207; // ecx
  int v208; // r9d
  int v209; // r9d
  __int64 v210; // r11
  __int64 v211; // r8
  unsigned int v212; // ebx
  _QWORD *v213; // rax
  void *v214; // r8
  void *v215; // r9
  void *v216; // r10
  void *v217; // r11
  bool v218; // al
  int v219; // eax
  int v220; // [rsp+60h] [rbp-68h] BYREF
  int v221; // [rsp+64h] [rbp-64h]
  unsigned int v222; // [rsp+68h] [rbp-60h]
  _WORD *v223; // [rsp+70h] [rbp-58h]
  int *v224; // [rsp+78h] [rbp-50h]
  __int64 v225; // [rsp+D0h] [rbp+8h]
  int v227; // [rsp+E0h] [rbp+18h]
  __int64 v228; // [rsp+E8h] [rbp+20h]

  v228 = a4;
  v225 = a1;
  v13 = a1;
  v14 = a11;
  v15 = *(_DWORD *)(a1 + 200) & 0x4000;
  v16 = *(_DWORD *)(a1 + 200) & 0x2000;
  v227 = v15;
  v221 = v16;
  v220 = -1;
  if ( a11 && a7 )
  {
    a1 = a8 + 28;
    v17 = a7;
    do
    {
      *(_QWORD *)(a1 - 4) = *(unsigned int *)a1;
      a1 += 48LL;
      --v17;
    }
    while ( v17 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v19 = (char *)(a3 + 8);
  v20 = 0;
  v222 = result;
  if ( (_DWORD)result )
  {
    v21 = a9;
    v22 = a6;
    v223 = v19 + 8;
    v224 = (int *)(v19 + 4);
    do
    {
      if ( (v19[1] & 8) == 0 )
      {
        v23 = *v19;
        if ( !*v19 )
        {
          if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(a1) )
          {
            if ( v16 && !v15 )
              goto LABEL_366;
            if ( !v14 && SepIsPackageSid((__int64)v223) )
            {
              SepMatchPackage(
                v225,
                -1,
                v223,
                *((_DWORD *)v19 + 1),
                (_BYTE *)(a13 + 21),
                (_DWORD *)(a13 + 4),
                (_BYTE *)(a13 + 20),
                (_DWORD *)(a13 + 16),
                (_BYTE *)(a13 + 24));
              *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
              goto LABEL_157;
            }
            if ( v16 && !v15 || v14 || !SepIsCapabilitySid((__int64)(v19 + 8)) )
            {
LABEL_366:
              if ( SepSidInToken(v13, a6, (unsigned __int8 *)v19 + 8, 0, v14, a12) )
              {
                if ( a7 == 1 )
                {
                  *(_DWORD *)(a8 + 28) |= *v224 & ~*(_DWORD *)(a8 + 32);
                }
                else
                {
                  v26 = *(_DWORD *)(a8 + 28);
                  v27 = *v224;
                  a1 = (unsigned int)~*(_DWORD *)(a8 + 32);
                  v28 = v26 | *v224 & ~*(_DWORD *)(a8 + 32);
                  *(_DWORD *)(a8 + 28) = v28;
                  if ( v26 != v28 )
                  {
                    v29 = *(_QWORD *)(a8 + 40);
                    v30 = 0LL;
                    v31 = v27 & a1 & ~v26;
                    a1 = 1LL;
                    if ( v29 )
                    {
                      while ( (_DWORD)a1 )
                      {
                        if ( ((unsigned int)a1 & v31) != 0 && !*(_DWORD *)(v29 + 4 * v30) )
                          *(_DWORD *)(v29 + 4 * v30) = v20 | 0x10000;
                        v30 = (unsigned int)(v30 + 1);
                        a1 = (unsigned int)(2 * a1);
                      }
                    }
                    v32 = *(unsigned int *)(a8 + 20);
                    v33 = 0;
                    v34 = 0;
                    v35 = -1;
                    if ( (_DWORD)v32 != -1 )
                    {
                      for ( i = (unsigned int)(v32 + 1); (unsigned int)i < a7; i = (unsigned int)(i + 1) )
                      {
                        v37 = 48 * i;
                        v38 = *(_WORD *)(48 * i + a8);
                        if ( v38 <= *(_WORD *)(a8 + 48 * v32) )
                          break;
                        if ( v38 == *(_WORD *)a8 )
                        {
                          v33 |= *(_DWORD *)(v37 + a8 + 24);
                          v35 &= *(_DWORD *)(v37 + a8 + 28);
                          v34 |= *(_DWORD *)(v37 + a8 + 32);
                        }
                      }
                      a1 = 6 * v32;
                      if ( v33 != *(_DWORD *)(a8 + 48 * v32 + 24)
                        || v35 != *(_DWORD *)(a8 + 48 * v32 + 28)
                        || v34 != *(_DWORD *)(a8 + 48 * v32 + 32) )
                      {
                        v39 = ~*(_DWORD *)(a8 + 48 * v32 + 28);
                        *(_DWORD *)(a8 + 48 * v32 + 28) = v35;
                        v40 = v35 & v39;
                        if ( v40 )
                        {
                          v41 = *(_QWORD *)(a8 + 48 * v32 + 40);
                          v42 = 0LL;
                          v43 = 1;
                          if ( v41 )
                          {
                            while ( v43 )
                            {
                              if ( (v43 & v40) != 0 && !*(_DWORD *)(v41 + 4 * v42) )
                                *(_DWORD *)(v41 + 4 * v42) = v20 | 0x10000;
                              v42 = (unsigned int)(v42 + 1);
                              v43 *= 2;
                            }
                          }
                        }
                        AuthzBasepUpdateParentTypeList(a8, a7, v32, v20, 1);
                      }
                    }
                  }
                  v44 = 1;
                  if ( a7 > 1 )
                  {
                    v45 = a8 + 76;
                    do
                    {
                      if ( *(_WORD *)(v45 - 28) <= *(_WORD *)a8 )
                        break;
                      v46 = ~*(_DWORD *)(v45 + 4);
                      v47 = v46 & ~*(_DWORD *)v45;
                      a1 = *(_DWORD *)v45 | v27 & (unsigned int)v46;
                      *(_DWORD *)v45 = a1;
                      v48 = v27 & v47;
                      if ( v48 )
                      {
                        v49 = *(_QWORD *)(v45 + 12);
                        v50 = 0LL;
                        a1 = 1LL;
                        if ( v49 )
                        {
                          while ( (_DWORD)a1 )
                          {
                            if ( ((unsigned int)a1 & v48) != 0 && !*(_DWORD *)(v49 + 4 * v50) )
                              *(_DWORD *)(v49 + 4 * v50) = v20 | 0x10000;
                            v50 = (unsigned int)(v50 + 1);
                            a1 = (unsigned int)(2 * a1);
                          }
                        }
                      }
                      ++v44;
                      v45 += 48LL;
                    }
                    while ( v44 < a7 );
                  }
                }
              }
              goto LABEL_157;
            }
            v24 = SepSidInTokenSidHash(v13 + 808, 0LL, (unsigned __int8 *)v19 + 8, 0, 1, 0);
            v25 = (_DWORD *)a13;
            if ( v24 )
            {
              *(_DWORD *)(a13 + 8) |= *((_DWORD *)v19 + 1);
              *(_BYTE *)(a13 + 22) = 1;
            }
LABEL_21:
            *v25 &= ~v25[2];
            goto LABEL_157;
          }
          if ( !v16 && !v14 )
          {
            if ( SepIsPackageSid((__int64)(v19 + 8)) )
              goto LABEL_64;
            if ( SepIsCapabilitySid((__int64)(v19 + 8)) )
            {
              v51 = SepSidInTokenSidHash(v13 + 808, 0LL, (unsigned __int8 *)v19 + 8, 0, 1, 0);
              v25 = (_DWORD *)a13;
              if ( v51 )
              {
                *(_DWORD *)(a13 + 8) |= *((_DWORD *)v19 + 1);
                v52 = ~*(_DWORD *)(a13 + 8);
                *(_BYTE *)(a13 + 22) = 1;
                *(_DWORD *)a13 &= v52;
                goto LABEL_157;
              }
              goto LABEL_21;
            }
          }
          if ( SepSidInToken(v13, a6, (unsigned __int8 *)v19 + 8, 0, v14, a12) )
          {
            if ( a7 == 1 )
            {
              *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
            }
            else
            {
              v53 = *(_DWORD *)(a8 + 28);
              v54 = *((_DWORD *)v19 + 1);
              a1 = (unsigned int)~*(_DWORD *)(a8 + 32);
              v55 = v53 | v54 & ~*(_DWORD *)(a8 + 32);
              *(_DWORD *)(a8 + 28) = v55;
              if ( v53 != v55 )
              {
                v56 = *(_QWORD *)(a8 + 40);
                v57 = 0LL;
                v58 = v54 & a1 & ~v53;
                a1 = 1LL;
                if ( v56 )
                {
                  while ( (_DWORD)a1 )
                  {
                    if ( ((unsigned int)a1 & v58) != 0 && !*(_DWORD *)(v56 + 4 * v57) )
                      *(_DWORD *)(v56 + 4 * v57) = v20 | 0x10000;
                    v57 = (unsigned int)(v57 + 1);
                    a1 = (unsigned int)(2 * a1);
                  }
                }
                v59 = *(unsigned int *)(a8 + 20);
                v60 = 0;
                v61 = 0;
                v62 = -1;
                if ( (_DWORD)v59 != -1 )
                {
                  for ( j = (unsigned int)(v59 + 1); (unsigned int)j < a7; j = (unsigned int)(j + 1) )
                  {
                    v64 = 48 * j;
                    v65 = *(_WORD *)(48 * j + a8);
                    if ( v65 <= *(_WORD *)(a8 + 48 * v59) )
                      break;
                    if ( v65 == *(_WORD *)a8 )
                    {
                      v60 |= *(_DWORD *)(v64 + a8 + 24);
                      v62 &= *(_DWORD *)(v64 + a8 + 28);
                      v61 |= *(_DWORD *)(v64 + a8 + 32);
                    }
                  }
                  a1 = 6 * v59;
                  if ( v60 != *(_DWORD *)(a8 + 48 * v59 + 24)
                    || v62 != *(_DWORD *)(a8 + 48 * v59 + 28)
                    || v61 != *(_DWORD *)(a8 + 48 * v59 + 32) )
                  {
                    v66 = ~*(_DWORD *)(a8 + 48 * v59 + 28);
                    *(_DWORD *)(a8 + 48 * v59 + 28) = v62;
                    v67 = v62 & v66;
                    if ( v67 )
                    {
                      v68 = *(_QWORD *)(a8 + 48 * v59 + 40);
                      v69 = 0LL;
                      v70 = 1;
                      if ( v68 )
                      {
                        while ( v70 )
                        {
                          if ( (v70 & v67) != 0 && !*(_DWORD *)(v68 + 4 * v69) )
                            *(_DWORD *)(v68 + 4 * v69) = v20 | 0x10000;
                          v69 = (unsigned int)(v69 + 1);
                          v70 *= 2;
                        }
                      }
                    }
                    AuthzBasepUpdateParentTypeList(a8, a7, v59, v20, 1);
                  }
                }
              }
              v71 = 1;
              if ( a7 > 1 )
              {
                v72 = a8 + 76;
                do
                {
                  if ( *(_WORD *)(v72 - 28) <= *(_WORD *)a8 )
                    break;
                  v73 = ~*(_DWORD *)(v72 + 4);
                  v74 = v73 & ~*(_DWORD *)v72;
                  a1 = *(_DWORD *)v72 | v54 & (unsigned int)v73;
                  *(_DWORD *)v72 = a1;
                  v75 = v54 & v74;
                  if ( v75 )
                  {
                    v76 = *(_QWORD *)(v72 + 12);
                    v77 = 0LL;
                    a1 = 1LL;
                    if ( v76 )
                    {
                      while ( (_DWORD)a1 )
                      {
                        if ( ((unsigned int)a1 & v75) != 0 && !*(_DWORD *)(v76 + 4 * v77) )
                          *(_DWORD *)(v76 + 4 * v77) = v20 | 0x10000;
                        v77 = (unsigned int)(v77 + 1);
                        a1 = (unsigned int)(2 * a1);
                      }
                    }
                  }
                  ++v71;
                  v72 += 48LL;
                }
                while ( v71 < a7 );
              }
            }
          }
          goto LABEL_157;
        }
        if ( v23 != 5 )
        {
          switch ( v23 )
          {
            case 4:
              if ( SepSidInToken(v13, v22, (unsigned __int8 *)&v19[4 * (unsigned __int8)v19[13] + 20], 0, v14, a12)
                && SepSidInToken(a2, 0LL, (unsigned __int8 *)v19 + 12, 0, 0, a12) )
              {
                if ( a7 == 1 )
                {
                  *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
                }
                else
                {
                  v135 = *(_DWORD *)(a8 + 28);
                  v136 = *((_DWORD *)v19 + 1);
                  a1 = (unsigned int)~*(_DWORD *)(a8 + 32);
                  v137 = v135 | v136 & ~*(_DWORD *)(a8 + 32);
                  *(_DWORD *)(a8 + 28) = v137;
                  if ( v135 != v137 )
                  {
                    v138 = *(_QWORD *)(a8 + 40);
                    v139 = 0LL;
                    v140 = a1 & v136 & ~v135;
                    a1 = 1LL;
                    if ( v138 )
                    {
                      while ( (_DWORD)a1 )
                      {
                        if ( ((unsigned int)a1 & v140) != 0 && !*(_DWORD *)(v138 + 4 * v139) )
                          *(_DWORD *)(v138 + 4 * v139) = v20 | 0x10000;
                        v139 = (unsigned int)(v139 + 1);
                        a1 = (unsigned int)(2 * a1);
                      }
                    }
                    v141 = *(unsigned int *)(a8 + 20);
                    v142 = 0;
                    v143 = 0;
                    v144 = -1;
                    if ( (_DWORD)v141 != -1 )
                    {
                      for ( k = (unsigned int)(v141 + 1); (unsigned int)k < a7; k = (unsigned int)(k + 1) )
                      {
                        v146 = 48 * k;
                        v147 = *(_WORD *)(48 * k + a8);
                        if ( v147 <= *(_WORD *)(a8 + 48 * v141) )
                          break;
                        if ( v147 == *(_WORD *)a8 )
                        {
                          v142 |= *(_DWORD *)(v146 + a8 + 24);
                          v144 &= *(_DWORD *)(v146 + a8 + 28);
                          v143 |= *(_DWORD *)(v146 + a8 + 32);
                        }
                      }
                      a1 = 6 * v141;
                      if ( v142 != *(_DWORD *)(a8 + 48 * v141 + 24)
                        || v144 != *(_DWORD *)(a8 + 48 * v141 + 28)
                        || v143 != *(_DWORD *)(a8 + 48 * v141 + 32) )
                      {
                        v148 = ~*(_DWORD *)(a8 + 48 * v141 + 28);
                        *(_DWORD *)(a8 + 48 * v141 + 28) = v144;
                        v149 = v144 & v148;
                        if ( v149 )
                        {
                          v150 = *(_QWORD *)(a8 + 48 * v141 + 40);
                          v151 = 0LL;
                          v152 = 1;
                          if ( v150 )
                          {
                            while ( v152 )
                            {
                              if ( (v152 & v149) != 0 && !*(_DWORD *)(v150 + 4 * v151) )
                                *(_DWORD *)(v150 + 4 * v151) = v20 | 0x10000;
                              v151 = (unsigned int)(v151 + 1);
                              v152 *= 2;
                            }
                          }
                        }
                        AuthzBasepUpdateParentTypeList(a8, a7, v141, v20, 1);
                      }
                    }
                  }
                  v153 = 1;
                  if ( a7 > 1 )
                  {
                    v154 = a8 + 76;
                    do
                    {
                      if ( *(_WORD *)(v154 - 28) <= *(_WORD *)a8 )
                        break;
                      v155 = ~*(_DWORD *)(v154 + 4);
                      v156 = v155 & ~*(_DWORD *)v154;
                      a1 = *(_DWORD *)v154 | v136 & (unsigned int)v155;
                      *(_DWORD *)v154 = a1;
                      v157 = v136 & v156;
                      if ( v157 )
                      {
                        v158 = *(_QWORD *)(v154 + 12);
                        v159 = 0LL;
                        a1 = 1LL;
                        if ( v158 )
                        {
                          while ( (_DWORD)a1 )
                          {
                            if ( ((unsigned int)a1 & v157) != 0 && !*(_DWORD *)(v158 + 4 * v159) )
                              *(_DWORD *)(v158 + 4 * v159) = v20 | 0x10000;
                            v159 = (unsigned int)(v159 + 1);
                            a1 = (unsigned int)(2 * a1);
                          }
                        }
                      }
                      ++v153;
                      v154 += 48LL;
                    }
                    while ( v153 < a7 );
                  }
                }
              }
              goto LABEL_157;
            case 1:
              if ( SepSidInToken(v13, v22, (unsigned __int8 *)v19 + 8, 1, v14, a12) )
              {
                if ( a7 == 1 )
                {
                  *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
                }
                else
                {
                  v160 = *(_DWORD *)(a8 + 32);
                  v161 = *((_DWORD *)v19 + 1);
                  a1 = (unsigned int)~*(_DWORD *)(a8 + 28);
                  v162 = v160 | a1 & v161;
                  *(_DWORD *)(a8 + 32) = v162;
                  if ( v160 != v162 )
                  {
                    v163 = *(_QWORD *)(a8 + 40);
                    v164 = 0LL;
                    v165 = v161 & a1 & ~v160;
                    a1 = 1LL;
                    if ( v163 )
                    {
                      while ( (_DWORD)a1 )
                      {
                        if ( ((unsigned int)a1 & v165) != 0 && !*(_DWORD *)(v163 + 4 * v164) )
                          *(_DWORD *)(v163 + 4 * v164) = v20 | 0x20000;
                        v164 = (unsigned int)(v164 + 1);
                        a1 = (unsigned int)(2 * a1);
                      }
                    }
                    v166 = *(unsigned int *)(a8 + 20);
                    v167 = 0;
                    v168 = 0;
                    v169 = -1;
                    if ( (_DWORD)v166 != -1 )
                    {
                      for ( m = (unsigned int)(v166 + 1); (unsigned int)m < a7; m = (unsigned int)(m + 1) )
                      {
                        v171 = 48 * m;
                        v172 = *(_WORD *)(48 * m + a8);
                        if ( v172 <= *(_WORD *)(a8 + 48 * v166) )
                          break;
                        if ( v172 == *(_WORD *)a8 )
                        {
                          v167 |= *(_DWORD *)(v171 + a8 + 24);
                          v169 &= *(_DWORD *)(v171 + a8 + 28);
                          v168 |= *(_DWORD *)(v171 + a8 + 32);
                        }
                      }
                      a1 = 6 * v166;
                      if ( v167 != *(_DWORD *)(a8 + 48 * v166 + 24)
                        || v169 != *(_DWORD *)(a8 + 48 * v166 + 28)
                        || v168 != *(_DWORD *)(a8 + 48 * v166 + 32) )
                      {
                        v173 = ~*(_DWORD *)(a8 + 48 * v166 + 32);
                        *(_DWORD *)(a8 + 48 * v166 + 32) = v168;
                        v174 = v168 & v173;
                        if ( v174 )
                        {
                          v175 = *(_QWORD *)(a8 + 48 * v166 + 40);
                          v176 = 0LL;
                          v177 = 1;
                          if ( v175 )
                          {
                            while ( v177 )
                            {
                              if ( (v177 & v174) != 0 && !*(_DWORD *)(v175 + 4 * v176) )
                                *(_DWORD *)(v175 + 4 * v176) = v20 | 0x20000;
                              v176 = (unsigned int)(v176 + 1);
                              v177 *= 2;
                            }
                          }
                        }
                        AuthzBasepUpdateParentTypeList(a8, a7, v166, v20, 2);
                      }
                    }
                  }
                  v178 = 1;
                  if ( a7 > 1 )
                  {
                    v179 = a8 + 80;
                    do
                    {
                      if ( *(_WORD *)(v179 - 32) <= *(_WORD *)a8 )
                        break;
                      v180 = ~*(_DWORD *)(v179 - 4);
                      v181 = v180 & ~*(_DWORD *)v179;
                      a1 = *(_DWORD *)v179 | v161 & (unsigned int)v180;
                      *(_DWORD *)v179 = a1;
                      v182 = v161 & v181;
                      if ( v182 )
                      {
                        v183 = *(_QWORD *)(v179 + 8);
                        v184 = 0LL;
                        a1 = 1LL;
                        if ( v183 )
                        {
                          while ( (_DWORD)a1 )
                          {
                            if ( ((unsigned int)a1 & v182) != 0 && !*(_DWORD *)(v183 + 4 * v184) )
                              *(_DWORD *)(v183 + 4 * v184) = v20 | 0x20000;
                            v184 = (unsigned int)(v184 + 1);
                            a1 = (unsigned int)(2 * a1);
                          }
                        }
                      }
                      ++v178;
                      v179 += 48LL;
                    }
                    while ( v178 < a7 );
                  }
                }
              }
              goto LABEL_157;
            case 6:
              v185 = *((_DWORD *)v19 + 2) & 1;
              if ( !SepSidInToken(
                      v13,
                      v22,
                      (unsigned __int8 *)&v19[16 * v185 + ((8LL * (*((_DWORD *)v19 + 2) & 2)) | 0xC)],
                      1,
                      v14,
                      a12) )
                goto LABEL_157;
              if ( !v185 || v19 == (char *)-12LL )
              {
                if ( a7 == 1 )
                {
                  *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
                }
                else
                {
                  v187 = *(_DWORD *)(a8 + 32);
                  v188 = *((_DWORD *)v19 + 1);
                  a1 = (unsigned int)~*(_DWORD *)(a8 + 28);
                  v189 = v187 | a1 & v188;
                  *(_DWORD *)(a8 + 32) = v189;
                  if ( v187 != v189 )
                  {
                    v190 = *(_QWORD *)(a8 + 40);
                    v191 = 0LL;
                    v192 = a1 & v188 & ~v187;
                    a1 = 1LL;
                    if ( v190 )
                    {
                      while ( (_DWORD)a1 )
                      {
                        if ( (v192 & (unsigned int)a1) != 0 && !*(_DWORD *)(v190 + 4 * v191) )
                          *(_DWORD *)(v190 + 4 * v191) = v20 | 0x20000;
                        v191 = (unsigned int)(v191 + 1);
                        a1 = (unsigned int)(2 * a1);
                      }
                    }
                    v193 = *(unsigned int *)(a8 + 20);
                    v194 = 0;
                    v195 = 0;
                    v196 = -1;
                    if ( (_DWORD)v193 != -1 )
                    {
                      for ( n = (unsigned int)(v193 + 1); (unsigned int)n < a7; n = (unsigned int)(n + 1) )
                      {
                        v198 = 48 * n;
                        v199 = *(_WORD *)(48 * n + a8);
                        if ( v199 <= *(_WORD *)(a8 + 48 * v193) )
                          break;
                        if ( v199 == *(_WORD *)a8 )
                        {
                          v194 |= *(_DWORD *)(v198 + a8 + 24);
                          v196 &= *(_DWORD *)(v198 + a8 + 28);
                          v195 |= *(_DWORD *)(v198 + a8 + 32);
                        }
                      }
                      a1 = 6 * v193;
                      if ( v194 != *(_DWORD *)(a8 + 48 * v193 + 24)
                        || v196 != *(_DWORD *)(a8 + 48 * v193 + 28)
                        || v195 != *(_DWORD *)(a8 + 48 * v193 + 32) )
                      {
                        v200 = ~*(_DWORD *)(a8 + 48 * v193 + 32);
                        *(_DWORD *)(a8 + 48 * v193 + 32) = v195;
                        v201 = v195 & v200;
                        if ( v201 )
                        {
                          v202 = *(_QWORD *)(a8 + 48 * v193 + 40);
                          v203 = 0LL;
                          v204 = 1;
                          if ( v202 )
                          {
                            while ( v204 )
                            {
                              if ( (v204 & v201) != 0 && !*(_DWORD *)(v202 + 4 * v203) )
                                *(_DWORD *)(v202 + 4 * v203) = v20 | 0x20000;
                              v203 = (unsigned int)(v203 + 1);
                              v204 *= 2;
                            }
                          }
                        }
                        AuthzBasepUpdateParentTypeList(a8, a7, v193, v20, 2);
                      }
                    }
                  }
                  v205 = 1;
                  if ( a7 > 1 )
                  {
                    v206 = a8 + 80;
                    do
                    {
                      if ( *(_WORD *)(v206 - 32) <= *(_WORD *)a8 )
                        break;
                      v207 = ~*(_DWORD *)(v206 - 4);
                      v208 = v207 & ~*(_DWORD *)v206;
                      a1 = *(_DWORD *)v206 | v188 & (unsigned int)v207;
                      *(_DWORD *)v206 = a1;
                      v209 = v188 & v208;
                      if ( v209 )
                      {
                        v210 = *(_QWORD *)(v206 + 8);
                        v211 = 0LL;
                        a1 = 1LL;
                        if ( v210 )
                        {
                          while ( (_DWORD)a1 )
                          {
                            if ( (v209 & (unsigned int)a1) != 0 && !*(_DWORD *)(v210 + 4 * v211) )
                              *(_DWORD *)(v210 + 4 * v211) = v20 | 0x20000;
                            v211 = (unsigned int)(v211 + 1);
                            a1 = (unsigned int)(2 * a1);
                          }
                        }
                      }
                      ++v205;
                      v206 += 48LL;
                    }
                    while ( v205 < a7 );
                  }
                }
                goto LABEL_157;
              }
              v21 = a9;
              if ( !a9 )
              {
                *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
                goto LABEL_158;
              }
              v186 = 0LL;
              if ( a7 )
              {
                while ( 1 )
                {
                  a1 = 6 * v186;
                  if ( *((_DWORD *)v19 + 3) == *(_DWORD *)(a8 + 48 * v186 + 4)
                    && *((_DWORD *)v19 + 4) == *(_DWORD *)(a8 + 48 * v186 + 8)
                    && *((_DWORD *)v19 + 5) == *(_DWORD *)(a8 + 48 * v186 + 12)
                    && *((_DWORD *)v19 + 6) == *(_DWORD *)(a8 + 48 * v186 + 16) )
                  {
                    break;
                  }
                  v186 = (unsigned int)(v186 + 1);
                  if ( (unsigned int)v186 >= a7 )
                    goto LABEL_157;
                }
                AuthzBasepAddAccessTypeList(a8, a7, v186, v20, *((_DWORD *)v19 + 1), 2);
              }
LABEL_157:
              v21 = a9;
LABEL_158:
              v22 = a6;
              a4 = v228;
              goto LABEL_159;
          }
          if ( v23 != 9 )
            goto LABEL_159;
          v212 = 4 * (unsigned __int8)v19[9] + 8;
          if ( (int)(*((unsigned __int16 *)v19 + 1) - v212 - 8) <= 0 )
            goto LABEL_159;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v213 = *(_QWORD **)(v13 + 1096);
          if ( v213 )
          {
            v214 = (void *)v213[75];
            v215 = (void *)v213[73];
            v216 = (void *)v213[74];
            v217 = (void *)v213[72];
          }
          else
          {
            v214 = 0LL;
            v215 = 0LL;
            v216 = 0LL;
            v217 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            (_DWORD *)v13,
            *(void **)(v13 + 776),
            *a5,
            v217,
            v216,
            v215,
            v214,
            &v19[v212 + 8],
            *((unsigned __int16 *)v19 + 1) - v212 - 8,
            0,
            v14,
            &v220);
          if ( v220 != 1 )
            goto LABEL_157;
          if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(a1) )
          {
            if ( v16 && !v227 )
              goto LABEL_358;
            if ( v14 )
              goto LABEL_352;
            if ( !SepIsPackageSid((__int64)(v19 + 8)) )
            {
              v16 = v221;
LABEL_352:
              if ( (!v16 || v227) && !v14 )
              {
LABEL_355:
                if ( SepIsCapabilitySid((__int64)(v19 + 8)) )
                {
                  v218 = SepSidInTokenSidHash(v13 + 808, 0LL, (unsigned __int8 *)v19 + 8, 0, 1, 0);
                  v25 = (_DWORD *)a13;
                  if ( v218 )
                  {
                    *(_DWORD *)(a13 + 8) |= *((_DWORD *)v19 + 1);
                    v219 = ~*(_DWORD *)(a13 + 8);
                    *(_BYTE *)(a13 + 22) = 1;
                    *(_DWORD *)a13 &= v219;
                    goto LABEL_157;
                  }
                  goto LABEL_21;
                }
              }
LABEL_358:
              if ( SepSidInToken(v13, a6, (unsigned __int8 *)v19 + 8, 0, v14, a12) )
                AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
              goto LABEL_157;
            }
          }
          else
          {
            if ( v16 || v14 )
              goto LABEL_358;
            if ( !SepIsPackageSid((__int64)(v19 + 8)) )
              goto LABEL_355;
          }
LABEL_64:
          SepMatchPackage(
            v225,
            -1,
            (_WORD *)v19 + 4,
            *((_DWORD *)v19 + 1),
            (_BYTE *)(a13 + 21),
            (_DWORD *)(a13 + 4),
            (_BYTE *)(a13 + 20),
            (_DWORD *)(a13 + 16),
            (_BYTE *)(a13 + 24));
          *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
          goto LABEL_157;
        }
        a1 = *((unsigned int *)v19 + 2);
        v78 = *((_DWORD *)v19 + 2) & 1;
        if ( (a1 & 1) == 0 || v19 == (char *)-12LL )
        {
          if ( SepSidInToken(v13, v22, (unsigned __int8 *)&v19[16 * v78 + ((8 * (a1 & 2)) | 0xC)], 0, v14, a12) )
          {
            if ( a7 == 1 )
            {
              *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
            }
            else
            {
              v110 = *(_DWORD *)(a8 + 28);
              v111 = *((_DWORD *)v19 + 1);
              a1 = (unsigned int)~*(_DWORD *)(a8 + 32);
              v112 = v110 | v111 & ~*(_DWORD *)(a8 + 32);
              *(_DWORD *)(a8 + 28) = v112;
              if ( v110 != v112 )
              {
                v113 = *(_QWORD *)(a8 + 40);
                v114 = 0LL;
                v115 = v111 & a1 & ~v110;
                a1 = 1LL;
                if ( v113 )
                {
                  while ( (_DWORD)a1 )
                  {
                    if ( ((unsigned int)a1 & v115) != 0 && !*(_DWORD *)(v113 + 4 * v114) )
                      *(_DWORD *)(v113 + 4 * v114) = v20 | 0x10000;
                    v114 = (unsigned int)(v114 + 1);
                    a1 = (unsigned int)(2 * a1);
                  }
                }
                v116 = *(unsigned int *)(a8 + 20);
                v117 = 0;
                v118 = 0;
                v119 = -1;
                if ( (_DWORD)v116 != -1 )
                {
                  for ( ii = (unsigned int)(v116 + 1); (unsigned int)ii < a7; ii = (unsigned int)(ii + 1) )
                  {
                    v121 = 48 * ii;
                    v122 = *(_WORD *)(48 * ii + a8);
                    if ( v122 <= *(_WORD *)(a8 + 48 * v116) )
                      break;
                    if ( v122 == *(_WORD *)a8 )
                    {
                      v117 |= *(_DWORD *)(v121 + a8 + 24);
                      v119 &= *(_DWORD *)(v121 + a8 + 28);
                      v118 |= *(_DWORD *)(v121 + a8 + 32);
                    }
                  }
                  a1 = 6 * v116;
                  if ( v117 != *(_DWORD *)(a8 + 48 * v116 + 24)
                    || v119 != *(_DWORD *)(a8 + 48 * v116 + 28)
                    || v118 != *(_DWORD *)(a8 + 48 * v116 + 32) )
                  {
                    v123 = ~*(_DWORD *)(a8 + 48 * v116 + 28);
                    *(_DWORD *)(a8 + 48 * v116 + 28) = v119;
                    v124 = v119 & v123;
                    if ( v124 )
                    {
                      v125 = *(_QWORD *)(a8 + 48 * v116 + 40);
                      v126 = 0LL;
                      v127 = 1;
                      if ( v125 )
                      {
                        while ( v127 )
                        {
                          if ( (v124 & v127) != 0 && !*(_DWORD *)(v125 + 4 * v126) )
                            *(_DWORD *)(v125 + 4 * v126) = v20 | 0x10000;
                          v126 = (unsigned int)(v126 + 1);
                          v127 *= 2;
                        }
                      }
                    }
                    AuthzBasepUpdateParentTypeList(a8, a7, v116, v20, 1);
                  }
                }
              }
              v128 = 1;
              if ( a7 > 1 )
              {
                v129 = a8 + 76;
                do
                {
                  if ( *(_WORD *)(v129 - 28) <= *(_WORD *)a8 )
                    break;
                  v130 = ~*(_DWORD *)(v129 + 4);
                  v131 = v130 & ~*(_DWORD *)v129;
                  a1 = *(_DWORD *)v129 | v111 & (unsigned int)v130;
                  *(_DWORD *)v129 = a1;
                  v132 = v111 & v131;
                  if ( v132 )
                  {
                    v133 = *(_QWORD *)(v129 + 12);
                    v134 = 0LL;
                    a1 = 1LL;
                    if ( v133 )
                    {
                      while ( (_DWORD)a1 )
                      {
                        if ( (v132 & (unsigned int)a1) != 0 && !*(_DWORD *)(v133 + 4 * v134) )
                          *(_DWORD *)(v133 + 4 * v134) = v20 | 0x10000;
                        v134 = (unsigned int)(v134 + 1);
                        a1 = (unsigned int)(2 * a1);
                      }
                    }
                  }
                  ++v128;
                  v129 += 48LL;
                }
                while ( v128 < a7 );
              }
            }
          }
          goto LABEL_157;
        }
        if ( v21 )
        {
          if ( SepSidInToken(
                 v13,
                 v22,
                 (unsigned __int8 *)&v19[16 * v78 + ((8LL * (*((_DWORD *)v19 + 2) & 2)) | 0xC)],
                 0,
                 v14,
                 a12) )
          {
            v79 = 0LL;
            if ( a7 )
            {
              while ( 1 )
              {
                v80 = a8 + 48 * v79;
                if ( *(_QWORD *)(v19 + 12) == *(_QWORD *)(v80 + 4)
                  && *((_DWORD *)v19 + 5) == *(_DWORD *)(v80 + 12)
                  && *((_DWORD *)v19 + 6) == *(_DWORD *)(v80 + 16) )
                {
                  break;
                }
                v79 = (unsigned int)(v79 + 1);
                if ( (unsigned int)v79 >= a7 )
                  goto LABEL_157;
              }
              v81 = *(_DWORD *)(v80 + 28);
              v82 = 0;
              v83 = *((_DWORD *)v19 + 1);
              a1 = (unsigned int)~*(_DWORD *)(v80 + 32);
              v84 = v81 | v83 & ~*(_DWORD *)(v80 + 32);
              *(_DWORD *)(v80 + 28) = v84;
              if ( v81 == v84 )
              {
                v82 = 1;
              }
              else
              {
                v97 = *(_QWORD *)(v80 + 40);
                v98 = 0LL;
                v99 = a1 & v83 & ~v81;
                a1 = 1LL;
                if ( v97 )
                {
                  while ( (_DWORD)a1 )
                  {
                    if ( ((unsigned int)a1 & v99) != 0 && !*(_DWORD *)(v97 + 4 * v98) )
                      *(_DWORD *)(v97 + 4 * v98) = v20 | 0x10000;
                    v98 = (unsigned int)(v98 + 1);
                    a1 = (unsigned int)(2 * a1);
                  }
                }
              }
              if ( a7 != 1 )
              {
                if ( !v82 )
                {
                  v85 = 0;
                  a1 = 6 * v79;
                  v86 = 0;
                  v87 = -1;
                  v88 = *(unsigned int *)(a8 + 48 * v79 + 20);
                  if ( (_DWORD)v88 != -1 )
                  {
                    for ( jj = (unsigned int)(v88 + 1); (unsigned int)jj < a7; jj = (unsigned int)(jj + 1) )
                    {
                      v90 = 48 * jj;
                      v91 = *(_WORD *)(48 * jj + a8);
                      if ( v91 <= *(_WORD *)(a8 + 48 * v88) )
                        break;
                      if ( v91 == *(_WORD *)(a8 + 48 * v79) )
                      {
                        v85 |= *(_DWORD *)(v90 + a8 + 24);
                        v87 &= *(_DWORD *)(v90 + a8 + 28);
                        v86 |= *(_DWORD *)(v90 + a8 + 32);
                      }
                    }
                    a1 = 6 * v88;
                    if ( v85 != *(_DWORD *)(a8 + 48 * v88 + 24)
                      || v87 != *(_DWORD *)(a8 + 48 * v88 + 28)
                      || v86 != *(_DWORD *)(a8 + 48 * v88 + 32) )
                    {
                      v92 = ~*(_DWORD *)(a8 + 48 * v88 + 28);
                      *(_DWORD *)(a8 + 48 * v88 + 28) = v87;
                      v93 = v87 & v92;
                      if ( v93 )
                      {
                        v94 = *(_QWORD *)(a8 + 48 * v88 + 40);
                        v95 = 0LL;
                        v96 = 1;
                        if ( v94 )
                        {
                          while ( v96 )
                          {
                            if ( (v96 & v93) != 0 && !*(_DWORD *)(v94 + 4 * v95) )
                              *(_DWORD *)(v94 + 4 * v95) = v20 | 0x10000;
                            v95 = (unsigned int)(v95 + 1);
                            v96 *= 2;
                          }
                        }
                      }
                      AuthzBasepUpdateParentTypeList(a8, a7, v88, v20, 1);
                    }
                  }
                }
                v100 = (unsigned int)(v79 + 1);
                if ( (unsigned int)v100 < a7 )
                {
                  v101 = 6 * v79;
                  v102 = (unsigned int *)(a8 + 48 * v100 + 28);
                  do
                  {
                    if ( *((_WORD *)v102 - 14) <= *(_WORD *)(a8 + 8 * v101) )
                      break;
                    a1 = *v102;
                    v103 = ~v102[1];
                    v104 = v83 & ~*v102;
                    *v102 = a1 | v103 & v83;
                    v105 = v103 & v104;
                    if ( v105 )
                    {
                      v106 = *(_QWORD *)(v102 + 3);
                      v107 = 0LL;
                      a1 = 1LL;
                      if ( v106 )
                      {
                        while ( (_DWORD)a1 )
                        {
                          if ( ((unsigned int)a1 & v105) != 0 && !*(_DWORD *)(v106 + 4 * v107) )
                            *(_DWORD *)(v106 + 4 * v107) = v20 | 0x10000;
                          v107 = (unsigned int)(v107 + 1);
                          a1 = (unsigned int)(2 * a1);
                        }
                      }
                    }
                    LODWORD(v100) = v100 + 1;
                    v102 += 12;
                  }
                  while ( (unsigned int)v100 < a7 );
                }
              }
              v14 = a11;
            }
          }
          goto LABEL_157;
        }
      }
LABEL_159:
      result = *((unsigned __int16 *)v19 + 1);
      ++v20;
      v223 = (_WORD *)((char *)v223 + result);
      v19 += result;
      v224 = (int *)((char *)v224 + result);
      v13 = v225;
      v16 = v221;
      v15 = v227;
    }
    while ( v20 < v222 );
  }
  if ( v14 && a7 )
  {
    v108 = (_DWORD *)(a8 + 28);
    v109 = a7;
    do
    {
      result = *(v108 - 1) & (*v108 | (unsigned int)~a10);
      *v108 = result;
      v108 += 12;
      --v109;
    }
    while ( v109 );
  }
  return result;
}

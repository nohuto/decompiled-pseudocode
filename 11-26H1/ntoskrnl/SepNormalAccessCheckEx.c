/*
 * XREFs of SepNormalAccessCheckEx @ 0x14051D0B0
 * Callers:
 *     SepAccessCheckEx @ 0x1403AEA10 (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchPackage @ 0x1402FCF70 (SepMatchPackage.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x1403DB410 (SepSidInToken.c)
 *     SepIsPackageSid @ 0x1404591B0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140461B10 (SepIsCapabilitySid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepUpdateParentTypeList @ 0x1404EFD68 (AuthzBasepUpdateParentTypeList.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _DWORD *a14)
{
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // ebp
  int v18; // r12d
  int v20; // r14d
  int *v21; // rbx
  _DWORD *v22; // rax
  int *v23; // rax
  char v24; // r9
  _DWORD *v25; // rbp
  unsigned int v26; // r14d
  char *v27; // r12
  bool v28; // zf
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  int v36; // esi
  int *v37; // rbp
  int v38; // eax
  __int64 v39; // r10
  __int64 v40; // r8
  int v41; // ecx
  unsigned int v42; // ebx
  int *v43; // r10
  int v44; // r9d
  int v45; // r9d
  __int64 v46; // r11
  __int64 v47; // r8
  int v48; // ecx
  int v49; // eax
  int v50; // ebx
  int v51; // esi
  int v52; // eax
  __int64 v53; // r9
  int v54; // ebx
  __int64 v55; // r8
  int v56; // ecx
  unsigned int v57; // ebx
  int *v58; // r10
  int v59; // r9d
  int v60; // r9d
  __int64 v61; // r11
  __int64 v62; // r8
  int v63; // ecx
  int v64; // ecx
  __int64 v65; // rdi
  __int64 v66; // rdx
  int v67; // ecx
  int v68; // ebp
  int v69; // eax
  __int64 v70; // r10
  int v71; // r9d
  __int64 v72; // r8
  int v73; // ecx
  __int64 v74; // rbx
  int *v75; // r10
  int v76; // r9d
  int v77; // r9d
  __int64 v78; // r11
  __int64 v79; // r8
  int v80; // ecx
  int v81; // r9d
  int v82; // esi
  int v83; // eax
  __int64 v84; // r10
  int v85; // r9d
  __int64 v86; // r8
  int v87; // ecx
  unsigned int v88; // ebx
  int *v89; // r10
  int v90; // r9d
  int v91; // r9d
  __int64 v92; // r11
  __int64 v93; // r8
  int v94; // ecx
  int v95; // ecx
  int v96; // esi
  int v97; // eax
  __int64 v98; // r10
  int v99; // r9d
  __int64 v100; // r8
  int v101; // ecx
  unsigned int v102; // ebx
  __int64 v103; // r10
  int v104; // r9d
  __int64 v105; // r11
  __int64 v106; // r8
  int v107; // ecx
  int v108; // r9d
  __int64 v109; // r10
  __int64 v110; // rdx
  int v111; // ecx
  unsigned int v112; // ebx
  __int64 v113; // r8
  __int64 v114; // rdx
  int *v115; // r10
  __int64 v116; // r11
  __int64 v117; // r8
  __int64 v118; // rdx
  int v119; // r9d
  int v120; // ecx
  unsigned int v121; // ebx
  _QWORD *v122; // rax
  void *v123; // r8
  void *v124; // r9
  void *v125; // r10
  void *v126; // r11
  __int64 v127; // rcx
  __int64 v128; // rcx
  int v129; // ebx
  int v130; // esi
  int v131; // eax
  __int64 v132; // r10
  __int64 v133; // r8
  int v134; // ecx
  unsigned int v135; // ebx
  int *v136; // r10
  int v137; // r9d
  int v138; // r9d
  __int64 v139; // r11
  __int64 v140; // r8
  int v141; // ecx
  int v142; // ebx
  int v143; // esi
  int v144; // eax
  __int64 v145; // r10
  __int64 v146; // r8
  int v147; // ecx
  unsigned int v148; // ebx
  int *v149; // r10
  int v150; // r9d
  int v151; // r9d
  __int64 v152; // r11
  __int64 v153; // r8
  int v154; // ecx
  unsigned int v155; // ebx
  _QWORD *v156; // rax
  void *v157; // r8
  void *v158; // r9
  void *v159; // r10
  void *v160; // r11
  int v161; // r9d
  __int64 v162; // r10
  __int64 v163; // rdx
  int v164; // ecx
  int v166; // [rsp+60h] [rbp-58h]
  int v167; // [rsp+64h] [rbp-54h]
  int v168; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v169; // [rsp+6Ch] [rbp-4Ch]
  int *v170; // [rsp+70h] [rbp-48h]
  int v173; // [rsp+D8h] [rbp+20h]
  int v174; // [rsp+F0h] [rbp+38h]

  v15 = 0LL;
  v16 = *(unsigned __int16 *)(a4 + 4);
  v17 = *(_DWORD *)(a2 + 200) & 0x4000;
  v18 = *(_DWORD *)(a2 + 200) & 0x2000;
  v168 = 0;
  v173 = 0;
  v174 = 0;
  v20 = 0;
  v167 = v17;
  v21 = (int *)(a9 + 24);
  v166 = v18;
  v169 = v16;
  if ( a8 )
  {
    v22 = (_DWORD *)(a9 + 24);
    v15 = a8;
    do
    {
      *v22 = a1;
      v22 += 12;
      --v15;
    }
    while ( v15 );
  }
  LODWORD(v23) = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v15);
  if ( (_DWORD)v23 )
  {
    v23 = (int *)(a9 + 24);
    if ( v18 )
    {
      if ( !v17 )
      {
LABEL_10:
        v174 = v20;
        v170 = v21;
LABEL_15:
        v24 = a11;
        v25 = a14;
        goto LABEL_16;
      }
      v23 = (int *)(a9 + 24);
    }
    if ( !a11 )
    {
      v21 = v23;
      v20 = *a14 | a1;
      v173 = v20;
    }
    goto LABEL_10;
  }
  v170 = (int *)(a9 + 24);
  if ( v18 )
    goto LABEL_15;
  v24 = a11;
  v25 = a14;
  v170 = (int *)(a9 + 24);
  if ( !a11 )
  {
    v170 = (int *)(a9 + 24);
    v173 = *a14 | a1;
    v174 = v173;
  }
LABEL_16:
  v26 = 0;
  v27 = (char *)(a4 + 8);
  v28 = v169 == 0;
  if ( v169 )
  {
    v29 = a5;
    while ( 1 )
    {
      v30 = (unsigned int)*v21;
      if ( !(_DWORD)v30 && !v173 )
      {
LABEL_193:
        v28 = v26 == v169;
        break;
      }
      if ( (v27[1] & 8) == 0 && ((_DWORD)v30 || !*v27 || *v27 == 9) )
      {
        v31 = *v27;
        if ( !*v27 )
        {
          if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v30) )
          {
            v32 = v166;
            if ( !v166 || v167 )
            {
              if ( !a11 && v173 )
              {
                if ( SepIsPackageSid((__int64)(v27 + 8)) )
                  goto LABEL_31;
                v32 = v166;
              }
              if ( (!v32 || v167) && !a11 && v173 )
              {
                if ( SepIsCapabilitySid((__int64)(v27 + 8)) )
                  goto LABEL_226;
                v21 = v170;
              }
            }
            v35 = *v21;
            if ( !v35 || !SepSidInToken(a2, 0LL, (unsigned __int8 *)v27 + 8, 0, a11, a12) )
              goto LABEL_33;
            v36 = *((_DWORD *)v27 + 1);
            v37 = v170;
            v38 = v35 & ~v36;
            *v170 = v38;
            if ( v35 != v38 )
            {
              v39 = *(_QWORD *)(a9 + 40);
              v40 = 0LL;
              v41 = 1;
              if ( v39 )
              {
                while ( v41 )
                {
                  if ( (v41 & v35 & v36) != 0 && !*(_DWORD *)(v39 + 4 * v40) )
                    *(_DWORD *)(v39 + 4 * v40) = v26 | 0x10000;
                  v40 = (unsigned int)(v40 + 1);
                  v41 *= 2;
                }
              }
              if ( a8 != 1 )
              {
                AuthzBasepUpdateParentTypeList(a9, a8, 0, v26, 0);
                v42 = 1;
                if ( a8 > 1 )
                {
                  v43 = (int *)(a9 + 72);
                  do
                  {
                    if ( *((_WORD *)v43 - 12) <= *(_WORD *)a9 )
                      break;
                    v44 = *v43;
                    *v43 &= ~v36;
                    v45 = v36 & v44;
                    if ( v45 )
                    {
                      v46 = *((_QWORD *)v43 + 2);
                      v47 = 0LL;
                      v48 = 1;
                      if ( v46 )
                      {
                        while ( v48 )
                        {
                          if ( (v48 & v45) != 0 && !*(_DWORD *)(v46 + 4 * v47) )
                            *(_DWORD *)(v46 + 4 * v47) = v26 | 0x10000;
                          v47 = (unsigned int)(v47 + 1);
                          v48 *= 2;
                        }
                      }
                    }
                    ++v42;
                    v43 += 12;
                  }
                  while ( v42 < a8 );
                }
              }
            }
            goto LABEL_65;
          }
          if ( !v166 && !a11 && v173 )
          {
            if ( SepIsPackageSid((__int64)(v27 + 8)) )
              goto LABEL_31;
            if ( SepIsCapabilitySid((__int64)(v27 + 8)) )
            {
              if ( SepSidInTokenSidHash(a2 + 808, 0LL, (unsigned __int8 *)v27 + 8, 0, 1, 0) )
              {
                v25[2] |= v174 & *((_DWORD *)v27 + 1);
                *((_BYTE *)v25 + 22) = 1;
              }
              v49 = ~v25[2];
              *v25 &= v49;
              v173 &= v49;
              goto LABEL_34;
            }
          }
          v50 = *v21;
          if ( !v50 || !SepSidInToken(a2, 0LL, (unsigned __int8 *)v27 + 8, 0, a11, a12) )
            goto LABEL_33;
          v51 = *((_DWORD *)v27 + 1);
          v37 = v170;
          v52 = v50 & ~v51;
          *v170 = v52;
          if ( v50 != v52 )
          {
            v53 = *(_QWORD *)(a9 + 40);
            v54 = v51 & v50;
            v55 = 0LL;
            v56 = 1;
            if ( v53 )
            {
              while ( v56 )
              {
                if ( (v56 & v54) != 0 && !*(_DWORD *)(v53 + 4 * v55) )
                  *(_DWORD *)(v53 + 4 * v55) = v26 | 0x10000;
                v55 = (unsigned int)(v55 + 1);
                v56 *= 2;
              }
            }
            if ( a8 != 1 )
            {
              AuthzBasepUpdateParentTypeList(a9, a8, 0, v26, 0);
              v57 = 1;
              if ( a8 > 1 )
              {
                v58 = (int *)(a9 + 72);
                while ( *((_WORD *)v58 - 12) > *(_WORD *)a9 )
                {
                  v59 = *v58;
                  *v58 &= ~v51;
                  v60 = v51 & v59;
                  if ( v60 )
                  {
                    v61 = *((_QWORD *)v58 + 2);
                    v62 = 0LL;
                    v63 = 1;
                    if ( v61 )
                    {
                      while ( v63 )
                      {
                        if ( (v63 & v60) != 0 && !*(_DWORD *)(v61 + 4 * v62) )
                          *(_DWORD *)(v61 + 4 * v62) = v26 | 0x10000;
                        v62 = (unsigned int)(v62 + 1);
                        v63 *= 2;
                      }
                    }
                  }
                  ++v57;
                  v58 += 12;
                  if ( v57 >= a8 )
                  {
                    v21 = v37;
                    goto LABEL_34;
                  }
                }
              }
            }
          }
          goto LABEL_65;
        }
        switch ( v31 )
        {
          case 5u:
            v64 = *((_DWORD *)v27 + 2);
            if ( (v64 & 1) == 0 )
              goto LABEL_128;
            if ( v27 == (char *)-12LL )
            {
              v21 = v170;
LABEL_128:
              if ( SepSidInToken(
                     a2,
                     0LL,
                     (unsigned __int8 *)&v27[16 * (v64 & 1) + ((8LL * (v64 & 2)) | 0xC)],
                     0,
                     v24,
                     a12) )
              {
                v81 = *v21;
                v82 = *((_DWORD *)v27 + 1);
                v83 = *v21 & ~v82;
                *v21 = v83;
                if ( v81 != v83 )
                {
                  v84 = *(_QWORD *)(a9 + 40);
                  v85 = v82 & v81;
                  v86 = 0LL;
                  v87 = 1;
                  if ( v84 )
                  {
                    while ( v87 )
                    {
                      if ( (v87 & v85) != 0 && !*(_DWORD *)(v84 + 4 * v86) )
                        *(_DWORD *)(v84 + 4 * v86) = v26 | 0x10000;
                      v86 = (unsigned int)(v86 + 1);
                      v87 *= 2;
                    }
                  }
                  if ( a8 != 1 )
                  {
                    AuthzBasepUpdateParentTypeList(a9, a8, 0, v26, 0);
                    v88 = 1;
                    if ( a8 > 1 )
                    {
                      v89 = (int *)(a9 + 72);
                      do
                      {
                        if ( *((_WORD *)v89 - 12) <= *(_WORD *)a9 )
                          break;
                        v90 = *v89;
                        *v89 &= ~v82;
                        v91 = v82 & v90;
                        if ( v91 )
                        {
                          v92 = *((_QWORD *)v89 + 2);
                          v93 = 0LL;
                          v94 = 1;
                          if ( v92 )
                          {
                            while ( v94 )
                            {
                              if ( (v94 & v91) != 0 && !*(_DWORD *)(v92 + 4 * v93) )
                                *(_DWORD *)(v92 + 4 * v93) = v26 | 0x10000;
                              v93 = (unsigned int)(v93 + 1);
                              v94 *= 2;
                            }
                          }
                        }
                        ++v88;
                        v89 += 12;
                      }
                      while ( v88 < a8 );
                    }
                    goto LABEL_33;
                  }
                }
              }
              goto LABEL_34;
            }
            if ( a10 )
            {
              if ( SepSidInToken(
                     a2,
                     0LL,
                     (unsigned __int8 *)&v27[16 * (v64 & 1) + ((8LL * (*((_DWORD *)v27 + 2) & 2)) | 0xC)],
                     0,
                     v24,
                     a12) )
              {
                v65 = 0LL;
                if ( a8 )
                {
                  while ( 1 )
                  {
                    v66 = a9 + 48 * v65;
                    if ( *(_QWORD *)(v27 + 12) == *(_QWORD *)(v66 + 4)
                      && *((_DWORD *)v27 + 5) == *(_DWORD *)(v66 + 12)
                      && *((_DWORD *)v27 + 6) == *(_DWORD *)(v66 + 16) )
                    {
                      break;
                    }
                    v65 = (unsigned int)(v65 + 1);
                    if ( (unsigned int)v65 >= a8 )
                      goto LABEL_33;
                  }
                  v67 = *(_DWORD *)(v66 + 24);
                  v68 = *((_DWORD *)v27 + 1);
                  v69 = v67 & ~v68;
                  *(_DWORD *)(v66 + 24) = v69;
                  if ( v67 != v69 )
                  {
                    v70 = *(_QWORD *)(v66 + 40);
                    v71 = v67 & v68;
                    v72 = 0LL;
                    v73 = 1;
                    if ( v70 )
                    {
                      while ( v73 )
                      {
                        if ( (v73 & v71) != 0 && !*(_DWORD *)(v70 + 4 * v72) )
                          *(_DWORD *)(v70 + 4 * v72) = v26 | 0x10000;
                        v72 = (unsigned int)(v72 + 1);
                        v73 *= 2;
                      }
                    }
                    if ( a8 != 1 )
                    {
                      AuthzBasepUpdateParentTypeList(a9, a8, v65, v26, 0);
                      v74 = (unsigned int)(v65 + 1);
                      if ( (unsigned int)v74 < a8 )
                      {
                        v75 = (int *)(a9 + 48 * v74 + 24);
                        do
                        {
                          if ( *((_WORD *)v75 - 12) <= *(_WORD *)(a9 + 48 * v65) )
                            break;
                          v76 = *v75;
                          *v75 &= ~v68;
                          v77 = v68 & v76;
                          if ( v77 )
                          {
                            v78 = *((_QWORD *)v75 + 2);
                            v79 = 0LL;
                            v80 = 1;
                            if ( v78 )
                            {
                              while ( v80 )
                              {
                                if ( (v80 & v77) != 0 && !*(_DWORD *)(v78 + 4 * v79) )
                                  *(_DWORD *)(v78 + 4 * v79) = v26 | 0x10000;
                                v79 = (unsigned int)(v79 + 1);
                                v80 *= 2;
                              }
                            }
                          }
                          LODWORD(v74) = v74 + 1;
                          v75 += 12;
                        }
                        while ( (unsigned int)v74 < a8 );
                      }
                    }
                  }
                }
              }
              goto LABEL_33;
            }
LABEL_299:
            v21 = v170;
            goto LABEL_35;
          case 4u:
            if ( SepSidInToken(a2, 0LL, (unsigned __int8 *)&v27[4 * (unsigned __int8)v27[13] + 20], 0, a11, a12)
              && SepSidInToken(a3, 0LL, (unsigned __int8 *)v27 + 12, 0, a11, a12) )
            {
              v95 = *v21;
              v96 = *((_DWORD *)v27 + 1);
              v97 = *v21 & ~v96;
              *v21 = v97;
              if ( v95 != v97 )
              {
                v98 = *(_QWORD *)(a9 + 40);
                v99 = v95 & v96;
                v100 = 0LL;
                v101 = 1;
                if ( v98 )
                {
                  while ( v101 )
                  {
                    if ( (v101 & v99) != 0 && !*(_DWORD *)(v98 + 4 * v100) )
                      *(_DWORD *)(v98 + 4 * v100) = v26 | 0x10000;
                    v100 = (unsigned int)(v100 + 1);
                    v101 *= 2;
                  }
                }
                if ( a8 != 1 )
                {
                  AuthzBasepUpdateParentTypeList(a9, a8, 0, v26, 0);
                  v102 = 1;
                  if ( a8 > 1 )
                  {
                    v103 = a9 + 72;
                    do
                    {
                      if ( *(_WORD *)(v103 - 24) <= *(_WORD *)a9 )
                        break;
                      v104 = *(_DWORD *)v103 & v96;
                      *(_DWORD *)v103 &= ~v96;
                      if ( v104 )
                      {
                        v105 = *(_QWORD *)(v103 + 16);
                        v106 = 0LL;
                        v107 = 1;
                        if ( v105 )
                        {
                          while ( v107 )
                          {
                            if ( (v107 & v104) != 0 && !*(_DWORD *)(v105 + 4 * v106) )
                              *(_DWORD *)(v105 + 4 * v106) = v26 | 0x10000;
                            v106 = (unsigned int)(v106 + 1);
                            v107 *= 2;
                          }
                        }
                      }
                      ++v102;
                      v103 += 48LL;
                    }
                    while ( v102 < a8 );
                  }
                  goto LABEL_33;
                }
              }
            }
            goto LABEL_34;
          case 1u:
            LOBYTE(v23) = SepSidInToken(a2, 0LL, (unsigned __int8 *)v27 + 8, 1, v24, a12);
            if ( (_BYTE)v23 )
            {
              v108 = *v21 & *((_DWORD *)v27 + 1);
              if ( v108 )
              {
                v109 = *(_QWORD *)(a9 + 40);
                v110 = 0LL;
                v111 = 1;
                if ( v109 )
                {
                  while ( v111 )
                  {
                    if ( (v111 & v108) != 0 && !*(_DWORD *)(v109 + 4 * v110) )
                    {
                      LOBYTE(v23) = v26;
                      *(_DWORD *)(v109 + 4 * v110) = v26 | 0x20000;
                    }
                    v110 = (unsigned int)(v110 + 1);
                    v111 *= 2;
                  }
                }
                goto LABEL_193;
              }
            }
            goto LABEL_34;
          case 6u:
            v112 = *((_DWORD *)v27 + 2) & 1;
            if ( !SepSidInToken(
                    a2,
                    0LL,
                    (unsigned __int8 *)&v27[16 * v112 + ((8LL * (*((_DWORD *)v27 + 2) & 2)) | 0xC)],
                    1,
                    v24,
                    a12) )
              goto LABEL_33;
            if ( v112 && v27 != (char *)-12LL && a10 )
            {
              v113 = 0LL;
              if ( a8 )
              {
                while ( 1 )
                {
                  v114 = a9 + 48 * v113;
                  if ( *(_QWORD *)(v27 + 12) == *(_QWORD *)(v114 + 4)
                    && *((_DWORD *)v27 + 5) == *(_DWORD *)(v114 + 12)
                    && *((_DWORD *)v27 + 6) == *(_DWORD *)(v114 + 16) )
                  {
                    break;
                  }
                  v113 = (unsigned int)(v113 + 1);
                  if ( (unsigned int)v113 >= a8 )
                    goto LABEL_33;
                }
                LODWORD(v23) = *(_DWORD *)(v114 + 24);
                if ( ((unsigned int)v23 & *((_DWORD *)v27 + 1)) != 0 )
                  goto LABEL_193;
              }
              goto LABEL_33;
            }
            v21 = v170;
            LODWORD(v23) = *((_DWORD *)v27 + 1);
            if ( ((unsigned int)v23 & *v170) != 0 )
              goto LABEL_193;
LABEL_34:
            v29 = a5;
            goto LABEL_35;
          case 9u:
            v121 = 4 * (unsigned __int8)v27[9] + 8;
            if ( *((unsigned __int16 *)v27 + 1) - v121 != 8 )
            {
              if ( v29 && !*a6 )
                AuthzBasepInitializeResourceClaimsFromSacl(v29, a6);
              v122 = *(_QWORD **)(a2 + 1096);
              if ( v122 )
              {
                v123 = (void *)v122[75];
                v124 = (void *)v122[73];
                v125 = (void *)v122[74];
                v126 = (void *)v122[72];
              }
              else
              {
                v123 = 0LL;
                v124 = 0LL;
                v125 = 0LL;
                v126 = 0LL;
              }
              AuthzBasepEvaluateAceCondition(
                (_DWORD *)a2,
                *(void **)(a2 + 776),
                *a6,
                v126,
                v125,
                v124,
                v123,
                &v27[v121 + 8],
                *((unsigned __int16 *)v27 + 1) - v121 - 8,
                0,
                a11,
                &v168);
              if ( v168 != 1 )
                goto LABEL_33;
              if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v127) )
              {
                if ( v166 && !v167 )
                  goto LABEL_230;
                if ( a11 || !v173 || !SepIsPackageSid((__int64)(v27 + 8)) )
                {
                  if ( (!v166 || v167) && !a11 && v173 && SepIsCapabilitySid((__int64)(v27 + 8)) )
                  {
LABEL_226:
                    v128 = a2 + 808;
                    goto LABEL_227;
                  }
LABEL_230:
                  v37 = v170;
                  v129 = *v170;
                  if ( *v170 )
                  {
                    if ( SepSidInToken(a2, 0LL, (unsigned __int8 *)v27 + 8, 0, a11, a12) )
                    {
                      v130 = *((_DWORD *)v27 + 1);
                      v131 = v129 & ~v130;
                      *v37 = v131;
                      if ( v129 != v131 )
                      {
                        v132 = *(_QWORD *)(a9 + 40);
                        v133 = 0LL;
                        v134 = 1;
                        if ( v132 )
                        {
                          while ( v134 )
                          {
                            if ( (v134 & v129 & v130) != 0 && !*(_DWORD *)(v132 + 4 * v133) )
                              *(_DWORD *)(v132 + 4 * v133) = v26 | 0x10000;
                            v133 = (unsigned int)(v133 + 1);
                            v134 *= 2;
                          }
                        }
                        if ( a8 != 1 )
                        {
                          AuthzBasepUpdateParentTypeList(a9, a8, 0, v26, 0);
                          v135 = 1;
                          if ( a8 > 1 )
                          {
                            v136 = (int *)(a9 + 72);
                            while ( *((_WORD *)v136 - 12) > *(_WORD *)a9 )
                            {
                              v137 = *v136;
                              *v136 &= ~v130;
                              v138 = v130 & v137;
                              if ( v138 )
                              {
                                v139 = *((_QWORD *)v136 + 2);
                                v140 = 0LL;
                                v141 = 1;
                                if ( v139 )
                                {
                                  while ( v141 )
                                  {
                                    if ( (v141 & v138) != 0 && !*(_DWORD *)(v139 + 4 * v140) )
                                      *(_DWORD *)(v139 + 4 * v140) = v26 | 0x10000;
                                    v140 = (unsigned int)(v140 + 1);
                                    v141 *= 2;
                                  }
                                }
                              }
                              ++v135;
                              v136 += 12;
                              if ( v135 >= a8 )
                              {
                                v21 = v37;
                                goto LABEL_34;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_65:
                  v21 = v37;
                  goto LABEL_34;
                }
LABEL_31:
                SepMatchPackage(
                  a2,
                  v174,
                  (_WORD *)v27 + 4,
                  *((_DWORD *)v27 + 1),
                  (_BYTE *)v25 + 21,
                  v25 + 1,
                  (_BYTE *)v25 + 20,
                  v25 + 4,
                  (_BYTE *)v25 + 24);
                v33 = v25[1];
              }
              else
              {
                if ( v166 || a11 || !v173 )
                  goto LABEL_258;
                if ( SepIsPackageSid((__int64)(v27 + 8)) )
                  goto LABEL_31;
                if ( !SepIsCapabilitySid((__int64)(v27 + 8)) )
                {
LABEL_258:
                  v37 = v170;
                  v142 = *v170;
                  if ( *v170 )
                  {
                    if ( SepSidInToken(a2, 0LL, (unsigned __int8 *)v27 + 8, 0, a11, a12) )
                    {
                      v143 = *((_DWORD *)v27 + 1);
                      v144 = v142 & ~v143;
                      *v37 = v144;
                      if ( v142 != v144 )
                      {
                        v145 = *(_QWORD *)(a9 + 40);
                        v146 = 0LL;
                        v147 = 1;
                        if ( v145 )
                        {
                          while ( v147 )
                          {
                            if ( (v147 & v142 & v143) != 0 && !*(_DWORD *)(v145 + 4 * v146) )
                              *(_DWORD *)(v145 + 4 * v146) = v26 | 0x10000;
                            v146 = (unsigned int)(v146 + 1);
                            v147 *= 2;
                          }
                        }
                        if ( a8 != 1 )
                        {
                          AuthzBasepUpdateParentTypeList(a9, a8, 0, v26, 0);
                          v148 = 1;
                          if ( a8 > 1 )
                          {
                            v149 = (int *)(a9 + 72);
                            while ( *((_WORD *)v149 - 12) > *(_WORD *)a9 )
                            {
                              v150 = *v149;
                              *v149 &= ~v143;
                              v151 = v143 & v150;
                              if ( v151 )
                              {
                                v152 = *((_QWORD *)v149 + 2);
                                v153 = 0LL;
                                v154 = 1;
                                if ( v152 )
                                {
                                  while ( v154 )
                                  {
                                    if ( (v154 & v151) != 0 && !*(_DWORD *)(v152 + 4 * v153) )
                                      *(_DWORD *)(v152 + 4 * v153) = v26 | 0x10000;
                                    v153 = (unsigned int)(v153 + 1);
                                    v154 *= 2;
                                  }
                                }
                              }
                              ++v148;
                              v149 += 12;
                              if ( v148 >= a8 )
                              {
                                v21 = v37;
                                goto LABEL_34;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_65;
                }
                v128 = a2 + 808;
LABEL_227:
                if ( SepSidInTokenSidHash(v128, 0LL, (unsigned __int8 *)v27 + 8, 0, 1, 0) )
                {
                  v25[2] |= v174 & *((_DWORD *)v27 + 1);
                  *((_BYTE *)v25 + 22) = 1;
                }
                v33 = v25[2];
              }
              v34 = ~v33;
              *v25 &= v34;
              v173 &= v34;
              goto LABEL_33;
            }
            goto LABEL_299;
        }
        if ( a13 && v31 == 10 && KeGetCurrentIrql() < 2u )
        {
          v155 = 4 * (unsigned __int8)v27[9] + 8;
          if ( *((unsigned __int16 *)v27 + 1) - v155 != 8 )
          {
            if ( v29 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(v29, a6);
            v156 = *(_QWORD **)(a2 + 1096);
            if ( v156 )
            {
              v157 = (void *)v156[75];
              v158 = (void *)v156[73];
              v159 = (void *)v156[74];
              v160 = (void *)v156[72];
            }
            else
            {
              v157 = 0LL;
              v158 = 0LL;
              v159 = 0LL;
              v160 = 0LL;
            }
            AuthzBasepEvaluateAceCondition(
              (_DWORD *)a2,
              *(void **)(a2 + 776),
              *a6,
              v160,
              v159,
              v158,
              v157,
              &v27[v155 + 8],
              *((unsigned __int16 *)v27 + 1) - v155 - 8,
              1u,
              a11,
              &v168);
            if ( ((v168 + 1) & 0xFFFFFFFD) == 0 )
            {
              LOBYTE(v23) = SepSidInToken(a2, 0LL, (unsigned __int8 *)v27 + 8, 1, a11, a12);
              v21 = v170;
              if ( (_BYTE)v23 )
              {
                v161 = *v170 & *((_DWORD *)v27 + 1);
                if ( v161 )
                {
                  v162 = *(_QWORD *)(a9 + 40);
                  v163 = 0LL;
                  v164 = 1;
                  if ( v162 )
                  {
                    while ( v164 )
                    {
                      if ( (v164 & v161) != 0 && !*(_DWORD *)(v162 + 4 * v163) )
                      {
                        LOBYTE(v23) = v26;
                        *(_DWORD *)(v162 + 4 * v163) = v26 | 0x20000;
                      }
                      v163 = (unsigned int)(v163 + 1);
                      v164 *= 2;
                    }
                  }
                  goto LABEL_193;
                }
              }
              goto LABEL_34;
            }
LABEL_33:
            v21 = v170;
            goto LABEL_34;
          }
          goto LABEL_299;
        }
      }
LABEL_35:
      v23 = (int *)*((unsigned __int16 *)v27 + 1);
      ++v26;
      v27 = &v27[(_QWORD)v23];
      v28 = v26 == v169;
      if ( v26 >= v169 )
        break;
      v25 = a14;
      v24 = a11;
    }
  }
  if ( v28 )
  {
    v115 = (int *)(a9 + 24);
    if ( *(_DWORD *)(a9 + 24) )
    {
      if ( a8 )
      {
        v116 = a8;
        do
        {
          v117 = *((_QWORD *)v115 + 2);
          v118 = 0LL;
          v119 = *v115;
          v120 = 1;
          if ( v117 )
          {
            while ( v120 )
            {
              if ( (v120 & v119) != 0 && !*(_DWORD *)(v117 + 4 * v118) )
                *(_DWORD *)(v117 + 4 * v118) = 0x800000;
              v118 = (unsigned int)(v118 + 1);
              v120 *= 2;
            }
          }
          v115 += 12;
          --v116;
        }
        while ( v116 );
      }
    }
  }
  return (char)v23;
}

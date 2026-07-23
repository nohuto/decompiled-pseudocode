/*
 * XREFs of SepNormalAccessCheck @ 0x14051BF40
 * Callers:
 *     SepAccessCheck @ 0x1405196A0 (SepAccessCheck.c)
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

__int64 __fastcall SepNormalAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        _DWORD *a13)
{
  int v13; // r14d
  int v14; // ebp
  unsigned int v15; // eax
  int v16; // r13d
  int v18; // edi
  int *v19; // rbx
  _DWORD *v20; // rax
  __int64 result; // rax
  char v22; // r9
  _DWORD *v23; // rbp
  unsigned int v24; // r14d
  char *v25; // r13
  int v26; // edi
  unsigned __int8 *v27; // r10
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // al
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // ebx
  int v36; // edi
  int v37; // edi
  int *v38; // rbp
  int v39; // eax
  __int64 v40; // r9
  int v41; // ebx
  __int64 v42; // r8
  int v43; // ecx
  unsigned int v44; // ebx
  int *v45; // r10
  int v46; // ecx
  int v47; // r9d
  __int64 v48; // r11
  __int64 v49; // r8
  int v50; // ecx
  int v51; // eax
  int v52; // ebx
  int v53; // edi
  int v54; // edi
  int v55; // eax
  __int64 v56; // r9
  int v57; // ebx
  __int64 v58; // r8
  int v59; // ecx
  unsigned int v60; // ebx
  int *v61; // r10
  int v62; // ecx
  int v63; // r9d
  __int64 v64; // r11
  __int64 v65; // r8
  int v66; // ecx
  int v67; // ecx
  __int64 v68; // rdi
  __int64 v69; // rdx
  int v70; // r9d
  int v71; // ebp
  int v72; // eax
  __int64 v73; // r10
  int v74; // r9d
  __int64 v75; // r8
  int v76; // ecx
  __int64 v77; // rbx
  int *v78; // r10
  int v79; // ecx
  int v80; // r9d
  __int64 v81; // r11
  __int64 v82; // r8
  int v83; // ecx
  int v84; // r9d
  int v85; // esi
  int v86; // eax
  __int64 v87; // r10
  int v88; // r9d
  __int64 v89; // r8
  int v90; // ecx
  unsigned int v91; // ebx
  int *v92; // r10
  int v93; // ecx
  int v94; // r9d
  __int64 v95; // r11
  __int64 v96; // r8
  int v97; // ecx
  int v98; // ecx
  int v99; // esi
  int v100; // eax
  __int64 v101; // r10
  int v102; // r9d
  __int64 v103; // r8
  int v104; // ecx
  unsigned int v105; // ebx
  int *v106; // r10
  int v107; // ecx
  int v108; // r9d
  __int64 v109; // r11
  __int64 v110; // r8
  int v111; // ecx
  unsigned int v112; // ebx
  __int64 v113; // r8
  __int64 v114; // rdx
  unsigned int v115; // ebx
  _QWORD *v116; // rax
  void *v117; // r8
  void *v118; // r9
  void *v119; // r10
  void *v120; // r11
  __int64 v121; // rcx
  int v122; // ebx
  int v123; // esi
  int v124; // eax
  __int64 v125; // r10
  __int64 v126; // r8
  int v127; // ecx
  unsigned int v128; // ebx
  int *v129; // r10
  int v130; // r9d
  int v131; // r9d
  __int64 v132; // r11
  __int64 v133; // r8
  int v134; // ecx
  int v135; // eax
  int v136; // ebx
  int v137; // esi
  int v138; // eax
  __int64 v139; // r10
  __int64 v140; // r8
  int v141; // ecx
  unsigned int v142; // ebx
  int *v143; // r10
  int v144; // r9d
  int v145; // r9d
  __int64 v146; // r11
  __int64 v147; // r8
  int v148; // ecx
  int v149; // [rsp+60h] [rbp-58h]
  int v150; // [rsp+64h] [rbp-54h]
  int v151; // [rsp+68h] [rbp-50h]
  int v152; // [rsp+6Ch] [rbp-4Ch] BYREF
  unsigned int v153; // [rsp+70h] [rbp-48h]
  int *v154; // [rsp+78h] [rbp-40h]
  int v157; // [rsp+D8h] [rbp+20h]

  v13 = 0;
  v14 = *(_DWORD *)(a2 + 200) & 0x4000;
  v15 = *(unsigned __int16 *)(a4 + 4);
  v16 = *(_DWORD *)(a2 + 200) & 0x2000;
  v157 = 0;
  v149 = 0;
  v18 = a1;
  v151 = v14;
  v19 = (int *)(a9 + 24);
  v150 = v16;
  v152 = -1;
  v153 = v15;
  if ( a8 )
  {
    v20 = (_DWORD *)(a9 + 24);
    a1 = a8;
    do
    {
      *v20 = v18;
      v20 += 12;
      --a1;
    }
    while ( a1 );
  }
  result = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(a1);
  if ( (_DWORD)result )
  {
    result = a9 + 24;
    if ( v16 )
    {
      if ( !v14 )
      {
LABEL_10:
        v149 = v13;
        v154 = v19;
LABEL_15:
        v22 = a11;
        v23 = a13;
        goto LABEL_16;
      }
      result = a9 + 24;
    }
    if ( !a11 )
    {
      v19 = (int *)result;
      v13 = *a13 | v18;
      v157 = v13;
    }
    goto LABEL_10;
  }
  v154 = (int *)(a9 + 24);
  if ( v16 )
    goto LABEL_15;
  v22 = a11;
  v23 = a13;
  v154 = (int *)(a9 + 24);
  if ( !a11 )
  {
    v154 = (int *)(a9 + 24);
    v157 = *a13 | v18;
    v149 = v157;
  }
LABEL_16:
  v24 = 0;
  v25 = (char *)(a4 + 8);
  if ( v153 )
  {
    v26 = a10;
    v27 = a7;
    v28 = a5;
    while ( 1 )
    {
      v29 = (unsigned int)*v19;
      if ( !(_DWORD)v29 && !v157 )
        return result;
      if ( (v25[1] & 8) == 0 && ((_DWORD)v29 || !*v25 || *v25 == 9) )
        break;
LABEL_68:
      result = *((unsigned __int16 *)v25 + 1);
      ++v24;
      v23 = a13;
      v25 += result;
      v22 = a11;
      v26 = a10;
      if ( v24 >= v153 )
        return result;
    }
    v30 = *v25;
    if ( !*v25 )
    {
      if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v29) )
      {
        v31 = v150;
        if ( !v150 || v151 )
        {
          if ( !a11 && v157 )
          {
            if ( SepIsPackageSid((__int64)(v25 + 8)) )
            {
              SepMatchPackage(
                a2,
                v149,
                (_WORD *)v25 + 4,
                *((_DWORD *)v25 + 1),
                (_BYTE *)v23 + 21,
                v23 + 1,
                (_BYTE *)v23 + 20,
                v23 + 4,
                (_BYTE *)v23 + 24);
              v32 = ~v23[1];
              *v23 &= v32;
              v157 &= v32;
              goto LABEL_32;
            }
            v31 = v150;
          }
          if ( (!v31 || v151) && !a11 && v157 )
          {
            if ( SepIsCapabilitySid((__int64)(v25 + 8)) )
            {
LABEL_39:
              v33 = a2 + 808;
LABEL_40:
              if ( SepSidInTokenSidHash(v33, 0LL, (unsigned __int8 *)v25 + 8, 0, 1, 0) )
              {
                v23[2] |= v149 & *((_DWORD *)v25 + 1);
                *((_BYTE *)v23 + 22) = 1;
              }
              v19 = v154;
              v34 = ~v23[2];
              *v23 &= v34;
              v157 &= v34;
              goto LABEL_67;
            }
            v19 = v154;
          }
        }
        v35 = *v19;
        if ( !v35 || !SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
          goto LABEL_32;
        v36 = *((_DWORD *)v25 + 1);
        if ( a8 == 1 )
        {
          v37 = v35 & ~v36;
          v19 = v154;
          *(_DWORD *)(a9 + 24) = v37;
          goto LABEL_67;
        }
        v38 = v154;
        v39 = v35 & ~v36;
        *v154 = v39;
        if ( v35 != v39 )
        {
          v40 = *(_QWORD *)(a9 + 40);
          v41 = v36 & v35;
          v42 = 0LL;
          v43 = 1;
          if ( v40 )
          {
            while ( v43 )
            {
              if ( (v43 & v41) != 0 && !*(_DWORD *)(v40 + 4 * v42) )
                *(_DWORD *)(v40 + 4 * v42) = v24 | 0x10000;
              v42 = (unsigned int)(v42 + 1);
              v43 *= 2;
            }
          }
          AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
          v44 = 1;
          if ( a8 > 1 )
          {
            v45 = (int *)(a9 + 72);
            do
            {
              if ( *((_WORD *)v45 - 12) <= *(_WORD *)a9 )
                break;
              v46 = *v45;
              *v45 &= ~v36;
              v47 = v46 & v36;
              if ( (v46 & v36) != 0 )
              {
                v48 = *((_QWORD *)v45 + 2);
                v49 = 0LL;
                v50 = 1;
                if ( v48 )
                {
                  while ( v50 )
                  {
                    if ( (v50 & v47) != 0 && !*(_DWORD *)(v48 + 4 * v49) )
                      *(_DWORD *)(v48 + 4 * v49) = v24 | 0x10000;
                    v49 = (unsigned int)(v49 + 1);
                    v50 *= 2;
                  }
                }
              }
              ++v44;
              v45 += 12;
            }
            while ( v44 < a8 );
          }
        }
LABEL_66:
        v19 = v38;
        goto LABEL_67;
      }
      if ( !v150 && !a11 && v157 )
      {
        if ( SepIsPackageSid((__int64)(v25 + 8)) )
          goto LABEL_245;
        if ( SepIsCapabilitySid((__int64)(v25 + 8)) )
        {
          if ( SepSidInTokenSidHash(a2 + 808, 0LL, (unsigned __int8 *)v25 + 8, 0, 1, 0) )
          {
            v23[2] |= v149 & *((_DWORD *)v25 + 1);
            *((_BYTE *)v23 + 22) = 1;
          }
          v51 = ~v23[2];
          *v23 &= v51;
          v157 &= v51;
          goto LABEL_67;
        }
      }
      v52 = *v19;
      if ( !v52 || !SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
        goto LABEL_32;
      v53 = *((_DWORD *)v25 + 1);
      if ( a8 == 1 )
      {
        v54 = v52 & ~v53;
        v19 = v154;
        *(_DWORD *)(a9 + 24) = v54;
        goto LABEL_67;
      }
      v38 = v154;
      v55 = v52 & ~v53;
      *v154 = v55;
      if ( v52 != v55 )
      {
        v56 = *(_QWORD *)(a9 + 40);
        v57 = v53 & v52;
        v58 = 0LL;
        v59 = 1;
        if ( v56 )
        {
          while ( v59 )
          {
            if ( (v59 & v57) != 0 && !*(_DWORD *)(v56 + 4 * v58) )
              *(_DWORD *)(v56 + 4 * v58) = v24 | 0x10000;
            v58 = (unsigned int)(v58 + 1);
            v59 *= 2;
          }
        }
        AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
        v60 = 1;
        if ( a8 > 1 )
        {
          v61 = (int *)(a9 + 72);
          do
          {
            if ( *((_WORD *)v61 - 12) <= *(_WORD *)a9 )
              break;
            v62 = *v61;
            *v61 &= ~v53;
            v63 = v62 & v53;
            if ( (v62 & v53) != 0 )
            {
              v64 = *((_QWORD *)v61 + 2);
              v65 = 0LL;
              v66 = 1;
              if ( v64 )
              {
                while ( v66 )
                {
                  if ( (v66 & v63) != 0 && !*(_DWORD *)(v64 + 4 * v65) )
                    *(_DWORD *)(v64 + 4 * v65) = v24 | 0x10000;
                  v65 = (unsigned int)(v65 + 1);
                  v66 *= 2;
                }
              }
            }
            ++v60;
            v61 += 12;
          }
          while ( v60 < a8 );
        }
      }
      goto LABEL_66;
    }
    switch ( v30 )
    {
      case 5:
        v67 = *((_DWORD *)v25 + 2);
        if ( (v67 & 1) != 0 )
        {
          if ( v25 != (char *)-12LL )
          {
            if ( !v26 )
              goto LABEL_270;
            if ( SepSidInToken(
                   a2,
                   v27,
                   (unsigned __int8 *)&v25[16 * (v67 & 1) + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)],
                   0,
                   v22,
                   a12) )
            {
              v68 = 0LL;
              if ( a8 )
              {
                while ( 1 )
                {
                  v69 = a9 + 48 * v68;
                  if ( *(_QWORD *)(v25 + 12) == *(_QWORD *)(v69 + 4)
                    && *((_DWORD *)v25 + 5) == *(_DWORD *)(v69 + 12)
                    && *((_DWORD *)v25 + 6) == *(_DWORD *)(v69 + 16) )
                  {
                    break;
                  }
                  v68 = (unsigned int)(v68 + 1);
                  if ( (unsigned int)v68 >= a8 )
                  {
                    v19 = v154;
                    goto LABEL_67;
                  }
                }
                v70 = *(_DWORD *)(v69 + 24);
                v71 = *((_DWORD *)v25 + 1);
                v72 = v70 & ~v71;
                *(_DWORD *)(v69 + 24) = v72;
                if ( v70 != v72 )
                {
                  v73 = *(_QWORD *)(v69 + 40);
                  v74 = v71 & v70;
                  v75 = 0LL;
                  v76 = 1;
                  if ( v73 )
                  {
                    while ( v76 )
                    {
                      if ( (v76 & v74) != 0 && !*(_DWORD *)(v73 + 4 * v75) )
                        *(_DWORD *)(v73 + 4 * v75) = v24 | 0x10000;
                      v75 = (unsigned int)(v75 + 1);
                      v76 *= 2;
                    }
                  }
                  if ( a8 != 1 )
                  {
                    AuthzBasepUpdateParentTypeList(a9, a8, v68, v24, 0);
                    v77 = (unsigned int)(v68 + 1);
                    if ( (unsigned int)v77 < a8 )
                    {
                      v78 = (int *)(a9 + 48 * v77 + 24);
                      while ( *((_WORD *)v78 - 12) > *(_WORD *)(a9 + 48 * v68) )
                      {
                        v79 = *v78;
                        *v78 &= ~v71;
                        v80 = v79 & v71;
                        if ( (v79 & v71) != 0 )
                        {
                          v81 = *((_QWORD *)v78 + 2);
                          v82 = 0LL;
                          v83 = 1;
                          if ( v81 )
                          {
                            while ( v83 )
                            {
                              if ( (v83 & v80) != 0 && !*(_DWORD *)(v81 + 4 * v82) )
                                *(_DWORD *)(v81 + 4 * v82) = v24 | 0x10000;
                              v82 = (unsigned int)(v82 + 1);
                              v83 *= 2;
                            }
                          }
                        }
                        LODWORD(v77) = v77 + 1;
                        v78 += 12;
                        if ( (unsigned int)v77 >= a8 )
                        {
                          v19 = v154;
                          goto LABEL_67;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_32;
          }
          v19 = v154;
        }
        if ( !SepSidInToken(a2, v27, (unsigned __int8 *)&v25[16 * (v67 & 1) + ((8LL * (v67 & 2)) | 0xC)], 0, v22, a12) )
          goto LABEL_67;
        if ( a8 == 1 )
        {
          *(_DWORD *)(a9 + 24) &= ~*((_DWORD *)v25 + 1);
          goto LABEL_67;
        }
        v84 = *(_DWORD *)(a9 + 24);
        v85 = *((_DWORD *)v25 + 1);
        v86 = v84 & ~v85;
        *(_DWORD *)(a9 + 24) = v86;
        if ( v84 == v86 )
          goto LABEL_67;
        v87 = *(_QWORD *)(a9 + 40);
        v88 = v85 & v84;
        v89 = 0LL;
        v90 = 1;
        if ( v87 )
        {
          while ( v90 )
          {
            if ( (v90 & v88) != 0 && !*(_DWORD *)(v87 + 4 * v89) )
              *(_DWORD *)(v87 + 4 * v89) = v24 | 0x10000;
            v89 = (unsigned int)(v89 + 1);
            v90 *= 2;
          }
        }
        AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
        v91 = 1;
        if ( a8 > 1 )
        {
          v92 = (int *)(a9 + 72);
          while ( *((_WORD *)v92 - 12) > *(_WORD *)a9 )
          {
            v93 = *v92;
            *v92 &= ~v85;
            v94 = v93 & v85;
            if ( (v93 & v85) != 0 )
            {
              v95 = *((_QWORD *)v92 + 2);
              v96 = 0LL;
              v97 = 1;
              if ( v95 )
              {
                while ( v97 )
                {
                  if ( (v97 & v94) != 0 && !*(_DWORD *)(v95 + 4 * v96) )
                    *(_DWORD *)(v95 + 4 * v96) = v24 | 0x10000;
                  v96 = (unsigned int)(v96 + 1);
                  v97 *= 2;
                }
              }
            }
            ++v91;
            v92 += 12;
            if ( v91 >= a8 )
            {
              v19 = v154;
              goto LABEL_67;
            }
          }
        }
        goto LABEL_32;
      case 4:
        if ( !SepSidInToken(a2, v27, (unsigned __int8 *)&v25[4 * (unsigned __int8)v25[13] + 20], 0, a11, a12)
          || !SepSidInToken(a3, 0LL, (unsigned __int8 *)v25 + 12, 0, a11, a12) )
        {
          goto LABEL_67;
        }
        if ( a8 == 1 )
        {
          *(_DWORD *)(a9 + 24) &= ~*((_DWORD *)v25 + 1);
          goto LABEL_67;
        }
        v98 = *(_DWORD *)(a9 + 24);
        v99 = *((_DWORD *)v25 + 1);
        v100 = v98 & ~v99;
        *(_DWORD *)(a9 + 24) = v100;
        if ( v98 == v100 )
          goto LABEL_67;
        v101 = *(_QWORD *)(a9 + 40);
        v102 = v98 & v99;
        v103 = 0LL;
        v104 = 1;
        if ( v101 )
        {
          while ( v104 )
          {
            if ( (v104 & v102) != 0 && !*(_DWORD *)(v101 + 4 * v103) )
              *(_DWORD *)(v101 + 4 * v103) = v24 | 0x10000;
            v103 = (unsigned int)(v103 + 1);
            v104 *= 2;
          }
        }
        AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
        v105 = 1;
        if ( a8 > 1 )
        {
          v106 = (int *)(a9 + 72);
          while ( *((_WORD *)v106 - 12) > *(_WORD *)a9 )
          {
            v107 = *v106;
            *v106 &= ~v99;
            v108 = v107 & v99;
            if ( (v107 & v99) != 0 )
            {
              v109 = *((_QWORD *)v106 + 2);
              v110 = 0LL;
              v111 = 1;
              if ( v109 )
              {
                while ( v111 )
                {
                  if ( (v111 & v108) != 0 && !*(_DWORD *)(v109 + 4 * v110) )
                    *(_DWORD *)(v109 + 4 * v110) = v24 | 0x10000;
                  v110 = (unsigned int)(v110 + 1);
                  v111 *= 2;
                }
              }
            }
            ++v105;
            v106 += 12;
            if ( v105 >= a8 )
            {
              v19 = v154;
              goto LABEL_67;
            }
          }
        }
        goto LABEL_32;
      case 1:
        if ( SepSidInToken(a2, v27, (unsigned __int8 *)v25 + 8, 1, v22, a12) )
        {
          result = *((unsigned int *)v25 + 1);
          if ( ((unsigned int)result & *v19) != 0 )
            return result;
        }
        goto LABEL_67;
      case 6:
        v112 = *((_DWORD *)v25 + 2) & 1;
        if ( SepSidInToken(
               a2,
               v27,
               (unsigned __int8 *)&v25[16 * v112 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)],
               1,
               v22,
               a12) )
        {
          if ( !v112 || v25 == (char *)-12LL || !v26 )
          {
            v19 = v154;
            result = *((unsigned int *)v25 + 1);
            if ( ((unsigned int)result & *v154) != 0 )
              return result;
            goto LABEL_67;
          }
          v113 = 0LL;
          if ( a8 )
          {
            while ( 1 )
            {
              v114 = a9 + 48 * v113;
              if ( *(_QWORD *)(v25 + 12) == *(_QWORD *)(v114 + 4)
                && *((_DWORD *)v25 + 5) == *(_DWORD *)(v114 + 12)
                && *((_DWORD *)v25 + 6) == *(_DWORD *)(v114 + 16) )
              {
                break;
              }
              v113 = (unsigned int)(v113 + 1);
              if ( (unsigned int)v113 >= a8 )
              {
                v19 = v154;
                goto LABEL_67;
              }
            }
            result = *((unsigned int *)v25 + 1);
            if ( ((unsigned int)result & *(_DWORD *)(v114 + 24)) != 0 )
              return result;
            v19 = v154;
            goto LABEL_67;
          }
        }
        goto LABEL_32;
    }
    if ( v30 != 9 )
      goto LABEL_68;
    v115 = 4 * (unsigned __int8)v25[9] + 8;
    if ( *((unsigned __int16 *)v25 + 1) - v115 == 8 )
    {
LABEL_270:
      v19 = v154;
      goto LABEL_68;
    }
    if ( v28 && !*a6 )
      AuthzBasepInitializeResourceClaimsFromSacl(v28, a6);
    v116 = *(_QWORD **)(a2 + 1096);
    if ( v116 )
    {
      v117 = (void *)v116[75];
      v118 = (void *)v116[73];
      v119 = (void *)v116[74];
      v120 = (void *)v116[72];
    }
    else
    {
      v117 = 0LL;
      v118 = 0LL;
      v119 = 0LL;
      v120 = 0LL;
    }
    AuthzBasepEvaluateAceCondition(
      (_DWORD *)a2,
      *(void **)(a2 + 776),
      *a6,
      v120,
      v119,
      v118,
      v117,
      &v25[v115 + 8],
      *((unsigned __int16 *)v25 + 1) - v115 - 8,
      0,
      a11,
      &v152);
    if ( v152 != 1 )
    {
LABEL_32:
      v19 = v154;
LABEL_67:
      v28 = a5;
      v27 = a7;
      goto LABEL_68;
    }
    if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v121) )
    {
      if ( !v150 || v151 )
      {
        if ( !a11 && v157 && SepIsPackageSid((__int64)(v25 + 8)) )
          goto LABEL_245;
        if ( (!v150 || v151) && !a11 && v157 && SepIsCapabilitySid((__int64)(v25 + 8)) )
          goto LABEL_39;
      }
      v38 = v154;
      v122 = *v154;
      if ( *v154 )
      {
        if ( SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
        {
          v123 = *((_DWORD *)v25 + 1);
          v124 = v122 & ~v123;
          *v38 = v124;
          if ( v122 != v124 )
          {
            v125 = *(_QWORD *)(a9 + 40);
            v126 = 0LL;
            v127 = 1;
            if ( v125 )
            {
              while ( v127 )
              {
                if ( (v127 & v122 & v123) != 0 && !*(_DWORD *)(v125 + 4 * v126) )
                  *(_DWORD *)(v125 + 4 * v126) = v24 | 0x10000;
                v126 = (unsigned int)(v126 + 1);
                v127 *= 2;
              }
            }
            if ( a8 != 1 )
            {
              AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
              v128 = 1;
              if ( a8 > 1 )
              {
                v129 = (int *)(a9 + 72);
                do
                {
                  if ( *((_WORD *)v129 - 12) <= *(_WORD *)a9 )
                    break;
                  v130 = *v129;
                  *v129 &= ~v123;
                  v131 = v123 & v130;
                  if ( v131 )
                  {
                    v132 = *((_QWORD *)v129 + 2);
                    v133 = 0LL;
                    v134 = 1;
                    if ( v132 )
                    {
                      while ( v134 )
                      {
                        if ( (v134 & v131) != 0 && !*(_DWORD *)(v132 + 4 * v133) )
                          *(_DWORD *)(v132 + 4 * v133) = v24 | 0x10000;
                        v133 = (unsigned int)(v133 + 1);
                        v134 *= 2;
                      }
                    }
                  }
                  ++v128;
                  v129 += 12;
                }
                while ( v128 < a8 );
              }
            }
          }
        }
      }
      goto LABEL_66;
    }
    if ( !v150 && !a11 && v157 )
    {
      if ( SepIsPackageSid((__int64)(v25 + 8)) )
      {
LABEL_245:
        SepMatchPackage(
          a2,
          v149,
          (_WORD *)v25 + 4,
          *((_DWORD *)v25 + 1),
          (_BYTE *)v23 + 21,
          v23 + 1,
          (_BYTE *)v23 + 20,
          v23 + 4,
          (_BYTE *)v23 + 24);
        v19 = v154;
        v135 = ~v23[1];
        *v23 &= v135;
        v157 &= v135;
        goto LABEL_67;
      }
      if ( SepIsCapabilitySid((__int64)(v25 + 8)) )
      {
        v33 = a2 + 808;
        goto LABEL_40;
      }
    }
    v38 = v154;
    v136 = *v154;
    if ( *v154 )
    {
      if ( SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
      {
        v137 = *((_DWORD *)v25 + 1);
        v138 = v136 & ~v137;
        *v38 = v138;
        if ( v136 != v138 )
        {
          v139 = *(_QWORD *)(a9 + 40);
          v140 = 0LL;
          v141 = 1;
          if ( v139 )
          {
            while ( v141 )
            {
              if ( (v141 & v136 & v137) != 0 && !*(_DWORD *)(v139 + 4 * v140) )
                *(_DWORD *)(v139 + 4 * v140) = v24 | 0x10000;
              v140 = (unsigned int)(v140 + 1);
              v141 *= 2;
            }
          }
          if ( a8 != 1 )
          {
            AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
            v142 = 1;
            if ( a8 > 1 )
            {
              v143 = (int *)(a9 + 72);
              do
              {
                if ( *((_WORD *)v143 - 12) <= *(_WORD *)a9 )
                  break;
                v144 = *v143;
                *v143 &= ~v137;
                v145 = v137 & v144;
                if ( v145 )
                {
                  v146 = *((_QWORD *)v143 + 2);
                  v147 = 0LL;
                  v148 = 1;
                  if ( v146 )
                  {
                    while ( v148 )
                    {
                      if ( (v148 & v145) != 0 && !*(_DWORD *)(v146 + 4 * v147) )
                        *(_DWORD *)(v146 + 4 * v147) = v24 | 0x10000;
                      v147 = (unsigned int)(v147 + 1);
                      v148 *= 2;
                    }
                  }
                }
                ++v142;
                v143 += 12;
              }
              while ( v142 < a8 );
            }
          }
        }
      }
    }
    goto LABEL_66;
  }
  return result;
}

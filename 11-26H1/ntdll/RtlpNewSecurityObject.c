/*
 * XREFs of RtlpNewSecurityObject @ 0x18005E6A0
 * Callers:
 *     RtlNewSecurityObjectEx @ 0x18005D750 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x180102810 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x1801086E0 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x18013A130 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x18013A1D0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005AD80 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x18005AFEC (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x18005BB50 (RtlpNormalizeAcl.c)
 *     RtlSidDominatesForTrust @ 0x18005D530 (RtlSidDominatesForTrust.c)
 *     RtlpOwnerAcesPresent @ 0x18005D610 (RtlpOwnerAcesPresent.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18005D7C0 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x18005DDC0 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x18005DEB0 (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18005E5B4 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18005E6A0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1800603B0 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x1800C8B20 (RtlAddMandatoryAce.c)
 *     RtlSidDominates @ 0x1800CBD30 (RtlSidDominates.c)
 *     ZwAccessCheck @ 0x18015EF40 (ZwAccessCheck.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F360 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x18015F780 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x180161790 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        void *a8,
        _DWORD *a9)
{
  _OWORD *v9; // r15
  unsigned __int16 *v11; // r12
  unsigned __int8 *v12; // rbx
  void *v13; // rdi
  _DWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 result; // rax
  int v17; // eax
  __int16 v18; // r11
  void *v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned int v22; // r9d
  __int16 v23; // dx
  char *v24; // rcx
  char *v25; // r10
  unsigned int v26; // eax
  int v27; // r12d
  __int16 v28; // cx
  int v29; // eax
  unsigned int v30; // r9d
  int v31; // r8d
  int v32; // r9d
  int v33; // edi
  unsigned int v34; // r11d
  __int16 v35; // cx
  __int64 v36; // rcx
  __int64 v37; // rsi
  int valid; // ebx
  int v39; // edi
  unsigned int v40; // r15d
  void *Heap_0; // rax
  int v42; // r9d
  __int16 v43; // cx
  __int16 v44; // dx
  __int64 v45; // r12
  __int16 v46; // cx
  __int64 v47; // rcx
  char *v48; // r14
  int v49; // edi
  unsigned int v50; // r15d
  __int64 v51; // rax
  unsigned __int8 *v52; // r14
  __int16 v53; // cx
  __int64 v54; // rsi
  unsigned int v55; // ebx
  _OWORD *v56; // rdi
  __int16 v57; // ax
  __int16 v58; // ax
  __int64 v59; // rcx
  int v60; // edx
  int v61; // ecx
  __int16 v62; // ax
  __int64 v63; // rax
  char *v64; // rdx
  __int64 v65; // rsi
  unsigned int k; // r8d
  _DWORD *v67; // rax
  unsigned __int8 v68; // dl
  __int64 v69; // r9
  char *v70; // rcx
  char *v71; // rdi
  unsigned int i; // edx
  unsigned int v73; // ebx
  __int64 v74; // rdx
  __int64 v75; // rax
  unsigned __int8 *v76; // r15
  unsigned int v77; // esi
  __int16 v78; // ax
  __int64 v79; // rax
  char *v80; // r14
  unsigned int v81; // r15d
  unsigned __int8 *v82; // rdi
  __int64 v83; // rax
  __int16 v84; // si
  int v85; // eax
  int v86; // r12d
  unsigned __int16 *v87; // rax
  unsigned int v88; // ecx
  _OWORD *v89; // rdx
  __int16 v90; // ax
  __int64 v91; // r14
  __int16 v92; // ax
  __int64 v93; // rax
  char *v94; // rdi
  int v95; // esi
  unsigned int v96; // r12d
  __int64 v97; // rax
  __int64 v98; // rdi
  char v99; // r13
  char v100; // r14
  unsigned int v101; // esi
  void *v102; // r15
  bool v103; // al
  unsigned __int8 *v104; // rsi
  unsigned int v105; // r15d
  unsigned int v106; // r14d
  unsigned int v107; // esi
  unsigned int v108; // edi
  __int64 v109; // rax
  unsigned __int16 *v110; // rbx
  bool v111; // zf
  __int64 v112; // rcx
  int v113; // eax
  char *v114; // rbx
  __int64 v115; // rdi
  int v116; // eax
  void *v117; // r10
  unsigned __int8 *v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int16 v121; // cx
  __int64 v122; // rcx
  __int64 v123; // rdx
  HANDLE v124; // rdx
  void *v125; // rdx
  int v126; // eax
  char *v127; // r8
  int v128; // r12d
  __int64 v129; // rcx
  __int64 v130; // rax
  __int16 v131; // cx
  __int64 v132; // rax
  _DWORD *v133; // r8
  __int64 v134; // rcx
  int v135; // ecx
  __int64 v136; // rax
  bool v137; // cf
  __int64 v138; // rax
  __int64 v139; // rax
  char *v140; // rax
  __int64 v141; // rcx
  void *v142; // rcx
  _DWORD *v143; // r8
  __int64 v144; // rax
  __int16 v145; // r10
  __int64 v146; // rax
  char *v147; // rcx
  char *v148; // r8
  unsigned int j; // edx
  unsigned __int16 *Src; // [rsp+90h] [rbp-80h]
  unsigned __int8 *v151; // [rsp+98h] [rbp-78h]
  char v152; // [rsp+A0h] [rbp-70h]
  char v153; // [rsp+A1h] [rbp-6Fh] BYREF
  char v154; // [rsp+A2h] [rbp-6Eh]
  char v155; // [rsp+A3h] [rbp-6Dh] BYREF
  char v156; // [rsp+A4h] [rbp-6Ch]
  __int64 v157; // [rsp+A8h] [rbp-68h]
  _DWORD *v158; // [rsp+B0h] [rbp-60h]
  char v159; // [rsp+B8h] [rbp-58h] BYREF
  char v160; // [rsp+B9h] [rbp-57h] BYREF
  char v161; // [rsp+BAh] [rbp-56h]
  char v162; // [rsp+BBh] [rbp-55h]
  char v163; // [rsp+BCh] [rbp-54h]
  char v164; // [rsp+BDh] [rbp-53h] BYREF
  char v165; // [rsp+BEh] [rbp-52h]
  char v166; // [rsp+BFh] [rbp-51h]
  void **v167; // [rsp+C0h] [rbp-50h] BYREF
  int v168; // [rsp+C8h] [rbp-48h] BYREF
  void *v169; // [rsp+D0h] [rbp-40h]
  _QWORD v170[2]; // [rsp+D8h] [rbp-38h] BYREF
  void *v171; // [rsp+E8h] [rbp-28h] BYREF
  char v172; // [rsp+F0h] [rbp-20h]
  char v173; // [rsp+F1h] [rbp-1Fh] BYREF
  char v174[2]; // [rsp+F2h] [rbp-1Eh] BYREF
  __int16 v175; // [rsp+F4h] [rbp-1Ch]
  void *v176; // [rsp+F8h] [rbp-18h] BYREF
  int v177; // [rsp+100h] [rbp-10h] BYREF
  _DWORD *v178; // [rsp+108h] [rbp-8h]
  int v179; // [rsp+110h] [rbp+0h] BYREF
  int v180; // [rsp+114h] [rbp+4h] BYREF
  void *Buf2; // [rsp+118h] [rbp+8h]
  _OWORD *v182; // [rsp+120h] [rbp+10h]
  void *v183; // [rsp+128h] [rbp+18h]
  _QWORD *v184; // [rsp+130h] [rbp+20h] BYREF
  unsigned __int8 *v185; // [rsp+138h] [rbp+28h]
  void *Buf1; // [rsp+140h] [rbp+30h]
  HANDLE Handle; // [rsp+148h] [rbp+38h] BYREF
  __int64 v188; // [rsp+150h] [rbp+40h]
  void *v189; // [rsp+158h] [rbp+48h]
  int v190; // [rsp+160h] [rbp+50h]
  int v191; // [rsp+164h] [rbp+54h] BYREF
  unsigned __int8 *v192; // [rsp+168h] [rbp+58h]
  __int64 v193; // [rsp+170h] [rbp+60h]
  __int64 v194; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int16 *v195; // [rsp+180h] [rbp+70h] BYREF
  unsigned __int16 *v196; // [rsp+188h] [rbp+78h] BYREF
  int v197; // [rsp+190h] [rbp+80h]
  unsigned __int8 **v198; // [rsp+198h] [rbp+88h] BYREF
  _QWORD *v199; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 v200; // [rsp+1A8h] [rbp+98h]
  void *v201; // [rsp+1B0h] [rbp+A0h]
  void **v202; // [rsp+1B8h] [rbp+A8h]
  __int64 v203; // [rsp+1C0h] [rbp+B0h]
  void *v204; // [rsp+1C8h] [rbp+B8h]
  _QWORD *v205; // [rsp+1D0h] [rbp+C0h]
  unsigned __int8 **v206; // [rsp+1D8h] [rbp+C8h]
  _QWORD *v207; // [rsp+1E0h] [rbp+D0h]
  _QWORD *v208; // [rsp+1E8h] [rbp+D8h]
  _OWORD v209[2]; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v210; // [rsp+210h] [rbp+100h]
  __int64 v211; // [rsp+218h] [rbp+108h] BYREF
  int v212; // [rsp+220h] [rbp+110h]
  __int128 v213; // [rsp+228h] [rbp+118h] BYREF
  int v214; // [rsp+238h] [rbp+128h]
  __int128 v215; // [rsp+240h] [rbp+130h] BYREF
  __int128 v216; // [rsp+250h] [rbp+140h]
  __int128 v217; // [rsp+260h] [rbp+150h]
  __int64 v218; // [rsp+270h] [rbp+160h]
  _QWORD v219[16]; // [rsp+280h] [rbp+170h] BYREF

  v178 = a9;
  v9 = a2;
  v193 = a4;
  v210 = 0LL;
  v155 = 0;
  v214 = 0;
  v11 = 0LL;
  v152 = 0;
  v12 = 0LL;
  v166 = 0;
  v13 = 0LL;
  v165 = 0;
  v14 = 0LL;
  v157 = 0LL;
  v196 = 0LL;
  v156 = 0;
  v161 = 0;
  v154 = 0;
  v159 = 0;
  v174[0] = 0;
  v173 = 0;
  v160 = 0;
  LOBYTE(v190) = 0;
  v164 = 0;
  v192 = (unsigned __int8 *)v219;
  memset(v209, 0, sizeof(v209));
  v179 = 0;
  v195 = 0LL;
  v213 = 0LL;
  v194 = 0LL;
  v201 = 0LL;
  v176 = 0LL;
  v204 = 0LL;
  v171 = 0LL;
  v205 = 0LL;
  v184 = 0LL;
  v202 = 0LL;
  v167 = 0LL;
  v203 = 0LL;
  v170[0] = 0LL;
  v182 = a2;
  v15 = (__int64)a8;
  Handle = (HANDLE)a1;
  v170[1] = NtCurrentPeb()->ProcessHeap;
  v208 = a3;
  v183 = a8;
  v169 = 0LL;
  Src = 0LL;
  Buf1 = 0LL;
  v200 = 0LL;
  v185 = 0LL;
  v189 = 0LL;
  v188 = 0LL;
  v158 = 0LL;
  v168 = 0;
  v177 = 0;
  v211 = 0LL;
  Buf2 = 0LL;
  v162 = 1;
  v191 = 0;
  LOBYTE(v180) = 1;
  v206 = 0LL;
  v198 = 0LL;
  v207 = 0LL;
  v199 = 0LL;
  if ( a8 )
  {
    v180 = 0;
    v218 = 0LL;
    v215 = 0LL;
    v216 = 0LL;
    v217 = 0LL;
    result = NtQueryInformationToken(v183, 10LL, &v215, 56LL, &v180);
    if ( (int)result < 0 )
      return result;
    v180 = DWORD2(v216);
    if ( DWORD2(v216) == 2 && SHIDWORD(v216) < 1 )
      return 3221225637LL;
    v15 = (__int64)v183;
  }
  if ( v9 )
  {
    v163 = 1;
  }
  else
  {
    v9 = v209;
    v163 = 0;
    v182 = v209;
    LOBYTE(v209[0]) = 1;
  }
  v17 = *((unsigned __int16 *)v9 + 1);
  v175 = *((_WORD *)v9 + 1) & 0x80;
  v18 = v175;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v172 = v175 != 0;
  v197 = v17;
  if ( v15 || v175 )
  {
    result = RtlpGetDefaultsSubjectContext(
               (__int64)v183,
               v175 != 0,
               (__int64 *)&v176,
               (__int64 *)&v171,
               (__int64 *)&v184,
               (__int64 *)&v198,
               (__int64 *)&v167,
               v170,
               (__int64 *)&v199);
    if ( (int)result < 0 )
      return result;
    v201 = v176;
    v206 = v198;
    v12 = *(unsigned __int8 **)v176;
    v204 = v171;
    v13 = *(void **)v171;
    v205 = v184;
    v188 = *v184;
    v202 = v167;
    v19 = *v167;
    v203 = v170[0];
    Buf1 = v19;
    v200 = *(_QWORD *)v170[0];
    if ( v198 )
    {
      v185 = *v198;
      v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
      v185 = 0LL;
    }
    v18 = v175;
    v207 = v199;
    if ( v199 )
      v20 = *v199;
    v189 = (void *)v20;
  }
  v21 = *((_WORD *)v9 + 1);
  v22 = v21;
  v23 = v21 & 0x8000;
  if ( v23 )
  {
    v119 = *((unsigned int *)v9 + 1);
    if ( !(_DWORD)v119 )
      goto LABEL_210;
    v24 = (char *)v9 + v119;
  }
  else
  {
    v24 = (char *)*((_QWORD *)v9 + 1);
  }
  v171 = v24;
  if ( v24 )
  {
    v161 = 1;
    goto LABEL_18;
  }
LABEL_210:
  if ( (a7 & 0x20) != 0 )
  {
    if ( !a1 )
    {
      valid = -1073741734;
      v52 = 0LL;
      goto LABEL_186;
    }
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v142 = *(void **)(a1 + 8);
    }
    else
    {
      v141 = *(unsigned int *)(a1 + 4);
      if ( !(_DWORD)v141 )
        goto LABEL_379;
      v142 = (void *)(a1 + v141);
    }
    v171 = v142;
    v161 = 1;
    if ( v142 )
      goto LABEL_18;
LABEL_379:
    valid = -1073741734;
    v52 = 0LL;
    goto LABEL_186;
  }
  v118 = v12;
  if ( v18 )
    v118 = v185;
  v171 = v118;
  if ( !v118 )
  {
    valid = -1073741700;
    v52 = 0LL;
    goto LABEL_186;
  }
LABEL_18:
  if ( v23 )
  {
    v120 = *((unsigned int *)v9 + 2);
    if ( !(_DWORD)v120 )
    {
LABEL_205:
      if ( (a7 & 0x40) != 0 )
      {
        if ( !a1 )
        {
          valid = -1073741733;
          v52 = 0LL;
          goto LABEL_186;
        }
        if ( *(__int16 *)(a1 + 2) >= 0 )
        {
          v117 = *(void **)(a1 + 16);
        }
        else
        {
          v138 = *(unsigned int *)(a1 + 8);
          if ( !(_DWORD)v138 )
            goto LABEL_209;
          v117 = (void *)(a1 + v138);
        }
      }
      else
      {
        v117 = v13;
        if ( v18 )
          v117 = v189;
      }
      v176 = v117;
      if ( v117 )
        goto LABEL_21;
LABEL_209:
      valid = -1073741733;
      v52 = 0LL;
      goto LABEL_186;
    }
    v25 = (char *)v9 + v120;
  }
  else
  {
    v25 = (char *)*((_QWORD *)v9 + 2);
  }
  v176 = v25;
  if ( !v25 )
    goto LABEL_205;
LABEL_21:
  v26 = a7 >> 2;
  LOBYTE(v26) = (a7 & 4) != 0;
  LODWORD(v184) = v26;
  v27 = a7 & 2;
  v153 = v27 != 0;
  v28 = v22 & 0x10;
  v29 = (v22 >> 2) & 8;
  v30 = v22 >> 1;
  v31 = v30 & 0x400;
  v32 = v30 & 0x1000;
  v33 = v28 != 0 ? 4 : 0;
  if ( v28 )
  {
    if ( v23 )
    {
      v134 = *((unsigned int *)v9 + 3);
      v34 = 0;
      if ( (_DWORD)v134 )
        v167 = (void **)((char *)v9 + v134);
      else
        v167 = 0LL;
    }
    else
    {
      v34 = 0;
      v167 = (void **)*((_QWORD *)v9 + 3);
    }
  }
  else
  {
    v34 = 0;
    v167 = 0LL;
  }
  if ( !a1 )
    goto LABEL_28;
  v35 = *(_WORD *)(a1 + 2);
  if ( (v35 & 0x10) == 0 )
    goto LABEL_28;
  if ( v35 >= 0 )
  {
    v37 = *(_QWORD *)(a1 + 24);
    goto LABEL_29;
  }
  v36 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v36 )
    v37 = a1 + v36;
  else
LABEL_28:
    v37 = 0LL;
LABEL_29:
  valid = 0;
  v39 = v29 | v31 | v32 | v33;
  if ( v39 || v37 )
  {
    v40 = 0;
    LODWORD(v170[0]) = 200;
    while ( 1 )
    {
      v169 = 0LL;
      if ( v40 >= 2 )
        goto LABEL_36;
      Heap_0 = (void *)RtlAllocateHeap_0();
      v169 = Heap_0;
      if ( !Heap_0 )
      {
        valid = -1073741801;
        goto LABEL_317;
      }
      valid = RtlpInheritAcl2(
                v37,
                (_DWORD)v167,
                v39,
                a6,
                v153,
                (char)v184,
                (__int64)v171,
                (__int64)v176,
                (__int64)v185,
                (__int64)v189,
                (__int64)v178,
                2,
                v193,
                a5,
                (__int64)v170,
                (__int64)Heap_0,
                (__int64)&v159,
                (__int64)&v168);
      if ( valid >= 0 )
        break;
      RtlFreeHeap_0();
      v34 = 0;
      v169 = 0LL;
      if ( valid != -1073741789 )
        goto LABEL_36;
      ++v40;
    }
    if ( !LODWORD(v170[0]) )
    {
      RtlFreeHeap_0();
      v34 = 0;
      v169 = 0LL;
      goto LABEL_219;
    }
    v34 = 0;
LABEL_36:
    if ( valid < 0 )
    {
      if ( valid == -2147483637 )
      {
        v9 = v182;
        v154 = v159;
        goto LABEL_39;
      }
LABEL_317:
      v11 = 0LL;
      v14 = v158;
      v52 = 0LL;
      goto LABEL_186;
    }
LABEL_219:
    v9 = v182;
    v152 = 1;
    v154 = v159;
    LODWORD(v170[0]) = 2 * (v168 & 0x1400 | (2 * (v168 & 8 | 0x2004)));
    goto LABEL_42;
  }
  v169 = 0LL;
  v168 = v27 != 0 ? 0x400 : 0;
LABEL_39:
  v42 = 34816;
  if ( (a7 & 2) == 0 )
    v42 = 0x8000;
  v43 = *((_WORD *)v9 + 1);
  LODWORD(v170[0]) = v42;
  if ( (v43 & 0x30) == 0x30 )
  {
    if ( (v43 & 0x10) != 0 )
    {
      if ( v43 >= 0 )
      {
        v140 = (char *)*((_QWORD *)v9 + 3);
      }
      else
      {
        v139 = *((unsigned int *)v9 + 3);
        if ( !(_DWORD)v139 )
        {
          v169 = 0LL;
          goto LABEL_388;
        }
        v140 = (char *)v9 + v139;
      }
      v169 = v140;
    }
    else
    {
      v169 = 0LL;
    }
LABEL_388:
    v154 = 1;
    LODWORD(v170[0]) = v42 | v43 & 0x2000 | 0x10;
  }
LABEL_42:
  v44 = *((_WORD *)v9 + 1);
  if ( (v44 & 0x10) != 0 )
  {
    if ( v44 < 0 )
    {
      v135 = *((_DWORD *)v9 + 3);
      if ( v135 )
        LODWORD(v45) = (_DWORD)v9 + v135;
      else
        LODWORD(v45) = 0;
    }
    else
    {
      v45 = *((_QWORD *)v9 + 3);
    }
  }
  else
  {
    LODWORD(v45) = 0;
  }
  if ( !Handle )
    goto LABEL_49;
  v46 = *((_WORD *)Handle + 1);
  if ( (v46 & 0x10) == 0 )
    goto LABEL_49;
  if ( v46 >= 0 )
  {
    v48 = (char *)*((_QWORD *)Handle + 3);
    goto LABEL_50;
  }
  v47 = *((unsigned int *)Handle + 3);
  if ( (_DWORD)v47 )
    v48 = (char *)Handle + v47;
  else
LABEL_49:
    v48 = 0LL;
LABEL_50:
  valid = 0;
  v49 = (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400 | ((*((_WORD *)v9 + 1) & 0x10) != 0
                                                                                                 ? 4
                                                                                                 : 0);
  if ( !v49 && !v48 )
  {
    v52 = 0LL;
    v151 = 0LL;
    goto LABEL_60;
  }
  v50 = 0;
  LODWORD(v167) = 200;
  while ( 1 )
  {
    v151 = 0LL;
    if ( v50 >= 2 )
      goto LABEL_57;
    v51 = RtlAllocateHeap_0();
    v151 = (unsigned __int8 *)v51;
    if ( !v51 )
    {
      v11 = 0LL;
      valid = -1073741801;
      v14 = v158;
      v52 = 0LL;
      goto LABEL_186;
    }
    valid = RtlpInheritAcl2(
              (_DWORD)v48,
              v45,
              v49,
              a6,
              v153,
              (char)v184,
              (__int64)v171,
              (__int64)v176,
              (__int64)v185,
              (__int64)v189,
              (__int64)v178,
              2,
              v193,
              a5,
              (__int64)&v167,
              v51,
              (__int64)v174,
              (__int64)&v177);
    if ( valid >= 0 )
      break;
    RtlFreeHeap_0();
    v34 = 0;
    v151 = 0LL;
    if ( valid != -1073741789 )
      goto LABEL_57;
    ++v50;
  }
  if ( (_DWORD)v167 )
  {
    v34 = 0;
LABEL_57:
    v52 = v151;
    if ( valid >= 0 )
      goto LABEL_86;
    if ( valid != -2147483637 )
    {
LABEL_245:
      v11 = Src;
      v14 = v158;
      goto LABEL_186;
    }
    v9 = v182;
LABEL_60:
    v53 = *((_WORD *)v9 + 1);
    if ( (v53 & 0x30) == 0x30 )
    {
      if ( (v53 & 0x10) != 0 )
      {
        if ( v53 >= 0 )
        {
          v52 = (unsigned __int8 *)*((_QWORD *)v9 + 3);
          v151 = v52;
        }
        else
        {
          v136 = *((unsigned int *)v9 + 3);
          if ( (_DWORD)v136 )
          {
            v52 = (unsigned __int8 *)v9 + v136;
            v151 = (unsigned __int8 *)v9 + v136;
          }
          else
          {
            v52 = 0LL;
            v151 = 0LL;
          }
        }
      }
      else
      {
        v52 = 0LL;
        v151 = 0LL;
      }
    }
    goto LABEL_61;
  }
  RtlFreeHeap_0();
  v34 = 0;
  v52 = 0LL;
  v151 = 0LL;
LABEL_86:
  v166 = 1;
LABEL_61:
  v54 = v200;
  v55 = 0;
  do
  {
    v56 = v182;
    v57 = *((_WORD *)v182 + 1);
    if ( (v57 & 0x10) == 0 )
      goto LABEL_63;
    if ( v57 < 0 )
    {
      v132 = *((unsigned int *)v182 + 3);
      if ( !(_DWORD)v132 )
        goto LABEL_63;
      v70 = (char *)v182 + v132;
    }
    else
    {
      v70 = (char *)*((_QWORD *)v182 + 3);
    }
    if ( !v70 )
      goto LABEL_63;
    v71 = v70 + 8;
    for ( i = 0; ; ++i )
    {
      if ( i >= *((unsigned __int16 *)v70 + 2) )
        goto LABEL_102;
      if ( i >= v55 && *v71 == 20 )
        break;
      v71 += *((unsigned __int16 *)v71 + 1);
    }
    v73 = i;
    v74 = (__int64)(v71 + 8);
    if ( !v71 )
      v74 = 0LL;
    if ( v74 )
    {
      v153 = 0;
      if ( !v54 || (RtlSidDominatesForTrust(v54, v74, (bool *)&v153), !v153) )
      {
        v11 = 0LL;
        valid = -1073741790;
        v14 = v158;
        goto LABEL_186;
      }
      v34 = 0;
    }
    v55 = v73 + 1;
  }
  while ( v71 );
LABEL_102:
  v56 = v182;
LABEL_63:
  if ( (a7 & 0x800) != 0 )
  {
    v145 = *((_WORD *)v56 + 1);
    if ( (v145 & 0x10) != 0 )
    {
      while ( 1 )
      {
        if ( v145 >= 0 )
        {
          v147 = (char *)*((_QWORD *)v56 + 3);
        }
        else
        {
          v146 = *((unsigned int *)v56 + 3);
          if ( !(_DWORD)v146 )
            break;
          v147 = (char *)v56 + v146;
        }
        if ( !v147 )
          break;
        v148 = v147 + 8;
        for ( j = 0; ; ++j )
        {
          if ( j >= *((unsigned __int16 *)v147 + 2) )
            goto LABEL_410;
          if ( j >= v34 && *v148 == 20 )
            break;
          v148 += *((unsigned __int16 *)v148 + 1);
        }
        v34 = j + 1;
        if ( !v148 )
          break;
        if ( (v148[1] & 8) == 0 )
          goto LABEL_428;
      }
    }
LABEL_410:
    if ( v54 )
    {
LABEL_428:
      valid = -1073741811;
      goto LABEL_244;
    }
  }
  v58 = *((_WORD *)v56 + 1);
  if ( (v58 & 0x10) != 0 )
  {
    if ( v58 >= 0 )
    {
      v59 = *((_QWORD *)v56 + 3);
    }
    else
    {
      v75 = *((unsigned int *)v56 + 3);
      if ( (_DWORD)v75 )
        v59 = (__int64)v56 + v75;
      else
        v59 = 0LL;
    }
  }
  else
  {
    v59 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v59, v54);
  if ( valid < 0 )
    goto LABEL_244;
  v60 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v60 = (a7 >> 8) & 1;
  v61 = v60 | 4;
  if ( (a7 & 0x400) == 0 )
    v61 = v60;
  if ( v61 )
  {
    v65 = v211;
    v68 = 0;
    v67 = Buf1;
    v69 = v211;
    goto LABEL_80;
  }
  v62 = *((_WORD *)v56 + 1);
  if ( (v62 & 0x10) == 0 )
    goto LABEL_79;
  if ( v62 < 0 )
  {
    v63 = *((unsigned int *)v56 + 3);
    if ( (_DWORD)v63 )
    {
      v64 = (char *)v56 + v63;
      goto LABEL_76;
    }
LABEL_79:
    v67 = Buf1;
    v65 = 0LL;
    v68 = 0;
    v69 = 0LL;
    goto LABEL_80;
  }
  v64 = (char *)*((_QWORD *)v56 + 3);
LABEL_76:
  if ( !v64 )
    goto LABEL_79;
  v65 = (__int64)(v64 + 8);
  for ( k = 0; ; ++k )
  {
    if ( k >= *((unsigned __int16 *)v64 + 2) )
      goto LABEL_79;
    if ( *(_BYTE *)v65 == 17 )
      break;
    v65 += *(unsigned __int16 *)(v65 + 2);
  }
  if ( v65 )
  {
    v68 = *(_BYTE *)(v65 + 1);
    v69 = v65 + 8;
    v61 = *(_DWORD *)(v65 + 4);
    Buf2 = (void *)(v65 + 8);
    if ( v68 == 8 || (v68 & 0x10) != 0 )
    {
      v67 = Buf1;
      v65 = 0LL;
      Buf2 = 0LL;
      v69 = 0LL;
      v61 = 0;
      v68 = 0;
    }
    else
    {
      v67 = Buf1;
      if ( (v68 & 8) != 0 )
      {
        v137 = *((_DWORD *)Buf1 + 2) < 0x2000u;
        Buf2 = (void *)(v65 + 8);
        if ( v137 )
        {
          v52 = v151;
          valid = -1073740730;
          v11 = 0LL;
          v14 = v158;
          goto LABEL_186;
        }
      }
    }
  }
  else
  {
    v69 = (__int64)Buf2;
    v68 = 0;
    v67 = Buf1;
  }
LABEL_80:
  if ( !v61 )
  {
    if ( !v67 || v67[2] >= 0x2000u )
      goto LABEL_111;
    v61 = 1;
  }
  if ( !v65 )
  {
    if ( !v183 )
    {
      v52 = v151;
      valid = -1073741700;
      v11 = 0LL;
      v14 = v158;
      goto LABEL_186;
    }
    v69 = (__int64)v67;
    Buf2 = v67;
    v68 = 0;
  }
LABEL_111:
  if ( v69 )
  {
    v219[0] = 8388610LL;
    valid = RtlAddMandatoryAce((unsigned int)v219, 2, v68, v69, 17, v61);
    if ( valid < 0 )
      goto LABEL_244;
    v76 = (unsigned __int8 *)v219;
  }
  else
  {
    v76 = 0LL;
    v192 = 0LL;
  }
  if ( (a7 & 0x700) != 0 )
  {
    v77 = 4;
  }
  else if ( !v65 && v76 )
  {
    v77 = 0;
  }
  else
  {
    v77 = (*((_WORD *)v56 + 1) & 0x2800 | (*((unsigned __int16 *)v56 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !Handle || (v78 = *((_WORD *)Handle + 1), (v78 & 0x10) == 0) )
  {
LABEL_122:
    v80 = 0LL;
    goto LABEL_123;
  }
  if ( v78 < 0 )
  {
    v79 = *((unsigned int *)Handle + 3);
    if ( (_DWORD)v79 )
    {
      v80 = (char *)Handle + v79;
      goto LABEL_123;
    }
    goto LABEL_122;
  }
  v80 = (char *)*((_QWORD *)Handle + 3);
LABEL_123:
  valid = 0;
  if ( v77 || v80 )
  {
    v81 = 0;
    LODWORD(v167) = 200;
    while ( 1 )
    {
      v82 = 0LL;
      if ( v81 >= 2 )
        goto LABEL_130;
      v83 = RtlAllocateHeap_0();
      v82 = (unsigned __int8 *)v83;
      if ( !v83 )
        goto LABEL_243;
      valid = RtlpInheritAcl2(
                (_DWORD)v80,
                (_DWORD)v192,
                v77,
                a6,
                1,
                0,
                (__int64)v171,
                (__int64)v176,
                (__int64)v185,
                (__int64)v189,
                (__int64)v178,
                3,
                v193,
                a5,
                (__int64)&v167,
                v83,
                (__int64)&v173,
                (__int64)&v168);
      if ( valid >= 0 )
        break;
      RtlFreeHeap_0();
      v82 = 0LL;
      if ( valid != -1073741789 )
        goto LABEL_130;
      ++v81;
    }
    if ( (_DWORD)v167 )
    {
LABEL_130:
      if ( valid == -2147483637 )
      {
        v76 = v192;
        goto LABEL_132;
      }
      if ( valid < 0 )
        goto LABEL_244;
    }
    else
    {
      RtlFreeHeap_0();
      v82 = 0LL;
    }
    v76 = v192;
    v84 = v168;
    goto LABEL_133;
  }
LABEL_132:
  v82 = v76;
  v168 = 0;
  v84 = 0;
LABEL_133:
  v52 = v151;
  v85 = RtlpCombineAcls(
          (unsigned __int8 *)v169,
          v82,
          v151,
          v151,
          (unsigned __int64)v151,
          (unsigned __int64)v151,
          &v195,
          &v179);
  v86 = v170[0];
  valid = v85;
  v179 |= (v170[0] & 0x2000) << 17;
  if ( v82 && v82 != v76 )
    RtlFreeHeap_0();
  if ( valid < 0 )
    goto LABEL_245;
  v87 = v195;
  if ( v195 )
  {
    if ( v152 && v169 )
    {
      RtlFreeHeap_0();
      v87 = v195;
    }
    v169 = v87;
    v88 = 0;
    v195 = 0LL;
    v165 = 1;
    v86 |= 2 * (v84 & 0x1400 | (2 * (v84 & 8 | 4)));
    LODWORD(v170[0]) = v86;
  }
  else
  {
    v88 = 0;
  }
  if ( (a7 & 8) == 0 )
  {
    if ( v169 )
    {
      v127 = (char *)v169 + 8;
      while ( v88 < *((unsigned __int16 *)v169 + 2) )
      {
        if ( *v127 == 17 )
        {
          v125 = v127 + 8;
          goto LABEL_257;
        }
        ++v88;
        v127 += *((unsigned __int16 *)v127 + 1);
      }
    }
    v125 = Buf2;
LABEL_257:
    if ( v125 )
    {
      if ( !v183 )
      {
        v11 = 0LL;
        valid = -1073741700;
        v14 = v158;
        goto LABEL_186;
      }
      valid = RtlSidDominates(Buf1, v125);
      if ( valid < 0 )
        goto LABEL_245;
      v126 = (unsigned __int8)v190;
      if ( !v162 )
        v126 = 1;
      v190 = v126;
    }
  }
  v89 = v182;
  v177 = a7 & 1;
  v90 = *((_WORD *)v182 + 1);
  if ( (v90 & 4) != 0 )
  {
    if ( v90 >= 0 )
    {
      v91 = *((_QWORD *)v182 + 4);
    }
    else
    {
      v116 = *((_DWORD *)v182 + 4);
      if ( v116 )
        LODWORD(v91) = (_DWORD)v182 + v116;
      else
        LODWORD(v91) = 0;
    }
  }
  else
  {
    LODWORD(v91) = 0;
  }
  if ( !Handle )
    goto LABEL_220;
  v92 = *((_WORD *)Handle + 1);
  if ( (v92 & 4) == 0 )
    goto LABEL_220;
  if ( v92 >= 0 )
  {
    v94 = (char *)*((_QWORD *)Handle + 4);
    goto LABEL_145;
  }
  v93 = *((unsigned int *)Handle + 4);
  if ( (_DWORD)v93 )
    v94 = (char *)Handle + v93;
  else
LABEL_220:
    v94 = 0LL;
LABEL_145:
  valid = 0;
  v95 = *((_WORD *)v182 + 1) & 0x140C;
  if ( (*((_WORD *)v182 + 1) & 0x140C) != 0 || v94 )
  {
    v96 = 0;
    LODWORD(v167) = 200;
    while ( 1 )
    {
      Src = 0LL;
      if ( v96 >= 2 )
        goto LABEL_152;
      v97 = RtlAllocateHeap_0();
      Src = (unsigned __int16 *)v97;
      if ( !v97 )
      {
        valid = -1073741801;
        v52 = v151;
        v11 = 0LL;
        v14 = v158;
        goto LABEL_186;
      }
      valid = RtlpInheritAcl2(
                (_DWORD)v94,
                v91,
                v95,
                a6,
                v177,
                (a7 & 4) != 0,
                (__int64)v171,
                (__int64)v176,
                (__int64)v185,
                (__int64)v189,
                (__int64)v178,
                1,
                v193,
                a5,
                (__int64)&v167,
                v97,
                (__int64)&v160,
                (__int64)&v168);
      if ( valid >= 0 )
        break;
      RtlFreeHeap_0();
      Src = 0LL;
      if ( valid != -1073741789 )
        goto LABEL_152;
      ++v96;
    }
    if ( !(_DWORD)v167 )
    {
      RtlFreeHeap_0();
      v98 = 0LL;
      Src = 0LL;
      goto LABEL_154;
    }
LABEL_152:
    if ( valid >= 0 )
    {
      v98 = (__int64)Src;
LABEL_154:
      v99 = 1;
      v100 = v160;
      v101 = a7;
      v86 = v168 & 0x1408 | 4 | LODWORD(v170[0]);
      v156 = 1;
      LODWORD(v170[0]) = v86;
      goto LABEL_155;
    }
    if ( valid != -2147483637 )
      goto LABEL_444;
    v100 = v160;
    v86 = v170[0];
    v89 = v182;
    v98 = (__int64)Src;
  }
  else
  {
    v98 = 0LL;
    Src = 0LL;
    v100 = 0;
  }
  v101 = a7;
  if ( (a7 & 1) != 0 )
  {
    v86 |= 0x400u;
    LODWORD(v170[0]) = v86;
  }
  v131 = *((_WORD *)v89 + 1);
  if ( (v131 & 0xC) == 0xC )
  {
    if ( (v131 & 4) != 0 )
    {
      if ( v131 < 0 )
      {
        v144 = *((unsigned int *)v89 + 4);
        if ( (_DWORD)v144 )
          v98 = (__int64)v89 + v144;
        else
          v98 = 0LL;
      }
      else
      {
        v98 = *((_QWORD *)v89 + 4);
      }
    }
    else
    {
      v98 = 0LL;
    }
    Src = (unsigned __int16 *)v98;
    v100 = 1;
    v86 |= v131 & 0x1000 | 4;
    LODWORD(v170[0]) = v86;
    v99 = 0;
  }
  else
  {
    if ( v188 )
    {
      v86 |= 4u;
      Src = (unsigned __int16 *)v188;
      LODWORD(v170[0]) = v86;
      v98 = v188;
    }
    v99 = 0;
  }
LABEL_155:
  v102 = v183;
  if ( (v101 & 0x1000) == 0 && v163 && v183 && Handle )
  {
    v177 = 0;
    LODWORD(v184) = 0;
    valid = RtlpNewSecurityObject(
              (_DWORD)Handle,
              0,
              (unsigned int)&v194,
              v193,
              a5,
              a6,
              v101 | 1,
              (__int64)v183,
              (__int64)v178);
    if ( valid < 0 )
      goto LABEL_444;
    v121 = *(_WORD *)(v194 + 2);
    if ( (v121 & 4) != 0 )
    {
      if ( v121 >= 0 )
      {
        v123 = *(_QWORD *)(v194 + 32);
      }
      else
      {
        v122 = *(unsigned int *)(v194 + 16);
        if ( (_DWORD)v122 )
          v123 = v194 + v122;
        else
          v123 = 0LL;
      }
    }
    else
    {
      v123 = 0LL;
    }
    if ( RtlpOwnerAcesPresent(0x10u, v123) )
    {
      Handle = 0LL;
      LODWORD(v167) = 20;
      if ( (_BYTE)v180 != 1 )
        goto LABEL_237;
      v215 = 0x30uLL;
      v212 = 1;
      *((_QWORD *)&v217 + 1) = &v211;
      v211 = 0x20000000CLL;
      v216 = 0uLL;
      *(_QWORD *)&v217 = 0LL;
      valid = NtDuplicateToken(v102, 8LL, &v215, 0LL, 2, &Handle);
      if ( valid < 0 )
        goto LABEL_444;
      v124 = Handle;
      if ( !Handle )
LABEL_237:
        v124 = v102;
      valid = ZwAccessCheck(v194, v124, 0x40000LL, v178, &v213, &v167, &v177, &v184);
      if ( Handle )
        NtClose(Handle);
      if ( valid < 0 )
        goto LABEL_444;
      valid = (int)v184;
      if ( (int)v184 < 0 )
        goto LABEL_444;
    }
  }
  if ( (v101 & 1) != 0 && !v98 )
  {
    v86 |= 0x1000u;
    LODWORD(v170[0]) = v86;
  }
  v103 = !v179 || (v179 & 0x1B0) != v179;
  if ( v154 && (v101 & 8) == 0 && v103 )
  {
    if ( v102 )
    {
      v188 = 8LL;
      *(_QWORD *)&v213 = 0x100000001LL;
      v214 = 0;
      *((_QWORD *)&v213 + 1) = 8LL;
      valid = ZwPrivilegeCheck(v102, &v213, &v155);
      if ( valid >= 0 )
      {
        if ( !v155 )
        {
          valid = -1073741727;
          v52 = v151;
          v11 = Src;
          v14 = v158;
          goto LABEL_186;
        }
        goto LABEL_160;
      }
    }
    else
    {
      valid = -1073741700;
    }
LABEL_444:
    v52 = v151;
    v11 = Src;
    v14 = v158;
    goto LABEL_186;
  }
LABEL_160:
  if ( !(_BYTE)v190 || (v101 & 8) != 0 )
    goto LABEL_275;
  if ( !v102 )
  {
    valid = -1073741700;
    v52 = v151;
    v11 = Src;
    v14 = v158;
    goto LABEL_186;
  }
  v188 = 32LL;
  *(_QWORD *)&v213 = 0x100000001LL;
  v214 = 0;
  *((_QWORD *)&v213 + 1) = 32LL;
  valid = ZwPrivilegeCheck(v102, &v213, &v155);
  if ( valid < 0 )
    goto LABEL_444;
  if ( v155 )
  {
LABEL_275:
    if ( !v161 || (v101 & 0x10) != 0 )
    {
      v104 = (unsigned __int8 *)v171;
    }
    else
    {
      if ( !v102 )
      {
        valid = -1073741700;
        v52 = v151;
        v11 = Src;
        v14 = v158;
        goto LABEL_186;
      }
      v104 = (unsigned __int8 *)v171;
      if ( !RtlpValidOwnerSubjectContext(v102, v171, v172, &v191) )
      {
        valid = v191;
        v52 = v151;
        v11 = Src;
        v14 = v158;
        goto LABEL_186;
      }
    }
    if ( v100 && v175 )
    {
      valid = RtlpCreateServerAcl(v98, v197, v185, (__int64 *)&v196, &v164);
      if ( valid < 0 )
      {
        v115 = (__int64)v196;
        v14 = v158;
        v11 = Src;
        v52 = v151;
        goto LABEL_187;
      }
      if ( v99 && v98 )
        RtlFreeHeap_0();
      v98 = (__int64)v196;
      Src = v196;
      v157 = 0LL;
    }
    v105 = 4 * v104[1] + 8;
    if ( v176 )
      v106 = 4 * *((unsigned __int8 *)v176 + 1) + 8;
    else
      v106 = 0;
    if ( (v86 & 0x10) != 0 && v169 )
      v107 = (*((unsigned __int16 *)v169 + 1) + 3) & 0xFFFFFFFC;
    else
      v107 = 0;
    if ( (v86 & 4) != 0 && v98 )
      v108 = (*(unsigned __int16 *)(v98 + 2) + 3) & 0xFFFFFFFC;
    else
      v108 = 0;
    v109 = RtlAllocateHeap_0();
    v158 = (_DWORD *)v109;
    if ( v109 )
    {
      v110 = (unsigned __int16 *)(v109 + 20);
      *(_OWORD *)v109 = 0LL;
      *(_DWORD *)(v109 + 16) = 0;
      *(_WORD *)(v109 + 2) |= v86;
      *(_BYTE *)v109 = 1;
      if ( (v86 & 0x10) == 0 )
      {
        v14 = (_DWORD *)v109;
LABEL_175:
        v111 = (v86 & 4) == 0;
        v11 = Src;
        if ( !v111 )
        {
          if ( Src )
          {
            if ( (a7 & 0x4000) != 0 )
            {
              v133 = v178;
              if ( v156 )
                v133 = 0LL;
              RtlpNormalizeAcl((__int64)v110, (__int64)Src, v133);
              v108 = v110[1];
            }
            else
            {
              memmove(v110, Src, Src[1]);
              if ( !v156 )
                RtlpApplyAclToObject((__int64)v110, v178);
              v112 = Src[1];
              if ( v108 > (unsigned int)v112 )
                memset_thunk_772440563353939046((char *)v110 + v112, 0, v108 - (unsigned int)v112);
            }
            v14[4] = (_DWORD)v110 - (_DWORD)v14;
            v110 = (unsigned __int16 *)((char *)v110 + v108);
          }
          else
          {
            v14[4] = 0;
          }
        }
        memmove(v110, v171, v105);
        v113 = (int)v110;
        v114 = (char *)v110 + v105;
        v14[1] = v113 - (_DWORD)v14;
        if ( v176 )
        {
          memmove(v114, v176, v106);
          v14[2] = (_DWORD)v114 - (_DWORD)v14;
        }
        v52 = v151;
        valid = 0;
        goto LABEL_186;
      }
      if ( !v169 )
      {
        v14 = v158;
        v158[3] = 0;
        goto LABEL_175;
      }
      v128 = v109 + 20;
      if ( (a7 & 0x4000) != 0 )
      {
        v143 = v178;
        if ( v152 )
          v143 = 0LL;
        RtlpNormalizeAcl((__int64)v110, (__int64)v169, v143);
        if ( !v110[2] )
          goto LABEL_385;
        v107 = v110[1];
      }
      else
      {
        memmove(v110, v169, *((unsigned __int16 *)v169 + 1));
        if ( !v152 )
          RtlpApplyAclToObject((__int64)v110, v178);
        v129 = *((unsigned __int16 *)v169 + 1);
        if ( v107 > (unsigned int)v129 )
          memset_thunk_772440563353939046((char *)v110 + v129, 0, v107 - (unsigned int)v129);
      }
      if ( v110 )
      {
        v130 = v107;
        v14 = v158;
        v110 = (unsigned __int16 *)((char *)v110 + v130);
        v86 = v128 - (_DWORD)v158;
LABEL_303:
        v14[3] = v86;
        LOBYTE(v86) = v170[0];
        goto LABEL_175;
      }
LABEL_385:
      v14 = v158;
      v86 = 0;
      goto LABEL_303;
    }
LABEL_243:
    valid = -1073741801;
LABEL_244:
    v52 = v151;
    goto LABEL_245;
  }
  valid = -1073741727;
  v52 = v151;
  v11 = Src;
  v14 = v158;
LABEL_186:
  v115 = v157;
LABEL_187:
  if ( v194 )
    RtlFreeHeap_0();
  if ( v164 && v115 )
    RtlFreeHeap_0();
  RtlFreeHeap_0();
  RtlFreeHeap_0();
  RtlFreeHeap_0();
  RtlFreeHeap_0();
  RtlFreeHeap_0();
  if ( v206 )
    RtlFreeHeap_0();
  if ( v207 )
    RtlFreeHeap_0();
  if ( (v152 || v165) && v169 )
    RtlFreeHeap_0();
  if ( v166 && v52 )
    RtlFreeHeap_0();
  if ( v156 )
  {
    if ( v11 )
      RtlFreeHeap_0();
  }
  *v208 = v14;
  return (unsigned int)valid;
}

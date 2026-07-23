/*
 * XREFs of RtlpNewSecurityObject @ 0x180048C20
 * Callers:
 *     RtlNewSecurityObjectEx @ 0x180047CD0 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x180101F60 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlNewSecurityObject @ 0x1801080E0 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x180139EA0 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x180139F40 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpValidOwnerSubjectContext @ 0x180045300 (RtlpValidOwnerSubjectContext.c)
 *     RtlpCreateServerAcl @ 0x18004556C (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1800460D0 (RtlpNormalizeAcl.c)
 *     RtlSidDominatesForTrust @ 0x180047AB0 (RtlSidDominatesForTrust.c)
 *     RtlpOwnerAcesPresent @ 0x180047B90 (RtlpOwnerAcesPresent.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180047D40 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpApplyAclToObject @ 0x180048340 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x180048430 (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x180048B34 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18004A930 (RtlpInheritAcl2.c)
 *     RtlAddMandatoryAce @ 0x1800C62E0 (RtlAddMandatoryAce.c)
 *     RtlSidDominates @ 0x1800C94A0 (RtlSidDominates.c)
 *     ZwAccessCheck @ 0x18015EE40 (ZwAccessCheck.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x18015F680 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x180161690 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        void *a8,
        GENERIC_MAPPING *a9)
{
  _OWORD *v9; // r15
  ACL *v11; // r12
  unsigned __int8 *v12; // rbx
  void *v13; // rdi
  _DWORD *v14; // rsi
  HANDLE v15; // rdx
  void *ProcessHeap; // r13
  int result; // eax
  int v18; // eax
  __int16 v19; // r11
  void *v20; // rcx
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  unsigned int v23; // r9d
  __int16 v24; // dx
  char *v25; // rcx
  char *v26; // r10
  NTSTATUS v27; // eax
  int v28; // r12d
  __int16 v29; // cx
  int v30; // eax
  unsigned int v31; // r9d
  int v32; // r8d
  int v33; // r9d
  int v34; // edi
  unsigned int v35; // r11d
  __int16 v36; // cx
  __int64 v37; // rcx
  __int64 v38; // rsi
  int valid; // ebx
  int v40; // edi
  void *v41; // r14
  unsigned int v42; // eax
  unsigned int v43; // r15d
  PVOID Heap_0; // rax
  int v45; // r9d
  __int16 v46; // cx
  __int16 v47; // dx
  __int64 v48; // r12
  __int16 v49; // cx
  __int64 v50; // rcx
  char *v51; // r14
  int v52; // edi
  void *v53; // rsi
  ULONG v54; // eax
  unsigned int v55; // r15d
  char *v56; // rax
  char *v57; // r14
  __int16 v58; // cx
  PSID v59; // rsi
  unsigned int v60; // ebx
  _OWORD *v61; // rdi
  __int16 v62; // ax
  __int16 v63; // ax
  __int64 v64; // rcx
  int v65; // edx
  ACCESS_MASK v66; // ecx
  __int16 v67; // ax
  __int64 v68; // rax
  char *v69; // rdx
  __int64 v70; // rsi
  unsigned int k; // r8d
  _DWORD *v72; // rax
  unsigned __int8 v73; // dl
  PSID v74; // r9
  char *v75; // rcx
  char *v76; // rdi
  unsigned int i; // edx
  unsigned int v78; // ebx
  void *v79; // rdx
  __int64 v80; // rax
  ACL *v81; // r15
  unsigned int v82; // esi
  __int16 v83; // ax
  __int64 v84; // rax
  char *v85; // r14
  void *v86; // r12
  ULONG v87; // eax
  unsigned int v88; // r15d
  ACL *v89; // rdi
  ACL *v90; // rax
  __int16 v91; // si
  int v92; // eax
  int v93; // r12d
  unsigned __int16 *v94; // rax
  unsigned int v95; // ecx
  _OWORD *v96; // rdx
  __int16 v97; // ax
  __int64 v98; // r14
  __int16 v99; // ax
  __int64 v100; // rax
  char *v101; // rdi
  void *v102; // r15
  int v103; // esi
  ULONG v104; // eax
  unsigned int v105; // r12d
  ACL *v106; // rax
  ACL *v107; // rdi
  char v108; // r13
  char v109; // r14
  unsigned int v110; // esi
  HANDLE v111; // r15
  bool v112; // al
  unsigned __int8 *v113; // rsi
  unsigned int v114; // r15d
  unsigned int v115; // r14d
  unsigned int v116; // esi
  unsigned int v117; // edi
  char *v118; // rax
  unsigned __int16 *v119; // rbx
  bool v120; // zf
  __int64 AclSize; // rcx
  int v122; // eax
  char *v123; // rbx
  ACL *v124; // rdi
  int v125; // eax
  void *v126; // r10
  unsigned __int8 *v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int16 v130; // cx
  __int64 v131; // rcx
  char *v132; // rdx
  HANDLE v133; // rdx
  PSID v134; // rdx
  int v135; // eax
  char *v136; // r8
  int v137; // r12d
  __int64 v138; // rcx
  __int64 v139; // rax
  __int16 v140; // cx
  __int64 v141; // rax
  PGENERIC_MAPPING v142; // r8
  __int64 v143; // rcx
  int v144; // ecx
  __int64 v145; // rax
  bool v146; // cf
  __int64 v147; // rax
  __int64 v148; // rax
  char *v149; // rax
  __int64 v150; // rcx
  void *v151; // rcx
  PGENERIC_MAPPING v152; // r8
  __int64 v153; // rax
  __int16 v154; // r10
  __int64 v155; // rax
  char *v156; // rcx
  char *v157; // r8
  unsigned int j; // edx
  ACL *Src; // [rsp+90h] [rbp-80h]
  char *v160; // [rsp+98h] [rbp-78h]
  char v161; // [rsp+A0h] [rbp-70h]
  BOOLEAN DominatesTrust; // [rsp+A1h] [rbp-6Fh] BYREF
  char v163; // [rsp+A2h] [rbp-6Eh]
  BOOLEAN Result; // [rsp+A3h] [rbp-6Dh] BYREF
  char v165; // [rsp+A4h] [rbp-6Ch]
  PVOID v166; // [rsp+A8h] [rbp-68h]
  _DWORD *v167; // [rsp+B0h] [rbp-60h]
  char v168; // [rsp+B8h] [rbp-58h] BYREF
  char v169; // [rsp+B9h] [rbp-57h] BYREF
  char v170; // [rsp+BAh] [rbp-56h]
  BOOLEAN Dominates; // [rsp+BBh] [rbp-55h] BYREF
  char v172; // [rsp+BCh] [rbp-54h]
  char v173; // [rsp+BDh] [rbp-53h] BYREF
  char v174; // [rsp+BEh] [rbp-52h]
  char v175; // [rsp+BFh] [rbp-51h]
  ULONG PrivilegeSetLength[2]; // [rsp+C0h] [rbp-50h] BYREF
  int v177; // [rsp+C8h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp-40h]
  __int64 v179; // [rsp+D8h] [rbp-38h] BYREF
  PVOID HeapHandle; // [rsp+E0h] [rbp-30h]
  void *v181; // [rsp+E8h] [rbp-28h] BYREF
  char v182; // [rsp+F0h] [rbp-20h]
  char v183; // [rsp+F1h] [rbp-1Fh] BYREF
  char v184[2]; // [rsp+F2h] [rbp-1Eh] BYREF
  __int16 v185; // [rsp+F4h] [rbp-1Ch]
  void *v186; // [rsp+F8h] [rbp-18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+100h] [rbp-10h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+108h] [rbp-8h]
  int v189; // [rsp+110h] [rbp+0h] BYREF
  ULONG ReturnLength; // [rsp+114h] [rbp+4h] BYREF
  PSID Sid2; // [rsp+118h] [rbp+8h]
  _OWORD *v192; // [rsp+120h] [rbp+10h]
  HANDLE TokenHandle; // [rsp+128h] [rbp+18h]
  NTSTATUS AccessStatus[2]; // [rsp+130h] [rbp+20h] BYREF
  unsigned __int8 *v195; // [rsp+138h] [rbp+28h]
  PSID Sid1; // [rsp+140h] [rbp+30h]
  HANDLE Handle; // [rsp+148h] [rbp+38h] BYREF
  __int64 v198; // [rsp+150h] [rbp+40h]
  void *v199; // [rsp+158h] [rbp+48h]
  int v200; // [rsp+160h] [rbp+50h]
  NTSTATUS v201; // [rsp+164h] [rbp+54h] BYREF
  ACL *p_Acl; // [rsp+168h] [rbp+58h]
  __int64 v203; // [rsp+170h] [rbp+60h]
  PVOID SecurityDescriptor; // [rsp+178h] [rbp+68h] BYREF
  unsigned __int16 *v205; // [rsp+180h] [rbp+70h] BYREF
  ACL *v206; // [rsp+188h] [rbp+78h] BYREF
  int v207; // [rsp+190h] [rbp+80h]
  __int64 v208; // [rsp+198h] [rbp+88h] BYREF
  __int64 v209; // [rsp+1A0h] [rbp+90h] BYREF
  PSID v210; // [rsp+1A8h] [rbp+98h]
  PVOID v211; // [rsp+1B0h] [rbp+A0h]
  PVOID v212; // [rsp+1B8h] [rbp+A8h]
  PVOID v213; // [rsp+1C0h] [rbp+B0h]
  PVOID v214; // [rsp+1C8h] [rbp+B8h]
  PVOID v215; // [rsp+1D0h] [rbp+C0h]
  PVOID v216; // [rsp+1D8h] [rbp+C8h]
  PVOID v217; // [rsp+1E0h] [rbp+D0h]
  _QWORD *v218; // [rsp+1E8h] [rbp+D8h]
  _OWORD v219[2]; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v220; // [rsp+210h] [rbp+100h]
  __int64 v221; // [rsp+218h] [rbp+108h] BYREF
  int v222; // [rsp+220h] [rbp+110h]
  _PRIVILEGE_SET PrivilegeSet; // [rsp+228h] [rbp+118h] BYREF
  _OBJECT_ATTRIBUTES TokenInformation; // [rsp+240h] [rbp+130h] BYREF
  __int64 v225; // [rsp+270h] [rbp+160h]
  ACL Acl; // [rsp+280h] [rbp+170h] BYREF

  GenericMapping = a9;
  v9 = a2;
  v203 = a4;
  v220 = 0LL;
  Result = 0;
  v11 = 0LL;
  v161 = 0;
  v12 = 0LL;
  v175 = 0;
  v13 = 0LL;
  v174 = 0;
  v14 = 0LL;
  v166 = 0LL;
  v206 = 0LL;
  v165 = 0;
  v170 = 0;
  v163 = 0;
  v168 = 0;
  v184[0] = 0;
  v183 = 0;
  v169 = 0;
  LOBYTE(v200) = 0;
  v173 = 0;
  p_Acl = &Acl;
  memset(v219, 0, sizeof(v219));
  v189 = 0;
  v205 = 0LL;
  memset(&PrivilegeSet, 0, sizeof(PrivilegeSet));
  SecurityDescriptor = 0LL;
  v211 = 0LL;
  v186 = 0LL;
  v214 = 0LL;
  v181 = 0LL;
  v215 = 0LL;
  *(_QWORD *)AccessStatus = 0LL;
  v212 = 0LL;
  *(_QWORD *)PrivilegeSetLength = 0LL;
  v213 = 0LL;
  v179 = 0LL;
  v192 = a2;
  v15 = a8;
  Handle = (HANDLE)a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v218 = a3;
  TokenHandle = a8;
  BaseAddress = 0LL;
  Src = 0LL;
  Sid1 = 0LL;
  v210 = 0LL;
  v195 = 0LL;
  v199 = 0LL;
  v198 = 0LL;
  v167 = 0LL;
  v177 = 0;
  GrantedAccess = 0;
  v221 = 0LL;
  Sid2 = 0LL;
  Dominates = 1;
  v201 = 0;
  LOBYTE(ReturnLength) = 1;
  v216 = 0LL;
  v208 = 0LL;
  v217 = 0LL;
  v209 = 0LL;
  if ( a8 )
  {
    ReturnLength = 0;
    v225 = 0LL;
    memset(&TokenInformation, 0, sizeof(TokenInformation));
    result = NtQueryInformationToken(TokenHandle, 0xAu, &TokenInformation, 0x38u, &ReturnLength);
    if ( result < 0 )
      return result;
    ReturnLength = TokenInformation.Attributes;
    if ( TokenInformation.Attributes == 2 && *((int *)&TokenInformation.Attributes + 1) < 1 )
      return -1073741659;
    v15 = TokenHandle;
  }
  if ( v9 )
  {
    v172 = 1;
  }
  else
  {
    v9 = v219;
    v172 = 0;
    v192 = v219;
    LOBYTE(v219[0]) = 1;
  }
  v18 = *((unsigned __int16 *)v9 + 1);
  v185 = *((_WORD *)v9 + 1) & 0x80;
  v19 = v185;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v182 = v185 != 0;
  v207 = v18;
  if ( v15 || v185 )
  {
    result = RtlpGetDefaultsSubjectContext(
               TokenHandle,
               v185 != 0,
               &v186,
               &v181,
               (PVOID *)AccessStatus,
               (PVOID *)&v208,
               (PVOID *)PrivilegeSetLength,
               (PVOID *)&v179,
               (PVOID *)&v209);
    if ( result < 0 )
      return result;
    v211 = v186;
    v216 = (PVOID)v208;
    v12 = *(unsigned __int8 **)v186;
    v214 = v181;
    v13 = *(void **)v181;
    v215 = *(PVOID *)AccessStatus;
    v198 = **(_QWORD **)AccessStatus;
    v212 = *(PVOID *)PrivilegeSetLength;
    v20 = **(void ***)PrivilegeSetLength;
    v213 = (PVOID)v179;
    Sid1 = v20;
    v210 = *(PSID *)v179;
    if ( v208 )
    {
      v195 = *(unsigned __int8 **)v208;
      v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
      v195 = 0LL;
    }
    v19 = v185;
    v217 = (PVOID)v209;
    if ( v209 )
      v21 = *(_QWORD *)v209;
    v199 = (void *)v21;
  }
  v22 = *((_WORD *)v9 + 1);
  v23 = v22;
  v24 = v22 & 0x8000;
  if ( v24 )
  {
    v128 = *((unsigned int *)v9 + 1);
    if ( !(_DWORD)v128 )
      goto LABEL_210;
    v25 = (char *)v9 + v128;
  }
  else
  {
    v25 = (char *)*((_QWORD *)v9 + 1);
  }
  v181 = v25;
  if ( v25 )
  {
    v170 = 1;
    goto LABEL_18;
  }
LABEL_210:
  if ( (a7 & 0x20) != 0 )
  {
    if ( !a1 )
    {
      valid = -1073741734;
      v57 = 0LL;
      goto LABEL_186;
    }
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v151 = *(void **)(a1 + 8);
    }
    else
    {
      v150 = *(unsigned int *)(a1 + 4);
      if ( !(_DWORD)v150 )
        goto LABEL_379;
      v151 = (void *)(a1 + v150);
    }
    v181 = v151;
    v170 = 1;
    if ( v151 )
      goto LABEL_18;
LABEL_379:
    valid = -1073741734;
    v57 = 0LL;
    goto LABEL_186;
  }
  v127 = v12;
  if ( v19 )
    v127 = v195;
  v181 = v127;
  if ( !v127 )
  {
    valid = -1073741700;
    v57 = 0LL;
    goto LABEL_186;
  }
LABEL_18:
  if ( v24 )
  {
    v129 = *((unsigned int *)v9 + 2);
    if ( !(_DWORD)v129 )
    {
LABEL_205:
      if ( (a7 & 0x40) != 0 )
      {
        if ( !a1 )
        {
          valid = -1073741733;
          v57 = 0LL;
          goto LABEL_186;
        }
        if ( *(__int16 *)(a1 + 2) >= 0 )
        {
          v126 = *(void **)(a1 + 16);
        }
        else
        {
          v147 = *(unsigned int *)(a1 + 8);
          if ( !(_DWORD)v147 )
            goto LABEL_209;
          v126 = (void *)(a1 + v147);
        }
      }
      else
      {
        v126 = v13;
        if ( v19 )
          v126 = v199;
      }
      v186 = v126;
      if ( v126 )
        goto LABEL_21;
LABEL_209:
      valid = -1073741733;
      v57 = 0LL;
      goto LABEL_186;
    }
    v26 = (char *)v9 + v129;
  }
  else
  {
    v26 = (char *)*((_QWORD *)v9 + 2);
  }
  v186 = v26;
  if ( !v26 )
    goto LABEL_205;
LABEL_21:
  v27 = a7 >> 2;
  LOBYTE(v27) = (a7 & 4) != 0;
  AccessStatus[0] = v27;
  v28 = a7 & 2;
  DominatesTrust = v28 != 0;
  v29 = v23 & 0x10;
  v30 = (v23 >> 2) & 8;
  v31 = v23 >> 1;
  v32 = v31 & 0x400;
  v33 = v31 & 0x1000;
  v34 = v29 != 0 ? 4 : 0;
  if ( v29 )
  {
    if ( v24 )
    {
      v143 = *((unsigned int *)v9 + 3);
      v35 = 0;
      if ( (_DWORD)v143 )
        *(_QWORD *)PrivilegeSetLength = (char *)v9 + v143;
      else
        *(_QWORD *)PrivilegeSetLength = 0LL;
    }
    else
    {
      v35 = 0;
      *(_QWORD *)PrivilegeSetLength = *((_QWORD *)v9 + 3);
    }
  }
  else
  {
    v35 = 0;
    *(_QWORD *)PrivilegeSetLength = 0LL;
  }
  if ( !a1 )
    goto LABEL_28;
  v36 = *(_WORD *)(a1 + 2);
  if ( (v36 & 0x10) == 0 )
    goto LABEL_28;
  if ( v36 >= 0 )
  {
    v38 = *(_QWORD *)(a1 + 24);
    goto LABEL_29;
  }
  v37 = *(unsigned int *)(a1 + 12);
  if ( (_DWORD)v37 )
    v38 = a1 + v37;
  else
LABEL_28:
    v38 = 0LL;
LABEL_29:
  valid = 0;
  v40 = v30 | v32 | v33 | v34;
  v41 = NtCurrentPeb()->ProcessHeap;
  if ( v40 || v38 )
  {
    v42 = 200;
    v43 = 0;
    LODWORD(v179) = 200;
    while ( 1 )
    {
      BaseAddress = 0LL;
      if ( v43 >= 2 )
        goto LABEL_36;
      Heap_0 = RtlAllocateHeap_0(v41, NtdllBaseTag + 1310720, v42);
      BaseAddress = Heap_0;
      if ( !Heap_0 )
      {
        valid = -1073741801;
        goto LABEL_317;
      }
      valid = RtlpInheritAcl2(
                v38,
                PrivilegeSetLength[0],
                v40,
                a6,
                DominatesTrust,
                AccessStatus[0],
                (__int64)v181,
                (__int64)v186,
                (__int64)v195,
                (__int64)v199,
                (__int64)GenericMapping,
                2,
                v203,
                a5,
                (__int64)&v179,
                (__int64)Heap_0,
                (__int64)&v168,
                (__int64)&v177);
      if ( valid >= 0 )
        break;
      RtlFreeHeap_0(v41, 0, BaseAddress);
      v35 = 0;
      BaseAddress = 0LL;
      if ( valid != -1073741789 )
        goto LABEL_36;
      v42 = v179;
      ++v43;
    }
    if ( !(_DWORD)v179 )
    {
      RtlFreeHeap_0(v41, 0, BaseAddress);
      v35 = 0;
      BaseAddress = 0LL;
      goto LABEL_219;
    }
    v35 = 0;
LABEL_36:
    if ( valid < 0 )
    {
      if ( valid == -2147483637 )
      {
        v9 = v192;
        v163 = v168;
        goto LABEL_39;
      }
LABEL_317:
      v11 = 0LL;
      v14 = v167;
      v57 = 0LL;
      goto LABEL_186;
    }
LABEL_219:
    v9 = v192;
    v161 = 1;
    v163 = v168;
    LODWORD(v179) = 2 * (v177 & 0x1400 | (2 * (v177 & 8 | 0x2004)));
    goto LABEL_42;
  }
  BaseAddress = 0LL;
  v177 = v28 != 0 ? 0x400 : 0;
LABEL_39:
  v45 = 34816;
  if ( (a7 & 2) == 0 )
    v45 = 0x8000;
  v46 = *((_WORD *)v9 + 1);
  LODWORD(v179) = v45;
  if ( (v46 & 0x30) == 0x30 )
  {
    if ( (v46 & 0x10) != 0 )
    {
      if ( v46 >= 0 )
      {
        v149 = (char *)*((_QWORD *)v9 + 3);
      }
      else
      {
        v148 = *((unsigned int *)v9 + 3);
        if ( !(_DWORD)v148 )
        {
          BaseAddress = 0LL;
          goto LABEL_388;
        }
        v149 = (char *)v9 + v148;
      }
      BaseAddress = v149;
    }
    else
    {
      BaseAddress = 0LL;
    }
LABEL_388:
    v163 = 1;
    LODWORD(v179) = v45 | v46 & 0x2000 | 0x10;
  }
LABEL_42:
  v47 = *((_WORD *)v9 + 1);
  if ( (v47 & 0x10) != 0 )
  {
    if ( v47 < 0 )
    {
      v144 = *((_DWORD *)v9 + 3);
      if ( v144 )
        LODWORD(v48) = (_DWORD)v9 + v144;
      else
        LODWORD(v48) = 0;
    }
    else
    {
      v48 = *((_QWORD *)v9 + 3);
    }
  }
  else
  {
    LODWORD(v48) = 0;
  }
  if ( !Handle )
    goto LABEL_49;
  v49 = *((_WORD *)Handle + 1);
  if ( (v49 & 0x10) == 0 )
    goto LABEL_49;
  if ( v49 >= 0 )
  {
    v51 = (char *)*((_QWORD *)Handle + 3);
    goto LABEL_50;
  }
  v50 = *((unsigned int *)Handle + 3);
  if ( (_DWORD)v50 )
    v51 = (char *)Handle + v50;
  else
LABEL_49:
    v51 = 0LL;
LABEL_50:
  valid = 0;
  v52 = (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400 | ((*((_WORD *)v9 + 1) & 0x10) != 0
                                                                                                 ? 4
                                                                                                 : 0);
  v53 = NtCurrentPeb()->ProcessHeap;
  if ( !v52 && !v51 )
  {
    v57 = 0LL;
    v160 = 0LL;
    goto LABEL_60;
  }
  v54 = 200;
  v55 = 0;
  PrivilegeSetLength[0] = 200;
  while ( 1 )
  {
    v160 = 0LL;
    if ( v55 >= 2 )
      goto LABEL_57;
    v56 = (char *)RtlAllocateHeap_0(v53, NtdllBaseTag + 1310720, v54);
    v160 = v56;
    if ( !v56 )
    {
      v11 = 0LL;
      valid = -1073741801;
      v14 = v167;
      v57 = 0LL;
      goto LABEL_186;
    }
    valid = RtlpInheritAcl2(
              (_DWORD)v51,
              v48,
              v52,
              a6,
              DominatesTrust,
              AccessStatus[0],
              (__int64)v181,
              (__int64)v186,
              (__int64)v195,
              (__int64)v199,
              (__int64)GenericMapping,
              2,
              v203,
              a5,
              (__int64)PrivilegeSetLength,
              (__int64)v56,
              (__int64)v184,
              (__int64)&GrantedAccess);
    if ( valid >= 0 )
      break;
    RtlFreeHeap_0(v53, 0, v160);
    v35 = 0;
    v160 = 0LL;
    if ( valid != -1073741789 )
      goto LABEL_57;
    v54 = PrivilegeSetLength[0];
    ++v55;
  }
  if ( PrivilegeSetLength[0] )
  {
    v35 = 0;
LABEL_57:
    v57 = v160;
    if ( valid >= 0 )
      goto LABEL_86;
    if ( valid != -2147483637 )
    {
LABEL_245:
      v11 = Src;
      v14 = v167;
      goto LABEL_186;
    }
    v9 = v192;
LABEL_60:
    v58 = *((_WORD *)v9 + 1);
    if ( (v58 & 0x30) == 0x30 )
    {
      if ( (v58 & 0x10) != 0 )
      {
        if ( v58 >= 0 )
        {
          v57 = (char *)*((_QWORD *)v9 + 3);
          v160 = v57;
        }
        else
        {
          v145 = *((unsigned int *)v9 + 3);
          if ( (_DWORD)v145 )
          {
            v57 = (char *)v9 + v145;
            v160 = (char *)v9 + v145;
          }
          else
          {
            v57 = 0LL;
            v160 = 0LL;
          }
        }
      }
      else
      {
        v57 = 0LL;
        v160 = 0LL;
      }
    }
    goto LABEL_61;
  }
  RtlFreeHeap_0(v53, 0, v160);
  v35 = 0;
  v57 = 0LL;
  v160 = 0LL;
LABEL_86:
  v175 = 1;
LABEL_61:
  v59 = v210;
  v60 = 0;
  do
  {
    v61 = v192;
    v62 = *((_WORD *)v192 + 1);
    if ( (v62 & 0x10) == 0 )
      goto LABEL_63;
    if ( v62 < 0 )
    {
      v141 = *((unsigned int *)v192 + 3);
      if ( !(_DWORD)v141 )
        goto LABEL_63;
      v75 = (char *)v192 + v141;
    }
    else
    {
      v75 = (char *)*((_QWORD *)v192 + 3);
    }
    if ( !v75 )
      goto LABEL_63;
    v76 = v75 + 8;
    for ( i = 0; ; ++i )
    {
      if ( i >= *((unsigned __int16 *)v75 + 2) )
        goto LABEL_102;
      if ( i >= v60 && *v76 == 20 )
        break;
      v76 += *((unsigned __int16 *)v76 + 1);
    }
    v78 = i;
    v79 = v76 + 8;
    if ( !v76 )
      v79 = 0LL;
    if ( v79 )
    {
      DominatesTrust = 0;
      if ( !v59 || (RtlSidDominatesForTrust(v59, v79, &DominatesTrust), !DominatesTrust) )
      {
        v11 = 0LL;
        valid = -1073741790;
        v14 = v167;
        goto LABEL_186;
      }
      v35 = 0;
    }
    v60 = v78 + 1;
  }
  while ( v76 );
LABEL_102:
  v61 = v192;
LABEL_63:
  if ( (a7 & 0x800) != 0 )
  {
    v154 = *((_WORD *)v61 + 1);
    if ( (v154 & 0x10) != 0 )
    {
      while ( 1 )
      {
        if ( v154 >= 0 )
        {
          v156 = (char *)*((_QWORD *)v61 + 3);
        }
        else
        {
          v155 = *((unsigned int *)v61 + 3);
          if ( !(_DWORD)v155 )
            break;
          v156 = (char *)v61 + v155;
        }
        if ( !v156 )
          break;
        v157 = v156 + 8;
        for ( j = 0; ; ++j )
        {
          if ( j >= *((unsigned __int16 *)v156 + 2) )
            goto LABEL_410;
          if ( j >= v35 && *v157 == 20 )
            break;
          v157 += *((unsigned __int16 *)v157 + 1);
        }
        v35 = j + 1;
        if ( !v157 )
          break;
        if ( (v157[1] & 8) == 0 )
          goto LABEL_428;
      }
    }
LABEL_410:
    if ( v59 )
    {
LABEL_428:
      valid = -1073741811;
      goto LABEL_244;
    }
  }
  v63 = *((_WORD *)v61 + 1);
  if ( (v63 & 0x10) != 0 )
  {
    if ( v63 >= 0 )
    {
      v64 = *((_QWORD *)v61 + 3);
    }
    else
    {
      v80 = *((unsigned int *)v61 + 3);
      if ( (_DWORD)v80 )
        v64 = (__int64)v61 + v80;
      else
        v64 = 0LL;
    }
  }
  else
  {
    v64 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v64, v59);
  if ( valid < 0 )
    goto LABEL_244;
  v65 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v65 = (a7 >> 8) & 1;
  v66 = v65 | 4;
  if ( (a7 & 0x400) == 0 )
    v66 = v65;
  if ( v66 )
  {
    v70 = v221;
    v73 = 0;
    v72 = Sid1;
    v74 = (PSID)v221;
    goto LABEL_80;
  }
  v67 = *((_WORD *)v61 + 1);
  if ( (v67 & 0x10) == 0 )
    goto LABEL_79;
  if ( v67 < 0 )
  {
    v68 = *((unsigned int *)v61 + 3);
    if ( (_DWORD)v68 )
    {
      v69 = (char *)v61 + v68;
      goto LABEL_76;
    }
LABEL_79:
    v72 = Sid1;
    v70 = 0LL;
    v73 = 0;
    v74 = 0LL;
    goto LABEL_80;
  }
  v69 = (char *)*((_QWORD *)v61 + 3);
LABEL_76:
  if ( !v69 )
    goto LABEL_79;
  v70 = (__int64)(v69 + 8);
  for ( k = 0; ; ++k )
  {
    if ( k >= *((unsigned __int16 *)v69 + 2) )
      goto LABEL_79;
    if ( *(_BYTE *)v70 == 17 )
      break;
    v70 += *(unsigned __int16 *)(v70 + 2);
  }
  if ( v70 )
  {
    v73 = *(_BYTE *)(v70 + 1);
    v74 = (PSID)(v70 + 8);
    v66 = *(_DWORD *)(v70 + 4);
    Sid2 = (PSID)(v70 + 8);
    if ( v73 == 8 || (v73 & 0x10) != 0 )
    {
      v72 = Sid1;
      v70 = 0LL;
      Sid2 = 0LL;
      v74 = 0LL;
      v66 = 0;
      v73 = 0;
    }
    else
    {
      v72 = Sid1;
      if ( (v73 & 8) != 0 )
      {
        v146 = *((_DWORD *)Sid1 + 2) < 0x2000u;
        Sid2 = (PSID)(v70 + 8);
        if ( v146 )
        {
          v57 = v160;
          valid = -1073740730;
          v11 = 0LL;
          v14 = v167;
          goto LABEL_186;
        }
      }
    }
  }
  else
  {
    v74 = Sid2;
    v73 = 0;
    v72 = Sid1;
  }
LABEL_80:
  if ( !v66 )
  {
    if ( !v72 || v72[2] >= 0x2000u )
      goto LABEL_111;
    v66 = 1;
  }
  if ( !v70 )
  {
    if ( !TokenHandle )
    {
      v57 = v160;
      valid = -1073741700;
      v11 = 0LL;
      v14 = v167;
      goto LABEL_186;
    }
    v74 = v72;
    Sid2 = v72;
    v73 = 0;
  }
LABEL_111:
  if ( v74 )
  {
    Acl = (ACL)8388610LL;
    valid = RtlAddMandatoryAce(&Acl, 2u, v73, v74, 0x11u, v66);
    if ( valid < 0 )
      goto LABEL_244;
    v81 = &Acl;
  }
  else
  {
    v81 = 0LL;
    p_Acl = 0LL;
  }
  if ( (a7 & 0x700) != 0 )
  {
    v82 = 4;
  }
  else if ( !v70 && v81 )
  {
    v82 = 0;
  }
  else
  {
    v82 = (*((_WORD *)v61 + 1) & 0x2800 | (*((unsigned __int16 *)v61 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !Handle || (v83 = *((_WORD *)Handle + 1), (v83 & 0x10) == 0) )
  {
LABEL_122:
    v85 = 0LL;
    goto LABEL_123;
  }
  if ( v83 < 0 )
  {
    v84 = *((unsigned int *)Handle + 3);
    if ( (_DWORD)v84 )
    {
      v85 = (char *)Handle + v84;
      goto LABEL_123;
    }
    goto LABEL_122;
  }
  v85 = (char *)*((_QWORD *)Handle + 3);
LABEL_123:
  valid = 0;
  v86 = NtCurrentPeb()->ProcessHeap;
  if ( v82 || v85 )
  {
    v87 = 200;
    v88 = 0;
    PrivilegeSetLength[0] = 200;
    while ( 1 )
    {
      v89 = 0LL;
      if ( v88 >= 2 )
        goto LABEL_130;
      v90 = (ACL *)RtlAllocateHeap_0(v86, NtdllBaseTag + 1310720, v87);
      v89 = v90;
      if ( !v90 )
        goto LABEL_243;
      valid = RtlpInheritAcl2(
                (_DWORD)v85,
                (_DWORD)p_Acl,
                v82,
                a6,
                1,
                0,
                (__int64)v181,
                (__int64)v186,
                (__int64)v195,
                (__int64)v199,
                (__int64)GenericMapping,
                3,
                v203,
                a5,
                (__int64)PrivilegeSetLength,
                (__int64)v90,
                (__int64)&v183,
                (__int64)&v177);
      if ( valid >= 0 )
        break;
      RtlFreeHeap_0(v86, 0, v89);
      v89 = 0LL;
      if ( valid != -1073741789 )
        goto LABEL_130;
      v87 = PrivilegeSetLength[0];
      ++v88;
    }
    if ( PrivilegeSetLength[0] )
    {
LABEL_130:
      if ( valid == -2147483637 )
      {
        v81 = p_Acl;
        goto LABEL_132;
      }
      if ( valid < 0 )
        goto LABEL_244;
    }
    else
    {
      RtlFreeHeap_0(v86, 0, v89);
      v89 = 0LL;
    }
    v81 = p_Acl;
    v91 = v177;
    goto LABEL_133;
  }
LABEL_132:
  v89 = v81;
  v177 = 0;
  v91 = 0;
LABEL_133:
  v57 = v160;
  v92 = RtlpCombineAcls(
          (unsigned __int8 *)BaseAddress,
          (unsigned __int8 *)v89,
          (unsigned __int8 *)v160,
          (unsigned __int8 *)v160,
          (unsigned __int64)v160,
          (unsigned __int64)v160,
          &v205,
          &v189);
  v93 = v179;
  valid = v92;
  v189 |= (v179 & 0x2000) << 17;
  if ( v89 && v89 != v81 )
    RtlFreeHeap_0(ProcessHeap, 0, v89);
  if ( valid < 0 )
    goto LABEL_245;
  v94 = v205;
  if ( v205 )
  {
    if ( v161 && BaseAddress )
    {
      RtlFreeHeap_0(ProcessHeap, 0, BaseAddress);
      v94 = v205;
    }
    BaseAddress = v94;
    v95 = 0;
    v205 = 0LL;
    v174 = 1;
    v93 |= 2 * (v91 & 0x1400 | (2 * (v91 & 8 | 4)));
    LODWORD(v179) = v93;
  }
  else
  {
    v95 = 0;
  }
  if ( (a7 & 8) == 0 )
  {
    if ( BaseAddress )
    {
      v136 = (char *)BaseAddress + 8;
      while ( v95 < *((unsigned __int16 *)BaseAddress + 2) )
      {
        if ( *v136 == 17 )
        {
          v134 = v136 + 8;
          goto LABEL_257;
        }
        ++v95;
        v136 += *((unsigned __int16 *)v136 + 1);
      }
    }
    v134 = Sid2;
LABEL_257:
    if ( v134 )
    {
      if ( !TokenHandle )
      {
        v11 = 0LL;
        valid = -1073741700;
        v14 = v167;
        goto LABEL_186;
      }
      valid = RtlSidDominates(Sid1, v134, &Dominates);
      if ( valid < 0 )
        goto LABEL_245;
      v135 = (unsigned __int8)v200;
      if ( !Dominates )
        v135 = 1;
      v200 = v135;
    }
  }
  v96 = v192;
  GrantedAccess = a7 & 1;
  v97 = *((_WORD *)v192 + 1);
  if ( (v97 & 4) != 0 )
  {
    if ( v97 >= 0 )
    {
      v98 = *((_QWORD *)v192 + 4);
    }
    else
    {
      v125 = *((_DWORD *)v192 + 4);
      if ( v125 )
        LODWORD(v98) = (_DWORD)v192 + v125;
      else
        LODWORD(v98) = 0;
    }
  }
  else
  {
    LODWORD(v98) = 0;
  }
  if ( !Handle )
    goto LABEL_220;
  v99 = *((_WORD *)Handle + 1);
  if ( (v99 & 4) == 0 )
    goto LABEL_220;
  if ( v99 >= 0 )
  {
    v101 = (char *)*((_QWORD *)Handle + 4);
    goto LABEL_145;
  }
  v100 = *((unsigned int *)Handle + 4);
  if ( (_DWORD)v100 )
    v101 = (char *)Handle + v100;
  else
LABEL_220:
    v101 = 0LL;
LABEL_145:
  valid = 0;
  v102 = NtCurrentPeb()->ProcessHeap;
  v103 = *((_WORD *)v192 + 1) & 0x140C;
  if ( (*((_WORD *)v192 + 1) & 0x140C) != 0 || v101 )
  {
    v104 = 200;
    v105 = 0;
    PrivilegeSetLength[0] = 200;
    while ( 1 )
    {
      Src = 0LL;
      if ( v105 >= 2 )
        goto LABEL_152;
      v106 = (ACL *)RtlAllocateHeap_0(v102, NtdllBaseTag + 1310720, v104);
      Src = v106;
      if ( !v106 )
      {
        ProcessHeap = HeapHandle;
        valid = -1073741801;
        v57 = v160;
        v11 = 0LL;
        v14 = v167;
        goto LABEL_186;
      }
      valid = RtlpInheritAcl2(
                (_DWORD)v101,
                v98,
                v103,
                a6,
                GrantedAccess,
                (a7 & 4) != 0,
                (__int64)v181,
                (__int64)v186,
                (__int64)v195,
                (__int64)v199,
                (__int64)GenericMapping,
                1,
                v203,
                a5,
                (__int64)PrivilegeSetLength,
                (__int64)v106,
                (__int64)&v169,
                (__int64)&v177);
      if ( valid >= 0 )
        break;
      RtlFreeHeap_0(v102, 0, Src);
      Src = 0LL;
      if ( valid != -1073741789 )
        goto LABEL_152;
      v104 = PrivilegeSetLength[0];
      ++v105;
    }
    if ( !PrivilegeSetLength[0] )
    {
      RtlFreeHeap_0(v102, 0, Src);
      v107 = 0LL;
      Src = 0LL;
      goto LABEL_154;
    }
LABEL_152:
    if ( valid >= 0 )
    {
      v107 = Src;
LABEL_154:
      v108 = 1;
      v109 = v169;
      v110 = a7;
      v93 = v177 & 0x1408 | 4 | v179;
      v165 = 1;
      LODWORD(v179) = v93;
      goto LABEL_155;
    }
    if ( valid != -2147483637 )
      goto LABEL_444;
    v109 = v169;
    v93 = v179;
    v96 = v192;
    v107 = Src;
  }
  else
  {
    v107 = 0LL;
    Src = 0LL;
    v109 = 0;
  }
  v110 = a7;
  if ( (a7 & 1) != 0 )
  {
    v93 |= 0x400u;
    LODWORD(v179) = v93;
  }
  v140 = *((_WORD *)v96 + 1);
  if ( (v140 & 0xC) == 0xC )
  {
    if ( (v140 & 4) != 0 )
    {
      if ( v140 < 0 )
      {
        v153 = *((unsigned int *)v96 + 4);
        if ( (_DWORD)v153 )
          v107 = (ACL *)((char *)v96 + v153);
        else
          v107 = 0LL;
      }
      else
      {
        v107 = (ACL *)*((_QWORD *)v96 + 4);
      }
    }
    else
    {
      v107 = 0LL;
    }
    Src = v107;
    v109 = 1;
    v93 |= v140 & 0x1000 | 4;
    LODWORD(v179) = v93;
    v108 = 0;
  }
  else
  {
    if ( v198 )
    {
      v93 |= 4u;
      Src = (ACL *)v198;
      LODWORD(v179) = v93;
      v107 = (ACL *)v198;
    }
    v108 = 0;
  }
LABEL_155:
  v111 = TokenHandle;
  if ( (v110 & 0x1000) == 0 && v172 && TokenHandle && Handle )
  {
    GrantedAccess = 0;
    AccessStatus[0] = 0;
    valid = RtlpNewSecurityObject(
              (_DWORD)Handle,
              0,
              (unsigned int)&SecurityDescriptor,
              v203,
              a5,
              a6,
              v110 | 1,
              (__int64)TokenHandle,
              (__int64)GenericMapping);
    if ( valid < 0 )
      goto LABEL_444;
    v130 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v130 & 4) != 0 )
    {
      if ( v130 >= 0 )
      {
        v132 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v131 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v131 )
          v132 = (char *)SecurityDescriptor + v131;
        else
          v132 = 0LL;
      }
    }
    else
    {
      v132 = 0LL;
    }
    if ( RtlpOwnerAcesPresent(0x10u, (__int64)v132) )
    {
      Handle = 0LL;
      PrivilegeSetLength[0] = 20;
      if ( (_BYTE)ReturnLength != 1 )
        goto LABEL_237;
      *(_OWORD *)&TokenInformation.Length = 0x30uLL;
      v222 = 1;
      TokenInformation.SecurityQualityOfService = &v221;
      v221 = 0x20000000CLL;
      memset(&TokenInformation.ObjectName, 0, 24);
      valid = NtDuplicateToken(v111, 8u, &TokenInformation, 0, TokenImpersonation, &Handle);
      if ( valid < 0 )
        goto LABEL_444;
      v133 = Handle;
      if ( !Handle )
LABEL_237:
        v133 = v111;
      valid = ZwAccessCheck(
                SecurityDescriptor,
                v133,
                0x40000u,
                GenericMapping,
                &PrivilegeSet,
                PrivilegeSetLength,
                &GrantedAccess,
                AccessStatus);
      if ( Handle )
        NtClose(Handle);
      if ( valid < 0 )
        goto LABEL_444;
      valid = AccessStatus[0];
      if ( AccessStatus[0] < 0 )
        goto LABEL_444;
    }
  }
  if ( (v110 & 1) != 0 && !v107 )
  {
    v93 |= 0x1000u;
    LODWORD(v179) = v93;
  }
  v112 = !v189 || (v189 & 0x1B0) != v189;
  if ( v163 && (v110 & 8) == 0 && v112 )
  {
    if ( v111 )
    {
      v198 = 8LL;
      PrivilegeSet.PrivilegeCount = 1;
      PrivilegeSet.Control = 1;
      PrivilegeSet.Privilege[0].Attributes = 0;
      PrivilegeSet.Privilege[0].Luid = (_LUID)8LL;
      valid = ZwPrivilegeCheck(v111, &PrivilegeSet, &Result);
      if ( valid >= 0 )
      {
        if ( !Result )
        {
          ProcessHeap = HeapHandle;
          valid = -1073741727;
          v57 = v160;
          v11 = Src;
          v14 = v167;
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
    ProcessHeap = HeapHandle;
    v57 = v160;
    v11 = Src;
    v14 = v167;
    goto LABEL_186;
  }
LABEL_160:
  if ( !(_BYTE)v200 || (v110 & 8) != 0 )
    goto LABEL_275;
  if ( !v111 )
  {
    ProcessHeap = HeapHandle;
    valid = -1073741700;
    v57 = v160;
    v11 = Src;
    v14 = v167;
    goto LABEL_186;
  }
  v198 = 32LL;
  PrivilegeSet.PrivilegeCount = 1;
  PrivilegeSet.Control = 1;
  PrivilegeSet.Privilege[0].Attributes = 0;
  PrivilegeSet.Privilege[0].Luid = (_LUID)32LL;
  valid = ZwPrivilegeCheck(v111, &PrivilegeSet, &Result);
  if ( valid < 0 )
    goto LABEL_444;
  if ( Result )
  {
LABEL_275:
    if ( !v170 || (v110 & 0x10) != 0 )
    {
      v113 = (unsigned __int8 *)v181;
    }
    else
    {
      if ( !v111 )
      {
        ProcessHeap = HeapHandle;
        valid = -1073741700;
        v57 = v160;
        v11 = Src;
        v14 = v167;
        goto LABEL_186;
      }
      v113 = (unsigned __int8 *)v181;
      if ( !RtlpValidOwnerSubjectContext(v111, v181, v182, &v201) )
      {
        valid = v201;
        ProcessHeap = HeapHandle;
        v57 = v160;
        v11 = Src;
        v14 = v167;
        goto LABEL_186;
      }
    }
    if ( v109 && v185 )
    {
      valid = RtlpCreateServerAcl((__int64)v107, v207, v195, &v206, &v173);
      if ( valid < 0 )
      {
        v124 = v206;
        ProcessHeap = HeapHandle;
        v14 = v167;
        v11 = Src;
        v57 = v160;
        goto LABEL_187;
      }
      if ( v108 && v107 )
        RtlFreeHeap_0(HeapHandle, 0, v107);
      v107 = v206;
      Src = v206;
      v166 = 0LL;
    }
    v114 = 4 * v113[1] + 8;
    if ( v186 )
      v115 = 4 * *((unsigned __int8 *)v186 + 1) + 8;
    else
      v115 = 0;
    if ( (v93 & 0x10) != 0 && BaseAddress )
      v116 = (*((unsigned __int16 *)BaseAddress + 1) + 3) & 0xFFFFFFFC;
    else
      v116 = 0;
    if ( (v93 & 4) != 0 && v107 )
      v117 = (v107->AclSize + 3) & 0xFFFFFFFC;
    else
      v117 = 0;
    ProcessHeap = HeapHandle;
    v118 = (char *)RtlAllocateHeap_0(HeapHandle, NtdllBaseTag + 1310720, v115 + v116 + v114 + v117 + 20);
    v167 = v118;
    if ( v118 )
    {
      v119 = (unsigned __int16 *)(v118 + 20);
      *(_OWORD *)v118 = 0LL;
      *((_DWORD *)v118 + 4) = 0;
      *((_WORD *)v118 + 1) |= v93;
      *v118 = 1;
      if ( (v93 & 0x10) == 0 )
      {
        v14 = v118;
LABEL_175:
        v120 = (v93 & 4) == 0;
        v11 = Src;
        if ( !v120 )
        {
          if ( Src )
          {
            if ( (a7 & 0x4000) != 0 )
            {
              v142 = GenericMapping;
              if ( v165 )
                v142 = 0LL;
              RtlpNormalizeAcl((__int64)v119, (__int64)Src, v142);
              v117 = v119[1];
            }
            else
            {
              memmove(v119, Src, Src->AclSize);
              if ( !v165 )
                RtlpApplyAclToObject((__int64)v119, GenericMapping);
              AclSize = Src->AclSize;
              if ( v117 > (unsigned int)AclSize )
                memset_thunk_772440563353939046((char *)v119 + AclSize, 0, v117 - (unsigned int)AclSize);
            }
            v14[4] = (_DWORD)v119 - (_DWORD)v14;
            v119 = (unsigned __int16 *)((char *)v119 + v117);
          }
          else
          {
            v14[4] = 0;
          }
        }
        memmove(v119, v181, v114);
        v122 = (int)v119;
        v123 = (char *)v119 + v114;
        v14[1] = v122 - (_DWORD)v14;
        if ( v186 )
        {
          memmove(v123, v186, v115);
          v14[2] = (_DWORD)v123 - (_DWORD)v14;
        }
        v57 = v160;
        valid = 0;
        goto LABEL_186;
      }
      if ( !BaseAddress )
      {
        v14 = v167;
        v167[3] = 0;
        goto LABEL_175;
      }
      v137 = (_DWORD)v118 + 20;
      if ( (a7 & 0x4000) != 0 )
      {
        v152 = GenericMapping;
        if ( v161 )
          v152 = 0LL;
        RtlpNormalizeAcl((__int64)v119, (__int64)BaseAddress, v152);
        if ( !v119[2] )
          goto LABEL_385;
        v116 = v119[1];
      }
      else
      {
        memmove(v119, BaseAddress, *((unsigned __int16 *)BaseAddress + 1));
        if ( !v161 )
          RtlpApplyAclToObject((__int64)v119, GenericMapping);
        v138 = *((unsigned __int16 *)BaseAddress + 1);
        if ( v116 > (unsigned int)v138 )
          memset_thunk_772440563353939046((char *)v119 + v138, 0, v116 - (unsigned int)v138);
      }
      if ( v119 )
      {
        v139 = v116;
        v14 = v167;
        v119 = (unsigned __int16 *)((char *)v119 + v139);
        v93 = v137 - (_DWORD)v167;
LABEL_303:
        v14[3] = v93;
        LOBYTE(v93) = v179;
        goto LABEL_175;
      }
LABEL_385:
      v14 = v167;
      v93 = 0;
      goto LABEL_303;
    }
LABEL_243:
    valid = -1073741801;
LABEL_244:
    v57 = v160;
    goto LABEL_245;
  }
  ProcessHeap = HeapHandle;
  valid = -1073741727;
  v57 = v160;
  v11 = Src;
  v14 = v167;
LABEL_186:
  v124 = (ACL *)v166;
LABEL_187:
  if ( SecurityDescriptor )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, SecurityDescriptor);
  if ( v173 && v124 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v124);
  RtlFreeHeap_0(ProcessHeap, 0, v211);
  RtlFreeHeap_0(ProcessHeap, 0, v212);
  RtlFreeHeap_0(ProcessHeap, 0, v213);
  RtlFreeHeap_0(ProcessHeap, 0, v214);
  RtlFreeHeap_0(ProcessHeap, 0, v215);
  if ( v216 )
    RtlFreeHeap_0(ProcessHeap, 0, v216);
  if ( v217 )
    RtlFreeHeap_0(ProcessHeap, 0, v217);
  if ( (v161 || v174) && BaseAddress )
    RtlFreeHeap_0(ProcessHeap, 0, BaseAddress);
  if ( v175 && v57 )
    RtlFreeHeap_0(ProcessHeap, 0, v57);
  if ( v165 )
  {
    if ( v11 )
      RtlFreeHeap_0(ProcessHeap, 0, v11);
  }
  *v218 = v14;
  return valid;
}

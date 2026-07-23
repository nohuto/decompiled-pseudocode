/*
 * XREFs of SepCommonAccessCheckEx @ 0x1403AD570
 * Callers:
 *     SeSrpAccessCheck @ 0x1403AD510 (SeSrpAccessCheck.c)
 *     SeAccessCheckEx @ 0x1403AD540 (SeAccessCheckEx.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x1403AE560 (SeGetTrustLabelAce.c)
 *     SepTokenIsOwner @ 0x1403AE5D0 (SepTokenIsOwner.c)
 *     SepFreeResourceInfo @ 0x1403AE8A0 (SepFreeResourceInfo.c)
 *     SepAccessCheckEx @ 0x1403AEA10 (SepAccessCheckEx.c)
 *     RtlpOwnerAcesPresent @ 0x1403AF640 (RtlpOwnerAcesPresent.c)
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 *     SepRmDereferenceCap @ 0x1403AF894 (SepRmDereferenceCap.c)
 *     SepGetScopedPolicySid @ 0x1403C8280 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403C82D8 (SepRmReferenceFindCap.c)
 *     AuthzBasepSetAccessReasons @ 0x140447B80 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D5398 (SepBuildCapeSecurityDescriptor.c)
 *     SepLogLpacAccessFailure @ 0x1404EFB5C (SepLogLpacAccessFailure.c)
 *     AuthzBasepMergeAccessReasons @ 0x140719DF0 (AuthzBasepMergeAccessReasons.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall SepCommonAccessCheckEx(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7)
{
  unsigned int v7; // r15d
  __int64 v8; // r12
  int v11; // ebx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // esi
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r14d
  __int64 v20; // rdx
  char v21; // r13
  __int64 v22; // rax
  int v24; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // edi
  __int64 TrustLabelAce; // rax
  void *v28; // r10
  __int64 v29; // r10
  int *v30; // r8
  int v31; // eax
  PSECURITY_SUBJECT_CONTEXT v32; // rcx
  int *v33; // rax
  char *ClientToken; // r12
  __int64 v35; // r11
  __int64 v36; // rcx
  _DWORD *v37; // rdi
  int v38; // eax
  int *v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  int v42; // r12d
  char v43; // r8
  char v44; // cl
  _DWORD *v45; // rcx
  char v46; // dl
  unsigned int v47; // eax
  char v48; // r9
  int v49; // r8d
  unsigned int v50; // edi
  char IsOwner; // al
  char v52; // r13
  char *v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rdx
  BOOLEAN v56; // di
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r14
  __int64 v60; // r10
  int v61; // r11d
  int *v62; // rax
  _DWORD *v63; // rdx
  int v64; // ecx
  unsigned int v65; // edx
  int v66; // r8d
  int v67; // ecx
  _DWORD *v68; // rax
  char v69; // bl
  int *v70; // rcx
  int v71; // r8d
  int v72; // ecx
  int v73; // ecx
  struct _SECURITY_SUBJECT_CONTEXT *v74; // r13
  _DWORD *v75; // rdi
  int v76; // eax
  int *v77; // r8
  int v78; // edi
  int v79; // edx
  int v80; // ecx
  unsigned int v81; // edx
  int v82; // ecx
  int v83; // r14d
  int v84; // ecx
  unsigned int v85; // edx
  __int64 v86; // r10
  int v87; // ecx
  int *v88; // r8
  int v89; // ecx
  __int64 v90; // rcx
  __int16 v91; // ax
  __int64 v92; // rax
  __int64 v93; // rdx
  char v94; // al
  int v95; // ecx
  int *v96; // rcx
  char *Pool2; // rdi
  unsigned int **v98; // rax
  int v99; // r9d
  struct _SECURITY_SUBJECT_CONTEXT *v100; // r12
  BOOLEAN v101; // cl
  __int64 v102; // rcx
  PSECURITY_SUBJECT_CONTEXT v103; // rax
  void *v104; // r12
  NTSTATUS v105; // eax
  int v106; // r11d
  int v107; // edi
  __int64 v108; // rbx
  char v109; // si
  _DWORD *v110; // rax
  int v111; // r8d
  bool v112; // zf
  __int64 v113; // rcx
  int v114; // r9d
  int v115; // eax
  int v116; // ecx
  _QWORD *v117; // rax
  int v118; // ecx
  _DWORD *v119; // rax
  __int64 v120; // rcx
  int v121; // edi
  __int64 v122; // rax
  __int64 v123; // rcx
  __int16 v124; // dx
  __int64 v125; // rax
  unsigned int *v126; // rcx
  unsigned int v127; // eax
  _DWORD *v128; // rcx
  __int64 v129; // r8
  int v130; // edx
  unsigned int v131; // r8d
  _DWORD *v132; // r12
  _DWORD *v133; // rax
  int v134; // esi
  __int64 v135; // rdi
  _DWORD *TokenTrustLevel; // rax
  char *v137; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  _DWORD *StackBase; // rdx
  unsigned int v141; // eax
  PVOID v142; // r8
  int v143; // eax
  int v144; // ecx
  _QWORD *v145; // rax
  void *v146; // rcx
  void *v147; // rdx
  void *v148; // r9
  void *v149; // r10
  int v150; // eax
  int v151; // ecx
  int v152; // r12d
  _QWORD *v153; // rax
  void *v154; // rcx
  void *v155; // rdx
  void *v156; // r8
  void *v157; // r9
  unsigned int v158; // r8d
  int v159; // ecx
  int v160; // r12d
  PACCESS_TOKEN v161; // r9
  PACCESS_TOKEN PrimaryToken; // r8
  BOOLEAN v163; // al
  int v164; // r9d
  int v165; // r11d
  int v166; // r12d
  int v167; // r11d
  int v168; // eax
  int v169; // r12d
  int v170; // eax
  int v171; // r11d
  int v172; // ecx
  int v173; // eax
  PACCESS_TOKEN v174; // r9
  PACCESS_TOKEN v175; // r8
  int v176; // edx
  int v177; // eax
  char *v178; // rcx
  int v179; // edx
  char *v180; // rcx
  __int64 v181; // rcx
  int v182; // r12d
  unsigned int v183; // r13d
  int v184; // r14d
  int v185; // r12d
  unsigned int v186; // ecx
  char *v187; // rax
  int v188; // r11d
  int v189; // ecx
  int v190; // r11d
  __int64 v191; // [rsp+38h] [rbp-F8h]
  __int64 v192; // [rsp+38h] [rbp-F8h]
  __int64 v193; // [rsp+38h] [rbp-F8h]
  int v194; // [rsp+40h] [rbp-F0h]
  __int64 v195; // [rsp+50h] [rbp-E0h]
  __int64 v196; // [rsp+58h] [rbp-D8h]
  __int64 v197; // [rsp+60h] [rbp-D0h]
  __int64 v198; // [rsp+68h] [rbp-C8h]
  int v199; // [rsp+70h] [rbp-C0h]
  bool v201; // [rsp+B1h] [rbp-7Fh] BYREF
  char v202; // [rsp+B2h] [rbp-7Eh]
  BOOLEAN v203; // [rsp+B3h] [rbp-7Dh] BYREF
  char v204; // [rsp+B4h] [rbp-7Ch]
  BOOLEAN DominatesTrust; // [rsp+B5h] [rbp-7Bh] BYREF
  char v206; // [rsp+B6h] [rbp-7Ah]
  __int64 v207; // [rsp+B8h] [rbp-78h]
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-70h]
  PVOID Object; // [rsp+C8h] [rbp-68h]
  char v210; // [rsp+D0h] [rbp-60h]
  __int64 v211; // [rsp+D8h] [rbp-58h]
  char v212[4]; // [rsp+E0h] [rbp-50h] BYREF
  int v213; // [rsp+E4h] [rbp-4Ch]
  int v214; // [rsp+E8h] [rbp-48h]
  PVOID P; // [rsp+F0h] [rbp-40h] BYREF
  int v216; // [rsp+F8h] [rbp-38h]
  int v217; // [rsp+FCh] [rbp-34h] BYREF
  unsigned int i; // [rsp+100h] [rbp-30h]
  int v219; // [rsp+104h] [rbp-2Ch]
  __int64 v220; // [rsp+108h] [rbp-28h]
  _DWORD *v221; // [rsp+110h] [rbp-20h]
  int v222; // [rsp+118h] [rbp-18h] BYREF
  char *v223; // [rsp+120h] [rbp-10h]
  _DWORD *v224; // [rsp+128h] [rbp-8h]
  int v225; // [rsp+130h] [rbp+0h]
  int v226; // [rsp+134h] [rbp+4h] BYREF
  int v227; // [rsp+138h] [rbp+8h]
  int v228; // [rsp+140h] [rbp+10h] BYREF
  int v229; // [rsp+148h] [rbp+18h] BYREF
  int v230; // [rsp+14Ch] [rbp+1Ch]
  int v231; // [rsp+150h] [rbp+20h]
  __int128 v232; // [rsp+158h] [rbp+28h] BYREF
  int v233; // [rsp+168h] [rbp+38h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+170h] [rbp+40h] BYREF
  __int64 v235; // [rsp+190h] [rbp+60h]
  _OWORD v236[2]; // [rsp+198h] [rbp+68h] BYREF
  __int64 v237; // [rsp+1B8h] [rbp+88h]
  _OWORD v238[2]; // [rsp+1C0h] [rbp+90h] BYREF
  __int128 v239; // [rsp+1E0h] [rbp+B0h] BYREF
  __int128 v240; // [rsp+1F0h] [rbp+C0h]
  __int128 v241; // [rsp+200h] [rbp+D0h]
  _BYTE v242[128]; // [rsp+210h] [rbp+E0h] BYREF
  _BYTE v243[128]; // [rsp+290h] [rbp+160h] BYREF
  _BYTE v244[128]; // [rsp+310h] [rbp+1E0h] BYREF

  v211 = a3;
  v7 = 0;
  SubjectContext = a1;
  v8 = a3;
  v223 = 0LL;
  v235 = 0LL;
  v237 = 0LL;
  v226 = 0;
  v232 = 0LL;
  v233 = 0;
  memset(v238, 0, 28);
  v221 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v224 = 0LL;
  v204 = 0;
  memset(v236, 0, sizeof(v236));
  P = 0LL;
  v222 = 0;
  v207 = a4;
  v201 = 0;
  v212[0] = 0;
  memset_0(v242, 0, sizeof(v242));
  memset_0(v243, 0, sizeof(v243));
  memset_0(v244, 0, sizeof(v244));
  v206 = 0;
  v11 = -1;
  v227 = -1;
  v228 = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v12 = *(_DWORD **)(a4 + 16);
  if ( !v12 )
    return 0;
  if ( !a1
    || !v8
    || *(_DWORD *)v8 != 56
    || (v13 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v14 = *(_DWORD **)(v8 + 8)) != 0LL && (*v14 != 16 || (v14[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v12 = -1073741811;
    return 0;
  }
  *v13 = 0;
  **(_DWORD **)(a4 + 16) = -1073741790;
  v15 = *(_QWORD **)(a4 + 32);
  v217 = 0;
  v229 = -1073741790;
  if ( v15 )
    *v15 = 0LL;
  v16 = 1;
  v17 = *(_QWORD *)(a4 + 24);
  v18 = 1;
  v19 = *(_DWORD *)(v8 + 16) & ~*(_DWORD *)(v8 + 20) & 0xFDFFFFFF;
  v20 = 0LL;
  if ( v17 )
  {
    while ( v18 )
    {
      if ( (v18 & v19) != 0 )
        *(_DWORD *)(v17 + 4LL * (unsigned int)v20) = 0;
      v20 = (unsigned int)(v20 + 1);
      v18 *= 2;
    }
  }
  v21 = a6;
  if ( !a6 )
  {
    v95 = *(_DWORD *)(v8 + 16);
    if ( (v95 & 0x2000000) != 0 )
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(v8 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(v8 + 20);
    }
    else
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(v8 + 20) | v95;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return 1;
  }
  v22 = *(_QWORD *)(v8 + 8);
  if ( !v22 || !*(_QWORD *)(v22 + 8) )
    goto LABEL_19;
  if ( SubjectContext->ClientToken && SubjectContext->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(v8 + 16) )
  {
    v116 = *(_DWORD *)(v8 + 20);
    if ( v116 )
    {
      **(_DWORD **)(a4 + 8) = v116;
      **(_DWORD **)(a4 + 16) = 0;
      v117 = *(_QWORD **)(a4 + 32);
      if ( v117 )
        *v117 = 0LL;
      return 1;
    }
LABEL_19:
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  v24 = *(_DWORD *)(a4 + 4);
  if ( v24 != 1 && v24 != *(_DWORD *)(v8 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
    SeLockSubjectContext(SubjectContext);
  v25 = *(_QWORD *)(v8 + 8);
  v26 = 0;
  v203 = 0;
  DominatesTrust = 0;
  TrustLabelAce = SeGetTrustLabelAce(*(_QWORD *)(v25 + 8), v20);
  if ( TrustLabelAce )
  {
    v28 = (void *)(TrustLabelAce + 8);
    if ( TrustLabelAce != -8 )
    {
      v103 = SubjectContext;
      if ( SubjectContext->ClientToken )
      {
        v104 = (void *)*((_QWORD *)SubjectContext->ClientToken + 138);
        v26 = RtlSidDominatesForTrust(*((PSID *)SubjectContext->PrimaryToken + 138), v104, &DominatesTrust);
        if ( v26 < 0 )
        {
          v8 = v211;
          goto LABEL_29;
        }
        if ( DominatesTrust )
          goto LABEL_160;
        v103 = SubjectContext;
      }
      v104 = (void *)*((_QWORD *)v103->PrimaryToken + 138);
LABEL_160:
      v105 = RtlSidDominatesForTrust(v104, v28, &v203);
      v8 = v211;
      v26 = v105;
      if ( v105 >= 0 && !v203 )
        v11 = v106 | 0x1000000;
    }
  }
LABEL_29:
  v29 = v207;
  **(_DWORD **)(v207 + 16) = v26;
  v30 = *(int **)(v29 + 16);
  if ( *v30 < 0 )
    goto LABEL_133;
  v31 = -1073741790;
  v32 = SubjectContext;
  if ( (v11 & *(_DWORD *)(v8 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v8 + 16) & 0xFDFFFFFF) )
    v31 = 0;
  *v30 = v31;
  v33 = *(int **)(v29 + 16);
  ClientToken = (char *)v32->ClientToken;
  Object = v32->ClientToken;
  if ( *v33 < 0 )
  {
    if ( !ClientToken )
      ClientToken = (char *)v32->PrimaryToken;
    v134 = *(_DWORD *)(v211 + 16) | *(_DWORD *)(v211 + 20);
    v135 = *(_QWORD *)(v211 + 8);
    TokenTrustLevel = SepLocateTokenTrustLevel(v32);
    SeLogAccessFailure(ClientToken, 0LL, 0LL, (ULONGLONG)TokenTrustLevel, *(_QWORD *)(v135 + 8), v134, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    AuthzBasepSetAccessReasons(v19 & ~v11, 9437184, 0, *(_QWORD *)(v207 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = (char *)v32->PrimaryToken;
    Object = ClientToken;
  }
  v35 = v211;
  v36 = *(_QWORD *)(v211 + 8);
  if ( (*(_DWORD *)(v36 + 4) & 4) == 0 )
  {
    v37 = *(_DWORD **)(v29 + 16);
    v38 = SepFilterCheck(*(_QWORD *)(v36 + 8), &P, (__int64)ClientToken, 0LL, &v228);
    v29 = v207;
    *v37 = v38;
    v39 = *(int **)(v29 + 16);
    if ( *v39 < 0 )
      goto LABEL_133;
    v35 = v211;
    v227 = v228;
    v40 = -1073741790;
    if ( (v228 & *(_DWORD *)(v211 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v211 + 16) & 0xFDFFFFFF) )
      v40 = 0;
    *v39 = v40;
    if ( **(int **)(v29 + 16) < 0 )
    {
      SeLogAccessFailure(
        ClientToken,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(*(_QWORD *)(v35 + 8) + 8LL),
        *(_BYTE *)(v35 + 16) | *(_BYTE *)(v35 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      AuthzBasepSetAccessReasons(v19 & v227, 10485760, 0, *(_QWORD *)(v207 + 24), 0);
      return 0;
    }
  }
  v41 = *(_QWORD *)(v35 + 8);
  v42 = *(_DWORD *)(v41 + 4) & 1;
  if ( (*(_DWORD *)(v41 + 4) & 2) == 0 )
  {
    v43 = 0;
    goto LABEL_96;
  }
  v43 = 1;
  if ( (*((_DWORD *)Object + 50) & 0x2000) == 0 )
  {
LABEL_96:
    v44 = 0;
    goto LABEL_43;
  }
  v44 = 1;
LABEL_43:
  v210 = v44;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)Object + 50) & 0x20) == 0 )
  {
    v122 = *((_QWORD *)Object + 27);
    if ( v122 )
    {
      if ( (*(_DWORD *)(v122 + 40) & 0x20) != 0 )
      {
        **(_DWORD **)(v29 + 8) = 0;
        **(_DWORD **)(v29 + 16) = -1073741790;
LABEL_133:
        if ( !a2 )
          SeUnlockSubjectContext(SubjectContext);
        return 0;
      }
    }
  }
  LOBYTE(v219) = 0;
  if ( v44 )
  {
    v231 = DWORD2(v232);
    v228 = v232;
LABEL_46:
    v45 = Object;
    goto LABEL_47;
  }
  v75 = *(_DWORD **)(v29 + 16);
  v76 = SepMandatoryIntegrityCheck(
          *(_DWORD **)(v35 + 32),
          *(_QWORD *)(v41 + 8),
          v43,
          (__int64)Object,
          0,
          (__int64)&v232);
  v29 = v207;
  *v75 = v76;
  v77 = *(int **)(v29 + 16);
  if ( *v77 < 0 )
    goto LABEL_133;
  v35 = v211;
  v78 = v232;
  v228 = v232;
  v231 = DWORD2(v232);
  if ( DWORD2(v232) )
  {
    v79 = -1073741790;
    if ( ((unsigned int)v232 & *(_DWORD *)(v211 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v211 + 16) & 0xFDFFFFFF) )
      v79 = 0;
  }
  else
  {
    v79 = 0;
  }
  v45 = Object;
  *v77 = v79;
  if ( **(int **)(v29 + 16) < 0 )
  {
    if ( (v45[50] & 0x4000) == 0 || HIDWORD(v232) > 0x2000 )
    {
      if ( !a2 )
      {
        SeUnlockSubjectContext(SubjectContext);
        v29 = v207;
      }
      v120 = *(_QWORD *)(v29 + 24);
      v121 = v19 & ~v78;
      if ( v120 )
      {
        while ( v16 )
        {
          if ( (v16 & v121) != 0 && !*(_DWORD *)(v120 + 4LL * v7) )
            *(_DWORD *)(v120 + 4LL * v7) = 3145728;
          ++v7;
          v16 *= 2;
        }
      }
      return 0;
    }
    LOBYTE(v219) = 1;
  }
  else if ( (*(_DWORD *)(v35 + 16) & 0x2000000) != 0 && (v45[50] & 0x4000) != 0 )
  {
    v80 = (unsigned __int8)v219;
    if ( HIDWORD(v232) <= 0x2000 )
      v80 = 1;
    v219 = v80;
    goto LABEL_46;
  }
LABEL_47:
  if ( !SepRmEnforceCap )
  {
LABEL_48:
    v46 = 0;
    goto LABEL_49;
  }
  v123 = *(_QWORD *)(*(_QWORD *)(v35 + 8) + 8LL);
  v124 = *(_WORD *)(v123 + 2);
  if ( (v124 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_260:
    v45 = Object;
    goto LABEL_48;
  }
  if ( v124 >= 0 )
  {
    v137 = *(char **)(v123 + 24);
  }
  else
  {
    v125 = *(unsigned int *)(v123 + 12);
    if ( !(_DWORD)v125 )
    {
      v223 = 0LL;
      goto LABEL_260;
    }
    v137 = (char *)(v123 + v125);
  }
  v223 = v137;
  if ( !v137 )
    goto LABEL_260;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v137);
  if ( !ScopedPolicySid )
  {
    v29 = v207;
    goto LABEL_260;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  StackBase = v224;
  v45 = Object;
  if ( Cap < 0 )
    StackBase = ExpPlatformBinaryLock.StackBase;
  v29 = v207;
  v35 = v211;
  v221 = StackBase;
  v46 = 1;
  v204 = 1;
LABEL_49:
  if ( !(_BYTE)v42 || (v47 = *(_DWORD *)(v35 + 16), (v47 & 0x2060000) != 0) || v46 )
  {
    IsOwner = SepTokenIsOwner(v45, *(_QWORD *)(*(_QWORD *)(v35 + 8) + 8LL));
    v35 = v211;
    v52 = IsOwner;
    v202 = IsOwner;
    v48 = IsOwner;
    v49 = *(_DWORD *)(v211 + 16);
    v50 = v49;
    if ( !IsOwner )
      goto LABEL_54;
    v202 = IsOwner;
    if ( (v49 & 0x2060000) == 0 )
      goto LABEL_54;
    v81 = v49;
    if ( !(_BYTE)v42 )
    {
      v90 = *(_QWORD *)(*(_QWORD *)(v211 + 8) + 8LL);
      v91 = *(_WORD *)(v90 + 2);
      if ( (v91 & 4) != 0 )
      {
        if ( v91 >= 0 )
        {
          v93 = *(_QWORD *)(v90 + 32);
        }
        else
        {
          v92 = *(unsigned int *)(v90 + 16);
          if ( (_DWORD)v92 )
            v93 = v90 + v92;
          else
            v93 = 0LL;
        }
      }
      else
      {
        v93 = 0LL;
      }
      v94 = RtlpOwnerAcesPresent(0LL, v93);
      v35 = v211;
      v81 = v50;
      LOBYTE(v42) = v94 == 0;
      v49 = v50;
    }
    v202 = v52;
    v48 = v52;
    if ( (_BYTE)v42 )
    {
      v82 = *(_DWORD *)(v35 + 20);
      v202 = v52;
      if ( (v81 & 0x2000000) != 0 )
      {
        v83 = 393216;
        *(_DWORD *)(v35 + 20) = v82 | 0x60000;
        v49 = 393216;
      }
      else
      {
        v83 = v19 & 0x60000;
        *(_DWORD *)(v35 + 20) = v82 | v81 & 0x60000;
        v49 = v81 & 0x60000;
      }
      v84 = 1;
      v85 = 0;
      v86 = *(_QWORD *)(v207 + 24);
      if ( v86 )
      {
        while ( v84 )
        {
          if ( (v84 & v83) != 0 && !*(_DWORD *)(v86 + 4LL * v85) )
            *(_DWORD *)(v86 + 4LL * v85) = 0x400000;
          ++v85;
          v84 *= 2;
        }
      }
      v46 = v204;
      v50 = *(_DWORD *)(v35 + 16) & 0xFFF9FFFF;
      v21 = a6;
      v29 = v207;
      *(_DWORD *)(v35 + 16) = v50;
      if ( !v46 )
      {
        v48 = 0;
        v202 = 0;
      }
    }
    else
    {
LABEL_54:
      v46 = v204;
      v29 = v207;
      v21 = a6;
    }
  }
  else
  {
    v48 = 0;
    v49 = *(_DWORD *)(v35 + 16);
    v202 = 0;
    v50 = v47;
  }
  v53 = (char *)Object;
  if ( !v50 && !v46 && ((*((_DWORD *)Object + 50) & 0x2000) != 0 || !v49) )
  {
    if ( !a2 )
    {
      SeUnlockSubjectContext(SubjectContext);
      v29 = v207;
      v35 = v211;
    }
    **(_DWORD **)(v29 + 8) = *(_DWORD *)(v35 + 20);
    **(_DWORD **)(v29 + 16) = 0;
    return 1;
  }
  v54 = *(_QWORD *)(v35 + 8);
  v198 = *(_QWORD *)(v29 + 24);
  v197 = *(_QWORD *)(v29 + 16);
  v196 = *(_QWORD *)(v29 + 32);
  v195 = *(_QWORD *)(v29 + 8);
  v194 = *(_DWORD *)(v35 + 20);
  v191 = *(_QWORD *)(v35 + 32);
  LODWORD(v238[0]) = v49;
  memset((char *)v238 + 4, 0, 24);
  v56 = SepAccessCheckEx(
          *(_QWORD *)(v54 + 8),
          0,
          SubjectContext->PrimaryToken,
          SubjectContext->ClientToken,
          v50,
          0LL,
          0,
          v191,
          v194,
          v21,
          v195,
          v196,
          v197,
          v198,
          0,
          v48,
          a7,
          (__int64)v238,
          (__int64)&P,
          (__int64)&v201);
  DominatesTrust = v56;
  if ( SepRmEnforceCap )
  {
    v55 = v207;
    LODWORD(v224) = **(_DWORD **)(v207 + 16);
    if ( (int)v224 >= 0 && v204 )
    {
      v96 = *(int **)(v207 + 8);
      Pool2 = 0LL;
      v98 = *(unsigned int ***)(v207 + 32);
      v99 = 0;
      LOBYTE(v225) = 0;
      v216 = 0;
      v214 = *v96;
      v213 = v214;
      if ( v98 )
      {
        v126 = *v98;
        if ( *v98 )
        {
          v127 = *v126;
          if ( *v126 )
          {
            v128 = v126 + 3;
            v129 = v127;
            do
            {
              if ( (int)v128[1] < 0 )
              {
                if ( *(v128 - 1) == SeSecurityPrivilege.LowPart && *v128 == SeSecurityPrivilege.HighPart )
                {
                  v99 |= 0x1000000u;
                }
                else if ( *(_QWORD *)(v128 - 1) == SeTakeOwnershipPrivilege
                       || *(_QWORD *)(v128 - 1) == SeRelabelPrivilege )
                {
                  v99 |= 0x80000u;
                }
              }
              v128 += 3;
              --v129;
            }
            while ( v129 );
            v55 = v207;
            v216 = v99;
          }
        }
      }
      v230 = **(_DWORD **)(v55 + 8);
      v100 = SubjectContext;
      v203 = SepAdtAuditThisEventWithContext(130LL, 1LL, 1LL, SubjectContext);
      v101 = v203;
      if ( v203 )
      {
        Pool2 = (char *)ExAllocatePool2(0x40uLL);
        if ( !Pool2 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(v100);
          SepRmDereferenceCap(v221);
          v102 = v207;
          **(_DWORD **)(v207 + 8) = 0;
          **(_DWORD **)(v102 + 16) = -1073741801;
          SepFreeResourceInfo(P);
          return 0;
        }
        memset_0(Pool2, 0, 8LL * (unsigned int)v221[15]);
        v101 = v203;
      }
      v130 = v213;
      v131 = 0;
      v132 = Object;
      for ( i = 0; ; i = v131 )
      {
        v141 = v221[15];
        LODWORD(v220) = v141;
        if ( v131 >= v141 )
          break;
        v239 = 0LL;
        v240 = 0LL;
        v241 = 0LL;
        v220 = *(_QWORD *)&v221[2 * v131 + 16];
        if ( !*(_QWORD *)(v220 + 24) )
          goto LABEL_290;
        v142 = P;
        if ( !P )
        {
          v143 = AuthzBasepInitializeResourceClaimsFromSacl(v223, &P, 0LL, v221);
          v142 = P;
          v144 = (unsigned __int8)v225;
          if ( v143 < 0 )
            v144 = 1;
          v225 = v144;
        }
        v145 = (_QWORD *)*((_QWORD *)v132 + 137);
        if ( v145 )
        {
          v146 = (void *)v145[75];
          v147 = (void *)v145[73];
          v148 = (void *)v145[74];
          v149 = (void *)v145[72];
        }
        else
        {
          v146 = 0LL;
          v147 = 0LL;
          v148 = 0LL;
          v149 = 0LL;
        }
        v150 = AuthzBasepEvaluateAceCondition(
                 v132,
                 *((void **)v132 + 97),
                 v142,
                 v149,
                 v148,
                 v147,
                 v146,
                 *(_DWORD **)(v220 + 24),
                 *(_DWORD *)(v220 + 16),
                 1u,
                 0,
                 &v222);
        v151 = v222;
        v152 = v150;
        if ( v222 == 1 )
          goto LABEL_290;
        if ( v150 < 0 )
          goto LABEL_315;
        v132 = Object;
        if ( (*((_DWORD *)Object + 50) & 0x10) != 0 )
        {
          v153 = (_QWORD *)*((_QWORD *)Object + 137);
          if ( v153 )
          {
            v154 = (void *)v153[75];
            v155 = (void *)v153[73];
            v156 = (void *)v153[74];
            v157 = (void *)v153[72];
          }
          else
          {
            v154 = 0LL;
            v155 = 0LL;
            v156 = 0LL;
            v157 = 0LL;
          }
          v152 = AuthzBasepEvaluateAceCondition(
                   Object,
                   *((void **)Object + 97),
                   P,
                   v157,
                   v156,
                   v155,
                   v154,
                   *(_DWORD **)(v220 + 24),
                   *(_DWORD *)(v220 + 16),
                   1u,
                   1u,
                   &v222);
          if ( v152 < 0 )
          {
LABEL_315:
            if ( a2 )
            {
LABEL_319:
              SepRmDereferenceCap(v221);
              v181 = v207;
              **(_DWORD **)(v207 + 8) = 0;
              **(_DWORD **)(v181 + 16) = v152;
              SepFreeResourceInfo(P);
              if ( Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              return 0;
            }
LABEL_318:
            SeUnlockSubjectContext(SubjectContext);
            goto LABEL_319;
          }
          v151 = v222;
          v132 = Object;
        }
        if ( (_BYTE)v225 || v151 == 1 )
        {
LABEL_290:
          v152 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
          if ( v152 < 0 )
          {
            if ( a2 )
              goto LABEL_319;
            goto LABEL_318;
          }
          v159 = *(_DWORD *)(v211 + 16);
          if ( (*(_DWORD *)(v220 + 48) & 1) != 0 )
          {
            if ( (v159 & 0x2000000) == 0 )
              v159 |= *(_DWORD *)(v211 + 20);
            v160 = 0;
          }
          else
          {
            v160 = *(_DWORD *)(v211 + 20);
          }
          LOBYTE(v199) = 0;
          v192 = *(_QWORD *)(v211 + 32);
          v239 = 0LL;
          v161 = SubjectContext->ClientToken;
          PrimaryToken = SubjectContext->PrimaryToken;
          v240 = 0LL;
          v241 = 0LL;
          v163 = SepAccessCheckEx(
                   (unsigned int)SecurityDescriptor,
                   0,
                   (_DWORD)PrimaryToken,
                   (_DWORD)v161,
                   v159 | 0x2000000u,
                   (__int64)&v239,
                   1,
                   v192,
                   v160,
                   v21,
                   (__int64)&v217,
                   0LL,
                   (__int64)&v229,
                   (__int64)v244,
                   v199,
                   v202,
                   a7,
                   (__int64)v238,
                   (__int64)&P,
                   (__int64)&v201);
          v164 = v216;
          v165 = v216 | HIDWORD(v240);
          DominatesTrust = v163;
          v166 = v217 & (**(_DWORD **)(v207 + 8) | v160);
          v217 = v166;
          if ( v202 )
            v165 |= v166 & 0x60000;
          v158 = i;
          v167 = ~(_DWORD)v241 & v165;
          v168 = v166 & v214;
          v112 = (v166 & v214) == 0;
          v169 = v230;
          v214 = v168;
          v170 = v229;
          if ( v112 )
            v170 = -1073741790;
          LODWORD(v224) = v170;
          if ( (v230 & (v230 ^ v167)) != 0 )
          {
            AuthzBasepSetAccessReasons(v230 & (v230 ^ v167), 327680, i, (unsigned int)v242, 0);
            v164 = v216;
            v230 = v171 & v169;
          }
          v101 = v203;
          if ( v203 )
          {
            if ( *(_QWORD *)(v220 + 40) )
            {
              v152 = SepBuildCapeSecurityDescriptor(v236);
              if ( v152 < 0 )
                goto LABEL_315;
              v172 = *(_DWORD *)(v211 + 16);
              if ( (*(_DWORD *)(v220 + 48) & 0x100) != 0 )
              {
                if ( (v172 & 0x2000000) == 0 )
                  v172 |= *(_DWORD *)(v211 + 20);
                v173 = 0;
              }
              else
              {
                v173 = *(_DWORD *)(v211 + 20);
              }
              LOBYTE(v199) = 0;
              v193 = *(_QWORD *)(v211 + 32);
              v174 = SubjectContext->ClientToken;
              v175 = SubjectContext->PrimaryToken;
              v239 = 0LL;
              v240 = 0LL;
              v241 = 0LL;
              SepAccessCheckEx(
                (unsigned int)v236,
                0,
                (_DWORD)v175,
                (_DWORD)v174,
                v172,
                0LL,
                0,
                v193,
                v173,
                v21,
                (__int64)&v226,
                0LL,
                (__int64)&v233,
                (__int64)v244,
                v199,
                v202,
                a7,
                (__int64)v238,
                (__int64)&P,
                (__int64)v212);
              v176 = v213;
              v158 = i;
              v177 = v216;
              v178 = &Pool2[8 * i];
              v178[4] = 1;
              *(_DWORD *)v178 = v226 | v177;
              v130 = v226 & v176;
              v101 = v203;
              v213 = v130;
            }
            else
            {
              v179 = v213;
              v180 = &Pool2[8 * v158];
              v180[4] = 1;
              *(_DWORD *)v180 = v217 | v164;
              v130 = v217 & v179;
              v101 = v203;
              v213 = v130;
            }
          }
          else
          {
            v130 = v213;
          }
          v132 = Object;
        }
        else
        {
          v101 = v203;
          v158 = i;
          v130 = v213;
        }
        v131 = v158 + 1;
      }
      v182 = v214;
      if ( v101 && v130 != v214 )
      {
        v183 = 0;
        v184 = v130 & (v214 ^ v130);
        v185 = v214 & (v214 ^ v130);
        if ( v141 )
        {
          v186 = v220;
          v187 = Pool2;
          v223 = Pool2;
          do
          {
            if ( !v184 && !v185 )
              break;
            if ( v187[4] )
            {
              v188 = *(_DWORD *)v187;
              v189 = v185 & (v185 ^ *(_DWORD *)v187);
              if ( v189 )
                AuthzBasepSetAccessReasons(v189, 0x80000000, v183 << 24, (unsigned int)v243, 0);
              v185 &= ~v189;
              v190 = v184 & v188;
              if ( v190 )
                AuthzBasepSetAccessReasons(v190, 0x80000000, v183 << 24, (unsigned int)v243, 0);
              v184 &= ~v190;
              AuthzBasepMergeAccessReasons(v242, v243, 4278190080LL);
              v187 = v223;
              v186 = v220;
            }
            v187 += 8;
            ++v183;
            v223 = v187;
          }
          while ( v183 < v186 );
        }
        v182 = v214;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v59 = v207;
      **(_DWORD **)(v207 + 16) = (_DWORD)v224;
      **(_DWORD **)(v59 + 8) &= v182;
      if ( **(int **)(v59 + 16) < 0 )
        v201 = 0;
      AuthzBasepMergeAccessReasons(*(_QWORD *)(v59 + 24), v242, 0LL);
      AuthzBasepMergeAccessReasons(*(_QWORD *)(v59 + 24), v242, 4278190080LL);
      v56 = DominatesTrust;
      v53 = (char *)Object;
    }
    else
    {
      v59 = v207;
    }
  }
  else
  {
    v59 = v207;
  }
  v60 = v211;
  if ( v210 || (*(_DWORD *)(v211 + 16) & 0x2000000) == 0 )
  {
    if ( (_BYTE)v219 && !*(_WORD *)((char *)&v238[1] + 5) )
    {
      if ( (*((_DWORD *)v53 + 50) & 0x3000000) != 0x3000000 || HIDWORD(v238[0]) )
      {
        v61 = -1073741790;
        v118 = 1;
        v55 = 0LL;
        **(_DWORD **)(v59 + 16) = -1073741790;
        **(_DWORD **)(v59 + 8) = 0;
        v119 = *(_DWORD **)(v59 + 8);
        v58 = *(_QWORD *)(v59 + 24);
        v201 = 0;
        v57 = (unsigned int)~*v119;
        if ( v58 )
        {
          while ( v118 )
          {
            if ( (v118 & (unsigned int)v57) != 0 && !*(_DWORD *)(v58 + 4LL * (unsigned int)v55) )
              *(_DWORD *)(v58 + 4LL * (unsigned int)v55) = 3145728;
            v55 = (unsigned int)(v55 + 1);
            v118 *= 2;
          }
        }
        goto LABEL_61;
      }
      v133 = *(_DWORD **)(v59 + 16);
      BYTE7(v238[1]) = 1;
      *v133 = 0;
      **(_DWORD **)(v59 + 8) = *(_DWORD *)(v60 + 16);
      v201 = 1;
    }
  }
  else
  {
    v55 = *(_QWORD *)(v59 + 8);
    v87 = *(_DWORD *)v55;
    if ( !(_BYTE)v219 || !*(_WORD *)((char *)&v238[1] + 5) && (*((_DWORD *)v53 + 50) & 0x3000000) != 0x3000000 )
    {
      v88 = *(int **)(v59 + 16);
      if ( v231 && (!BYTE6(v232) || !BYTE4(v232) || !BYTE5(v232)) )
      {
        v114 = v87 & v228;
        if ( (v87 & v228) != v87 )
        {
          *(_DWORD *)v55 = v114;
          v115 = -1073741790;
          if ( v114 )
            v115 = 0;
          *v88 = v115;
          v201 = v114 != 0;
        }
      }
      v55 = 0LL;
      v58 = *(_QWORD *)(v59 + 24);
      v57 = v87 & (unsigned int)~**(_DWORD **)(v59 + 8);
      v89 = 1;
      if ( v58 )
      {
        while ( v89 )
        {
          if ( (v89 & (unsigned int)v57) != 0 && !*(_DWORD *)(v58 + 4LL * (unsigned int)v55) )
            *(_DWORD *)(v58 + 4LL * (unsigned int)v55) = 3145728;
          v55 = (unsigned int)(v55 + 1);
          v89 *= 2;
        }
      }
    }
  }
  v61 = -1073741790;
LABEL_61:
  if ( (*(_DWORD *)(v60 + 16) & 0x2000000) != 0 )
  {
    v62 = *(int **)(v59 + 8);
    v63 = *(_DWORD **)(v59 + 16);
    v206 = 0;
    v64 = *v62;
    if ( v11 != -1 )
    {
      v111 = v11 & v64;
      if ( (v11 & v64) != v64 )
      {
        v206 = 1;
        *v62 = v111;
        if ( v111 )
        {
          *v63 = 0;
          v201 = 1;
        }
        else
        {
          *v63 = -1073741790;
          v201 = 0;
        }
      }
    }
    v65 = 0;
    v58 = *(_QWORD *)(v59 + 24);
    v66 = v64 & ~**(_DWORD **)(v59 + 8);
    v67 = 1;
    if ( v58 )
    {
      while ( v67 )
      {
        if ( (v67 & v66) != 0 && !*(_DWORD *)(v58 + 4LL * v65) )
          *(_DWORD *)(v58 + 4LL * v65) = 9437184;
        ++v65;
        v67 *= 2;
      }
    }
    v68 = *(_DWORD **)(v59 + 8);
    v69 = 0;
    v70 = *(int **)(v59 + 16);
    v71 = *(_DWORD *)(v60 + 16);
    v55 = (unsigned int)*v68;
    if ( v227 != -1 )
    {
      v58 = v227 & (unsigned int)v55;
      if ( (_DWORD)v58 != (_DWORD)v55 )
      {
        *v68 = v58;
        v69 = 1;
        if ( (v71 & 0x2000000) != 0 )
        {
          v112 = (_DWORD)v58 == 0;
          if ( (_DWORD)v58 )
            v61 = 0;
          *v70 = v61;
        }
        else
        {
          *v70 = -1073741790;
          v112 = *v68 == 0;
        }
        v201 = !v112;
      }
    }
    v57 = *(_QWORD *)(v59 + 24);
    v72 = v55 & ~**(_DWORD **)(v59 + 8);
    if ( v57 )
    {
      while ( v16 )
      {
        if ( (v16 & v72) != 0 && !*(_DWORD *)(v57 + 4LL * v7) )
          *(_DWORD *)(v57 + 4LL * v7) = 10485760;
        ++v7;
        v16 *= 2;
      }
    }
  }
  else
  {
    v69 = 0;
  }
  if ( v53 )
  {
    if ( v206
      || v69
      || (v73 = HIDWORD(v238[0])) == 0
      && (*((_DWORD *)v53 + 50) & 0x4000) != 0
      && (**(int **)(v59 + 16) < 0 || BYTE7(v238[1])) )
    {
      v74 = SubjectContext;
      v107 = *(_DWORD *)(v60 + 16) | *(_DWORD *)(v60 + 20);
      v108 = *(_QWORD *)(v60 + 8);
      v109 = **(_DWORD **)(v59 + 16) >= 0;
      v110 = SepLocateTokenTrustLevel(SubjectContext);
      SeLogAccessFailure(v53, 0LL, 0LL, (ULONGLONG)v110, *(_QWORD *)(v108 + 8), v107, v109);
      v73 = HIDWORD(v238[0]);
      v60 = v211;
      v56 = DominatesTrust;
    }
    else
    {
      v74 = SubjectContext;
    }
    if ( **(int **)(v59 + 16) < 0 && !v73 && (*((_DWORD *)v53 + 50) & 0x4000) != 0 )
    {
      if ( BYTE8(v238[1]) )
      {
        v113 = *(_DWORD *)(v60 + 16) & ~(DWORD1(v238[0]) | DWORD2(v238[0]) | 0x2000000u);
        if ( ((unsigned int)v113 & v238[1]) == (_DWORD)v113 )
          SepLogLpacAccessFailure(v113, v55, v57, v58);
      }
    }
  }
  else
  {
    v74 = SubjectContext;
  }
  if ( v204 )
    SepRmDereferenceCap(v221);
  if ( !a2 )
    SeUnlockSubjectContext(v74);
  SepFreeResourceInfo(P);
  return v56 && v201;
}

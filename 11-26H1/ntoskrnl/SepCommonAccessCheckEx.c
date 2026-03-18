/*
 * XREFs of SepCommonAccessCheckEx @ 0x1402AD130
 * Callers:
 *     SeSrpAccessCheck @ 0x1402ACA70 (SeSrpAccessCheck.c)
 *     SeAccessCheckEx @ 0x1402AD100 (SeAccessCheckEx.c)
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x1402AC130 (SepLocateTokenTrustLevel.c)
 *     SepRmDereferenceCap @ 0x1402ACB20 (SepRmDereferenceCap.c)
 *     RtlSidDominatesForTrust @ 0x1402ACB80 (RtlSidDominatesForTrust.c)
 *     RtlpOwnerAcesPresent @ 0x1402ACC70 (RtlpOwnerAcesPresent.c)
 *     SeGetTrustLabelAce @ 0x1402AE120 (SeGetTrustLabelAce.c)
 *     SepTokenIsOwner @ 0x1402AE190 (SepTokenIsOwner.c)
 *     SepFreeResourceInfo @ 0x1402AE460 (SepFreeResourceInfo.c)
 *     SepAccessCheckEx @ 0x1402AE5D0 (SepAccessCheckEx.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     SeLogAccessFailure @ 0x1402B59D0 (SeLogAccessFailure.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     SepGetScopedPolicySid @ 0x1403BE380 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403BE3D8 (SepRmReferenceFindCap.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepSetAccessReasons @ 0x14044FA50 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404DBCB8 (SepBuildCapeSecurityDescriptor.c)
 *     SepLogLpacAccessFailure @ 0x1404F654C (SepLogLpacAccessFailure.c)
 *     AuthzBasepMergeAccessReasons @ 0x140715100 (AuthzBasepMergeAccessReasons.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeLockSubjectContext @ 0x1408EE720 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408EE780 (SeUnlockSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  int v26; // edi
  __int64 TrustLabelAce; // rax
  __int64 v28; // r10
  __int64 v29; // r10
  int *v30; // r8
  __int64 v31; // rdx
  int v32; // eax
  PSECURITY_SUBJECT_CONTEXT v33; // rcx
  int *v34; // rax
  PVOID ClientToken; // r12
  __int64 v36; // r11
  __int64 v37; // rcx
  _DWORD *v38; // rdi
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  int v42; // r12d
  char v43; // cl
  _DWORD *v44; // rcx
  char v45; // dl
  unsigned int v46; // eax
  char v47; // r9
  int v48; // r8d
  unsigned int v49; // edi
  char IsOwner; // al
  char v51; // r13
  _DWORD *v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rdx
  char v55; // di
  __int64 v56; // r14
  __int64 v57; // r10
  int v58; // r11d
  int *v59; // rax
  _DWORD *v60; // rdx
  int v61; // ecx
  unsigned int v62; // edx
  __int64 v63; // r9
  int v64; // r8d
  int v65; // ecx
  _DWORD *v66; // rax
  char v67; // bl
  int *v68; // rcx
  int v69; // r8d
  __int64 v70; // r8
  int v71; // ecx
  int v72; // ecx
  struct _SECURITY_SUBJECT_CONTEXT *v73; // r13
  _DWORD *v74; // rdi
  int v75; // eax
  int *v76; // r8
  int v77; // edi
  int v78; // edx
  int v79; // ecx
  unsigned int v80; // edx
  int v81; // ecx
  int v82; // r14d
  int v83; // ecx
  unsigned int v84; // edx
  __int64 v85; // r10
  int v86; // ecx
  int *v87; // r8
  __int64 v88; // r9
  int v89; // r8d
  int v90; // ecx
  __int64 v91; // rcx
  __int16 v92; // ax
  __int64 v93; // rax
  __int64 v94; // rdx
  char v95; // al
  int v96; // ecx
  int *v97; // rcx
  char *Pool2; // rdi
  unsigned int **v99; // rax
  int v100; // r9d
  struct _SECURITY_SUBJECT_CONTEXT *v101; // r12
  bool v102; // cl
  __int64 v103; // rcx
  PSECURITY_SUBJECT_CONTEXT v104; // rax
  __int64 v105; // r12
  int v106; // eax
  int v107; // r11d
  int v108; // edi
  __int64 v109; // rbx
  char v110; // si
  int v111; // r8d
  int v112; // r9d
  bool v113; // zf
  int v114; // ecx
  int v115; // r9d
  int v116; // eax
  int v117; // ecx
  _QWORD *v118; // rax
  int v119; // ecx
  _DWORD *v120; // rax
  __int64 v121; // r9
  int v122; // r8d
  __int64 v123; // rcx
  int v124; // edi
  __int64 v125; // rax
  __int64 v126; // rcx
  __int16 v127; // dx
  __int64 v128; // rax
  unsigned int *v129; // rcx
  unsigned int v130; // eax
  _DWORD *v131; // rcx
  __int64 v132; // r8
  int v133; // edx
  unsigned int v134; // r8d
  _QWORD *v135; // r12
  _DWORD *v136; // rax
  int v137; // esi
  __int64 v138; // rdi
  char *v139; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  unsigned __int64 ThreadLock; // rdx
  unsigned int v143; // eax
  int v144; // r8d
  int v145; // eax
  int v146; // ecx
  _QWORD *v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // r9
  __int64 v151; // r10
  int v152; // eax
  int v153; // ecx
  int v154; // r12d
  _QWORD *v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // r9
  unsigned int v160; // r8d
  int v161; // ecx
  int v162; // r12d
  PACCESS_TOKEN v163; // r9
  PACCESS_TOKEN PrimaryToken; // r8
  char v165; // al
  int v166; // r9d
  int v167; // r11d
  int v168; // r12d
  int v169; // r11d
  int v170; // eax
  int v171; // r12d
  int v172; // eax
  int v173; // r11d
  int v174; // ecx
  int v175; // eax
  PACCESS_TOKEN v176; // r9
  PACCESS_TOKEN v177; // r8
  int v178; // edx
  int v179; // eax
  char *v180; // rcx
  int v181; // edx
  char *v182; // rcx
  __int64 v183; // rcx
  int v184; // r12d
  unsigned int v185; // r13d
  int v186; // r14d
  int v187; // r12d
  unsigned int v188; // ecx
  char *v189; // rax
  int v190; // r11d
  int v191; // ecx
  int v192; // r11d
  __int64 v193; // [rsp+38h] [rbp-F8h]
  __int64 v194; // [rsp+38h] [rbp-F8h]
  __int64 v195; // [rsp+38h] [rbp-F8h]
  int v196; // [rsp+40h] [rbp-F0h]
  __int64 v197; // [rsp+50h] [rbp-E0h]
  __int64 v198; // [rsp+58h] [rbp-D8h]
  __int64 v199; // [rsp+60h] [rbp-D0h]
  __int64 v200; // [rsp+68h] [rbp-C8h]
  int v201; // [rsp+70h] [rbp-C0h]
  bool v203; // [rsp+B1h] [rbp-7Fh] BYREF
  char v204; // [rsp+B2h] [rbp-7Eh]
  bool v205; // [rsp+B3h] [rbp-7Dh] BYREF
  char v206; // [rsp+B4h] [rbp-7Ch]
  char v207; // [rsp+B5h] [rbp-7Bh] BYREF
  char v208; // [rsp+B6h] [rbp-7Ah]
  __int64 v209; // [rsp+B8h] [rbp-78h]
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-70h]
  PVOID Object; // [rsp+C8h] [rbp-68h]
  char v212; // [rsp+D0h] [rbp-60h]
  __int64 v213; // [rsp+D8h] [rbp-58h]
  char v214[4]; // [rsp+E0h] [rbp-50h] BYREF
  int v215; // [rsp+E4h] [rbp-4Ch]
  int v216; // [rsp+E8h] [rbp-48h]
  PVOID P; // [rsp+F0h] [rbp-40h] BYREF
  int v218; // [rsp+F8h] [rbp-38h]
  int v219; // [rsp+FCh] [rbp-34h] BYREF
  unsigned int i; // [rsp+100h] [rbp-30h]
  int v221; // [rsp+104h] [rbp-2Ch]
  __int64 v222; // [rsp+108h] [rbp-28h]
  unsigned __int64 v223; // [rsp+110h] [rbp-20h]
  int v224; // [rsp+118h] [rbp-18h] BYREF
  char *v225; // [rsp+120h] [rbp-10h]
  unsigned __int64 v226; // [rsp+128h] [rbp-8h]
  int v227; // [rsp+130h] [rbp+0h]
  int v228; // [rsp+134h] [rbp+4h] BYREF
  int v229; // [rsp+138h] [rbp+8h]
  int v230; // [rsp+140h] [rbp+10h] BYREF
  int v231; // [rsp+148h] [rbp+18h] BYREF
  int v232; // [rsp+14Ch] [rbp+1Ch]
  int v233; // [rsp+150h] [rbp+20h]
  __int128 v234; // [rsp+158h] [rbp+28h] BYREF
  int v235; // [rsp+168h] [rbp+38h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+170h] [rbp+40h] BYREF
  __int64 v237; // [rsp+190h] [rbp+60h]
  _OWORD v238[2]; // [rsp+198h] [rbp+68h] BYREF
  __int64 v239; // [rsp+1B8h] [rbp+88h]
  _OWORD v240[2]; // [rsp+1C0h] [rbp+90h] BYREF
  __int128 v241; // [rsp+1E0h] [rbp+B0h] BYREF
  __int128 v242; // [rsp+1F0h] [rbp+C0h]
  __int128 v243; // [rsp+200h] [rbp+D0h]
  _BYTE v244[128]; // [rsp+210h] [rbp+E0h] BYREF
  _BYTE v245[128]; // [rsp+290h] [rbp+160h] BYREF
  _BYTE v246[128]; // [rsp+310h] [rbp+1E0h] BYREF

  v213 = a3;
  v7 = 0;
  SubjectContext = a1;
  v8 = a3;
  v225 = 0LL;
  v237 = 0LL;
  v239 = 0LL;
  v228 = 0;
  v234 = 0LL;
  v235 = 0;
  memset(v240, 0, 28);
  v223 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v226 = 0LL;
  v206 = 0;
  memset(v238, 0, sizeof(v238));
  P = 0LL;
  v224 = 0;
  v209 = a4;
  v203 = 0;
  v214[0] = 0;
  memset_0(v244, 0, sizeof(v244));
  memset_0(v245, 0, sizeof(v245));
  memset_0(v246, 0, sizeof(v246));
  v208 = 0;
  v11 = -1;
  v229 = -1;
  v230 = -1;
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
  v219 = 0;
  v231 = -1073741790;
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
    v96 = *(_DWORD *)(v8 + 16);
    if ( (v96 & 0x2000000) != 0 )
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(v8 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(v8 + 20);
    }
    else
    {
      **(_DWORD **)(a4 + 8) = *(_DWORD *)(v8 + 20) | v96;
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
    v117 = *(_DWORD *)(v8 + 20);
    if ( v117 )
    {
      **(_DWORD **)(a4 + 8) = v117;
      **(_DWORD **)(a4 + 16) = 0;
      v118 = *(_QWORD **)(a4 + 32);
      if ( v118 )
        *v118 = 0LL;
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
  v205 = 0;
  v207 = 0;
  TrustLabelAce = SeGetTrustLabelAce(*(_QWORD *)(v25 + 8), v20);
  if ( TrustLabelAce )
  {
    v28 = TrustLabelAce + 8;
    if ( TrustLabelAce != -8 )
    {
      v104 = SubjectContext;
      if ( SubjectContext->ClientToken )
      {
        v105 = *((_QWORD *)SubjectContext->ClientToken + 138);
        v26 = RtlSidDominatesForTrust(*((_QWORD *)SubjectContext->PrimaryToken + 138), v105, (bool *)&v207);
        if ( v26 < 0 )
        {
          v8 = v213;
          goto LABEL_29;
        }
        if ( v207 )
          goto LABEL_160;
        v104 = SubjectContext;
      }
      v105 = *((_QWORD *)v104->PrimaryToken + 138);
LABEL_160:
      v106 = RtlSidDominatesForTrust(v105, v28, &v205);
      v8 = v213;
      v26 = v106;
      if ( v106 >= 0 && !v205 )
        v11 = v107 | 0x1000000;
    }
  }
LABEL_29:
  v29 = v209;
  **(_DWORD **)(v209 + 16) = v26;
  v30 = *(int **)(v29 + 16);
  if ( *v30 < 0 )
    goto LABEL_133;
  v31 = *(unsigned int *)(v8 + 16);
  LODWORD(v31) = v31 & 0xFDFFFFFF;
  v32 = -1073741790;
  v33 = SubjectContext;
  if ( (v11 & (unsigned int)v31) == (_DWORD)v31 )
    v32 = 0;
  *v30 = v32;
  v34 = *(int **)(v29 + 16);
  ClientToken = v33->ClientToken;
  Object = v33->ClientToken;
  if ( *v34 < 0 )
  {
    if ( !ClientToken )
      ClientToken = v33->PrimaryToken;
    v137 = *(_DWORD *)(v213 + 16) | *(_DWORD *)(v213 + 20);
    v138 = *(_QWORD *)(v213 + 8);
    SepLocateTokenTrustLevel(v33, v31);
    SeLogAccessFailure(ClientToken, *(_QWORD *)(v138 + 8), v137, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    AuthzBasepSetAccessReasons(v19 & ~v11, 9437184, 0, *(_QWORD *)(v209 + 24), 0);
    return 0;
  }
  if ( !ClientToken )
  {
    ClientToken = v33->PrimaryToken;
    Object = ClientToken;
  }
  v36 = v213;
  v37 = *(_QWORD *)(v213 + 8);
  if ( (*(_DWORD *)(v37 + 4) & 4) == 0 )
  {
    v38 = *(_DWORD **)(v29 + 16);
    v39 = SepFilterCheck(*(_QWORD *)(v37 + 8), (unsigned int)&P, (_DWORD)ClientToken, 0, (__int64)&v230);
    v29 = v209;
    *v38 = v39;
    v30 = *(int **)(v29 + 16);
    if ( *v30 < 0 )
      goto LABEL_133;
    v36 = v213;
    v229 = v230;
    v40 = -1073741790;
    if ( (v230 & *(_DWORD *)(v213 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v213 + 16) & 0xFDFFFFFF) )
      v40 = 0;
    *v30 = v40;
    if ( **(int **)(v29 + 16) < 0 )
    {
      SeLogAccessFailure(
        ClientToken,
        *(_QWORD *)(*(_QWORD *)(v36 + 8) + 8LL),
        *(_BYTE *)(v36 + 16) | *(_BYTE *)(v36 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      AuthzBasepSetAccessReasons(v19 & v229, 10485760, 0, *(_QWORD *)(v209 + 24), 0);
      return 0;
    }
  }
  v41 = *(_QWORD *)(v36 + 8);
  v42 = *(_DWORD *)(v41 + 4) & 1;
  if ( (*(_DWORD *)(v41 + 4) & 2) == 0 )
  {
    LOBYTE(v30) = 0;
    goto LABEL_96;
  }
  LODWORD(v30) = 1;
  if ( (*((_DWORD *)Object + 50) & 0x2000) == 0 )
  {
LABEL_96:
    v43 = 0;
    goto LABEL_43;
  }
  v43 = 1;
LABEL_43:
  v212 = v43;
  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)Object + 50) & 0x20) == 0 )
  {
    v125 = *((_QWORD *)Object + 27);
    if ( v125 )
    {
      if ( (*(_DWORD *)(v125 + 40) & 0x20) != 0 )
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
  LOBYTE(v221) = 0;
  if ( v43 )
  {
    v233 = DWORD2(v234);
    v230 = v234;
LABEL_46:
    v44 = Object;
    goto LABEL_47;
  }
  v74 = *(_DWORD **)(v29 + 16);
  v75 = SepMandatoryIntegrityCheck(
          *(_QWORD *)(v36 + 32),
          *(_QWORD *)(v41 + 8),
          (_DWORD)v30,
          (_DWORD)Object,
          0,
          (__int64)&v234);
  v29 = v209;
  *v74 = v75;
  v76 = *(int **)(v29 + 16);
  if ( *v76 < 0 )
    goto LABEL_133;
  v36 = v213;
  v77 = v234;
  v230 = v234;
  v233 = DWORD2(v234);
  if ( DWORD2(v234) )
  {
    v78 = -1073741790;
    if ( ((unsigned int)v234 & *(_DWORD *)(v213 + 16) & 0xFDFFFFFF) == (*(_DWORD *)(v213 + 16) & 0xFDFFFFFF) )
      v78 = 0;
  }
  else
  {
    v78 = 0;
  }
  v44 = Object;
  *v76 = v78;
  if ( **(int **)(v29 + 16) < 0 )
  {
    if ( (v44[50] & 0x4000) == 0 || HIDWORD(v234) > 0x2000 )
    {
      if ( !a2 )
      {
        SeUnlockSubjectContext(SubjectContext);
        v29 = v209;
      }
      v123 = *(_QWORD *)(v29 + 24);
      v124 = v19 & ~v77;
      if ( v123 )
      {
        while ( v16 )
        {
          if ( (v16 & v124) != 0 && !*(_DWORD *)(v123 + 4LL * v7) )
            *(_DWORD *)(v123 + 4LL * v7) = 3145728;
          ++v7;
          v16 *= 2;
        }
      }
      return 0;
    }
    LOBYTE(v221) = 1;
  }
  else if ( (*(_DWORD *)(v36 + 16) & 0x2000000) != 0 && (v44[50] & 0x4000) != 0 )
  {
    v79 = (unsigned __int8)v221;
    if ( HIDWORD(v234) <= 0x2000 )
      v79 = 1;
    v221 = v79;
    goto LABEL_46;
  }
LABEL_47:
  if ( !BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) )
  {
LABEL_48:
    v45 = 0;
    goto LABEL_49;
  }
  v126 = *(_QWORD *)(*(_QWORD *)(v36 + 8) + 8LL);
  v127 = *(_WORD *)(v126 + 2);
  if ( (v127 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
  {
LABEL_260:
    v44 = Object;
    goto LABEL_48;
  }
  if ( v127 >= 0 )
  {
    v139 = *(char **)(v126 + 24);
  }
  else
  {
    v128 = *(unsigned int *)(v126 + 12);
    if ( !(_DWORD)v128 )
    {
      v225 = 0LL;
      goto LABEL_260;
    }
    v139 = (char *)(v126 + v128);
  }
  v225 = v139;
  if ( !v139 )
    goto LABEL_260;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v139);
  if ( !ScopedPolicySid )
  {
    v29 = v209;
    goto LABEL_260;
  }
  Cap = SepRmReferenceFindCap(ScopedPolicySid);
  ThreadLock = v226;
  v44 = Object;
  if ( Cap < 0 )
    ThreadLock = ExpPlatformBinaryLock.ThreadLock;
  v29 = v209;
  v36 = v213;
  v223 = ThreadLock;
  v45 = 1;
  v206 = 1;
LABEL_49:
  if ( !(_BYTE)v42 || (v46 = *(_DWORD *)(v36 + 16), (v46 & 0x2060000) != 0) || v45 )
  {
    IsOwner = SepTokenIsOwner(v44, *(_QWORD *)(*(_QWORD *)(v36 + 8) + 8LL));
    v36 = v213;
    v51 = IsOwner;
    v204 = IsOwner;
    v47 = IsOwner;
    v48 = *(_DWORD *)(v213 + 16);
    v49 = v48;
    if ( !IsOwner )
      goto LABEL_54;
    v204 = IsOwner;
    if ( (v48 & 0x2060000) == 0 )
      goto LABEL_54;
    v80 = v48;
    if ( !(_BYTE)v42 )
    {
      v91 = *(_QWORD *)(*(_QWORD *)(v213 + 8) + 8LL);
      v92 = *(_WORD *)(v91 + 2);
      if ( (v92 & 4) != 0 )
      {
        if ( v92 >= 0 )
        {
          v94 = *(_QWORD *)(v91 + 32);
        }
        else
        {
          v93 = *(unsigned int *)(v91 + 16);
          if ( (_DWORD)v93 )
            v94 = v91 + v93;
          else
            v94 = 0LL;
        }
      }
      else
      {
        v94 = 0LL;
      }
      v95 = RtlpOwnerAcesPresent(0, v94);
      v36 = v213;
      v80 = v49;
      LOBYTE(v42) = v95 == 0;
      v48 = v49;
    }
    v204 = v51;
    v47 = v51;
    if ( (_BYTE)v42 )
    {
      v81 = *(_DWORD *)(v36 + 20);
      v204 = v51;
      if ( (v80 & 0x2000000) != 0 )
      {
        v82 = 393216;
        *(_DWORD *)(v36 + 20) = v81 | 0x60000;
        v48 = 393216;
      }
      else
      {
        v82 = v19 & 0x60000;
        *(_DWORD *)(v36 + 20) = v81 | v80 & 0x60000;
        v48 = v80 & 0x60000;
      }
      v83 = 1;
      v84 = 0;
      v85 = *(_QWORD *)(v209 + 24);
      if ( v85 )
      {
        while ( v83 )
        {
          if ( (v83 & v82) != 0 && !*(_DWORD *)(v85 + 4LL * v84) )
            *(_DWORD *)(v85 + 4LL * v84) = 0x400000;
          ++v84;
          v83 *= 2;
        }
      }
      v45 = v206;
      v49 = *(_DWORD *)(v36 + 16) & 0xFFF9FFFF;
      v21 = a6;
      v29 = v209;
      *(_DWORD *)(v36 + 16) = v49;
      if ( !v45 )
      {
        v47 = 0;
        v204 = 0;
      }
    }
    else
    {
LABEL_54:
      v45 = v206;
      v29 = v209;
      v21 = a6;
    }
  }
  else
  {
    v47 = 0;
    v48 = *(_DWORD *)(v36 + 16);
    v204 = 0;
    v49 = v46;
  }
  v52 = Object;
  if ( !v49 && !v45 && ((*((_DWORD *)Object + 50) & 0x2000) != 0 || !v48) )
  {
    if ( !a2 )
    {
      SeUnlockSubjectContext(SubjectContext);
      v29 = v209;
      v36 = v213;
    }
    **(_DWORD **)(v29 + 8) = *(_DWORD *)(v36 + 20);
    **(_DWORD **)(v29 + 16) = 0;
    return 1;
  }
  v53 = *(_QWORD *)(v36 + 8);
  v200 = *(_QWORD *)(v29 + 24);
  v199 = *(_QWORD *)(v29 + 16);
  v198 = *(_QWORD *)(v29 + 32);
  v197 = *(_QWORD *)(v29 + 8);
  v196 = *(_DWORD *)(v36 + 20);
  v193 = *(_QWORD *)(v36 + 32);
  LODWORD(v240[0]) = v48;
  memset((char *)v240 + 4, 0, 24);
  v55 = SepAccessCheckEx(
          *(_QWORD *)(v53 + 8),
          0,
          SubjectContext->PrimaryToken,
          SubjectContext->ClientToken,
          v49,
          0LL,
          0,
          v193,
          v196,
          v21,
          v197,
          v198,
          v199,
          v200,
          0,
          v47,
          a7,
          (__int64)v240,
          (__int64)&P,
          (__int64)&v203);
  v207 = v55;
  if ( BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) )
  {
    v54 = v209;
    LODWORD(v226) = **(_DWORD **)(v209 + 16);
    if ( (v226 & 0x80000000) == 0LL && v206 )
    {
      v97 = *(int **)(v209 + 8);
      Pool2 = 0LL;
      v99 = *(unsigned int ***)(v209 + 32);
      v100 = 0;
      LOBYTE(v227) = 0;
      v218 = 0;
      v216 = *v97;
      v215 = v216;
      if ( v99 )
      {
        v129 = *v99;
        if ( *v99 )
        {
          v130 = *v129;
          if ( *v129 )
          {
            v131 = v129 + 3;
            v132 = v130;
            do
            {
              if ( (int)v131[1] < 0 )
              {
                if ( *(v131 - 1) == SeSecurityPrivilege.LowPart && *v131 == SeSecurityPrivilege.HighPart )
                {
                  v100 |= 0x1000000u;
                }
                else if ( *(_QWORD *)(v131 - 1) == SeTakeOwnershipPrivilege
                       || *(_QWORD *)(v131 - 1) == SeRelabelPrivilege )
                {
                  v100 |= 0x80000u;
                }
              }
              v131 += 3;
              --v132;
            }
            while ( v132 );
            v54 = v209;
            v218 = v100;
          }
        }
      }
      v232 = **(_DWORD **)(v54 + 8);
      v101 = SubjectContext;
      v205 = SepAdtAuditThisEventWithContext(130LL, 1LL, 1LL, SubjectContext);
      v102 = v205;
      if ( v205 )
      {
        Pool2 = (char *)ExAllocatePool2(0x40uLL);
        if ( !Pool2 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(v101);
          SepRmDereferenceCap(v223);
          v103 = v209;
          **(_DWORD **)(v209 + 8) = 0;
          **(_DWORD **)(v103 + 16) = -1073741801;
          SepFreeResourceInfo(P);
          return 0;
        }
        memset_0(Pool2, 0, 8LL * *(unsigned int *)(v223 + 60));
        v102 = v205;
      }
      v133 = v215;
      v134 = 0;
      v135 = Object;
      for ( i = 0; ; i = v134 )
      {
        v143 = *(_DWORD *)(v223 + 60);
        LODWORD(v222) = v143;
        if ( v134 >= v143 )
          break;
        v241 = 0LL;
        v242 = 0LL;
        v243 = 0LL;
        v222 = *(_QWORD *)(v223 + 8LL * v134 + 64);
        if ( !*(_QWORD *)(v222 + 24) )
          goto LABEL_290;
        v144 = (int)P;
        if ( !P )
        {
          v145 = AuthzBasepInitializeResourceClaimsFromSacl(v225, &P);
          v144 = (int)P;
          v146 = (unsigned __int8)v227;
          if ( v145 < 0 )
            v146 = 1;
          v227 = v146;
        }
        v147 = (_QWORD *)v135[137];
        if ( v147 )
        {
          v148 = v147[75];
          v149 = v147[73];
          v150 = v147[74];
          v151 = v147[72];
        }
        else
        {
          v148 = 0LL;
          v149 = 0LL;
          v150 = 0LL;
          LODWORD(v151) = 0;
        }
        v152 = AuthzBasepEvaluateAceCondition(
                 (_DWORD)v135,
                 v135[97],
                 v144,
                 v151,
                 v150,
                 v149,
                 v148,
                 *(_QWORD *)(v222 + 24),
                 *(_DWORD *)(v222 + 16),
                 1,
                 0,
                 (__int64)&v224);
        v153 = v224;
        v154 = v152;
        if ( v224 == 1 )
          goto LABEL_290;
        if ( v152 < 0 )
          goto LABEL_315;
        v135 = Object;
        if ( (*((_DWORD *)Object + 50) & 0x10) != 0 )
        {
          v155 = (_QWORD *)*((_QWORD *)Object + 137);
          if ( v155 )
          {
            v156 = v155[75];
            v157 = v155[73];
            v158 = v155[74];
            v159 = v155[72];
          }
          else
          {
            v156 = 0LL;
            v157 = 0LL;
            v158 = 0LL;
            LODWORD(v159) = 0;
          }
          v154 = AuthzBasepEvaluateAceCondition(
                   (_DWORD)Object,
                   *((_QWORD *)Object + 97),
                   (_DWORD)P,
                   v159,
                   v158,
                   v157,
                   v156,
                   *(_QWORD *)(v222 + 24),
                   *(_DWORD *)(v222 + 16),
                   1,
                   1,
                   (__int64)&v224);
          if ( v154 < 0 )
          {
LABEL_315:
            if ( a2 )
            {
LABEL_319:
              SepRmDereferenceCap(v223);
              v183 = v209;
              **(_DWORD **)(v209 + 8) = 0;
              **(_DWORD **)(v183 + 16) = v154;
              SepFreeResourceInfo(P);
              if ( Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              return 0;
            }
LABEL_318:
            SeUnlockSubjectContext(SubjectContext);
            goto LABEL_319;
          }
          v153 = v224;
          v135 = Object;
        }
        if ( (_BYTE)v227 || v153 == 1 )
        {
LABEL_290:
          v154 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
          if ( v154 < 0 )
          {
            if ( a2 )
              goto LABEL_319;
            goto LABEL_318;
          }
          v161 = *(_DWORD *)(v213 + 16);
          if ( (*(_DWORD *)(v222 + 48) & 1) != 0 )
          {
            if ( (v161 & 0x2000000) == 0 )
              v161 |= *(_DWORD *)(v213 + 20);
            v162 = 0;
          }
          else
          {
            v162 = *(_DWORD *)(v213 + 20);
          }
          LOBYTE(v201) = 0;
          v194 = *(_QWORD *)(v213 + 32);
          v241 = 0LL;
          v163 = SubjectContext->ClientToken;
          PrimaryToken = SubjectContext->PrimaryToken;
          v242 = 0LL;
          v243 = 0LL;
          v165 = SepAccessCheckEx(
                   (unsigned int)SecurityDescriptor,
                   0,
                   (_DWORD)PrimaryToken,
                   (_DWORD)v163,
                   v161 | 0x2000000u,
                   (__int64)&v241,
                   1,
                   v194,
                   v162,
                   v21,
                   (__int64)&v219,
                   0LL,
                   (__int64)&v231,
                   (__int64)v246,
                   v201,
                   v204,
                   a7,
                   (__int64)v240,
                   (__int64)&P,
                   (__int64)&v203);
          v166 = v218;
          v167 = v218 | HIDWORD(v242);
          v207 = v165;
          v168 = v219 & (**(_DWORD **)(v209 + 8) | v162);
          v219 = v168;
          if ( v204 )
            v167 |= v168 & 0x60000;
          v160 = i;
          v169 = ~(_DWORD)v243 & v167;
          v170 = v168 & v216;
          v113 = (v168 & v216) == 0;
          v171 = v232;
          v216 = v170;
          v172 = v231;
          if ( v113 )
            v172 = -1073741790;
          LODWORD(v226) = v172;
          if ( (v232 & (v232 ^ v169)) != 0 )
          {
            AuthzBasepSetAccessReasons(v232 & (v232 ^ v169), 327680, i, (unsigned int)v244, 0);
            v166 = v218;
            v232 = v173 & v171;
          }
          v102 = v205;
          if ( v205 )
          {
            if ( *(_QWORD *)(v222 + 40) )
            {
              v154 = SepBuildCapeSecurityDescriptor(v238);
              if ( v154 < 0 )
                goto LABEL_315;
              v174 = *(_DWORD *)(v213 + 16);
              if ( (*(_DWORD *)(v222 + 48) & 0x100) != 0 )
              {
                if ( (v174 & 0x2000000) == 0 )
                  v174 |= *(_DWORD *)(v213 + 20);
                v175 = 0;
              }
              else
              {
                v175 = *(_DWORD *)(v213 + 20);
              }
              LOBYTE(v201) = 0;
              v195 = *(_QWORD *)(v213 + 32);
              v176 = SubjectContext->ClientToken;
              v177 = SubjectContext->PrimaryToken;
              v241 = 0LL;
              v242 = 0LL;
              v243 = 0LL;
              SepAccessCheckEx(
                (unsigned int)v238,
                0,
                (_DWORD)v177,
                (_DWORD)v176,
                v174,
                0LL,
                0,
                v195,
                v175,
                v21,
                (__int64)&v228,
                0LL,
                (__int64)&v235,
                (__int64)v246,
                v201,
                v204,
                a7,
                (__int64)v240,
                (__int64)&P,
                (__int64)v214);
              v178 = v215;
              v160 = i;
              v179 = v218;
              v180 = &Pool2[8 * i];
              v180[4] = 1;
              *(_DWORD *)v180 = v228 | v179;
              v133 = v228 & v178;
              v102 = v205;
              v215 = v133;
            }
            else
            {
              v181 = v215;
              v182 = &Pool2[8 * v160];
              v182[4] = 1;
              *(_DWORD *)v182 = v219 | v166;
              v133 = v219 & v181;
              v102 = v205;
              v215 = v133;
            }
          }
          else
          {
            v133 = v215;
          }
          v135 = Object;
        }
        else
        {
          v102 = v205;
          v160 = i;
          v133 = v215;
        }
        v134 = v160 + 1;
      }
      v184 = v216;
      if ( v102 && v133 != v216 )
      {
        v185 = 0;
        v186 = v133 & (v216 ^ v133);
        v187 = v216 & (v216 ^ v133);
        if ( v143 )
        {
          v188 = v222;
          v189 = Pool2;
          v225 = Pool2;
          do
          {
            if ( !v186 && !v187 )
              break;
            if ( v189[4] )
            {
              v190 = *(_DWORD *)v189;
              v191 = v187 & (v187 ^ *(_DWORD *)v189);
              if ( v191 )
                AuthzBasepSetAccessReasons(v191, 0x80000000, v185 << 24, (unsigned int)v245, 0);
              v187 &= ~v191;
              v192 = v186 & v190;
              if ( v192 )
                AuthzBasepSetAccessReasons(v192, 0x80000000, v185 << 24, (unsigned int)v245, 0);
              v186 &= ~v192;
              AuthzBasepMergeAccessReasons(v244, v245, 4278190080LL);
              v189 = v225;
              v188 = v222;
            }
            v189 += 8;
            ++v185;
            v225 = v189;
          }
          while ( v185 < v188 );
        }
        v184 = v216;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v56 = v209;
      **(_DWORD **)(v209 + 16) = v226;
      **(_DWORD **)(v56 + 8) &= v184;
      if ( **(int **)(v56 + 16) < 0 )
        v203 = 0;
      AuthzBasepMergeAccessReasons(*(_QWORD *)(v56 + 24), v244, 0LL);
      AuthzBasepMergeAccessReasons(*(_QWORD *)(v56 + 24), v244, 4278190080LL);
      v55 = v207;
      v52 = Object;
    }
    else
    {
      v56 = v209;
    }
  }
  else
  {
    v56 = v209;
  }
  v57 = v213;
  if ( v212 || (*(_DWORD *)(v213 + 16) & 0x2000000) == 0 )
  {
    if ( (_BYTE)v221 && !*(_WORD *)((char *)&v240[1] + 5) )
    {
      if ( (v52[50] & 0x3000000) != 0x3000000 || HIDWORD(v240[0]) )
      {
        v58 = -1073741790;
        v119 = 1;
        v54 = 0LL;
        **(_DWORD **)(v56 + 16) = -1073741790;
        **(_DWORD **)(v56 + 8) = 0;
        v120 = *(_DWORD **)(v56 + 8);
        v121 = *(_QWORD *)(v56 + 24);
        v203 = 0;
        v122 = ~*v120;
        if ( v121 )
        {
          while ( v119 )
          {
            if ( (v119 & v122) != 0 && !*(_DWORD *)(v121 + 4LL * (unsigned int)v54) )
              *(_DWORD *)(v121 + 4LL * (unsigned int)v54) = 3145728;
            v54 = (unsigned int)(v54 + 1);
            v119 *= 2;
          }
        }
        goto LABEL_61;
      }
      v136 = *(_DWORD **)(v56 + 16);
      BYTE7(v240[1]) = 1;
      *v136 = 0;
      **(_DWORD **)(v56 + 8) = *(_DWORD *)(v57 + 16);
      v203 = 1;
    }
  }
  else
  {
    v54 = *(_QWORD *)(v56 + 8);
    v86 = *(_DWORD *)v54;
    if ( !(_BYTE)v221 || !*(_WORD *)((char *)&v240[1] + 5) && (v52[50] & 0x3000000) != 0x3000000 )
    {
      v87 = *(int **)(v56 + 16);
      if ( v233 && (!BYTE6(v234) || !BYTE4(v234) || !BYTE5(v234)) )
      {
        v115 = v86 & v230;
        if ( (v86 & v230) != v86 )
        {
          *(_DWORD *)v54 = v115;
          v116 = -1073741790;
          if ( v115 )
            v116 = 0;
          *v87 = v116;
          v203 = v115 != 0;
        }
      }
      v54 = 0LL;
      v88 = *(_QWORD *)(v56 + 24);
      v89 = v86 & ~**(_DWORD **)(v56 + 8);
      v90 = 1;
      if ( v88 )
      {
        while ( v90 )
        {
          if ( (v90 & v89) != 0 && !*(_DWORD *)(v88 + 4LL * (unsigned int)v54) )
            *(_DWORD *)(v88 + 4LL * (unsigned int)v54) = 3145728;
          v54 = (unsigned int)(v54 + 1);
          v90 *= 2;
        }
      }
    }
  }
  v58 = -1073741790;
LABEL_61:
  if ( (*(_DWORD *)(v57 + 16) & 0x2000000) != 0 )
  {
    v59 = *(int **)(v56 + 8);
    v60 = *(_DWORD **)(v56 + 16);
    v208 = 0;
    v61 = *v59;
    if ( v11 != -1 )
    {
      v111 = v11 & v61;
      if ( (v11 & v61) != v61 )
      {
        v208 = 1;
        *v59 = v111;
        if ( v111 )
        {
          *v60 = 0;
          v203 = 1;
        }
        else
        {
          *v60 = -1073741790;
          v203 = 0;
        }
      }
    }
    v62 = 0;
    v63 = *(_QWORD *)(v56 + 24);
    v64 = v61 & ~**(_DWORD **)(v56 + 8);
    v65 = 1;
    if ( v63 )
    {
      while ( v65 )
      {
        if ( (v65 & v64) != 0 && !*(_DWORD *)(v63 + 4LL * v62) )
          *(_DWORD *)(v63 + 4LL * v62) = 9437184;
        ++v62;
        v65 *= 2;
      }
    }
    v66 = *(_DWORD **)(v56 + 8);
    v67 = 0;
    v68 = *(int **)(v56 + 16);
    v69 = *(_DWORD *)(v57 + 16);
    v54 = (unsigned int)*v66;
    if ( v229 != -1 )
    {
      v112 = v229 & v54;
      if ( (v229 & (unsigned int)v54) != (_DWORD)v54 )
      {
        *v66 = v112;
        v67 = 1;
        if ( (v69 & 0x2000000) != 0 )
        {
          v113 = v112 == 0;
          if ( v112 )
            v58 = 0;
          *v68 = v58;
        }
        else
        {
          *v68 = -1073741790;
          v113 = *v66 == 0;
        }
        v203 = !v113;
      }
    }
    v70 = *(_QWORD *)(v56 + 24);
    v71 = v54 & ~**(_DWORD **)(v56 + 8);
    if ( v70 )
    {
      while ( v16 )
      {
        if ( (v16 & v71) != 0 && !*(_DWORD *)(v70 + 4LL * v7) )
          *(_DWORD *)(v70 + 4LL * v7) = 10485760;
        ++v7;
        v16 *= 2;
      }
    }
  }
  else
  {
    v67 = 0;
  }
  if ( v52 )
  {
    if ( v208
      || v67
      || (v72 = HIDWORD(v240[0])) == 0 && (v52[50] & 0x4000) != 0 && (**(int **)(v56 + 16) < 0 || BYTE7(v240[1])) )
    {
      v73 = SubjectContext;
      v108 = *(_DWORD *)(v57 + 16) | *(_DWORD *)(v57 + 20);
      v109 = *(_QWORD *)(v57 + 8);
      v110 = **(_DWORD **)(v56 + 16) >= 0;
      SepLocateTokenTrustLevel(SubjectContext, v54);
      SeLogAccessFailure(v52, *(_QWORD *)(v109 + 8), v108, v110);
      v72 = HIDWORD(v240[0]);
      v57 = v213;
      v55 = v207;
    }
    else
    {
      v73 = SubjectContext;
    }
    if ( **(int **)(v56 + 16) < 0 && !v72 && (v52[50] & 0x4000) != 0 )
    {
      if ( BYTE8(v240[1]) )
      {
        v114 = *(_DWORD *)(v57 + 16) & ~(DWORD1(v240[0]) | DWORD2(v240[0]) | 0x2000000);
        if ( (v114 & v240[1]) == v114 )
          SepLogLpacAccessFailure();
      }
    }
  }
  else
  {
    v73 = SubjectContext;
  }
  if ( v206 )
    SepRmDereferenceCap(v223);
  if ( !a2 )
    SeUnlockSubjectContext(v73);
  SepFreeResourceInfo(P);
  return v55 && v203;
}

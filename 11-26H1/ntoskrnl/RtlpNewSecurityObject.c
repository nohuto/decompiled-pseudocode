/*
 * XREFs of RtlpNewSecurityObject @ 0x1408E7590
 * Callers:
 *     SeAssignSecurityEx2 @ 0x14045C290 (SeAssignSecurityEx2.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     SeAssignSecurity @ 0x1408E7210 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     RtlpOwnerAcesPresent @ 0x1403AF640 (RtlpOwnerAcesPresent.c)
 *     RtlpValidTrustSubjectContext @ 0x1403AF76C (RtlpValidTrustSubjectContext.c)
 *     RtlSidDominates @ 0x14040CB40 (RtlSidDominates.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x140441DE0 (SepLocateTokenIntegrity.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpCreateServerAcl @ 0x1408E6F44 (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1408E72B0 (RtlpNormalizeAcl.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1408E9740 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x1408E9DA0 (RtlpCombineAcls.c)
 *     RtlAddProcessTrustLabelAce @ 0x140901BA0 (RtlAddProcessTrustLabelAce.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14090E4F0 (SePrivilegedServiceAuditAlarm.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     SePrivilegeCheck @ 0x140A51E20 (SePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x140AAE5AC (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140B53C90 (RtlpComputeMergedAcl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        __int64 a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  __int64 v10; // r15
  _OWORD *v11; // r10
  PVOID v12; // r11
  char *v13; // r14
  char *v14; // r13
  __int64 v15; // r12
  char v16; // r8
  int v17; // ecx
  __int16 v18; // ax
  int v19; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int8 *v24; // rbx
  unsigned __int16 *v25; // rsi
  unsigned __int8 *v26; // rdi
  unsigned __int8 *v27; // r13
  unsigned __int8 *v28; // r12
  unsigned __int8 **TokenIntegrity; // rax
  unsigned __int8 *v30; // r15
  unsigned __int8 *TokenTrustLevel; // r14
  void *Pool2; // rax
  size_t v33; // r8
  __int64 v34; // rax
  char *v35; // r15
  __int64 v36; // r8
  bool v37; // si
  unsigned __int16 v38; // dx
  unsigned int v39; // r9d
  __int16 v40; // dx
  char *v41; // rax
  __int64 v42; // rax
  void *v43; // rax
  char *v44; // r11
  void *v45; // r11
  char v46; // r13
  int v47; // r12d
  __int16 v48; // cx
  int v49; // eax
  unsigned int v50; // r9d
  int v51; // r8d
  int v52; // r9d
  int v53; // esi
  __int64 v54; // r15
  __int64 v55; // r14
  int v56; // ebx
  int v57; // esi
  ACCESS_MASK v58; // r9d
  __int16 v59; // cx
  __int16 v60; // dx
  __int64 v61; // r15
  __int64 v62; // r14
  int v63; // esi
  __int16 v64; // cx
  char *v65; // rbx
  PSID v66; // r15
  __int16 v67; // ax
  ACL *v68; // rcx
  __int64 v69; // r8
  char *AceByType; // r11
  void *v71; // rdx
  unsigned int v72; // edi
  unsigned int v73; // r12d
  _OWORD *v74; // r13
  __int16 v75; // ax
  ACL *v76; // rbx
  _DWORD *v77; // rax
  __int64 v78; // r8
  int v79; // edx
  int v80; // ebx
  char *v81; // r14
  _BYTE *v82; // rdi
  char v83; // si
  int v84; // ecx
  int v85; // ecx
  __int64 v86; // rax
  unsigned int v87; // edi
  ACL *v88; // rax
  __int64 v89; // rax
  unsigned int v90; // edi
  ACL *v91; // rax
  ACL *v92; // r12
  __int64 v93; // rax
  __int64 v95; // rcx
  __int64 v96; // r13
  unsigned __int16 *v97; // rdi
  int v98; // eax
  char *v99; // rdi
  ACL *v100; // rdi
  ACL *v101; // r14
  void *v102; // rsi
  __int16 v103; // ax
  ACL *v104; // rcx
  char *v105; // rax
  PSECURITY_SUBJECT_CONTEXT v106; // r15
  __int64 v107; // rax
  unsigned __int8 v108; // cl
  int v109; // eax
  _OWORD *v110; // rdx
  unsigned int i; // r8d
  unsigned __int16 v112; // cx
  ACL *v113; // rcx
  __int64 v114; // rax
  __int64 v115; // r8
  __int16 v116; // cx
  __int64 v117; // rcx
  __int16 v118; // cx
  __int64 v119; // rcx
  __int64 v120; // r14
  unsigned int v121; // esi
  PVOID v122; // rdi
  ACL *v123; // rax
  __int16 v124; // si
  int v125; // eax
  ACCESS_MASK v126; // r14d
  PACL v127; // rax
  unsigned int v128; // r8d
  char *v129; // rax
  void *v130; // rdx
  int v131; // eax
  __int16 v132; // ax
  char v133; // di
  char v134; // r12
  __int64 v135; // r9
  __int64 v136; // r13
  _OWORD *v137; // rdx
  __int64 v138; // r15
  int v139; // esi
  ACL *v140; // rsi
  __int16 v141; // r13
  __int16 v142; // cx
  char v143; // r12
  unsigned int v144; // r14d
  ACL *v145; // rax
  PSECURITY_SUBJECT_CONTEXT v146; // r14
  KPROCESSOR_MODE v147; // bl
  bool v148; // al
  char v149; // bl
  void *v150; // r14
  unsigned int v151; // r12d
  unsigned int v152; // r15d
  unsigned int v153; // ebx
  unsigned int v154; // esi
  __int64 v155; // rdx
  int v156; // r14d
  unsigned __int8 *v157; // rdx
  unsigned int v158; // r8d
  PGENERIC_MAPPING v159; // r12
  int v160; // r9d
  unsigned __int8 v161; // al
  int v162; // ecx
  unsigned int v163; // eax
  int v164; // eax
  __int64 v165; // rcx
  int v166; // r14d
  unsigned __int16 *v167; // rbx
  unsigned __int8 *v168; // rdx
  unsigned int v169; // r8d
  PGENERIC_MAPPING v170; // r14
  int v171; // r12d
  unsigned __int8 v172; // al
  int v173; // ecx
  unsigned int v174; // eax
  int v175; // eax
  int v176; // eax
  GENERIC_MAPPING *GenericMapping; // rdi
  __int16 v178; // cx
  unsigned int v179; // ecx
  char *v180; // rdx
  __int16 v181; // ax
  __int64 v182; // rax
  __int16 v183; // ax
  __int64 v184; // rax
  PGENERIC_MAPPING v185; // r8
  PGENERIC_MAPPING v186; // r8
  __int64 ClientToken; // rcx
  unsigned __int8 v188; // bl
  void *v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  unsigned __int16 *v192; // rax
  __int64 v193; // rax
  ULONG v194; // r14d
  __int16 v195; // ax
  __int64 v196; // rax
  ACL *v197; // rcx
  _DWORD *v198; // rax
  ACCESS_MASK v199; // edi
  void *v200; // rsi
  BOOLEAN v201; // bl
  __int64 v202; // rax
  __int64 v203; // rax
  int v204; // ecx
  KPROCESSOR_MODE AccessMode; // [rsp+90h] [rbp-80h]
  unsigned __int16 *P; // [rsp+98h] [rbp-78h]
  NTSTATUS AccessStatus; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v208; // [rsp+A8h] [rbp-68h]
  char v209; // [rsp+B0h] [rbp-60h]
  PVOID v210; // [rsp+B8h] [rbp-58h]
  PVOID v211; // [rsp+C0h] [rbp-50h]
  char v212; // [rsp+C8h] [rbp-48h]
  char v213; // [rsp+C9h] [rbp-47h]
  _WORD v214[5]; // [rsp+CAh] [rbp-46h] BYREF
  char v215; // [rsp+D4h] [rbp-3Ch]
  BOOLEAN Dominates; // [rsp+D5h] [rbp-3Bh] BYREF
  char v217; // [rsp+D6h] [rbp-3Ah]
  char v218; // [rsp+D7h] [rbp-39h] BYREF
  char v219; // [rsp+D8h] [rbp-38h]
  char v220; // [rsp+D9h] [rbp-37h]
  char v221; // [rsp+DAh] [rbp-36h]
  int v222; // [rsp+DCh] [rbp-34h] BYREF
  int GrantedAccess; // [rsp+E0h] [rbp-30h] BYREF
  PVOID v224; // [rsp+E8h] [rbp-28h]
  _WORD v225[2]; // [rsp+F0h] [rbp-20h] BYREF
  int v226; // [rsp+F4h] [rbp-1Ch]
  _OWORD *v227; // [rsp+F8h] [rbp-18h]
  PVOID v228; // [rsp+100h] [rbp-10h]
  size_t Size; // [rsp+108h] [rbp-8h]
  void *v230; // [rsp+110h] [rbp+0h]
  void *Src; // [rsp+118h] [rbp+8h]
  PSID ProcessTrustLabelSid; // [rsp+120h] [rbp+10h]
  PGENERIC_MAPPING v233; // [rsp+128h] [rbp+18h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+130h] [rbp+20h]
  int v235; // [rsp+138h] [rbp+28h] BYREF
  int v236; // [rsp+13Ch] [rbp+2Ch] BYREF
  __int16 v237; // [rsp+140h] [rbp+30h]
  _BYTE *v238; // [rsp+148h] [rbp+38h]
  __int64 v239; // [rsp+150h] [rbp+40h]
  PSID Sid1; // [rsp+158h] [rbp+48h]
  __int64 v241; // [rsp+160h] [rbp+50h]
  PVOID SecurityDescriptor; // [rsp+168h] [rbp+58h] BYREF
  __int64 v243; // [rsp+170h] [rbp+60h]
  __int64 v244; // [rsp+178h] [rbp+68h]
  PVOID v245; // [rsp+180h] [rbp+70h]
  PVOID p_Acl; // [rsp+188h] [rbp+78h]
  PACL v247; // [rsp+190h] [rbp+80h] BYREF
  ACL *v248; // [rsp+198h] [rbp+88h]
  int v249; // [rsp+1A0h] [rbp+90h]
  __int64 v250; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v251; // [rsp+1B0h] [rbp+A0h]
  ACL *v252; // [rsp+1B8h] [rbp+A8h] BYREF
  char *v253; // [rsp+1C0h] [rbp+B0h]
  __int64 *v254; // [rsp+1C8h] [rbp+B8h]
  _OWORD v255[2]; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 v256; // [rsp+1F0h] [rbp+E0h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1F8h] [rbp+E8h] BYREF
  ACL Acl; // [rsp+210h] [rbp+100h] BYREF
  _OWORD v259[7]; // [rsp+218h] [rbp+108h] BYREF
  __int64 v260; // [rsp+288h] [rbp+178h]
  ACL v261; // [rsp+290h] [rbp+180h] BYREF

  v10 = a1;
  v233 = a9;
  v11 = a2;
  v251 = a10;
  v241 = a1;
  v256 = 0LL;
  v12 = 0LL;
  v209 = 0;
  v13 = 0LL;
  v220 = 0;
  v14 = 0LL;
  v219 = 0;
  v15 = 0LL;
  v213 = 0;
  v212 = 0;
  LOBYTE(v214[0]) = 0;
  v225[0] = 0;
  *(_WORD *)((char *)v214 + 1) = 0;
  LOBYTE(Size) = 0;
  v218 = 0;
  v254 = a3;
  v16 = a7;
  p_Acl = &Acl;
  v244 = a4;
  v227 = a2;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  P = 0LL;
  v228 = 0LL;
  v235 = 0;
  v224 = 0LL;
  v211 = 0LL;
  v252 = 0LL;
  v245 = 0LL;
  Sid1 = 0LL;
  ProcessTrustLabelSid = 0LL;
  v239 = 0LL;
  v243 = 0LL;
  v248 = 0LL;
  v208 = 0LL;
  AccessMode = 1;
  v222 = 0;
  *(_DWORD *)&v214[3] = 0;
  v253 = 0LL;
  v238 = 0LL;
  v247 = 0LL;
  SecurityDescriptor = 0LL;
  Dominates = 1;
  v210 = 0LL;
  v250 = 0LL;
  v221 = 0;
  memset(v255, 0, sizeof(v255));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v217 = 1;
  }
  else
  {
    v11 = v255;
    v217 = 0;
    v227 = v255;
    LOBYTE(v255[0]) = 1;
  }
  v17 = *((unsigned __int16 *)v11 + 1);
  v18 = *((_WORD *)v11 + 1) & 0x80;
  LOBYTE(v19) = v18 != 0;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v249 = v17;
  if ( a8 || (v37 = v18 != 0, v226 = (unsigned __int8)v19, v18) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a8 + 16) + 48LL), 1u);
    if ( *(_QWORD *)a8 )
    {
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)a8 + 48LL), 1u);
    }
    v22 = *(_QWORD *)a8;
    LOBYTE(v226) = v19;
    if ( v22 )
    {
      v19 = (unsigned __int8)v19;
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v19 = 1;
      v226 = v19;
    }
    else
    {
      v22 = *(_QWORD *)(a8 + 16);
    }
    v23 = *(_QWORD *)(a8 + 16);
    v24 = *(unsigned __int8 **)(v22 + 168);
    v25 = *(unsigned __int16 **)(v22 + 184);
    v26 = *(unsigned __int8 **)(v23 + 168);
    v27 = *(unsigned __int8 **)(*(_QWORD *)(v22 + 152) + 16LL * *(unsigned int *)(v22 + 144));
    v28 = *(unsigned __int8 **)(*(_QWORD *)(v23 + 152) + 16LL * *(unsigned int *)(v23 + 144));
    TokenIntegrity = (unsigned __int8 **)SepLocateTokenIntegrity(v22);
    if ( TokenIntegrity )
      v30 = *TokenIntegrity;
    else
      v30 = *(unsigned __int8 **)&RtlpBootStatHandleLock.SavedApcStateFill[40];
    TokenTrustLevel = (unsigned __int8 *)SepLocateTokenTrustLevel(SubjectSecurityContext);
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v245 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( SubjectSecurityContext->ClientToken )
      {
        ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      return 3221225626LL;
    }
    memmove(Pool2, v27, 4LL * v27[1] + 8);
    v33 = 4LL * v30[1] + 8;
    Sid1 = (char *)v245 + 4 * v27[1] + 8;
    memmove(Sid1, v30, v33);
    v14 = (char *)Sid1 + 4 * v30[1] + 8;
    v239 = (__int64)v14;
    if ( TokenTrustLevel )
    {
      v115 = TokenTrustLevel[1];
      ProcessTrustLabelSid = v14;
      memmove(v14, TokenTrustLevel, 4 * v115 + 8);
      v14 += 4 * TokenTrustLevel[1] + 8;
      v239 = (__int64)v14;
    }
    else
    {
      ProcessTrustLabelSid = 0LL;
    }
    if ( v24 )
    {
      v13 = v14;
      memmove(v14, v24, 4LL * v24[1] + 8);
      v14 += 4 * v24[1] + 8;
      v239 = (__int64)v14;
    }
    else
    {
      v13 = 0LL;
    }
    memmove(v14, v28, 4LL * v28[1] + 8);
    v34 = v28[1];
    v35 = &v14[4 * v34 + 8];
    v248 = (ACL *)v35;
    if ( v26 )
    {
      v36 = v26[1];
      v243 = (__int64)&v14[4 * v34 + 8];
      v15 = v243;
      memmove((void *)v243, v26, 4 * v36 + 8);
      v35 += 4 * v26[1] + 8;
      v248 = (ACL *)v35;
    }
    else
    {
      v15 = 0LL;
      v243 = 0LL;
    }
    if ( v25 )
      memmove(v35, v25, v25[1]);
    else
      v248 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    v10 = v241;
    v37 = v226;
    v12 = v245;
    v16 = a7;
    v11 = v227;
  }
  v38 = *((_WORD *)v11 + 1);
  v39 = v38;
  v40 = v38 & 0x8000;
  if ( v40 )
  {
    v42 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v42 )
      goto LABEL_29;
    v41 = (char *)v11 + v42;
  }
  else
  {
    v41 = (char *)*((_QWORD *)v11 + 1);
  }
  Src = v41;
  if ( v41 )
  {
    LOBYTE(v214[1]) = 1;
    goto LABEL_33;
  }
LABEL_29:
  if ( (v16 & 0x20) != 0 )
  {
    if ( !v10 )
      goto LABEL_388;
    if ( *(__int16 *)(v10 + 2) < 0 )
    {
      v202 = *(unsigned int *)(v10 + 4);
      if ( !(_DWORD)v202 )
        goto LABEL_388;
      v189 = (void *)(v10 + v202);
    }
    else
    {
      v189 = *(void **)(v10 + 8);
    }
    Src = v189;
    LOBYTE(v214[1]) = 1;
    if ( !v189 )
    {
      v56 = -1073741734;
      goto LABEL_181;
    }
  }
  else
  {
    v43 = v12;
    if ( v37 )
      v43 = v14;
    Src = v43;
    if ( !v43 )
    {
      v56 = -1073741700;
      goto LABEL_181;
    }
  }
LABEL_33:
  if ( v40 )
  {
    v93 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v93 )
    {
LABEL_36:
      if ( (v16 & 0x40) != 0 )
      {
        if ( !v10 )
        {
          v56 = -1073741733;
          goto LABEL_181;
        }
        if ( *(__int16 *)(v10 + 2) < 0 )
        {
          v203 = *(unsigned int *)(v10 + 8);
          if ( !(_DWORD)v203 )
            goto LABEL_385;
          v45 = (void *)(v10 + v203);
        }
        else
        {
          v45 = *(void **)(v10 + 16);
        }
      }
      else
      {
        v45 = v13;
        if ( v37 )
          v45 = (void *)v15;
      }
      v230 = v45;
      if ( v45 )
        goto LABEL_40;
LABEL_385:
      v56 = -1073741733;
      goto LABEL_181;
    }
    v44 = (char *)v11 + v93;
  }
  else
  {
    v44 = (char *)*((_QWORD *)v11 + 2);
  }
  v230 = v44;
  if ( !v44 )
    goto LABEL_36;
LABEL_40:
  v46 = (v16 & 4) != 0;
  v47 = v16 & 2;
  v215 = v47 != 0;
  v48 = v39 & 0x10;
  v49 = (v39 >> 2) & 8;
  v50 = v39 >> 1;
  v51 = v50 & 0x400;
  v52 = v50 & 0x1000;
  v53 = v48 != 0 ? 4 : 0;
  if ( v48 )
  {
    if ( v40 )
    {
      v84 = *((_DWORD *)v11 + 3);
      if ( v84 )
        LODWORD(v54) = (_DWORD)v11 + v84;
      else
        LODWORD(v54) = 0;
    }
    else
    {
      v54 = *((_QWORD *)v11 + 3);
    }
  }
  else
  {
    LODWORD(v54) = 0;
  }
  if ( !v241 )
    goto LABEL_43;
  v116 = *(_WORD *)(v241 + 2);
  if ( (v116 & 0x10) == 0 )
    goto LABEL_43;
  if ( v116 >= 0 )
  {
    v55 = *(_QWORD *)(v241 + 24);
    goto LABEL_44;
  }
  v117 = *(unsigned int *)(v241 + 12);
  if ( (_DWORD)v117 )
    v55 = v241 + v117;
  else
LABEL_43:
    v55 = 0LL;
LABEL_44:
  v56 = 0;
  v57 = v49 | v51 | v52 | v53;
  if ( !v57 && !v55 )
  {
    P = 0LL;
    v222 = v47 != 0 ? 0x400 : 0;
    goto LABEL_47;
  }
  v87 = 0;
  AccessStatus = 200;
  while ( 1 )
  {
    P = 0LL;
    if ( v87 >= 2 )
      goto LABEL_190;
    v88 = (ACL *)ExAllocatePool2(0x100uLL);
    P = (unsigned __int16 *)v88;
    if ( !v88 )
    {
      v102 = v210;
      v56 = -1073741801;
      v101 = (ACL *)v211;
      v100 = 0LL;
      v96 = v208;
      goto LABEL_121;
    }
    v56 = RtlpInheritAcl2(
            v55,
            v54,
            v57,
            a6,
            v215,
            v46,
            (__int64)Src,
            (__int64)v230,
            v239,
            v243,
            (__int64)v233,
            2,
            v244,
            a5,
            (__int64)&AccessStatus,
            v88,
            (__int64)v214,
            (__int64)&v222);
    if ( v56 >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( v56 != -1073741789 )
      goto LABEL_190;
    ++v87;
  }
  if ( !AccessStatus )
  {
    ExFreePoolWithTag(P, 0);
    AccessStatus = v56;
    P = 0LL;
LABEL_98:
    v11 = v227;
    v209 = 1;
    v212 = v214[0];
    GrantedAccess = 2 * (v222 & 0x1400 | (2 * (v222 & 8 | 0x2004)));
    goto LABEL_50;
  }
LABEL_190:
  if ( v56 >= 0 )
    goto LABEL_98;
  if ( v56 != -2147483637 )
    goto LABEL_181;
  v11 = v227;
  v212 = v214[0];
LABEL_47:
  v58 = 34816;
  if ( !v47 )
    v58 = 0x8000;
  v59 = *((_WORD *)v11 + 1);
  GrantedAccess = v58;
  if ( (v59 & 0x30) != 0x30 )
    goto LABEL_50;
  if ( (v59 & 0x10) != 0 )
  {
    if ( v59 >= 0 )
    {
      v192 = (unsigned __int16 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v191 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v191 )
      {
        P = 0LL;
        goto LABEL_420;
      }
      v192 = (unsigned __int16 *)((char *)v11 + v191);
    }
    P = v192;
  }
  else
  {
    P = 0LL;
  }
LABEL_420:
  v212 = 1;
  GrantedAccess = v58 | v59 & 0x2000 | 0x10;
LABEL_50:
  v60 = *((_WORD *)v11 + 1);
  if ( (v60 & 0x10) != 0 )
  {
    if ( v60 >= 0 )
    {
      v61 = *((_QWORD *)v11 + 3);
    }
    else
    {
      v85 = *((_DWORD *)v11 + 3);
      if ( v85 )
        LODWORD(v61) = (_DWORD)v11 + v85;
      else
        LODWORD(v61) = 0;
    }
  }
  else
  {
    LODWORD(v61) = 0;
  }
  if ( !v241 )
    goto LABEL_53;
  v118 = *(_WORD *)(v241 + 2);
  if ( (v118 & 0x10) == 0 )
    goto LABEL_53;
  if ( v118 >= 0 )
  {
    v62 = *(_QWORD *)(v241 + 24);
    goto LABEL_54;
  }
  v119 = *(unsigned int *)(v241 + 12);
  if ( (_DWORD)v119 )
    v62 = v241 + v119;
  else
LABEL_53:
    v62 = 0LL;
LABEL_54:
  v56 = 0;
  v63 = (*((unsigned __int16 *)v11 + 1) >> 2) & 8 | (*((unsigned __int16 *)v11 + 1) >> 1) & 0x400 | ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0);
  if ( v63 || v62 )
  {
    v90 = 0;
    AccessStatus = 200;
    while ( 1 )
    {
      v228 = 0LL;
      if ( v90 >= 2 )
        goto LABEL_193;
      v91 = (ACL *)ExAllocatePool2(0x100uLL);
      v228 = v91;
      v92 = v91;
      if ( !v91 )
      {
LABEL_425:
        v56 = -1073741801;
        goto LABEL_181;
      }
      v56 = RtlpInheritAcl2(
              v62,
              v61,
              v63,
              a6,
              v215,
              v46,
              (__int64)Src,
              (__int64)v230,
              v239,
              v243,
              (__int64)v233,
              2,
              v244,
              a5,
              (__int64)&AccessStatus,
              v91,
              (__int64)v225,
              (__int64)&v214[3]);
      if ( v56 >= 0 )
        break;
      ExFreePoolWithTag(v92, 0);
      v228 = 0LL;
      if ( v56 != -1073741789 )
        goto LABEL_193;
      ++v90;
    }
    if ( AccessStatus )
    {
LABEL_193:
      AccessStatus = v56;
      if ( v56 < 0 )
      {
        if ( v56 != -2147483637 )
          goto LABEL_181;
        v11 = v227;
        goto LABEL_57;
      }
    }
    else
    {
      ExFreePoolWithTag(v92, 0);
      AccessStatus = v56;
      v228 = 0LL;
    }
    v11 = v227;
    v220 = 1;
    goto LABEL_58;
  }
  v228 = 0LL;
  AccessStatus = -2147483637;
LABEL_57:
  v64 = *((_WORD *)v11 + 1);
  if ( (v64 & 0x30) == 0x30 )
  {
    if ( (v64 & 0x10) != 0 )
    {
      if ( v64 >= 0 )
      {
        v65 = (char *)*((_QWORD *)v11 + 3);
        v228 = v65;
      }
      else
      {
        v193 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v193 )
        {
          v65 = (char *)v11 + v193;
          v228 = (char *)v11 + v193;
        }
        else
        {
          v65 = 0LL;
          v228 = 0LL;
        }
      }
    }
    else
    {
      v65 = 0LL;
      v228 = 0LL;
    }
  }
  else
  {
LABEL_58:
    v65 = (char *)v228;
  }
  v66 = ProcessTrustLabelSid;
  *(_DWORD *)&v214[3] = 0;
  while ( 1 )
  {
    v67 = *((_WORD *)v11 + 1);
    if ( (v67 & 0x10) != 0 )
    {
      if ( v67 >= 0 )
      {
        v68 = (ACL *)*((_QWORD *)v11 + 3);
      }
      else
      {
        v86 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v86 )
          v68 = (ACL *)((char *)v11 + v86);
        else
          v68 = 0LL;
      }
    }
    else
    {
      v68 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v68, 0x14u, (PULONG)&v214[3]);
    v71 = AceByType + 8;
    if ( !AceByType )
      v71 = 0LL;
    if ( v71 && !RtlpValidTrustSubjectContext(v66, v71, v69, &AccessStatus) )
      goto LABEL_497;
    ++*(_DWORD *)&v214[3];
    if ( !AceByType )
      break;
    v11 = v227;
  }
  v72 = a7;
  v73 = 4;
  v74 = v227;
  if ( (a7 & 0x800) != 0 )
  {
    v194 = 0;
    *(_DWORD *)&v214[3] = 0;
    while ( 1 )
    {
      v195 = *((_WORD *)v74 + 1);
      if ( (v195 & 0x10) != 0 )
      {
        if ( v195 >= 0 )
        {
          v197 = (ACL *)*((_QWORD *)v74 + 3);
        }
        else
        {
          v196 = *((unsigned int *)v74 + 3);
          v197 = (_DWORD)v196 ? (ACL *)((char *)v74 + v196) : 0LL;
        }
      }
      else
      {
        v197 = 0LL;
      }
      v198 = RtlFindAceByType(v197, 0x14u, (PULONG)&v214[3]);
      ++*(_DWORD *)&v214[3];
      if ( !v198 )
        break;
      if ( (*((_BYTE *)v198 + 1) & 8) == 0 )
      {
        v199 = v198[1];
        v200 = v198 + 2;
        v194 = *((unsigned __int8 *)v198 + 1);
        if ( !v251 || (v199 & *(_DWORD *)(v251 + 4)) != v199 || v198 == (_DWORD *)-8LL )
        {
LABEL_511:
          v56 = -1073741811;
          goto LABEL_181;
        }
        goto LABEL_446;
      }
    }
    if ( !v66 )
      goto LABEL_67;
    if ( !v251 )
    {
      v56 = -1073741811;
      goto LABEL_181;
    }
    v199 = *(_DWORD *)(v251 + 4);
    v200 = v66;
LABEL_446:
    v56 = RtlCreateAcl(&v261, 0x58u, 2u);
    if ( v56 < 0 )
      goto LABEL_181;
    v56 = RtlAddProcessTrustLabelAce(&v261, 2u, v194, v200, 0x14u, v199);
    if ( v56 < 0 )
      goto LABEL_181;
    v56 = RtlpComputeMergedAcl(
            (int)v228,
            (*((_WORD *)v74 + 1) & 0x800 | (*((unsigned __int16 *)v74 + 1) >> 1) & 0x18u) >> 1,
            (int)&v261,
            4,
            (__int64)Src,
            (__int64)v230,
            (__int64)v233,
            2,
            (__int64)&v250,
            (__int64)&v222);
    if ( v56 < 0 )
    {
      v102 = (void *)v250;
      v100 = (ACL *)P;
      goto LABEL_183;
    }
    v72 = a7;
    v210 = (PVOID)v250;
    v221 = 1;
  }
  else
  {
LABEL_67:
    v210 = v65;
  }
  v75 = *((_WORD *)v74 + 1);
  if ( (v75 & 0x10) != 0 )
  {
    if ( v75 >= 0 )
    {
      v76 = (ACL *)*((_QWORD *)v74 + 3);
    }
    else
    {
      v89 = *((unsigned int *)v74 + 3);
      if ( (_DWORD)v89 )
        v76 = (ACL *)((char *)v74 + v89);
      else
        v76 = 0LL;
    }
  }
  else
  {
    v76 = 0LL;
  }
  AccessStatus = 0;
  LODWORD(ProcessTrustLabelSid) = 0;
  WORD2(ProcessTrustLabelSid) = 256;
  for ( *(_DWORD *)&v214[3] = 0; ; ++*(_DWORD *)&v214[3] )
  {
    while ( 1 )
    {
      v77 = RtlFindAceByType(v76, 0x15u, (PULONG)&v214[3]);
      if ( v77 )
        break;
LABEL_72:
      ++*(_DWORD *)&v214[3];
      if ( !v77 )
      {
        v56 = AccessStatus;
        goto LABEL_74;
      }
    }
    if ( (v77[1] & 0xFF000000) != 0 )
      goto LABEL_523;
    if ( (*((_BYTE *)v77 + 1) & 0x40) == 0 )
      break;
    if ( !RtlpValidTrustSubjectContext(v66, v77 + 2, v78, &AccessStatus) )
      goto LABEL_497;
  }
  v204 = *(_DWORD *)((char *)v77 + 10) - (_DWORD)ProcessTrustLabelSid;
  if ( !v204 )
    v204 = *((unsigned __int16 *)v77 + 7) - WORD2(ProcessTrustLabelSid);
  if ( v204 )
    goto LABEL_511;
  if ( *((_BYTE *)v77 + 9) == 1 && !v77[4] )
    goto LABEL_72;
LABEL_523:
  v56 = -1073741811;
LABEL_74:
  if ( v56 < 0 )
    goto LABEL_181;
  v79 = (v72 >> 8) & 1 | 2;
  if ( (v72 & 0x200) == 0 )
    v79 = (v72 >> 8) & 1;
  v80 = v79 | 4;
  if ( (v72 & 0x400) == 0 )
    v80 = v79;
  if ( v80 )
  {
    v81 = v253;
    goto LABEL_81;
  }
  v103 = *((_WORD *)v74 + 1);
  if ( (v103 & 0x10) != 0 )
  {
    if ( v103 >= 0 )
    {
      v104 = (ACL *)*((_QWORD *)v74 + 3);
    }
    else
    {
      v114 = *((unsigned int *)v74 + 3);
      if ( (_DWORD)v114 )
        v104 = (ACL *)((char *)v74 + v114);
      else
        v104 = 0LL;
    }
  }
  else
  {
    v104 = 0LL;
  }
  v105 = (char *)RtlFindAceByType(v104, 0x11u, 0LL);
  v81 = v105;
  if ( v105 )
  {
    v83 = v105[1];
    v80 = *((_DWORD *)v105 + 1);
    v238 = v105 + 8;
    if ( v83 == 8 || (v83 & 0x10) != 0 )
    {
      v81 = 0LL;
      v238 = 0LL;
      v80 = 0;
      v83 = 0;
      v82 = Sid1;
    }
    else
    {
      v82 = Sid1;
      if ( (v83 & 8) != 0 )
      {
        v238 = v105 + 8;
        if ( *RtlSubAuthoritySid(Sid1, 0) < 0x2000 )
        {
          v56 = -1073740730;
          goto LABEL_181;
        }
      }
    }
  }
  else
  {
LABEL_81:
    v82 = Sid1;
    v83 = 0;
  }
  if ( !v80 )
  {
    if ( v82 && *RtlSubAuthoritySid(v82, 0) < 0x2000 )
    {
      v80 = 1;
      goto LABEL_145;
    }
    v106 = SubjectSecurityContext;
LABEL_377:
    v82 = v238;
LABEL_148:
    if ( v82 )
    {
      Acl = (ACL)8388610LL;
      v237 = 4096;
      v260 = 0LL;
      memset(v259, 0, sizeof(v259));
      v236 = 0;
      if ( !MmIsKernelAddress((unsigned __int64)v82) || (*v82 & 0xF) != 1 || v82[1] > 0xFu )
      {
        v56 = -1073741704;
        goto LABEL_181;
      }
      v107 = 0LL;
      while ( 1 )
      {
        v108 = v82[v107++ + 2];
        if ( v108 != *((_BYTE *)&v236 + v107 - 1) )
          break;
        if ( v107 == 6 )
        {
          v109 = 0;
          goto LABEL_156;
        }
      }
      v109 = v108 < *((_BYTE *)&v236 + v107 - 1) ? -1 : 1;
LABEL_156:
      if ( v109 )
      {
        v56 = -1073741811;
        goto LABEL_181;
      }
      if ( (v83 & 0xE0) != 0 )
      {
        v56 = -1073741811;
        goto LABEL_181;
      }
      if ( (v80 & 0xFFFFFFF8) != 0 )
      {
        v56 = -1073741811;
        goto LABEL_181;
      }
      if ( !RtlValidAcl(&Acl) )
      {
LABEL_528:
        v56 = -1073741705;
        goto LABEL_181;
      }
      v110 = v259;
      for ( i = 0; i < Acl.AceCount; ++i )
      {
        if ( v110 >= (_OWORD *)((char *)&Acl + Acl.AclSize) )
          goto LABEL_528;
        v110 = (_OWORD *)((char *)v110 + *((unsigned __int16 *)v110 + 1));
      }
      if ( v110 > (_OWORD *)((char *)&Acl + Acl.AclSize) )
        v110 = 0LL;
      v112 = 4 * ((unsigned __int8)v82[1] + 4);
      if ( !v110 || (char *)v110 + v112 > (char *)&Acl + Acl.AclSize )
      {
        v56 = -1073741671;
        goto LABEL_181;
      }
      *((_WORD *)v110 + 1) = v112;
      *((_BYTE *)v110 + 1) = v83;
      *(_BYTE *)v110 = 17;
      *((_DWORD *)v110 + 1) = v80;
      memmove((char *)v110 + 8, v82, 4LL * (unsigned __int8)v82[1] + 8);
      ++Acl.AceCount;
      v113 = &Acl;
      Acl.AclRevision = 2;
    }
    else
    {
      v113 = 0LL;
      p_Acl = 0LL;
    }
    if ( (a7 & 0x700) == 0 )
    {
      if ( !v81 && v113 )
        v73 = 0;
      else
        v73 = (*((_WORD *)v74 + 1) & 0x2800 | (*((unsigned __int16 *)v74 + 1) >> 1) & 0x18u) >> 1;
    }
    if ( !v241 )
      goto LABEL_200;
    v181 = *(_WORD *)(v241 + 2);
    if ( (v181 & 0x10) == 0 )
      goto LABEL_200;
    if ( v181 >= 0 )
    {
      v120 = *(_QWORD *)(v241 + 24);
      goto LABEL_201;
    }
    v182 = *(unsigned int *)(v241 + 12);
    if ( (_DWORD)v182 )
      v120 = v241 + v182;
    else
LABEL_200:
      v120 = 0LL;
LABEL_201:
    v56 = 0;
    if ( v73 || v120 )
    {
      v121 = 0;
      AccessStatus = 200;
      while ( 1 )
      {
        v122 = 0LL;
        if ( v121 >= 2 )
          goto LABEL_210;
        v123 = (ACL *)ExAllocatePool2(0x100uLL);
        v122 = v123;
        if ( !v123 )
          goto LABEL_425;
        v56 = RtlpInheritAcl2(
                v120,
                (int)p_Acl,
                v73,
                a6,
                1,
                0,
                (__int64)Src,
                (__int64)v230,
                v239,
                v243,
                (__int64)v233,
                3,
                v244,
                a5,
                (__int64)&AccessStatus,
                v123,
                (__int64)v225 + 1,
                (__int64)&v222);
        if ( v56 >= 0 )
          break;
        ExFreePoolWithTag(v122, 0);
        v122 = 0LL;
        if ( v56 != -1073741789 )
          goto LABEL_210;
        ++v121;
      }
      if ( !AccessStatus )
      {
        ExFreePoolWithTag(v122, 0);
        v122 = 0LL;
LABEL_212:
        v124 = v222;
        goto LABEL_213;
      }
LABEL_210:
      if ( v56 != -2147483637 )
      {
        if ( v56 < 0 )
          goto LABEL_181;
        goto LABEL_212;
      }
    }
    v122 = p_Acl;
    v124 = 0;
    v222 = 0;
LABEL_213:
    v125 = RtlpCombineAcls(
             (_DWORD)P,
             (_DWORD)v122,
             (_DWORD)v228,
             (_DWORD)v228,
             (__int64)v210,
             (__int64)v228,
             (__int64)&v247,
             (__int64)&v235);
    v126 = GrantedAccess;
    v56 = v125;
    v235 |= (GrantedAccess & 0x2000) << 17;
    if ( v122 && v122 != p_Acl )
      ExFreePoolWithTag(v122, 0);
    if ( v56 < 0 )
    {
      v100 = (ACL *)P;
      goto LABEL_182;
    }
    v127 = v247;
    if ( v247 )
    {
      if ( v209 && P )
      {
        ExFreePoolWithTag(P, 0);
        v127 = v247;
      }
      v100 = v127;
      P = (unsigned __int16 *)v127;
      v219 = 1;
      v247 = 0LL;
      GrantedAccess = (2 * (v124 & 0x1400 | (2 * (v124 & 8 | 4)))) | v126;
    }
    else
    {
      v100 = (ACL *)P;
    }
    v128 = a7;
    if ( (a7 & 8) == 0 )
    {
      v129 = (char *)RtlFindAceByType(v100, 0x11u, 0LL);
      if ( v129 )
        v130 = v129 + 8;
      else
        v130 = v238;
      if ( v130 )
      {
        if ( !v106 )
        {
          v102 = v210;
          v56 = -1073741700;
          v101 = (ACL *)v211;
          v96 = v208;
          goto LABEL_121;
        }
        v56 = RtlSidDominates(Sid1, v130, &Dominates);
        if ( v56 < 0 )
        {
          v96 = v208;
LABEL_120:
          v101 = (ACL *)v211;
          v102 = v210;
          goto LABEL_121;
        }
        v131 = (unsigned __int8)Size;
        if ( !Dominates )
          v131 = 1;
        LODWORD(Size) = v131;
      }
      v128 = a7;
    }
    v132 = *((_WORD *)v74 + 1);
    v133 = (v128 & 4) != 0;
    v134 = v128 & 1;
    v135 = 0LL;
    if ( (v132 & 4) != 0 )
    {
      if ( v132 < 0 )
      {
        v176 = *((_DWORD *)v74 + 4);
        v137 = v227;
        if ( v176 )
          LODWORD(v136) = (_DWORD)v227 + v176;
        else
          LODWORD(v136) = 0;
        goto LABEL_233;
      }
      v136 = *((_QWORD *)v74 + 4);
    }
    else
    {
      LODWORD(v136) = 0;
    }
    v137 = v227;
LABEL_233:
    if ( !v241 )
      goto LABEL_234;
    v183 = *(_WORD *)(v241 + 2);
    if ( (v183 & 4) == 0 )
      goto LABEL_234;
    if ( v183 >= 0 )
    {
      v138 = *(_QWORD *)(v241 + 32);
      goto LABEL_235;
    }
    v184 = *(unsigned int *)(v241 + 16);
    if ( (_DWORD)v184 )
      v138 = v241 + v184;
    else
LABEL_234:
      v138 = 0LL;
LABEL_235:
    v56 = 0;
    v139 = *((_WORD *)v137 + 1) & 0x140C;
    if ( (*((_WORD *)v137 + 1) & 0x140C) == 0 && !v138 )
    {
      v140 = 0LL;
      v224 = 0LL;
      goto LABEL_238;
    }
    v144 = 0;
    AccessStatus = 200;
    while ( 1 )
    {
      v224 = 0LL;
      if ( v144 >= 2 )
        goto LABEL_251;
      v145 = (ACL *)ExAllocatePool2(0x100uLL);
      v224 = v145;
      if ( !v145 )
        goto LABEL_425;
      v56 = RtlpInheritAcl2(
              v138,
              v136,
              v139,
              a6,
              v134,
              v133,
              (__int64)Src,
              (__int64)v230,
              v239,
              v243,
              (__int64)v233,
              1,
              v244,
              a5,
              (__int64)&AccessStatus,
              v145,
              (__int64)v214 + 1,
              (__int64)&v222);
      if ( v56 >= 0 )
        break;
      ExFreePoolWithTag(v224, 0);
      v135 = 0LL;
      v224 = 0LL;
      if ( v56 != -1073741789 )
        goto LABEL_251;
      ++v144;
    }
    if ( AccessStatus )
    {
      v135 = 0LL;
LABEL_251:
      if ( v56 < 0 )
      {
        if ( v56 != -2147483637 )
          goto LABEL_181;
        LOBYTE(v138) = HIBYTE(v214[0]);
        v137 = v227;
        v128 = a7;
        v140 = (ACL *)v224;
LABEL_238:
        v141 = GrantedAccess;
        if ( (v128 & 1) != 0 )
          v141 = GrantedAccess | 0x400;
        v142 = *((_WORD *)v137 + 1);
        if ( (v142 & 0xC) == 0xC )
        {
          if ( (v142 & 4) != 0 )
          {
            if ( v142 >= 0 )
            {
              v140 = (ACL *)*((_QWORD *)v137 + 4);
            }
            else
            {
              v190 = *((unsigned int *)v137 + 4);
              if ( (_DWORD)v190 )
                v140 = (ACL *)((char *)v137 + v190);
              else
                v140 = 0LL;
            }
          }
          else
          {
            v140 = 0LL;
          }
          v224 = v140;
          LOBYTE(v138) = 1;
          v141 |= v142 & 0x1000 | 4;
          v143 = 0;
        }
        else
        {
          if ( v248 )
          {
            v140 = v248;
            v224 = v248;
            v141 |= 4u;
          }
          v143 = 0;
        }
LABEL_254:
        v146 = SubjectSecurityContext;
        if ( (v128 & 0x1000) == 0 && v217 && SubjectSecurityContext && v241 )
        {
          GenericMapping = v233;
          GrantedAccess = 0;
          AccessStatus = 0;
          v56 = RtlpNewSecurityObject(
                  v241,
                  0,
                  (unsigned int)&SecurityDescriptor,
                  v244,
                  a5,
                  a6,
                  v128 | 1,
                  (__int64)SubjectSecurityContext,
                  (__int64)v233,
                  v251);
          if ( v56 < 0 )
            goto LABEL_181;
          v178 = *((_WORD *)SecurityDescriptor + 1);
          if ( (v178 & 4) != 0 )
          {
            if ( v178 >= 0 )
            {
              v180 = (char *)*((_QWORD *)SecurityDescriptor + 4);
            }
            else
            {
              v179 = *((_DWORD *)SecurityDescriptor + 4);
              if ( v179 )
                v180 = (char *)SecurityDescriptor + v179;
              else
                v180 = 0LL;
            }
          }
          else
          {
            v180 = 0LL;
          }
          v147 = AccessMode;
          if ( RtlpOwnerAcesPresent(0x10u, (__int64)v180) )
          {
            if ( !SeAccessCheck(
                    SecurityDescriptor,
                    v146,
                    0,
                    0x40000u,
                    0,
                    0LL,
                    GenericMapping,
                    AccessMode,
                    (PACCESS_MASK)&GrantedAccess,
                    &AccessStatus) )
            {
LABEL_497:
              v56 = -1073741790;
              goto LABEL_181;
            }
            LOBYTE(v128) = a7;
          }
          else
          {
            LOBYTE(v128) = a7;
          }
        }
        else
        {
          v147 = AccessMode;
        }
        if ( (v128 & 1) != 0 && !v140 )
          v141 |= 0x1000u;
        v148 = !v235 || (v235 & 0x1B0) != v235;
        if ( v147 == 1 )
        {
          if ( v212 && (v128 & 8) == 0 && v148 )
          {
            if ( !v146 )
            {
              v56 = -1073741700;
              goto LABEL_181;
            }
            RequiredPrivileges.Privilege[0].Attributes = 0;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
            v201 = SePrivilegeCheck(&RequiredPrivileges, v146, 1);
            SePrivilegedServiceAuditAlarm(0LL, v146, &RequiredPrivileges, v201);
            if ( !v201 )
            {
              v56 = -1073741727;
              goto LABEL_181;
            }
            LOBYTE(v128) = a7;
          }
          if ( (_BYTE)Size && (v128 & 8) == 0 )
          {
            if ( !v146 )
            {
              v56 = -1073741700;
              goto LABEL_181;
            }
            ClientToken = (__int64)v146->ClientToken;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
            RequiredPrivileges.Privilege[0].Attributes = 0;
            if ( ClientToken )
            {
              if ( v146->ImpersonationLevel < SecurityImpersonation )
              {
                SePrivilegedServiceAuditAlarm(0LL, v146, &RequiredPrivileges, 0LL);
                v56 = -1073741727;
                goto LABEL_181;
              }
            }
            else
            {
              ClientToken = (__int64)v146->PrimaryToken;
            }
            v188 = SepPrivilegeCheck(ClientToken, (__int64)RequiredPrivileges.Privilege, 1u, 1, 1);
            SePrivilegedServiceAuditAlarm(0LL, v146, &RequiredPrivileges, v188);
            if ( !v188 )
            {
              v56 = -1073741727;
              goto LABEL_181;
            }
          }
          v149 = v226;
          if ( LOBYTE(v214[1])
            && (a7 & 0x10) == 0
            && !(unsigned __int8)SepValidOwnerSubjectContext(v146, Src, (unsigned __int8)v226, v135) )
          {
LABEL_388:
            v56 = -1073741734;
            goto LABEL_181;
          }
          if ( (_BYTE)v138 && v149 )
          {
            v56 = RtlpCreateServerAcl((__int64)v140, v249, (unsigned __int8 *)v239, &v252, &v218);
            if ( v56 < 0 )
            {
              v101 = v252;
              v100 = (ACL *)P;
              v102 = v210;
              goto LABEL_184;
            }
            if ( v143 && v140 )
              ExFreePoolWithTag(v140, 0);
            v140 = v252;
            v224 = v252;
            v211 = 0LL;
          }
        }
        v150 = v230;
        v151 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        LODWORD(Size) = v151;
        if ( v230 )
          v152 = 4 * *((unsigned __int8 *)v230 + 1) + 8;
        else
          v152 = 0;
        v100 = (ACL *)P;
        if ( (v141 & 0x10) != 0 && P )
          v153 = (P[1] + 3) & 0xFFFFFFFC;
        else
          v153 = 0;
        if ( (v141 & 4) != 0 && v140 )
          v154 = (v140->AclSize + 3) & 0xFFFFFFFC;
        else
          v154 = 0;
        v208 = ExAllocatePool2(0x100uLL);
        v155 = v208;
        if ( !v208 )
        {
          v102 = v210;
          v56 = -1073741670;
          v101 = (ACL *)v211;
          v96 = 0LL;
          goto LABEL_121;
        }
        v97 = (unsigned __int16 *)(v208 + 20);
        *(_OWORD *)v208 = 0LL;
        *(_DWORD *)(v155 + 16) = 0;
        *(_WORD *)(v155 + 2) |= v141;
        *(_BYTE *)v155 = 1;
        if ( (v141 & 0x10) == 0 || !P )
          goto LABEL_302;
        v156 = v155 + 20;
        if ( (a7 & 0x4000) != 0 )
        {
          v186 = v233;
          if ( v209 )
            v186 = 0LL;
          RtlpNormalizeAcl((__int64)v97, (__int64)P, v186);
          if ( !v97[2] )
            goto LABEL_466;
          v153 = v97[1];
        }
        else
        {
          memmove(v97, P, P[1]);
          if ( !v209 )
          {
            if ( v97 )
            {
              v157 = (unsigned __int8 *)(v97 + 4);
              v158 = 0;
              if ( v97[2] )
              {
                v159 = v233;
                v160 = 1650;
                do
                {
                  v161 = *v157;
                  if ( (*v157 <= 8u || v161 <= 0xAu || (unsigned __int8)(v161 - 13) <= 1u) && (v157[1] & 8) == 0 )
                  {
                    v162 = *((_DWORD *)v157 + 1);
                    if ( v162 < 0 )
                      v162 |= v159->GenericRead;
                    if ( (v162 & 0x40000000) != 0 )
                      v162 |= v159->GenericWrite;
                    if ( (v162 & 0x20000000) != 0 )
                      v162 |= v159->GenericExecute;
                    if ( (v162 & 0x10000000) != 0 )
                      v162 |= v159->GenericAll;
                    *((_DWORD *)v157 + 1) = v162 & 0xFFFFFFF;
                    v163 = *v157;
                    if ( !(_BYTE)v163 || (unsigned __int8)v163 <= 0xAu && _bittest(&v160, v163) )
                      v164 = v162 & v159->GenericAll & 0xFFFFFFF;
                    else
                      v164 = v162 & (v159->GenericAll & 0xEFFFFFF | 0x1000000);
                    *((_DWORD *)v157 + 1) = v164;
                  }
                  ++v158;
                  v157 += *((unsigned __int16 *)v157 + 1);
                }
                while ( v158 < v97[2] );
                v151 = Size;
              }
            }
          }
          v165 = P[1];
          if ( v153 > (unsigned int)v165 )
            memset_0((char *)v97 + v165, 0, v153 - (unsigned int)v165);
        }
        if ( v97 )
        {
          v155 = v208;
          v97 = (unsigned __int16 *)((char *)v97 + v153);
          v166 = v156 - v208;
LABEL_301:
          *(_DWORD *)(v155 + 12) = v166;
          v150 = v230;
LABEL_302:
          if ( (v141 & 4) != 0 )
          {
            v167 = (unsigned __int16 *)v224;
            if ( v224 )
            {
              if ( (a7 & 0x4000) != 0 )
              {
                v185 = v233;
                if ( v213 )
                  v185 = 0LL;
                RtlpNormalizeAcl((__int64)v97, (__int64)v224, v185);
                v154 = v97[1];
              }
              else
              {
                memmove(v97, v224, *((unsigned __int16 *)v224 + 1));
                if ( !v213 )
                {
                  if ( v97 )
                  {
                    v168 = (unsigned __int8 *)(v97 + 4);
                    v169 = 0;
                    if ( v97[2] )
                    {
                      v170 = v233;
                      v171 = 1650;
                      do
                      {
                        v172 = *v168;
                        if ( (*v168 <= 8u || v172 <= 0xAu || (unsigned __int8)(v172 - 13) <= 1u) && (v168[1] & 8) == 0 )
                        {
                          v173 = *((_DWORD *)v168 + 1);
                          if ( v173 < 0 )
                            v173 |= v170->GenericRead;
                          if ( (v173 & 0x40000000) != 0 )
                            v173 |= v170->GenericWrite;
                          if ( (v173 & 0x20000000) != 0 )
                            v173 |= v170->GenericExecute;
                          if ( (v173 & 0x10000000) != 0 )
                            v173 |= v170->GenericAll;
                          *((_DWORD *)v168 + 1) = v173 & 0xFFFFFFF;
                          v174 = *v168;
                          if ( !(_BYTE)v174 || (unsigned __int8)v174 <= 0xAu && _bittest(&v171, v174) )
                            v175 = v173 & v170->GenericAll & 0xFFFFFFF;
                          else
                            v175 = v173 & (v170->GenericAll & 0xEFFFFFF | 0x1000000);
                          *((_DWORD *)v168 + 1) = v175;
                        }
                        ++v169;
                        v168 += *((unsigned __int16 *)v168 + 1);
                      }
                      while ( v169 < v97[2] );
                      v151 = Size;
                      v150 = v230;
                    }
                  }
                }
                v95 = v167[1];
                if ( v154 > (unsigned int)v95 )
                  memset_0((char *)v97 + v95, 0, v154 - (unsigned int)v95);
              }
              v96 = v208;
              *(_DWORD *)(v208 + 16) = (_DWORD)v97 - v208;
              v97 = (unsigned __int16 *)((char *)v97 + v154);
            }
            else
            {
              v96 = v208;
              *(_DWORD *)(v155 + 16) = 0;
            }
          }
          else
          {
            v96 = v208;
          }
          memmove(v97, Src, v151);
          v98 = (int)v97;
          v99 = (char *)v97 + v151;
          *(_DWORD *)(v96 + 4) = v98 - v96;
          if ( v150 )
          {
            memmove(v99, v150, v152);
            *(_DWORD *)(v96 + 8) = (_DWORD)v99 - v96;
          }
          v100 = (ACL *)P;
          v56 = 0;
          goto LABEL_120;
        }
LABEL_466:
        v155 = v208;
        v166 = 0;
        goto LABEL_301;
      }
      v140 = (ACL *)v224;
    }
    else
    {
      ExFreePoolWithTag(v224, 0);
      v135 = 0LL;
      v140 = 0LL;
      v224 = 0LL;
    }
    v143 = 1;
    LOBYTE(v138) = HIBYTE(v214[0]);
    v128 = a7;
    v141 = v222 & 0x1408 | 4 | GrantedAccess;
    v213 = 1;
    goto LABEL_254;
  }
LABEL_145:
  v106 = SubjectSecurityContext;
  if ( v81 )
    goto LABEL_377;
  if ( SubjectSecurityContext )
  {
    v238 = v82;
    v83 = 0;
    goto LABEL_148;
  }
  v56 = -1073741700;
LABEL_181:
  v100 = (ACL *)P;
LABEL_182:
  v102 = v210;
LABEL_183:
  v101 = (ACL *)v211;
LABEL_184:
  v96 = v208;
LABEL_121:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v218 && v101 )
    ExFreePoolWithTag(v101, 0);
  if ( v245 )
    ExFreePoolWithTag(v245, 0);
  if ( (v209 || v219) && v100 )
    ExFreePoolWithTag(v100, 0);
  if ( v220 && v228 )
    ExFreePoolWithTag(v228, 0);
  if ( v102 && v221 )
    ExFreePoolWithTag(v102, 0);
  if ( v213 )
  {
    if ( v224 )
      ExFreePoolWithTag(v224, 0);
  }
  *v254 = v96;
  return (unsigned int)v56;
}

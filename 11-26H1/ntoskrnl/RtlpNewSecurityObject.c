/*
 * XREFs of RtlpNewSecurityObject @ 0x1408E0FD0
 * Callers:
 *     SeAssignSecurityEx2 @ 0x1404632D0 (SeAssignSecurityEx2.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     SeAssignSecurity @ 0x1408E0C50 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x1402AC0BC (RtlpValidTrustSubjectContext.c)
 *     SepLocateTokenTrustLevel @ 0x1402AC130 (SepLocateTokenTrustLevel.c)
 *     RtlpOwnerAcesPresent @ 0x1402ACC70 (RtlpOwnerAcesPresent.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     RtlSidDominates @ 0x140418530 (RtlSidDominates.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     RtlFindAceByType @ 0x1404330E0 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x140449CB0 (SepLocateTokenIntegrity.c)
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlpCreateServerAcl @ 0x1408E0984 (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1408E0CF0 (RtlpNormalizeAcl.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1408E3180 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x1408E37E0 (RtlpCombineAcls.c)
 *     RtlAddProcessTrustLabelAce @ 0x140926090 (RtlAddProcessTrustLabelAce.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140932940 (SePrivilegedServiceAuditAlarm.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     SePrivilegeCheck @ 0x140A48B30 (SePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x140AB05C8 (SepValidOwnerSubjectContext.c)
 *     RtlpComputeMergedAcl @ 0x140B513F8 (RtlpComputeMergedAcl.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v30; // rdx
  unsigned __int8 *Blink; // r15
  unsigned __int8 *TokenTrustLevel; // r14
  void *Pool2; // rax
  size_t v34; // r8
  __int64 v35; // rax
  char *v36; // r15
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  bool v42; // si
  unsigned __int16 v43; // dx
  unsigned int v44; // r9d
  __int16 v45; // dx
  char *v46; // rax
  __int64 v47; // rax
  void *v48; // rax
  char *v49; // r11
  void *v50; // r11
  char v51; // r13
  int v52; // r12d
  __int16 v53; // cx
  int v54; // eax
  unsigned int v55; // r9d
  int v56; // r8d
  int v57; // r9d
  int v58; // esi
  __int64 v59; // r15
  __int64 v60; // r14
  NTSTATUS v61; // ebx
  int v62; // esi
  ACCESS_MASK v63; // r9d
  __int16 v64; // cx
  __int16 v65; // dx
  __int64 v66; // r15
  __int64 v67; // r14
  int v68; // esi
  __int16 v69; // cx
  char *v70; // rsi
  __int64 v71; // r15
  __int16 v72; // ax
  __int64 v73; // rcx
  unsigned __int8 *AceByType; // rbx
  __int64 v75; // r8
  __int64 v76; // rdx
  unsigned int v77; // edi
  unsigned int v78; // r12d
  _OWORD *v79; // r13
  __int16 v80; // ax
  __int64 v81; // rbx
  unsigned __int8 *v82; // rax
  __int64 v83; // r8
  int v84; // edx
  int v85; // ebx
  unsigned __int8 *v86; // r14
  _BYTE *v87; // rdi
  unsigned __int8 v88; // si
  int v89; // ecx
  int v90; // ecx
  __int64 v91; // rax
  unsigned int v92; // edi
  unsigned __int16 *v93; // rax
  __int64 v94; // rax
  unsigned int v95; // edi
  void *v96; // rax
  void *v97; // r12
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v104; // rcx
  __int64 v105; // r13
  unsigned __int16 *v106; // rdi
  int v107; // eax
  char *v108; // rdi
  unsigned __int16 *v109; // rdi
  ACL *v110; // r14
  void *v111; // rsi
  __int16 v112; // ax
  __int64 v113; // rcx
  unsigned __int8 *v114; // rax
  PSECURITY_SUBJECT_CONTEXT v115; // r15
  __int64 v116; // rax
  unsigned __int8 v117; // cl
  int v118; // eax
  _OWORD *v119; // rdx
  unsigned int i; // r8d
  unsigned __int16 v121; // cx
  __int64 *v122; // rcx
  __int64 v123; // rax
  __int64 v124; // r8
  __int16 v125; // cx
  __int64 v126; // rcx
  __int16 v127; // cx
  __int64 v128; // rcx
  __int64 v129; // r14
  unsigned int v130; // esi
  PVOID v131; // rdi
  void *v132; // rax
  __int16 v133; // si
  NTSTATUS v134; // eax
  ACCESS_MASK v135; // r14d
  unsigned __int16 *v136; // rax
  unsigned int v137; // r8d
  unsigned __int8 *v138; // rax
  char *v139; // rdx
  int v140; // eax
  __int16 v141; // ax
  char v142; // di
  char v143; // r12
  __int64 v144; // r9
  __int64 v145; // r13
  _OWORD *v146; // rdx
  __int64 v147; // r15
  int v148; // esi
  ACL *v149; // rsi
  __int16 v150; // r13
  __int16 v151; // cx
  char v152; // r12
  unsigned int v153; // r14d
  void *v154; // rax
  PSECURITY_SUBJECT_CONTEXT v155; // r14
  KPROCESSOR_MODE v156; // bl
  bool v157; // al
  char v158; // bl
  void *v159; // r14
  unsigned int v160; // r12d
  unsigned int v161; // r15d
  unsigned int v162; // ebx
  unsigned int v163; // esi
  __int64 v164; // rdx
  int v165; // r14d
  unsigned __int8 *v166; // rdx
  unsigned int v167; // r8d
  PGENERIC_MAPPING v168; // r12
  int v169; // r9d
  unsigned __int8 v170; // al
  int v171; // ecx
  unsigned int v172; // eax
  int v173; // eax
  __int64 v174; // rcx
  int v175; // r14d
  unsigned __int16 *v176; // rbx
  unsigned __int8 *v177; // rdx
  unsigned int v178; // r8d
  PGENERIC_MAPPING v179; // r14
  int v180; // r12d
  unsigned __int8 v181; // al
  int v182; // ecx
  unsigned int v183; // eax
  int v184; // eax
  int v185; // eax
  GENERIC_MAPPING *v186; // rdi
  __int16 v187; // cx
  unsigned int v188; // ecx
  char *v189; // rdx
  __int16 v190; // ax
  __int64 v191; // rax
  __int16 v192; // ax
  __int64 v193; // rax
  PGENERIC_MAPPING v194; // r8
  PGENERIC_MAPPING v195; // r8
  __int64 ClientToken; // rcx
  unsigned __int8 v197; // bl
  void *v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  unsigned __int16 *v201; // rax
  __int64 v202; // rax
  __int16 v203; // ax
  __int64 v204; // rax
  __int64 v205; // rcx
  unsigned __int8 *v206; // rax
  int v207; // edi
  unsigned __int8 *v208; // rsi
  unsigned int v209; // r14d
  BOOLEAN v210; // bl
  __int64 v211; // rax
  __int64 v212; // rax
  int v213; // ecx
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-F0h]
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-E0h]
  KPROCESSOR_MODE AccessMode; // [rsp+90h] [rbp-80h]
  unsigned __int16 *P; // [rsp+98h] [rbp-78h]
  NTSTATUS AccessStatus; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v219; // [rsp+A8h] [rbp-68h]
  char v220; // [rsp+B0h] [rbp-60h]
  PVOID v221; // [rsp+B8h] [rbp-58h]
  PVOID v222; // [rsp+C0h] [rbp-50h]
  char v223; // [rsp+C8h] [rbp-48h]
  char v224; // [rsp+C9h] [rbp-47h]
  _WORD v225[5]; // [rsp+CAh] [rbp-46h] BYREF
  char v226; // [rsp+D4h] [rbp-3Ch]
  char v227; // [rsp+D5h] [rbp-3Bh] BYREF
  char v228; // [rsp+D6h] [rbp-3Ah]
  char v229; // [rsp+D7h] [rbp-39h] BYREF
  char v230; // [rsp+D8h] [rbp-38h]
  char v231; // [rsp+D9h] [rbp-37h]
  char v232; // [rsp+DAh] [rbp-36h]
  int v233; // [rsp+DCh] [rbp-34h] BYREF
  int GrantedAccess; // [rsp+E0h] [rbp-30h] BYREF
  PVOID v235; // [rsp+E8h] [rbp-28h]
  _WORD v236[2]; // [rsp+F0h] [rbp-20h] BYREF
  int v237; // [rsp+F4h] [rbp-1Ch]
  _OWORD *v238; // [rsp+F8h] [rbp-18h]
  PVOID v239; // [rsp+100h] [rbp-10h]
  size_t Size; // [rsp+108h] [rbp-8h]
  void *v241; // [rsp+110h] [rbp+0h]
  void *Src; // [rsp+118h] [rbp+8h]
  char *v243; // [rsp+120h] [rbp+10h]
  PGENERIC_MAPPING v244; // [rsp+128h] [rbp+18h]
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+130h] [rbp+20h]
  int v246; // [rsp+138h] [rbp+28h] BYREF
  int v247; // [rsp+13Ch] [rbp+2Ch] BYREF
  __int16 v248; // [rsp+140h] [rbp+30h]
  unsigned __int8 *v249; // [rsp+148h] [rbp+38h]
  __int64 v250; // [rsp+150h] [rbp+40h]
  PSID Sid; // [rsp+158h] [rbp+48h]
  __int64 v252; // [rsp+160h] [rbp+50h]
  PVOID SecurityDescriptor; // [rsp+168h] [rbp+58h] BYREF
  __int64 v254; // [rsp+170h] [rbp+60h]
  __int64 v255; // [rsp+178h] [rbp+68h]
  PVOID v256; // [rsp+180h] [rbp+70h]
  PVOID v257; // [rsp+188h] [rbp+78h]
  unsigned __int16 *v258; // [rsp+190h] [rbp+80h] BYREF
  ACL *v259; // [rsp+198h] [rbp+88h]
  int v260; // [rsp+1A0h] [rbp+90h]
  __int64 v261; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v262; // [rsp+1B0h] [rbp+A0h]
  ACL *v263; // [rsp+1B8h] [rbp+A8h] BYREF
  unsigned __int8 *v264; // [rsp+1C0h] [rbp+B0h]
  __int64 *v265; // [rsp+1C8h] [rbp+B8h]
  _OWORD v266[2]; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 v267; // [rsp+1F0h] [rbp+E0h]
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1F8h] [rbp+E8h] BYREF
  __int64 v269; // [rsp+210h] [rbp+100h] BYREF
  _OWORD v270[7]; // [rsp+218h] [rbp+108h] BYREF
  __int64 v271; // [rsp+288h] [rbp+178h]
  ACL Acl; // [rsp+290h] [rbp+180h] BYREF

  v10 = a1;
  v244 = a9;
  v11 = a2;
  v262 = a10;
  v252 = a1;
  v267 = 0LL;
  v12 = 0LL;
  v220 = 0;
  v13 = 0LL;
  v231 = 0;
  v14 = 0LL;
  v230 = 0;
  v15 = 0LL;
  v224 = 0;
  v223 = 0;
  LOBYTE(v225[0]) = 0;
  v236[0] = 0;
  *(_WORD *)((char *)v225 + 1) = 0;
  LOBYTE(Size) = 0;
  v229 = 0;
  v265 = a3;
  v16 = a7;
  v257 = &v269;
  v255 = a4;
  v238 = a2;
  SubjectSecurityContext = (PSECURITY_SUBJECT_CONTEXT)a8;
  P = 0LL;
  v239 = 0LL;
  v246 = 0;
  v235 = 0LL;
  v222 = 0LL;
  v263 = 0LL;
  v256 = 0LL;
  Sid = 0LL;
  v243 = 0LL;
  v250 = 0LL;
  v254 = 0LL;
  v259 = 0LL;
  v219 = 0LL;
  AccessMode = 1;
  v233 = 0;
  *(_DWORD *)&v225[3] = 0;
  v264 = 0LL;
  v249 = 0LL;
  v258 = 0LL;
  SecurityDescriptor = 0LL;
  v227 = 1;
  v221 = 0LL;
  v261 = 0LL;
  v232 = 0;
  memset(v266, 0, sizeof(v266));
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  if ( (a7 & 0x2000) == 0 )
    AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v228 = 1;
  }
  else
  {
    v11 = v266;
    v228 = 0;
    v238 = v266;
    LOBYTE(v266[0]) = 1;
  }
  v17 = *((unsigned __int16 *)v11 + 1);
  v18 = *((_WORD *)v11 + 1) & 0x80;
  LOBYTE(v19) = v18 != 0;
  LOBYTE(v17) = (v17 & 0x40) != 0;
  v260 = v17;
  if ( a8 || (v42 = v18 != 0, v237 = (unsigned __int8)v19, v18) )
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
    LOBYTE(v237) = v19;
    if ( v22 )
    {
      v19 = (unsigned __int8)v19;
      if ( *(_DWORD *)(a8 + 8) == 1 )
        v19 = 1;
      v237 = v19;
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
      Blink = *TokenIntegrity;
    else
      Blink = (unsigned __int8 *)RtlpBootStatHandleLock.SavedApcState.ApcListHead[1].Blink;
    TokenTrustLevel = (unsigned __int8 *)SepLocateTokenTrustLevel(SubjectSecurityContext, v30);
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    v256 = Pool2;
    if ( !Pool2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v99, v100);
      if ( SubjectSecurityContext->ClientToken )
      {
        ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v101, v102);
      }
      return 3221225626LL;
    }
    memmove(Pool2, v27, 4LL * v27[1] + 8);
    v34 = 4LL * Blink[1] + 8;
    Sid = (char *)v256 + 4 * v27[1] + 8;
    memmove(Sid, Blink, v34);
    v14 = (char *)Sid + 4 * Blink[1] + 8;
    v250 = (__int64)v14;
    if ( TokenTrustLevel )
    {
      v124 = TokenTrustLevel[1];
      v243 = v14;
      memmove(v14, TokenTrustLevel, 4 * v124 + 8);
      v14 += 4 * TokenTrustLevel[1] + 8;
      v250 = (__int64)v14;
    }
    else
    {
      v243 = 0LL;
    }
    if ( v24 )
    {
      v13 = v14;
      memmove(v14, v24, 4LL * v24[1] + 8);
      v14 += 4 * v24[1] + 8;
      v250 = (__int64)v14;
    }
    else
    {
      v13 = 0LL;
    }
    memmove(v14, v28, 4LL * v28[1] + 8);
    v35 = v28[1];
    v36 = &v14[4 * v35 + 8];
    v259 = (ACL *)v36;
    if ( v26 )
    {
      v37 = v26[1];
      v254 = (__int64)&v14[4 * v35 + 8];
      v15 = v254;
      memmove((void *)v254, v26, 4 * v37 + 8);
      v36 += 4 * v26[1] + 8;
      v259 = (ACL *)v36;
    }
    else
    {
      v15 = 0LL;
      v254 = 0LL;
    }
    if ( v25 )
      memmove(v36, v25, v25[1]);
    else
      v259 = 0LL;
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39);
    if ( SubjectSecurityContext->ClientToken )
    {
      ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v40, v41);
    }
    v10 = v252;
    v42 = v237;
    v12 = v256;
    v16 = a7;
    v11 = v238;
  }
  v43 = *((_WORD *)v11 + 1);
  v44 = v43;
  v45 = v43 & 0x8000;
  if ( v45 )
  {
    v47 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v47 )
      goto LABEL_29;
    v46 = (char *)v11 + v47;
  }
  else
  {
    v46 = (char *)*((_QWORD *)v11 + 1);
  }
  Src = v46;
  if ( v46 )
  {
    LOBYTE(v225[1]) = 1;
    goto LABEL_33;
  }
LABEL_29:
  if ( (v16 & 0x20) != 0 )
  {
    if ( !v10 )
      goto LABEL_388;
    if ( *(__int16 *)(v10 + 2) < 0 )
    {
      v211 = *(unsigned int *)(v10 + 4);
      if ( !(_DWORD)v211 )
        goto LABEL_388;
      v198 = (void *)(v10 + v211);
    }
    else
    {
      v198 = *(void **)(v10 + 8);
    }
    Src = v198;
    LOBYTE(v225[1]) = 1;
    if ( !v198 )
    {
      v61 = -1073741734;
      goto LABEL_181;
    }
  }
  else
  {
    v48 = v12;
    if ( v42 )
      v48 = v14;
    Src = v48;
    if ( !v48 )
    {
      v61 = -1073741700;
      goto LABEL_181;
    }
  }
LABEL_33:
  if ( v45 )
  {
    v98 = *((unsigned int *)v11 + 2);
    if ( !(_DWORD)v98 )
    {
LABEL_36:
      if ( (v16 & 0x40) != 0 )
      {
        if ( !v10 )
        {
          v61 = -1073741733;
          goto LABEL_181;
        }
        if ( *(__int16 *)(v10 + 2) < 0 )
        {
          v212 = *(unsigned int *)(v10 + 8);
          if ( !(_DWORD)v212 )
            goto LABEL_385;
          v50 = (void *)(v10 + v212);
        }
        else
        {
          v50 = *(void **)(v10 + 16);
        }
      }
      else
      {
        v50 = v13;
        if ( v42 )
          v50 = (void *)v15;
      }
      v241 = v50;
      if ( v50 )
        goto LABEL_40;
LABEL_385:
      v61 = -1073741733;
      goto LABEL_181;
    }
    v49 = (char *)v11 + v98;
  }
  else
  {
    v49 = (char *)*((_QWORD *)v11 + 2);
  }
  v241 = v49;
  if ( !v49 )
    goto LABEL_36;
LABEL_40:
  v51 = (v16 & 4) != 0;
  v52 = v16 & 2;
  v226 = v52 != 0;
  v53 = v44 & 0x10;
  v54 = (v44 >> 2) & 8;
  v55 = v44 >> 1;
  v56 = v55 & 0x400;
  v57 = v55 & 0x1000;
  v58 = v53 != 0 ? 4 : 0;
  if ( v53 )
  {
    if ( v45 )
    {
      v89 = *((_DWORD *)v11 + 3);
      if ( v89 )
        LODWORD(v59) = (_DWORD)v11 + v89;
      else
        LODWORD(v59) = 0;
    }
    else
    {
      v59 = *((_QWORD *)v11 + 3);
    }
  }
  else
  {
    LODWORD(v59) = 0;
  }
  if ( !v252 )
    goto LABEL_43;
  v125 = *(_WORD *)(v252 + 2);
  if ( (v125 & 0x10) == 0 )
    goto LABEL_43;
  if ( v125 >= 0 )
  {
    v60 = *(_QWORD *)(v252 + 24);
    goto LABEL_44;
  }
  v126 = *(unsigned int *)(v252 + 12);
  if ( (_DWORD)v126 )
    v60 = v252 + v126;
  else
LABEL_43:
    v60 = 0LL;
LABEL_44:
  v61 = 0;
  v62 = v54 | v56 | v57 | v58;
  if ( !v62 && !v60 )
  {
    P = 0LL;
    v233 = v52 != 0 ? 0x400 : 0;
    goto LABEL_47;
  }
  v92 = 0;
  AccessStatus = 200;
  while ( 1 )
  {
    P = 0LL;
    if ( v92 >= 2 )
      goto LABEL_190;
    v93 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    P = v93;
    if ( !v93 )
    {
      v111 = v221;
      v61 = -1073741801;
      v110 = (ACL *)v222;
      v109 = 0LL;
      v105 = v219;
      goto LABEL_121;
    }
    v61 = RtlpInheritAcl2(
            v60,
            v59,
            v62,
            a6,
            v226,
            v51,
            (__int64)Src,
            (__int64)v241,
            v250,
            v254,
            (__int64)v244,
            2,
            v255,
            a5,
            (__int64)&AccessStatus,
            v93,
            (__int64)v225,
            (__int64)&v233);
    if ( v61 >= 0 )
      break;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( v61 != -1073741789 )
      goto LABEL_190;
    ++v92;
  }
  if ( !AccessStatus )
  {
    ExFreePoolWithTag(P, 0);
    AccessStatus = v61;
    P = 0LL;
LABEL_98:
    v11 = v238;
    v220 = 1;
    v223 = v225[0];
    GrantedAccess = 2 * (v233 & 0x1400 | (2 * (v233 & 8 | 0x2004)));
    goto LABEL_50;
  }
LABEL_190:
  if ( v61 >= 0 )
    goto LABEL_98;
  if ( v61 != -2147483637 )
    goto LABEL_181;
  v11 = v238;
  v223 = v225[0];
LABEL_47:
  v63 = 34816;
  if ( !v52 )
    v63 = 0x8000;
  v64 = *((_WORD *)v11 + 1);
  GrantedAccess = v63;
  if ( (v64 & 0x30) != 0x30 )
    goto LABEL_50;
  if ( (v64 & 0x10) != 0 )
  {
    if ( v64 >= 0 )
    {
      v201 = (unsigned __int16 *)*((_QWORD *)v11 + 3);
    }
    else
    {
      v200 = *((unsigned int *)v11 + 3);
      if ( !(_DWORD)v200 )
      {
        P = 0LL;
        goto LABEL_420;
      }
      v201 = (unsigned __int16 *)((char *)v11 + v200);
    }
    P = v201;
  }
  else
  {
    P = 0LL;
  }
LABEL_420:
  v223 = 1;
  GrantedAccess = v63 | v64 & 0x2000 | 0x10;
LABEL_50:
  v65 = *((_WORD *)v11 + 1);
  if ( (v65 & 0x10) != 0 )
  {
    if ( v65 >= 0 )
    {
      v66 = *((_QWORD *)v11 + 3);
    }
    else
    {
      v90 = *((_DWORD *)v11 + 3);
      if ( v90 )
        LODWORD(v66) = (_DWORD)v11 + v90;
      else
        LODWORD(v66) = 0;
    }
  }
  else
  {
    LODWORD(v66) = 0;
  }
  if ( !v252 )
    goto LABEL_53;
  v127 = *(_WORD *)(v252 + 2);
  if ( (v127 & 0x10) == 0 )
    goto LABEL_53;
  if ( v127 >= 0 )
  {
    v67 = *(_QWORD *)(v252 + 24);
    goto LABEL_54;
  }
  v128 = *(unsigned int *)(v252 + 12);
  if ( (_DWORD)v128 )
    v67 = v252 + v128;
  else
LABEL_53:
    v67 = 0LL;
LABEL_54:
  v61 = 0;
  v68 = (*((unsigned __int16 *)v11 + 1) >> 2) & 8 | (*((unsigned __int16 *)v11 + 1) >> 1) & 0x400 | ((*((_WORD *)v11 + 1) & 0x10) != 0 ? 4 : 0);
  if ( v68 || v67 )
  {
    v95 = 0;
    AccessStatus = 200;
    while ( 1 )
    {
      v239 = 0LL;
      if ( v95 >= 2 )
        goto LABEL_193;
      v96 = (void *)ExAllocatePool2(0x100uLL);
      v239 = v96;
      v97 = v96;
      if ( !v96 )
      {
LABEL_425:
        v61 = -1073741801;
        goto LABEL_181;
      }
      v61 = RtlpInheritAcl2(
              v67,
              v66,
              v68,
              a6,
              v226,
              v51,
              (__int64)Src,
              (__int64)v241,
              v250,
              v254,
              (__int64)v244,
              2,
              v255,
              a5,
              (__int64)&AccessStatus,
              v96,
              (__int64)v236,
              (__int64)&v225[3]);
      if ( v61 >= 0 )
        break;
      ExFreePoolWithTag(v97, 0);
      v239 = 0LL;
      if ( v61 != -1073741789 )
        goto LABEL_193;
      ++v95;
    }
    if ( AccessStatus )
    {
LABEL_193:
      AccessStatus = v61;
      if ( v61 < 0 )
      {
        if ( v61 != -2147483637 )
          goto LABEL_181;
        v11 = v238;
        goto LABEL_57;
      }
    }
    else
    {
      ExFreePoolWithTag(v97, 0);
      AccessStatus = v61;
      v239 = 0LL;
    }
    v11 = v238;
    v231 = 1;
    goto LABEL_58;
  }
  v239 = 0LL;
  AccessStatus = -2147483637;
LABEL_57:
  v69 = *((_WORD *)v11 + 1);
  if ( (v69 & 0x30) == 0x30 )
  {
    if ( (v69 & 0x10) != 0 )
    {
      if ( v69 >= 0 )
      {
        v70 = (char *)*((_QWORD *)v11 + 3);
        v239 = v70;
      }
      else
      {
        v202 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v202 )
        {
          v70 = (char *)v11 + v202;
          v239 = (char *)v11 + v202;
        }
        else
        {
          v70 = 0LL;
          v239 = 0LL;
        }
      }
    }
    else
    {
      v70 = 0LL;
      v239 = 0LL;
    }
  }
  else
  {
LABEL_58:
    v70 = (char *)v239;
  }
  v71 = (__int64)v243;
  *(_DWORD *)&v225[3] = 0;
  while ( 1 )
  {
    v72 = *((_WORD *)v11 + 1);
    if ( (v72 & 0x10) != 0 )
    {
      if ( v72 >= 0 )
      {
        v73 = *((_QWORD *)v11 + 3);
      }
      else
      {
        v91 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v91 )
          v73 = (__int64)v11 + v91;
        else
          v73 = 0LL;
      }
    }
    else
    {
      v73 = 0LL;
    }
    AceByType = RtlFindAceByType(v73, 20, (unsigned int *)&v225[3]);
    v76 = (__int64)(AceByType + 8);
    if ( !AceByType )
      v76 = 0LL;
    if ( v76 && !RtlpValidTrustSubjectContext(v71, v76, v75, &AccessStatus) )
      goto LABEL_497;
    ++*(_DWORD *)&v225[3];
    if ( !AceByType )
      break;
    v11 = v238;
  }
  v77 = a7;
  v78 = 4;
  v79 = v238;
  if ( (a7 & 0x800) != 0 )
  {
    *(_DWORD *)&v225[3] = 0;
    while ( 1 )
    {
      v203 = *((_WORD *)v79 + 1);
      if ( (v203 & 0x10) != 0 )
      {
        if ( v203 >= 0 )
        {
          v205 = *((_QWORD *)v79 + 3);
        }
        else
        {
          v204 = *((unsigned int *)v79 + 3);
          v205 = (_DWORD)v204 ? (__int64)v79 + v204 : 0LL;
        }
      }
      else
      {
        v205 = 0LL;
      }
      v206 = RtlFindAceByType(v205, 20, (unsigned int *)&v225[3]);
      ++*(_DWORD *)&v225[3];
      if ( !v206 )
        break;
      if ( (v206[1] & 8) == 0 )
      {
        v207 = *((_DWORD *)v206 + 1);
        v208 = v206 + 8;
        v209 = v206[1];
        if ( !v262 || (v207 & *(_DWORD *)(v262 + 4)) != v207 || v206 == (unsigned __int8 *)-8LL )
        {
LABEL_511:
          v61 = -1073741811;
          goto LABEL_181;
        }
        goto LABEL_446;
      }
    }
    if ( !v71 )
      goto LABEL_67;
    if ( !v262 )
    {
      v61 = -1073741811;
      goto LABEL_181;
    }
    v207 = *(_DWORD *)(v262 + 4);
    v208 = (unsigned __int8 *)v71;
    v209 = 0;
LABEL_446:
    v61 = RtlCreateAcl(&Acl, 0x58u, 2u);
    if ( v61 < 0 )
      goto LABEL_181;
    LOBYTE(PreviouslyGrantedAccess) = 20;
    v61 = RtlAddProcessTrustLabelAce(&Acl, 2LL, v209, v208, PreviouslyGrantedAccess, v207, GenericMapping);
    if ( v61 < 0 )
      goto LABEL_181;
    v61 = RtlpComputeMergedAcl(
            (int)v239,
            (*((_WORD *)v79 + 1) & 0x800 | (*((unsigned __int16 *)v79 + 1) >> 1) & 0x18u) >> 1,
            (int)&Acl,
            4,
            (__int64)Src,
            (__int64)v241,
            (__int64)v244,
            2,
            (__int64)&v261,
            (__int64)&v233);
    if ( v61 < 0 )
    {
      v111 = (void *)v261;
      v109 = P;
      goto LABEL_183;
    }
    v77 = a7;
    v221 = (PVOID)v261;
    v232 = 1;
  }
  else
  {
LABEL_67:
    v221 = v70;
  }
  v80 = *((_WORD *)v79 + 1);
  if ( (v80 & 0x10) != 0 )
  {
    if ( v80 >= 0 )
    {
      v81 = *((_QWORD *)v79 + 3);
    }
    else
    {
      v94 = *((unsigned int *)v79 + 3);
      if ( (_DWORD)v94 )
        v81 = (__int64)v79 + v94;
      else
        v81 = 0LL;
    }
  }
  else
  {
    v81 = 0LL;
  }
  AccessStatus = 0;
  LODWORD(v243) = 0;
  WORD2(v243) = 256;
  for ( *(_DWORD *)&v225[3] = 0; ; ++*(_DWORD *)&v225[3] )
  {
    while ( 1 )
    {
      v82 = RtlFindAceByType(v81, 21, (unsigned int *)&v225[3]);
      if ( v82 )
        break;
LABEL_72:
      ++*(_DWORD *)&v225[3];
      if ( !v82 )
      {
        v61 = AccessStatus;
        goto LABEL_74;
      }
    }
    if ( (*((_DWORD *)v82 + 1) & 0xFF000000) != 0 )
      goto LABEL_523;
    if ( (v82[1] & 0x40) == 0 )
      break;
    if ( !RtlpValidTrustSubjectContext(v71, (__int64)(v82 + 8), v83, &AccessStatus) )
      goto LABEL_497;
  }
  v213 = *(_DWORD *)(v82 + 10) - (_DWORD)v243;
  if ( !v213 )
    v213 = *((unsigned __int16 *)v82 + 7) - WORD2(v243);
  if ( v213 )
    goto LABEL_511;
  if ( v82[9] == 1 && !*((_DWORD *)v82 + 4) )
    goto LABEL_72;
LABEL_523:
  v61 = -1073741811;
LABEL_74:
  if ( v61 < 0 )
    goto LABEL_181;
  v84 = (v77 >> 8) & 1 | 2;
  if ( (v77 & 0x200) == 0 )
    v84 = (v77 >> 8) & 1;
  v85 = v84 | 4;
  if ( (v77 & 0x400) == 0 )
    v85 = v84;
  if ( v85 )
  {
    v86 = v264;
    goto LABEL_81;
  }
  v112 = *((_WORD *)v79 + 1);
  if ( (v112 & 0x10) != 0 )
  {
    if ( v112 >= 0 )
    {
      v113 = *((_QWORD *)v79 + 3);
    }
    else
    {
      v123 = *((unsigned int *)v79 + 3);
      if ( (_DWORD)v123 )
        v113 = (__int64)v79 + v123;
      else
        v113 = 0LL;
    }
  }
  else
  {
    v113 = 0LL;
  }
  v114 = RtlFindAceByType(v113, 17, 0LL);
  v86 = v114;
  if ( v114 )
  {
    v88 = v114[1];
    v85 = *((_DWORD *)v114 + 1);
    v249 = v114 + 8;
    if ( v88 == 8 || (v88 & 0x10) != 0 )
    {
      v86 = 0LL;
      v249 = 0LL;
      v85 = 0;
      v88 = 0;
      v87 = Sid;
    }
    else
    {
      v87 = Sid;
      if ( (v88 & 8) != 0 )
      {
        v249 = v114 + 8;
        if ( *RtlSubAuthoritySid(Sid, 0) < 0x2000 )
        {
          v61 = -1073740730;
          goto LABEL_181;
        }
      }
    }
  }
  else
  {
LABEL_81:
    v87 = Sid;
    v88 = 0;
  }
  if ( !v85 )
  {
    if ( v87 && *RtlSubAuthoritySid(v87, 0) < 0x2000 )
    {
      v85 = 1;
      goto LABEL_145;
    }
    v115 = SubjectSecurityContext;
LABEL_377:
    v87 = v249;
LABEL_148:
    if ( v87 )
    {
      v269 = 8388610LL;
      v248 = 4096;
      v271 = 0LL;
      memset(v270, 0, sizeof(v270));
      v247 = 0;
      if ( !MmIsKernelAddress((unsigned __int64)v87) || (*v87 & 0xF) != 1 || v87[1] > 0xFu )
      {
        v61 = -1073741704;
        goto LABEL_181;
      }
      v116 = 0LL;
      while ( 1 )
      {
        v117 = v87[v116++ + 2];
        if ( v117 != *((_BYTE *)&v247 + v116 - 1) )
          break;
        if ( v116 == 6 )
        {
          v118 = 0;
          goto LABEL_156;
        }
      }
      v118 = v117 < *((_BYTE *)&v247 + v116 - 1) ? -1 : 1;
LABEL_156:
      if ( v118 )
      {
        v61 = -1073741811;
        goto LABEL_181;
      }
      if ( (v88 & 0xE0) != 0 )
      {
        v61 = -1073741811;
        goto LABEL_181;
      }
      if ( (v85 & 0xFFFFFFF8) != 0 )
      {
        v61 = -1073741811;
        goto LABEL_181;
      }
      if ( !(unsigned __int8)RtlValidAcl(&v269) )
      {
LABEL_528:
        v61 = -1073741705;
        goto LABEL_181;
      }
      v119 = v270;
      for ( i = 0; i < WORD2(v269); ++i )
      {
        if ( v119 >= (_OWORD *)((char *)&v269 + WORD1(v269)) )
          goto LABEL_528;
        v119 = (_OWORD *)((char *)v119 + *((unsigned __int16 *)v119 + 1));
      }
      if ( v119 > (_OWORD *)((char *)&v269 + WORD1(v269)) )
        v119 = 0LL;
      v121 = 4 * ((unsigned __int8)v87[1] + 4);
      if ( !v119 || (char *)v119 + v121 > (char *)&v269 + WORD1(v269) )
      {
        v61 = -1073741671;
        goto LABEL_181;
      }
      *((_WORD *)v119 + 1) = v121;
      *((_BYTE *)v119 + 1) = v88;
      *(_BYTE *)v119 = 17;
      *((_DWORD *)v119 + 1) = v85;
      memmove((char *)v119 + 8, v87, 4LL * (unsigned __int8)v87[1] + 8);
      ++WORD2(v269);
      v122 = &v269;
      LOBYTE(v269) = 2;
    }
    else
    {
      v122 = 0LL;
      v257 = 0LL;
    }
    if ( (a7 & 0x700) == 0 )
    {
      if ( !v86 && v122 )
        v78 = 0;
      else
        v78 = (*((_WORD *)v79 + 1) & 0x2800 | (*((unsigned __int16 *)v79 + 1) >> 1) & 0x18u) >> 1;
    }
    if ( !v252 )
      goto LABEL_200;
    v190 = *(_WORD *)(v252 + 2);
    if ( (v190 & 0x10) == 0 )
      goto LABEL_200;
    if ( v190 >= 0 )
    {
      v129 = *(_QWORD *)(v252 + 24);
      goto LABEL_201;
    }
    v191 = *(unsigned int *)(v252 + 12);
    if ( (_DWORD)v191 )
      v129 = v252 + v191;
    else
LABEL_200:
      v129 = 0LL;
LABEL_201:
    v61 = 0;
    if ( v78 || v129 )
    {
      v130 = 0;
      AccessStatus = 200;
      while ( 1 )
      {
        v131 = 0LL;
        if ( v130 >= 2 )
          goto LABEL_210;
        v132 = (void *)ExAllocatePool2(0x100uLL);
        v131 = v132;
        if ( !v132 )
          goto LABEL_425;
        v61 = RtlpInheritAcl2(
                v129,
                (int)v257,
                v78,
                a6,
                1,
                0,
                (__int64)Src,
                (__int64)v241,
                v250,
                v254,
                (__int64)v244,
                3,
                v255,
                a5,
                (__int64)&AccessStatus,
                v132,
                (__int64)v236 + 1,
                (__int64)&v233);
        if ( v61 >= 0 )
          break;
        ExFreePoolWithTag(v131, 0);
        v131 = 0LL;
        if ( v61 != -1073741789 )
          goto LABEL_210;
        ++v130;
      }
      if ( !AccessStatus )
      {
        ExFreePoolWithTag(v131, 0);
        v131 = 0LL;
LABEL_212:
        v133 = v233;
        goto LABEL_213;
      }
LABEL_210:
      if ( v61 != -2147483637 )
      {
        if ( v61 < 0 )
          goto LABEL_181;
        goto LABEL_212;
      }
    }
    v131 = v257;
    v133 = 0;
    v233 = 0;
LABEL_213:
    v134 = RtlpCombineAcls(
             (_DWORD)P,
             (_DWORD)v131,
             (_DWORD)v239,
             (_DWORD)v239,
             (__int64)v221,
             (__int64)v239,
             (__int64)&v258,
             (__int64)&v246);
    v135 = GrantedAccess;
    v61 = v134;
    v246 |= (GrantedAccess & 0x2000) << 17;
    if ( v131 && v131 != v257 )
      ExFreePoolWithTag(v131, 0);
    if ( v61 < 0 )
    {
      v109 = P;
      goto LABEL_182;
    }
    v136 = v258;
    if ( v258 )
    {
      if ( v220 && P )
      {
        ExFreePoolWithTag(P, 0);
        v136 = v258;
      }
      v109 = v136;
      P = v136;
      v230 = 1;
      v258 = 0LL;
      GrantedAccess = (2 * (v133 & 0x1400 | (2 * (v133 & 8 | 4)))) | v135;
    }
    else
    {
      v109 = P;
    }
    v137 = a7;
    if ( (a7 & 8) == 0 )
    {
      v138 = RtlFindAceByType((__int64)v109, 17, 0LL);
      if ( v138 )
        v139 = (char *)(v138 + 8);
      else
        v139 = (char *)v249;
      if ( v139 )
      {
        if ( !v115 )
        {
          v111 = v221;
          v61 = -1073741700;
          v110 = (ACL *)v222;
          v105 = v219;
          goto LABEL_121;
        }
        v61 = RtlSidDominates((char *)Sid, v139, &v227);
        if ( v61 < 0 )
        {
          v105 = v219;
LABEL_120:
          v110 = (ACL *)v222;
          v111 = v221;
          goto LABEL_121;
        }
        v140 = (unsigned __int8)Size;
        if ( !v227 )
          v140 = 1;
        LODWORD(Size) = v140;
      }
      v137 = a7;
    }
    v141 = *((_WORD *)v79 + 1);
    v142 = (v137 & 4) != 0;
    v143 = v137 & 1;
    v144 = 0LL;
    if ( (v141 & 4) != 0 )
    {
      if ( v141 < 0 )
      {
        v185 = *((_DWORD *)v79 + 4);
        v146 = v238;
        if ( v185 )
          LODWORD(v145) = (_DWORD)v238 + v185;
        else
          LODWORD(v145) = 0;
        goto LABEL_233;
      }
      v145 = *((_QWORD *)v79 + 4);
    }
    else
    {
      LODWORD(v145) = 0;
    }
    v146 = v238;
LABEL_233:
    if ( !v252 )
      goto LABEL_234;
    v192 = *(_WORD *)(v252 + 2);
    if ( (v192 & 4) == 0 )
      goto LABEL_234;
    if ( v192 >= 0 )
    {
      v147 = *(_QWORD *)(v252 + 32);
      goto LABEL_235;
    }
    v193 = *(unsigned int *)(v252 + 16);
    if ( (_DWORD)v193 )
      v147 = v252 + v193;
    else
LABEL_234:
      v147 = 0LL;
LABEL_235:
    v61 = 0;
    v148 = *((_WORD *)v146 + 1) & 0x140C;
    if ( (*((_WORD *)v146 + 1) & 0x140C) == 0 && !v147 )
    {
      v149 = 0LL;
      v235 = 0LL;
      goto LABEL_238;
    }
    v153 = 0;
    AccessStatus = 200;
    while ( 1 )
    {
      v235 = 0LL;
      if ( v153 >= 2 )
        goto LABEL_251;
      v154 = (void *)ExAllocatePool2(0x100uLL);
      v235 = v154;
      if ( !v154 )
        goto LABEL_425;
      v61 = RtlpInheritAcl2(
              v147,
              v145,
              v148,
              a6,
              v143,
              v142,
              (__int64)Src,
              (__int64)v241,
              v250,
              v254,
              (__int64)v244,
              1,
              v255,
              a5,
              (__int64)&AccessStatus,
              v154,
              (__int64)v225 + 1,
              (__int64)&v233);
      if ( v61 >= 0 )
        break;
      ExFreePoolWithTag(v235, 0);
      v144 = 0LL;
      v235 = 0LL;
      if ( v61 != -1073741789 )
        goto LABEL_251;
      ++v153;
    }
    if ( AccessStatus )
    {
      v144 = 0LL;
LABEL_251:
      if ( v61 < 0 )
      {
        if ( v61 != -2147483637 )
          goto LABEL_181;
        LOBYTE(v147) = HIBYTE(v225[0]);
        v146 = v238;
        v137 = a7;
        v149 = (ACL *)v235;
LABEL_238:
        v150 = GrantedAccess;
        if ( (v137 & 1) != 0 )
          v150 = GrantedAccess | 0x400;
        v151 = *((_WORD *)v146 + 1);
        if ( (v151 & 0xC) == 0xC )
        {
          if ( (v151 & 4) != 0 )
          {
            if ( v151 >= 0 )
            {
              v149 = (ACL *)*((_QWORD *)v146 + 4);
            }
            else
            {
              v199 = *((unsigned int *)v146 + 4);
              if ( (_DWORD)v199 )
                v149 = (ACL *)((char *)v146 + v199);
              else
                v149 = 0LL;
            }
          }
          else
          {
            v149 = 0LL;
          }
          v235 = v149;
          LOBYTE(v147) = 1;
          v150 |= v151 & 0x1000 | 4;
          v152 = 0;
        }
        else
        {
          if ( v259 )
          {
            v149 = v259;
            v235 = v259;
            v150 |= 4u;
          }
          v152 = 0;
        }
LABEL_254:
        v155 = SubjectSecurityContext;
        if ( (v137 & 0x1000) == 0 && v228 && SubjectSecurityContext && v252 )
        {
          v186 = v244;
          GrantedAccess = 0;
          AccessStatus = 0;
          v61 = RtlpNewSecurityObject(
                  v252,
                  0,
                  (unsigned int)&SecurityDescriptor,
                  v255,
                  a5,
                  a6,
                  v137 | 1,
                  (__int64)SubjectSecurityContext,
                  (__int64)v244,
                  v262);
          if ( v61 < 0 )
            goto LABEL_181;
          v187 = *((_WORD *)SecurityDescriptor + 1);
          if ( (v187 & 4) != 0 )
          {
            if ( v187 >= 0 )
            {
              v189 = (char *)*((_QWORD *)SecurityDescriptor + 4);
            }
            else
            {
              v188 = *((_DWORD *)SecurityDescriptor + 4);
              if ( v188 )
                v189 = (char *)SecurityDescriptor + v188;
              else
                v189 = 0LL;
            }
          }
          else
          {
            v189 = 0LL;
          }
          v156 = AccessMode;
          if ( RtlpOwnerAcesPresent(0x10u, (__int64)v189) )
          {
            if ( !SeAccessCheck(
                    SecurityDescriptor,
                    v155,
                    0,
                    0x40000u,
                    0,
                    0LL,
                    v186,
                    AccessMode,
                    (PACCESS_MASK)&GrantedAccess,
                    &AccessStatus) )
            {
LABEL_497:
              v61 = -1073741790;
              goto LABEL_181;
            }
            LOBYTE(v137) = a7;
          }
          else
          {
            LOBYTE(v137) = a7;
          }
        }
        else
        {
          v156 = AccessMode;
        }
        if ( (v137 & 1) != 0 && !v149 )
          v150 |= 0x1000u;
        v157 = !v246 || (v246 & 0x1B0) != v246;
        if ( v156 == 1 )
        {
          if ( v223 && (v137 & 8) == 0 && v157 )
          {
            if ( !v155 )
            {
              v61 = -1073741700;
              goto LABEL_181;
            }
            RequiredPrivileges.Privilege[0].Attributes = 0;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
            v210 = SePrivilegeCheck(&RequiredPrivileges, v155, 1);
            SePrivilegedServiceAuditAlarm(0LL, v155, &RequiredPrivileges, v210);
            if ( !v210 )
            {
              v61 = -1073741727;
              goto LABEL_181;
            }
            LOBYTE(v137) = a7;
          }
          if ( (_BYTE)Size && (v137 & 8) == 0 )
          {
            if ( !v155 )
            {
              v61 = -1073741700;
              goto LABEL_181;
            }
            ClientToken = (__int64)v155->ClientToken;
            RequiredPrivileges.PrivilegeCount = 1;
            RequiredPrivileges.Control = 1;
            RequiredPrivileges.Privilege[0].Luid = (LUID)SeRelabelPrivilege;
            RequiredPrivileges.Privilege[0].Attributes = 0;
            if ( ClientToken )
            {
              if ( v155->ImpersonationLevel < SecurityImpersonation )
              {
                SePrivilegedServiceAuditAlarm(0LL, v155, &RequiredPrivileges, 0LL);
                v61 = -1073741727;
                goto LABEL_181;
              }
            }
            else
            {
              ClientToken = (__int64)v155->PrimaryToken;
            }
            v197 = SepPrivilegeCheck(ClientToken, (__int64)RequiredPrivileges.Privilege, 1u, 1, 1);
            SePrivilegedServiceAuditAlarm(0LL, v155, &RequiredPrivileges, v197);
            if ( !v197 )
            {
              v61 = -1073741727;
              goto LABEL_181;
            }
          }
          v158 = v237;
          if ( LOBYTE(v225[1])
            && (a7 & 0x10) == 0
            && !(unsigned __int8)SepValidOwnerSubjectContext(v155, Src, (unsigned __int8)v237, v144) )
          {
LABEL_388:
            v61 = -1073741734;
            goto LABEL_181;
          }
          if ( (_BYTE)v147 && v158 )
          {
            v61 = RtlpCreateServerAcl((__int64)v149, v260, (unsigned __int8 *)v250, &v263, &v229);
            if ( v61 < 0 )
            {
              v110 = v263;
              v109 = P;
              v111 = v221;
              goto LABEL_184;
            }
            if ( v152 && v149 )
              ExFreePoolWithTag(v149, 0);
            v149 = v263;
            v235 = v263;
            v222 = 0LL;
          }
        }
        v159 = v241;
        v160 = 4 * *((unsigned __int8 *)Src + 1) + 8;
        LODWORD(Size) = v160;
        if ( v241 )
          v161 = 4 * *((unsigned __int8 *)v241 + 1) + 8;
        else
          v161 = 0;
        v109 = P;
        if ( (v150 & 0x10) != 0 && P )
          v162 = (P[1] + 3) & 0xFFFFFFFC;
        else
          v162 = 0;
        if ( (v150 & 4) != 0 && v149 )
          v163 = (v149->AclSize + 3) & 0xFFFFFFFC;
        else
          v163 = 0;
        v219 = ExAllocatePool2(0x100uLL);
        v164 = v219;
        if ( !v219 )
        {
          v111 = v221;
          v61 = -1073741670;
          v110 = (ACL *)v222;
          v105 = 0LL;
          goto LABEL_121;
        }
        v106 = (unsigned __int16 *)(v219 + 20);
        *(_OWORD *)v219 = 0LL;
        *(_DWORD *)(v164 + 16) = 0;
        *(_WORD *)(v164 + 2) |= v150;
        *(_BYTE *)v164 = 1;
        if ( (v150 & 0x10) == 0 || !P )
          goto LABEL_302;
        v165 = v164 + 20;
        if ( (a7 & 0x4000) != 0 )
        {
          v195 = v244;
          if ( v220 )
            v195 = 0LL;
          RtlpNormalizeAcl((__int64)v106, (__int64)P, v195);
          if ( !v106[2] )
            goto LABEL_466;
          v162 = v106[1];
        }
        else
        {
          memmove(v106, P, P[1]);
          if ( !v220 )
          {
            if ( v106 )
            {
              v166 = (unsigned __int8 *)(v106 + 4);
              v167 = 0;
              if ( v106[2] )
              {
                v168 = v244;
                v169 = 1650;
                do
                {
                  v170 = *v166;
                  if ( (*v166 <= 8u || v170 <= 0xAu || (unsigned __int8)(v170 - 13) <= 1u) && (v166[1] & 8) == 0 )
                  {
                    v171 = *((_DWORD *)v166 + 1);
                    if ( v171 < 0 )
                      v171 |= v168->GenericRead;
                    if ( (v171 & 0x40000000) != 0 )
                      v171 |= v168->GenericWrite;
                    if ( (v171 & 0x20000000) != 0 )
                      v171 |= v168->GenericExecute;
                    if ( (v171 & 0x10000000) != 0 )
                      v171 |= v168->GenericAll;
                    *((_DWORD *)v166 + 1) = v171 & 0xFFFFFFF;
                    v172 = *v166;
                    if ( !(_BYTE)v172 || (unsigned __int8)v172 <= 0xAu && _bittest(&v169, v172) )
                      v173 = v171 & v168->GenericAll & 0xFFFFFFF;
                    else
                      v173 = v171 & (v168->GenericAll & 0xEFFFFFF | 0x1000000);
                    *((_DWORD *)v166 + 1) = v173;
                  }
                  ++v167;
                  v166 += *((unsigned __int16 *)v166 + 1);
                }
                while ( v167 < v106[2] );
                v160 = Size;
              }
            }
          }
          v174 = P[1];
          if ( v162 > (unsigned int)v174 )
            memset_0((char *)v106 + v174, 0, v162 - (unsigned int)v174);
        }
        if ( v106 )
        {
          v164 = v219;
          v106 = (unsigned __int16 *)((char *)v106 + v162);
          v175 = v165 - v219;
LABEL_301:
          *(_DWORD *)(v164 + 12) = v175;
          v159 = v241;
LABEL_302:
          if ( (v150 & 4) != 0 )
          {
            v176 = (unsigned __int16 *)v235;
            if ( v235 )
            {
              if ( (a7 & 0x4000) != 0 )
              {
                v194 = v244;
                if ( v224 )
                  v194 = 0LL;
                RtlpNormalizeAcl((__int64)v106, (__int64)v235, v194);
                v163 = v106[1];
              }
              else
              {
                memmove(v106, v235, *((unsigned __int16 *)v235 + 1));
                if ( !v224 )
                {
                  if ( v106 )
                  {
                    v177 = (unsigned __int8 *)(v106 + 4);
                    v178 = 0;
                    if ( v106[2] )
                    {
                      v179 = v244;
                      v180 = 1650;
                      do
                      {
                        v181 = *v177;
                        if ( (*v177 <= 8u || v181 <= 0xAu || (unsigned __int8)(v181 - 13) <= 1u) && (v177[1] & 8) == 0 )
                        {
                          v182 = *((_DWORD *)v177 + 1);
                          if ( v182 < 0 )
                            v182 |= v179->GenericRead;
                          if ( (v182 & 0x40000000) != 0 )
                            v182 |= v179->GenericWrite;
                          if ( (v182 & 0x20000000) != 0 )
                            v182 |= v179->GenericExecute;
                          if ( (v182 & 0x10000000) != 0 )
                            v182 |= v179->GenericAll;
                          *((_DWORD *)v177 + 1) = v182 & 0xFFFFFFF;
                          v183 = *v177;
                          if ( !(_BYTE)v183 || (unsigned __int8)v183 <= 0xAu && _bittest(&v180, v183) )
                            v184 = v182 & v179->GenericAll & 0xFFFFFFF;
                          else
                            v184 = v182 & (v179->GenericAll & 0xEFFFFFF | 0x1000000);
                          *((_DWORD *)v177 + 1) = v184;
                        }
                        ++v178;
                        v177 += *((unsigned __int16 *)v177 + 1);
                      }
                      while ( v178 < v106[2] );
                      v160 = Size;
                      v159 = v241;
                    }
                  }
                }
                v104 = v176[1];
                if ( v163 > (unsigned int)v104 )
                  memset_0((char *)v106 + v104, 0, v163 - (unsigned int)v104);
              }
              v105 = v219;
              *(_DWORD *)(v219 + 16) = (_DWORD)v106 - v219;
              v106 = (unsigned __int16 *)((char *)v106 + v163);
            }
            else
            {
              v105 = v219;
              *(_DWORD *)(v164 + 16) = 0;
            }
          }
          else
          {
            v105 = v219;
          }
          memmove(v106, Src, v160);
          v107 = (int)v106;
          v108 = (char *)v106 + v160;
          *(_DWORD *)(v105 + 4) = v107 - v105;
          if ( v159 )
          {
            memmove(v108, v159, v161);
            *(_DWORD *)(v105 + 8) = (_DWORD)v108 - v105;
          }
          v109 = P;
          v61 = 0;
          goto LABEL_120;
        }
LABEL_466:
        v164 = v219;
        v175 = 0;
        goto LABEL_301;
      }
      v149 = (ACL *)v235;
    }
    else
    {
      ExFreePoolWithTag(v235, 0);
      v144 = 0LL;
      v149 = 0LL;
      v235 = 0LL;
    }
    v152 = 1;
    LOBYTE(v147) = HIBYTE(v225[0]);
    v137 = a7;
    v150 = v233 & 0x1408 | 4 | GrantedAccess;
    v224 = 1;
    goto LABEL_254;
  }
LABEL_145:
  v115 = SubjectSecurityContext;
  if ( v86 )
    goto LABEL_377;
  if ( SubjectSecurityContext )
  {
    v249 = v87;
    v88 = 0;
    goto LABEL_148;
  }
  v61 = -1073741700;
LABEL_181:
  v109 = P;
LABEL_182:
  v111 = v221;
LABEL_183:
  v110 = (ACL *)v222;
LABEL_184:
  v105 = v219;
LABEL_121:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v229 && v110 )
    ExFreePoolWithTag(v110, 0);
  if ( v256 )
    ExFreePoolWithTag(v256, 0);
  if ( (v220 || v230) && v109 )
    ExFreePoolWithTag(v109, 0);
  if ( v231 && v239 )
    ExFreePoolWithTag(v239, 0);
  if ( v111 && v232 )
    ExFreePoolWithTag(v111, 0);
  if ( v224 )
  {
    if ( v235 )
      ExFreePoolWithTag(v235, 0);
  }
  *v265 = v105;
  return (unsigned int)v61;
}

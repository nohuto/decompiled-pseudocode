/*
 * XREFs of SeAccessCheckByType @ 0x1402AAD98
 * Callers:
 *     NtAccessCheckByType @ 0x1402AACC0 (NtAccessCheckByType.c)
 *     NtAccessCheck @ 0x1402AAD30 (NtAccessCheck.c)
 *     NtAccessCheckByTypeResultList @ 0x14063B510 (NtAccessCheckByTypeResultList.c)
 *     DifNtAccessCheckByTypeResultListWrapper @ 0x140669780 (DifNtAccessCheckByTypeResultListWrapper.c)
 *     DifNtAccessCheckByTypeWrapper @ 0x140669990 (DifNtAccessCheckByTypeWrapper.c)
 *     DifNtAccessCheckWrapper @ 0x140669BA0 (DifNtAccessCheckWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     SePrivilegePolicyCheck @ 0x1402AAA40 (SePrivilegePolicyCheck.c)
 *     SepTrustLevelCheck @ 0x1402AC1C0 (SepTrustLevelCheck.c)
 *     SepReferenceTokenByHandle @ 0x1402AC430 (SepReferenceTokenByHandle.c)
 *     SeCaptureObjectTypeList @ 0x1402AC9C0 (SeCaptureObjectTypeList.c)
 *     SepRmDereferenceCap @ 0x1402ACB20 (SepRmDereferenceCap.c)
 *     RtlpOwnerAcesPresent @ 0x1402ACC70 (RtlpOwnerAcesPresent.c)
 *     SepTokenIsOwner @ 0x1402AE190 (SepTokenIsOwner.c)
 *     SepFreeResourceInfo @ 0x1402AE460 (SepFreeResourceInfo.c)
 *     SepAccessCheck @ 0x1402B00F0 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     SeLogAccessFailure @ 0x1402B59D0 (SeLogAccessFailure.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SepGetScopedPolicySid @ 0x1403BE380 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403BE3D8 (SepRmReferenceFindCap.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     SepConstrainByMandatory @ 0x140468750 (SepConstrainByMandatory.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepLpacCausedAccessFailure @ 0x1404AF820 (SepLpacCausedAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404DBCB8 (SepBuildCapeSecurityDescriptor.c)
 *     SepLogLpacAccessFailure @ 0x1404F654C (SepLogLpacAccessFailure.c)
 *     SeFreeCapturedObjectTypeList @ 0x1405026B8 (SeFreeCapturedObjectTypeList.c)
 *     SepCopyObjectTypeList @ 0x140518780 (SepCopyObjectTypeList.c)
 *     SepMergeObjectTypeListAccesses @ 0x140532580 (SepMergeObjectTypeListAccesses.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x1409F8160 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSid @ 0x140A9A0A8 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByType(
        void *a1,
        void *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        void *a7,
        void *a8,
        unsigned int *a9,
        _DWORD *a10,
        _DWORD *a11,
        char a12)
{
  int v12; // r10d
  void *v14; // r8
  _DWORD *v15; // r11
  int v16; // esi
  PVOID v17; // r15
  bool v18; // r14
  __int64 PreviousMode; // rdx
  unsigned int ULongFromUser; // eax
  void *v21; // r13
  __int16 v22; // cx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r9d
  unsigned int v27; // r13d
  int v28; // ebx
  unsigned int v29; // ecx
  signed int v30; // esi
  BOOL v31; // ecx
  unsigned int v32; // r13d
  char v33; // r14
  char *v34; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v36; // rsi
  char IsOwner; // cl
  __int64 v38; // r14
  int *v39; // rsi
  int *v40; // r13
  int v41; // r10d
  char v42; // r11
  volatile void *v43; // rbx
  unsigned int k; // ebx
  __int64 v45; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  int *Pool2; // rax
  __int16 v50; // ax
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // edx
  int v56; // r11d
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // r9
  int *v60; // rdx
  signed __int64 v61; // r8
  int v62; // ecx
  int *v63; // rcx
  int v64; // edx
  int *v65; // rcx
  signed __int64 v66; // r8
  __int64 v67; // r9
  int v68; // edx
  int v69; // ecx
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int16 v72; // cx
  __int64 v73; // rax
  struct _KTHREAD *v74; // rax
  unsigned int v75; // r14d
  __int64 v76; // rax
  unsigned int v77; // esi
  __int64 v78; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  unsigned __int64 ThreadLock; // rdx
  unsigned int i; // ebx
  _DWORD *v83; // rcx
  _DWORD *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rdx
  char *v87; // rax
  int v88; // r10d
  int v89; // r11d
  unsigned int j; // eax
  __int64 v91; // r14
  int v92; // r8d
  _QWORD *v93; // rax
  __int64 v94; // r10
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r9
  int v98; // eax
  _QWORD *v99; // rax
  __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r9
  int v104; // ecx
  int v105; // eax
  int *v106; // r14
  unsigned int v107; // esi
  int v108; // edx
  __int64 v109; // r8
  int v110; // ecx
  int *v111; // rax
  unsigned int v112; // esi
  int v113; // [rsp+20h] [rbp-2A8h]
  char v114; // [rsp+A0h] [rbp-228h]
  bool v115; // [rsp+A1h] [rbp-227h]
  char v116; // [rsp+A2h] [rbp-226h]
  int v117; // [rsp+A4h] [rbp-224h]
  char v118; // [rsp+A8h] [rbp-220h]
  bool v119; // [rsp+A9h] [rbp-21Fh]
  char v120; // [rsp+AAh] [rbp-21Eh]
  _BYTE v121[13]; // [rsp+ABh] [rbp-21Dh] BYREF
  int v122; // [rsp+B8h] [rbp-210h]
  int v123; // [rsp+BCh] [rbp-20Ch]
  int v124; // [rsp+C0h] [rbp-208h]
  char v125; // [rsp+C5h] [rbp-203h]
  unsigned int v126; // [rsp+C8h] [rbp-200h]
  int v127; // [rsp+D0h] [rbp-1F8h]
  unsigned int v128; // [rsp+D4h] [rbp-1F4h]
  BOOL v129; // [rsp+D8h] [rbp-1F0h]
  unsigned int v130; // [rsp+DCh] [rbp-1ECh]
  __int64 v131; // [rsp+E0h] [rbp-1E8h]
  volatile void *v132; // [rsp+E8h] [rbp-1E0h]
  volatile void *Address; // [rsp+F0h] [rbp-1D8h]
  __int64 v134; // [rsp+F8h] [rbp-1D0h] BYREF
  PVOID Object; // [rsp+100h] [rbp-1C8h] BYREF
  unsigned int v136; // [rsp+108h] [rbp-1C0h]
  unsigned int v137; // [rsp+10Ch] [rbp-1BCh]
  int v138; // [rsp+110h] [rbp-1B8h] BYREF
  int *v139; // [rsp+118h] [rbp-1B0h]
  PVOID v140; // [rsp+120h] [rbp-1A8h] BYREF
  unsigned int v141; // [rsp+128h] [rbp-1A0h]
  int v142; // [rsp+12Ch] [rbp-19Ch]
  PVOID v143; // [rsp+130h] [rbp-198h]
  __int64 v144; // [rsp+138h] [rbp-190h]
  PVOID v145; // [rsp+140h] [rbp-188h] BYREF
  void *v146; // [rsp+148h] [rbp-180h]
  PVOID P; // [rsp+150h] [rbp-178h]
  unsigned __int64 v148; // [rsp+158h] [rbp-170h]
  __int64 v149; // [rsp+168h] [rbp-160h] BYREF
  __int64 v150; // [rsp+170h] [rbp-158h] BYREF
  void *Src; // [rsp+178h] [rbp-150h] BYREF
  void *v152; // [rsp+180h] [rbp-148h] BYREF
  unsigned int *v153; // [rsp+188h] [rbp-140h]
  PVOID v154; // [rsp+190h] [rbp-138h] BYREF
  int v155; // [rsp+198h] [rbp-130h] BYREF
  int v156; // [rsp+19Ch] [rbp-12Ch] BYREF
  int v157; // [rsp+1A0h] [rbp-128h] BYREF
  int v158; // [rsp+1A4h] [rbp-124h] BYREF
  void *v159; // [rsp+1A8h] [rbp-120h]
  __int64 v160; // [rsp+1B0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1B8h] [rbp-110h] BYREF
  void *v162; // [rsp+1E8h] [rbp-E0h]
  __int64 v163; // [rsp+1F0h] [rbp-D8h]
  __int128 v164; // [rsp+1F8h] [rbp-D0h] BYREF
  __int64 v165; // [rsp+210h] [rbp-B8h]
  void *v166; // [rsp+218h] [rbp-B0h]
  _DWORD *v167; // [rsp+220h] [rbp-A8h]
  _DWORD *v168; // [rsp+228h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+230h] [rbp-98h] BYREF
  __int64 v170; // [rsp+250h] [rbp-78h]
  __int128 v171; // [rsp+258h] [rbp-70h] BYREF
  __int64 v172; // [rsp+268h] [rbp-60h]
  int v173; // [rsp+270h] [rbp-58h]
  __int128 v174; // [rsp+278h] [rbp-50h] BYREF

  v12 = a4;
  v117 = a4;
  v159 = a2;
  v136 = a6;
  v166 = a1;
  v162 = a2;
  v163 = a3;
  *(_DWORD *)&v121[5] = a4;
  v165 = a5;
  v126 = a6;
  v137 = a6;
  Src = a7;
  v152 = a7;
  v14 = a8;
  v146 = a8;
  v153 = a9;
  v15 = a10;
  v132 = a10;
  v168 = a10;
  Address = a11;
  v167 = a11;
  v158 = 0;
  P = 0LL;
  v157 = 0;
  v156 = 0;
  v143 = 0LL;
  v155 = 0;
  v139 = 0LL;
  v16 = 0;
  v17 = 0LL;
  Object = 0LL;
  v131 = 0LL;
  v134 = 0LL;
  v150 = 0LL;
  *(_DWORD *)&v121[1] = 0;
  v124 = 0;
  v174 = 0LL;
  v149 = 0LL;
  v145 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v164 = 0LL;
  v129 = 0;
  v140 = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  v173 = 0;
  v144 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v170 = 0LL;
  v148 = 0LL;
  v120 = 0;
  v118 = 0;
  v138 = 0;
  v127 = 0;
  v125 = 0;
  v154 = 0LL;
  v121[0] = 0;
  v18 = 0;
  v119 = 0;
  v160 = 0LL;
  v123 = -1073741790;
  v141 = 0;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v114 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a9);
    v12 = v117;
    v14 = v146;
    LOBYTE(PreviousMode) = v114;
    v15 = v132;
  }
  else
  {
    ULongFromUser = *a9;
  }
  v128 = ULongFromUser;
  v141 = ULongFromUser;
  v21 = Src;
  LODWORD(v152) = -1;
  v142 = -1;
  LODWORD(Src) = -1;
  if ( (_BYTE)PreviousMode )
  {
    if ( a12 )
    {
      if ( !v126 )
      {
        v16 = -1073741811;
        v122 = -1073741811;
LABEL_13:
        if ( v16 < 0 )
          return (unsigned int)v16;
        if ( (v12 & 0xF0000000) != 0 )
        {
          v16 = -1073741594;
          goto LABEL_92;
        }
        LOBYTE(v14) = PreviousMode;
        v16 = SepReferenceTokenByHandle(a3, 8, (int)v14, a4, &Object, (__int64)v121, (__int64)&v160);
        if ( v16 < 0 )
        {
          v17 = 0LL;
          goto LABEL_92;
        }
        v17 = Object;
        if ( (unsigned __int64)(a3 + 6) > 2 )
        {
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            v16 = -1073741732;
            goto LABEL_92;
          }
          if ( *((int *)Object + 49) < 1 )
          {
            v16 = -1073741659;
            goto LABEL_92;
          }
        }
        LOBYTE(v14) = v114;
        v16 = SeCaptureObjectTypeList(v165, v126, v14, &v149);
        if ( v16 < 0 )
        {
LABEL_92:
          v32 = v117;
          goto LABEL_69;
        }
        v16 = SeCaptureSecurityDescriptor(v166, (__int64)&v134);
        if ( v16 < 0 )
        {
          v131 = v134;
          goto LABEL_92;
        }
        v131 = v134;
        if ( v134 )
        {
          v22 = *(_WORD *)(v134 + 2);
          if ( v22 < 0 )
          {
            v48 = *(unsigned int *)(v134 + 4);
            if ( !(_DWORD)v48 )
              goto LABEL_159;
            v23 = v134 + v48;
          }
          else
          {
            v23 = *(_QWORD *)(v134 + 8);
          }
          if ( v23 )
          {
            if ( v22 < 0 )
            {
              v47 = *(unsigned int *)(v134 + 8);
              if ( !(_DWORD)v47 )
                goto LABEL_159;
              v24 = v134 + v47;
            }
            else
            {
              v24 = *(_QWORD *)(v134 + 16);
            }
            if ( v24 )
            {
              LODWORD(v25) = v160;
              if ( !v121[0] )
                v25 = *((_QWORD *)v17 + 138);
              v113 = v25;
              v16 = SepTrustLevelCheck(&v152, v134, 0LL, v17);
              if ( v16 < 0 )
                goto LABEL_92;
              v27 = v117 & 0xFDFFFFFF;
              v28 = (int)v152;
              v29 = (unsigned int)v152 & v117 & 0xFDFFFFFF;
              v30 = (v117 & 0xFDFFFFFF) != v29 ? 0xC0000022 : 0;
              v18 = v29 != (v117 & 0xFDFFFFFF);
              v115 = v18;
              if ( v29 == (v117 & 0xFDFFFFFF) )
              {
                LOBYTE(v26) = 1;
                v16 = SepFilterCheck(v131, (unsigned int)&v140, (_DWORD)v17, v26, (__int64)&Src);
                if ( v16 < 0 )
                  goto LABEL_92;
                v142 = (int)Src;
                v30 = v27 != ((unsigned int)Src & v27) ? 0xC0000022 : 0;
                v119 = ((unsigned int)Src & v27) != v27;
              }
              if ( v30 < 0 )
              {
                LOBYTE(v31) = v129;
              }
              else
              {
                v16 = SepMandatoryIntegrityCheck((unsigned int)&v174, v131, 0, (_DWORD)v17, 1, (__int64)&v164);
                if ( v16 < 0 )
                  goto LABEL_92;
                LOBYTE(v31) = 0;
                v129 = v31;
                if ( DWORD2(v164) )
                  v30 = v27 != (v27 & (unsigned int)v164) ? 0xC0000022 : 0;
                else
                  v30 = 0;
                if ( (v30 < 0 || (v117 & 0x2000000) != 0) && (*((_DWORD *)v17 + 50) & 0x4000) != 0 )
                {
                  LOBYTE(v31) = HIDWORD(v164) <= 0x2000;
                  v129 = HIDWORD(v164) <= 0x2000;
                }
                if ( v30 >= 0 || v31 )
                {
                  v30 = SePrivilegePolicyCheck(&v121[5], &v121[1], 0LL, (__int64)v17, (__int64)&v145, v114);
                  v32 = *(_DWORD *)&v121[5];
                  v117 = *(_DWORD *)&v121[5];
                  v33 = v127;
                  LOBYTE(v31) = v129;
                  if ( !*(_DWORD *)&v121[5] && *(_DWORD *)&v121[1] )
                    v33 = 1;
LABEL_40:
                  if ( v30 < 0 && !v31 )
                  {
                    if ( a12 )
                    {
                      v75 = 0;
                      v130 = 0;
                      while ( v75 < v126 )
                      {
                        RtlWriteULongToUser((char *)Address + 4 * v75, (unsigned int)v30);
                        RtlWriteULongToUser((char *)v132 + 4 * v75++, 0LL);
                        v130 = v75;
                      }
                    }
                    else
                    {
                      RtlWriteULongToUser(Address, (unsigned int)v30);
                      RtlWriteULongToUser(v132, 0LL);
                    }
                    v123 = v30;
                    v16 = 0;
                    v122 = 0;
                    goto LABEL_106;
                  }
                  if ( v145 )
                  {
                    v69 = *(_DWORD *)v145;
                    v70 = 8LL;
                    if ( *(_DWORD *)v145 )
                      v71 = 12 * v69 + 8;
                    else
                      v71 = 8;
                    if ( v71 > v128 )
                    {
                      if ( v69 )
                        v70 = (unsigned int)(12 * v69 + 8);
                      RtlWriteULongToUser(v153, v70);
                      v16 = -1073741789;
                      ExFreePoolWithTag(v145, 0);
                      goto LABEL_106;
                    }
                    if ( v69 )
                      LODWORD(v70) = 12 * v69 + 8;
                    RtlCopyToUser(v146, v145, (unsigned int)v70);
                    ExFreePoolWithTag(v145, 0);
                  }
                  else
                  {
                    if ( v128 < 0x14 )
                    {
                      RtlWriteULongToUser(v153, 20LL);
                      v16 = -1073741789;
                      v122 = -1073741789;
                      goto LABEL_106;
                    }
                    v34 = (char *)v146;
                    RtlWriteULongToUser(v146, 0LL);
                    RtlWriteULongToUser(v34 + 4, 0LL);
                  }
                  if ( v159 )
                  {
                    v16 = SeCaptureSid(v159, v113, 1, (__int64)&v150);
                    if ( v16 < 0 )
                    {
                      v150 = 0LL;
                      goto LABEL_106;
                    }
                  }
                  SeCaptureSubjectContext(&SubjectContext);
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)v17 + 6), 1u);
                  v36 = v131;
                  IsOwner = SepTokenIsOwner(v17, v131);
                  v116 = IsOwner;
                  if ( !SepAllowAccessUponLogoff && (*((_DWORD *)v17 + 50) & 0x20) == 0 )
                  {
                    v76 = *((_QWORD *)v17 + 27);
                    if ( v76 )
                    {
                      if ( (*(_DWORD *)(v76 + 40) & 0x20) != 0 )
                      {
                        if ( a12 )
                        {
                          v77 = 0;
                          v130 = 0;
                          while ( v77 < v126 )
                          {
                            RtlWriteULongToUser((char *)Address + 4 * v77, 3221225506LL);
                            RtlWriteULongToUser((char *)v132 + 4 * v77++, 0LL);
                            v130 = v77;
                          }
                        }
                        else
                        {
                          RtlWriteULongToUser(Address, 3221225506LL);
                          RtlWriteULongToUser(v132, 0LL);
                        }
                        v123 = -1073741790;
                        v16 = 0;
                        v122 = 0;
LABEL_213:
                        ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                        KeLeaveCriticalRegion();
                        SeReleaseSubjectContext(&SubjectContext);
                        goto LABEL_106;
                      }
                    }
                  }
                  if ( !BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) )
                  {
LABEL_47:
                    if ( (v32 & 0x2060000) == 0 || !IsOwner )
                    {
LABEL_48:
                      if ( !v32 && (!v120 || v33) && ((*((_DWORD *)v17 + 50) & 0x2000) != 0 || !v124) )
                      {
                        if ( a12 )
                        {
                          for ( i = 0; ; ++i )
                          {
                            v130 = i;
                            if ( i >= v126 )
                              break;
                            v83 = &v167[i];
                            v84 = &v168[i];
                            if ( *(_DWORD *)&v121[1] )
                            {
                              RtlWriteULongToUser(v83, 0LL);
                              v123 = 0;
                              v85 = *(unsigned int *)&v121[1];
                            }
                            else
                            {
                              RtlWriteULongToUser(v83, 3221225506LL);
                              v123 = -1073741790;
                              v85 = 0LL;
                            }
                            RtlWriteULongToUser(v84, v85);
                          }
                        }
                        else
                        {
                          if ( *(_DWORD *)&v121[1] )
                          {
                            RtlWriteULongToUser(Address, 0LL);
                            v123 = 0;
                            v86 = *(unsigned int *)&v121[1];
                          }
                          else
                          {
                            RtlWriteULongToUser(Address, 3221225506LL);
                            v123 = -1073741790;
                            v86 = 0LL;
                          }
                          RtlWriteULongToUser(v132, v86);
                        }
                        v16 = 0;
                        v122 = 0;
                        goto LABEL_213;
                      }
                      v38 = v137;
                      if ( !a12 )
                      {
                        v39 = &v158;
                        P = &v158;
                        v40 = &v157;
                        goto LABEL_51;
                      }
                      Pool2 = (int *)ExAllocatePool2(0x100uLL);
                      v39 = Pool2;
                      P = Pool2;
                      if ( Pool2 )
                      {
                        v40 = &Pool2[v38];
LABEL_51:
                        LODWORD(v171) = v124;
                        SepAccessCheck(
                          v131,
                          v150,
                          SubjectContext.PrimaryToken,
                          (_DWORD)v17,
                          v117,
                          v149,
                          v126,
                          (__int64)&v174,
                          *(_DWORD *)&v121[1],
                          v114,
                          (__int64)v39,
                          0LL,
                          (__int64)v40,
                          a12,
                          v116,
                          (__int64)&v171,
                          (__int64)&v140,
                          0LL,
                          0LL);
                        if ( !BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) || *v40 < 0 || !v120 )
                          goto LABEL_52;
                        if ( a12 )
                        {
                          v87 = (char *)ExAllocatePool2(0x100uLL);
                          v143 = v87;
                          if ( !v87 )
                          {
                            ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                            KeLeaveCriticalRegion();
                            SeReleaseSubjectContext(&SubjectContext);
                            v16 = -1073741670;
LABEL_242:
                            v18 = v115;
                            goto LABEL_92;
                          }
                          v139 = (int *)&v87[4 * v137];
                        }
                        else
                        {
                          v143 = &v156;
                          v139 = &v155;
                        }
                        v88 = *v40;
                        v128 = *v40;
                        v89 = *v39;
                        v124 = *v39;
                        LOBYTE(v39) = 0;
                        v127 = (int)v39;
                        if ( !v126 )
                        {
LABEL_248:
                          for ( j = 0; ; j = v137 + 1 )
                          {
                            v137 = j;
                            if ( j >= *(_DWORD *)(v148 + 60) )
                              break;
                            v91 = *(_QWORD *)(v148 + 8LL * j + 64);
                            if ( !*(_QWORD *)(v91 + 24) )
                              goto LABEL_286;
                            v92 = (int)v140;
                            if ( !v140 )
                            {
                              LODWORD(v39) = (unsigned __int8)v39;
                              if ( (int)AuthzBasepInitializeResourceClaimsFromSacl(v144, &v140) < 0 )
                                LODWORD(v39) = 1;
                              v127 = (int)v39;
                              v92 = (int)v140;
                            }
                            v93 = (_QWORD *)*((_QWORD *)v17 + 137);
                            v94 = v93 ? v93[75] : 0LL;
                            v95 = v93 ? v93[73] : 0LL;
                            v96 = v93 ? v93[74] : 0LL;
                            if ( v93 )
                              v97 = v93[72];
                            else
                              LODWORD(v97) = 0;
                            v98 = AuthzBasepEvaluateAceCondition(
                                    (_DWORD)v17,
                                    *((_QWORD *)v17 + 97),
                                    v92,
                                    v97,
                                    v96,
                                    v95,
                                    v94,
                                    *(_QWORD *)(v91 + 24),
                                    *(_DWORD *)(v91 + 16),
                                    1,
                                    0,
                                    (__int64)&v138);
                            v16 = v98;
                            if ( v138 == 1 )
                              goto LABEL_286;
                            if ( v98 < 0
                              || (*((_DWORD *)v17 + 50) & 0x10) != 0
                              && ((v99 = (_QWORD *)*((_QWORD *)v17 + 137)) == 0LL ? (v100 = 0LL) : (v100 = v99[75]),
                                  !v99 ? (v101 = 0LL) : (v101 = v99[73]),
                                  !v99 ? (v102 = 0LL) : (v102 = v99[74]),
                                  !v99 ? (LODWORD(v103) = 0) : (v103 = v99[72]),
                                  v16 = AuthzBasepEvaluateAceCondition(
                                          (_DWORD)v17,
                                          *((_QWORD *)v17 + 97),
                                          (_DWORD)v140,
                                          v103,
                                          v102,
                                          v101,
                                          v100,
                                          *(_QWORD *)(v91 + 24),
                                          *(_DWORD *)(v91 + 16),
                                          1,
                                          1,
                                          (__int64)&v138),
                                  v16 < 0) )
                            {
LABEL_241:
                              ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                              KeLeaveCriticalRegion();
                              SeReleaseSubjectContext(&SubjectContext);
                              goto LABEL_242;
                            }
                            LOBYTE(v39) = v127;
                            if ( (_BYTE)v127 || v138 == 1 )
                            {
LABEL_286:
                              v16 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                              if ( v16 < 0 )
                                goto LABEL_241;
                              if ( (*(_DWORD *)(v91 + 48) & 1) != 0 )
                              {
                                v104 = v117;
                                if ( (v117 & 0x2000000) == 0 )
                                  v104 = *(_DWORD *)&v121[1] | v117;
                                v105 = 0;
                              }
                              else
                              {
                                v104 = v117;
                                v105 = *(_DWORD *)&v121[1];
                              }
                              v106 = (int *)v143;
                              v107 = v126;
                              SepAccessCheck(
                                (unsigned int)SecurityDescriptor,
                                v150,
                                SubjectContext.PrimaryToken,
                                (_DWORD)v17,
                                v104,
                                (__int64)v154,
                                v126,
                                (__int64)&v174,
                                v105,
                                v114,
                                (__int64)v143,
                                0LL,
                                (__int64)v139,
                                a12,
                                v116,
                                (__int64)&v171,
                                (__int64)&v140,
                                0LL,
                                0LL);
                              if ( v118 )
                                v89 = *v106 & v124;
                              else
                                v89 = *v106;
                              v124 = v89;
                              if ( v89 )
                                v88 = *v139;
                              else
                                v88 = -1073741790;
                              v128 = v88;
                              v118 = 1;
                              if ( v154 )
                                SepMergeObjectTypeListAccesses(v149, v154, v107);
                              if ( v88 < 0 )
                                break;
                              LOBYTE(v39) = v127;
                            }
                            else
                            {
                              v88 = v128;
                              v89 = v124;
                            }
                          }
                          *v40 = v88;
                          v39 = (int *)P;
                          *(_DWORD *)P &= v89;
LABEL_52:
                          ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                          KeLeaveCriticalRegion();
                          SeReleaseSubjectContext(&SubjectContext);
                          v41 = v117;
                          if ( (v117 & 0x2000000) != 0 )
                          {
                            if ( !v129
                              || !*(_WORD *)((char *)&v172 + 5) && (*((_DWORD *)v17 + 50) & 0x3000000) != 0x3000000 )
                            {
                              SepConstrainByMandatory(
                                (unsigned int)&v164,
                                v117,
                                (_DWORD)v39,
                                (_DWORD)v40,
                                0LL,
                                a12 != 0 ? v136 : 0);
                              v41 = v108;
                            }
                          }
                          else if ( v129 && !*(_WORD *)((char *)&v172 + 5) )
                          {
                            if ( (*((_DWORD *)v17 + 50) & 0x3000000) != 0x3000000 || HIDWORD(v171) )
                            {
                              if ( a12 )
                              {
                                v112 = 0;
                                v130 = 0;
                                while ( v112 < v126 )
                                {
                                  RtlWriteULongToUser((char *)Address + 4 * v112, 3221225506LL);
                                  RtlWriteULongToUser((char *)v132 + 4 * v112++, 0LL);
                                  v130 = v112;
                                }
                              }
                              else
                              {
                                RtlWriteULongToUser(Address, 3221225506LL);
                                RtlWriteULongToUser(v132, 0LL);
                              }
                              v123 = -1073741790;
                              v16 = 0;
                              v122 = 0;
                              v32 = v117;
                              goto LABEL_106;
                            }
                            HIBYTE(v172) = 1;
                            v42 = a12;
                            if ( a12 )
                            {
                              v109 = v126;
                              if ( v126 )
                              {
                                v110 = *(_DWORD *)&v121[1] | v117;
                                v111 = v39;
                                do
                                {
                                  *(int *)((char *)v111 + (char *)v40 - (char *)v39) = 0;
                                  *v111++ = v110;
                                  --v109;
                                }
                                while ( v109 );
                              }
                            }
                            else
                            {
                              *v40 = 0;
                              *v39 = *(_DWORD *)&v121[1] | v117;
                            }
                            goto LABEL_55;
                          }
                          v42 = a12;
LABEL_55:
                          v18 = v115;
                          if ( (v41 & 0x2000000) != 0 )
                          {
                            v54 = v42 != 0 ? v136 : 0;
                            v18 = 0;
                            if ( v28 != -1 )
                            {
                              if ( v54 )
                              {
                                v59 = v54;
                                if ( (v41 & 0x2000000) != 0 )
                                {
                                  v60 = v40;
                                  v61 = (char *)v39 - (char *)v40;
                                  do
                                  {
                                    v62 = v28 & *(int *)((char *)v60 + v61);
                                    if ( v62 != *(int *)((char *)v60 + v61) )
                                    {
                                      v18 = 1;
                                      *(int *)((char *)v60 + v61) = v62;
                                      *v60 = v62 == 0 ? 0xC0000022 : 0;
                                    }
                                    ++v60;
                                    --v59;
                                  }
                                  while ( v59 );
                                }
                                else
                                {
                                  v63 = v39;
                                  do
                                  {
                                    v64 = v28 & *v63;
                                    if ( v64 != *v63 )
                                    {
                                      v18 = 1;
                                      *v63 = v64;
                                      *(int *)((char *)v63 + (char *)v40 - (char *)v39) = -1073741790;
                                    }
                                    ++v63;
                                    --v59;
                                  }
                                  while ( v59 );
                                }
                              }
                              else
                              {
                                v58 = v28 & *v39;
                                if ( v58 != *v39 )
                                {
                                  v18 = 1;
                                  *v39 = v58;
                                  if ( (v41 & 0x2000000) != 0 )
                                    *v40 = v58 == 0 ? 0xC0000022 : 0;
                                  else
                                    *v40 = -1073741790;
                                }
                              }
                            }
                            v55 = v42 != 0 ? v136 : 0;
                            v119 = 0;
                            v56 = v142;
                            if ( v142 != -1 )
                            {
                              if ( v55 )
                              {
                                v65 = v39;
                                v66 = (char *)v40 - (char *)v39;
                                v67 = v55;
                                do
                                {
                                  v68 = v56 & *v65;
                                  if ( v68 != *v65 )
                                  {
                                    v119 = 1;
                                    *v65 = v68;
                                    if ( (v41 & 0x2000000) != 0 )
                                      *(int *)((char *)v65 + v66) = v68 == 0 ? 0xC0000022 : 0;
                                    else
                                      *(int *)((char *)v65 + v66) = -1073741790;
                                  }
                                  ++v65;
                                  --v67;
                                }
                                while ( v67 );
                              }
                              else
                              {
                                v57 = v142 & *v39;
                                if ( v57 != *v39 )
                                {
                                  v119 = 1;
                                  *v39 = v57;
                                  if ( (v41 & 0x2000000) != 0 )
                                    *v40 = v57 == 0 ? 0xC0000022 : 0;
                                  else
                                    *v40 = -1073741790;
                                }
                              }
                            }
                          }
                          RtlWriteULongToUser(Address, (unsigned int)*v40);
                          v43 = v132;
                          RtlWriteULongToUser(v132, (unsigned int)*v39);
                          v123 = *v40;
                          if ( BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) && v118 && *v40 >= 0 )
                          {
                            RtlWriteULongToUser(Address, (unsigned int)*v139);
                            RtlWriteULongToUser(v43, *(_DWORD *)v143 & (unsigned int)*v39);
                            v123 = *v139;
                          }
                          if ( a12 )
                          {
                            for ( k = 1; ; ++k )
                            {
                              v130 = k;
                              if ( k >= v126 )
                                break;
                              RtlWriteULongToUser((char *)Address + 4 * k, (unsigned int)v40[k]);
                              RtlWriteULongToUser((char *)v132 + 4 * k, *((unsigned int *)P + k));
                              if ( BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) && v118 && v40[k] >= 0 )
                              {
                                RtlWriteULongToUser((char *)Address + 4 * k, (unsigned int)v139[k]);
                                RtlWriteULongToUser(
                                  (char *)v132 + 4 * k,
                                  (unsigned int)(*((_DWORD *)P + k) & *((_DWORD *)v143 + k)));
                              }
                            }
                          }
                          v16 = 0;
                          v122 = 0;
                          v32 = v117;
LABEL_69:
                          v45 = v131;
                          if ( v131 && v17 )
                          {
                            if ( v18 || v119 )
                              goto LABEL_186;
                            if ( HIDWORD(v171) || (*((_DWORD *)v17 + 50) & 0x4000) == 0 )
                            {
LABEL_98:
                              if ( v16 >= 0
                                && !HIDWORD(v171)
                                && v123 < 0
                                && (*((_DWORD *)v17 + 50) & 0x4000) != 0
                                && (unsigned __int8)SepLpacCausedAccessFailure(&v171, v32) )
                              {
                                SepLogLpacAccessFailure();
                              }
                              goto LABEL_70;
                            }
                            if ( v16 >= 0 )
                            {
                              if ( v123 >= 0 && !HIBYTE(v172) )
                                goto LABEL_98;
LABEL_186:
                              v74 = KeGetCurrentThread();
                              --v74->KernelApcDisable;
                              ExAcquireResourceSharedLite(*((PERESOURCE *)v17 + 6), 1u);
                              SeLogAccessFailure(v17, v45, v121[1] | v32, v123 >= 0);
                              ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                              KeLeaveCriticalRegion();
                              goto LABEL_98;
                            }
                          }
LABEL_70:
                          if ( a12 )
                          {
                            if ( P )
                              ExFreePoolWithTag(P, 0);
                            if ( v143 )
                              ExFreePoolWithTag(v143, 0);
                          }
                          if ( v17 )
                            ObfDereferenceObjectWithTag(v17, 0x74726853u);
                          if ( v149 )
                            SeFreeCapturedObjectTypeList();
                          if ( v150 )
                          {
                            LOBYTE(v14) = 1;
                            LOBYTE(PreviousMode) = v114;
                            SeReleaseSid(v150, PreviousMode, v14);
                          }
                          if ( v131 )
                          {
                            LOBYTE(PreviousMode) = v114;
                            SeReleaseSecurityDescriptor(v131, PreviousMode, 0LL);
                          }
                          if ( v120 )
                            SepRmDereferenceCap(v148);
                          if ( v154 )
                            ExFreePoolWithTag(v154, 0);
                          SepFreeResourceInfo(v140);
                          return (unsigned int)v16;
                        }
                        v16 = SepCopyObjectTypeList(v149, v126, &v154);
                        v18 = v115;
                        if ( v16 >= 0 )
                        {
                          v88 = v128;
                          v89 = v124;
                          LOBYTE(v39) = v127;
                          goto LABEL_248;
                        }
                        goto LABEL_92;
                      }
                      ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                      KeLeaveCriticalRegion();
                      SeReleaseSubjectContext(&SubjectContext);
                      v16 = -1073741670;
LABEL_106:
                      v18 = v115;
                      goto LABEL_69;
                    }
                    v50 = *(_WORD *)(v36 + 2);
                    if ( (v50 & 4) != 0 )
                    {
                      if ( v50 >= 0 )
                      {
                        v52 = *(_QWORD *)(v36 + 32);
LABEL_112:
                        if ( !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v52) )
                        {
                          if ( (v32 & 0x2000000) != 0 )
                          {
                            v124 = 393216;
                            v53 = *(_DWORD *)&v121[1] | 0x60000;
                          }
                          else
                          {
                            v124 = v32 & 0x60000;
                            v53 = *(_DWORD *)&v121[1] | v32 & 0x60000;
                          }
                          *(_DWORD *)&v121[1] = v53;
                          v32 &= 0xFFF9FFFF;
                          v117 = v32;
                          *(_DWORD *)&v121[5] = v32;
                        }
                        goto LABEL_48;
                      }
                      v51 = *(unsigned int *)(v36 + 16);
                      if ( (_DWORD)v51 )
                      {
                        v52 = v36 + v51;
                        goto LABEL_112;
                      }
                    }
                    v52 = 0LL;
                    goto LABEL_112;
                  }
                  v72 = *(_WORD *)(v36 + 2);
                  if ( (v72 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
                  {
                    if ( v72 >= 0 )
                    {
                      v78 = *(_QWORD *)(v36 + 24);
                    }
                    else
                    {
                      v73 = *(unsigned int *)(v36 + 12);
                      if ( !(_DWORD)v73 )
                      {
                        v144 = 0LL;
                        goto LABEL_221;
                      }
                      v78 = v36 + v73;
                    }
                    v144 = v78;
                    if ( v78 )
                    {
                      ScopedPolicySid = (void *)SepGetScopedPolicySid(v78);
                      if ( ScopedPolicySid )
                      {
                        Cap = SepRmReferenceFindCap(ScopedPolicySid);
                        ThreadLock = v148;
                        if ( Cap < 0 )
                          ThreadLock = ExpPlatformBinaryLock.ThreadLock;
                        v148 = ThreadLock;
                        v120 = 1;
                      }
                    }
                  }
LABEL_221:
                  IsOwner = v116;
                  goto LABEL_47;
                }
              }
              v33 = v127;
              v32 = v117;
              goto LABEL_40;
            }
          }
        }
LABEL_159:
        v16 = -1073741703;
        goto LABEL_92;
      }
      ProbeForWrite(Address, 4LL * v126, 4u);
      ProbeForWrite(v132, 4LL * v126, 4u);
      v14 = v146;
    }
    if ( v14 && v128 >= 0x14 )
      RtlWriteULongToUser(v14, 0LL);
    RtlCopyFromUser(&v174, v21, 0x10uLL);
    v12 = v117;
    LOBYTE(PreviousMode) = v114;
    goto LABEL_13;
  }
  *a11 = 0;
  *v15 = v12;
  return 0LL;
}

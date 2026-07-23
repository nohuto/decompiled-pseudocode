/*
 * XREFs of SeAccessCheckByType @ 0x1403AC1E8
 * Callers:
 *     NtAccessCheckByType @ 0x1403AC110 (NtAccessCheckByType.c)
 *     NtAccessCheck @ 0x1403AC180 (NtAccessCheck.c)
 *     NtAccessCheckByTypeResultList @ 0x14063E5D0 (NtAccessCheckByTypeResultList.c)
 *     DifNtAccessCheckByTypeResultListWrapper @ 0x14066D360 (DifNtAccessCheckByTypeResultListWrapper.c)
 *     DifNtAccessCheckByTypeWrapper @ 0x14066D570 (DifNtAccessCheckByTypeWrapper.c)
 *     DifNtAccessCheckWrapper @ 0x14066D780 (DifNtAccessCheckWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SePrivilegePolicyCheck @ 0x1403AB520 (SePrivilegePolicyCheck.c)
 *     SeCaptureObjectTypeList @ 0x1403AB7A0 (SeCaptureObjectTypeList.c)
 *     SepTrustLevelCheck @ 0x1403AB8E0 (SepTrustLevelCheck.c)
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     SepTokenIsOwner @ 0x1403AE5D0 (SepTokenIsOwner.c)
 *     SepFreeResourceInfo @ 0x1403AE8A0 (SepFreeResourceInfo.c)
 *     RtlpOwnerAcesPresent @ 0x1403AF640 (RtlpOwnerAcesPresent.c)
 *     SepRmDereferenceCap @ 0x1403AF894 (SepRmDereferenceCap.c)
 *     SepGetScopedPolicySid @ 0x1403C8280 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403C82D8 (SepRmReferenceFindCap.c)
 *     SepConstrainByMandatory @ 0x140461E00 (SepConstrainByMandatory.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepLpacCausedAccessFailure @ 0x1404A8EB0 (SepLpacCausedAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D5398 (SepBuildCapeSecurityDescriptor.c)
 *     SepLogLpacAccessFailure @ 0x1404EFB5C (SepLogLpacAccessFailure.c)
 *     SeFreeCapturedObjectTypeList @ 0x1404FBF88 (SeFreeCapturedObjectTypeList.c)
 *     SepCopyObjectTypeList @ 0x1405121F0 (SepCopyObjectTypeList.c)
 *     SepAccessCheck @ 0x1405196A0 (SepAccessCheck.c)
 *     SepMergeObjectTypeListAccesses @ 0x140534A20 (SepMergeObjectTypeListAccesses.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     SeReleaseSecurityDescriptor @ 0x140A60CA0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSid @ 0x140A9E228 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeAccessCheckByType(
        void *a1,
        void *a2,
        void *a3,
        struct _KLOCK_ENTRIES *a4,
        char *a5,
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
  _DWORD *v17; // r15
  bool v18; // r14
  __int64 PreviousMode; // rdx
  unsigned int ULongFromUser; // eax
  void *v21; // r13
  __int16 v22; // cx
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // r9
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
  __int64 v41; // r9
  int v42; // r10d
  char v43; // r11
  volatile void *v44; // rbx
  unsigned int k; // ebx
  __int64 v46; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r9
  int *Pool2; // rax
  __int16 v53; // ax
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // edx
  int v59; // r11d
  int v60; // ecx
  int v61; // ecx
  __int64 v62; // r9
  int *v63; // rdx
  signed __int64 v64; // r8
  int v65; // ecx
  int *v66; // rcx
  int v67; // edx
  int *v68; // rcx
  signed __int64 v69; // r8
  __int64 v70; // r9
  int v71; // edx
  int v72; // ecx
  __int64 v73; // rdx
  unsigned int v74; // eax
  __int16 v75; // cx
  __int64 v76; // rax
  struct _KTHREAD *v77; // rax
  ULONGLONG v78; // r9
  unsigned int v79; // r14d
  __int64 v80; // rax
  unsigned int v81; // esi
  __int64 v82; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  _DWORD *StackBase; // rdx
  unsigned int i; // ebx
  _DWORD *v87; // rcx
  _DWORD *v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rdx
  char *v91; // rax
  int v92; // r10d
  int v93; // r11d
  unsigned int j; // eax
  __int64 v95; // r14
  PVOID v96; // r8
  _QWORD *v97; // rax
  void *v98; // r10
  void *v99; // rdx
  void *v100; // rcx
  void *v101; // r9
  int v102; // eax
  _QWORD *v103; // rax
  void *v104; // r8
  void *v105; // rdx
  void *v106; // rcx
  void *v107; // r9
  int v108; // ecx
  int v109; // eax
  int *v110; // r14
  unsigned int v111; // esi
  int v112; // edx
  __int64 v113; // r8
  int v114; // ecx
  int *v115; // rax
  unsigned int v116; // esi
  int v117; // [rsp+20h] [rbp-2A8h]
  char v118; // [rsp+A0h] [rbp-228h]
  bool v119; // [rsp+A1h] [rbp-227h]
  char v120; // [rsp+A2h] [rbp-226h]
  int v121; // [rsp+A4h] [rbp-224h]
  char v122; // [rsp+A8h] [rbp-220h]
  bool v123; // [rsp+A9h] [rbp-21Fh]
  char v124; // [rsp+AAh] [rbp-21Eh]
  _BYTE v125[13]; // [rsp+ABh] [rbp-21Dh] BYREF
  int v126; // [rsp+B8h] [rbp-210h]
  int v127; // [rsp+BCh] [rbp-20Ch]
  int v128; // [rsp+C0h] [rbp-208h]
  char v129; // [rsp+C5h] [rbp-203h]
  unsigned int v130; // [rsp+C8h] [rbp-200h]
  int v131; // [rsp+D0h] [rbp-1F8h]
  unsigned int v132; // [rsp+D4h] [rbp-1F4h]
  BOOL v133; // [rsp+D8h] [rbp-1F0h]
  unsigned int v134; // [rsp+DCh] [rbp-1ECh]
  __int64 v135; // [rsp+E0h] [rbp-1E8h]
  volatile void *v136; // [rsp+E8h] [rbp-1E0h]
  volatile void *Address; // [rsp+F0h] [rbp-1D8h]
  __int64 v138; // [rsp+F8h] [rbp-1D0h] BYREF
  PVOID Object; // [rsp+100h] [rbp-1C8h] BYREF
  unsigned int v140; // [rsp+108h] [rbp-1C0h]
  unsigned int v141; // [rsp+10Ch] [rbp-1BCh]
  int v142; // [rsp+110h] [rbp-1B8h] BYREF
  int *v143; // [rsp+118h] [rbp-1B0h]
  PVOID v144; // [rsp+120h] [rbp-1A8h] BYREF
  unsigned int v145; // [rsp+128h] [rbp-1A0h]
  int v146; // [rsp+12Ch] [rbp-19Ch]
  PVOID v147; // [rsp+130h] [rbp-198h]
  __int64 v148; // [rsp+138h] [rbp-190h]
  PVOID v149; // [rsp+140h] [rbp-188h] BYREF
  void *v150; // [rsp+148h] [rbp-180h]
  PVOID P; // [rsp+150h] [rbp-178h]
  _DWORD *v152; // [rsp+158h] [rbp-170h]
  __int64 v153; // [rsp+168h] [rbp-160h] BYREF
  __int64 v154; // [rsp+170h] [rbp-158h] BYREF
  void *Src; // [rsp+178h] [rbp-150h] BYREF
  void *v156; // [rsp+180h] [rbp-148h] BYREF
  unsigned int *v157; // [rsp+188h] [rbp-140h]
  PVOID v158; // [rsp+190h] [rbp-138h] BYREF
  int v159; // [rsp+198h] [rbp-130h] BYREF
  int v160; // [rsp+19Ch] [rbp-12Ch] BYREF
  int v161; // [rsp+1A0h] [rbp-128h] BYREF
  int v162; // [rsp+1A4h] [rbp-124h] BYREF
  void *v163; // [rsp+1A8h] [rbp-120h]
  __int64 v164; // [rsp+1B0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+1B8h] [rbp-110h] BYREF
  void *v166; // [rsp+1E8h] [rbp-E0h]
  void *v167; // [rsp+1F0h] [rbp-D8h]
  __int128 v168; // [rsp+1F8h] [rbp-D0h] BYREF
  char *v169; // [rsp+210h] [rbp-B8h]
  void *v170; // [rsp+218h] [rbp-B0h]
  _DWORD *v171; // [rsp+220h] [rbp-A8h]
  _DWORD *v172; // [rsp+228h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+230h] [rbp-98h] BYREF
  __int64 v174; // [rsp+250h] [rbp-78h]
  __int128 v175; // [rsp+258h] [rbp-70h] BYREF
  __int64 v176; // [rsp+268h] [rbp-60h]
  int v177; // [rsp+270h] [rbp-58h]
  __int128 v178; // [rsp+278h] [rbp-50h] BYREF

  v12 = (int)a4;
  v121 = (int)a4;
  v163 = a2;
  v140 = a6;
  v170 = a1;
  v166 = a2;
  v167 = a3;
  *(_DWORD *)&v125[5] = (_DWORD)a4;
  v169 = a5;
  v130 = a6;
  v141 = a6;
  Src = a7;
  v156 = a7;
  v14 = a8;
  v150 = a8;
  v157 = a9;
  v15 = a10;
  v136 = a10;
  v172 = a10;
  Address = a11;
  v171 = a11;
  v162 = 0;
  P = 0LL;
  v161 = 0;
  v160 = 0;
  v147 = 0LL;
  v159 = 0;
  v143 = 0LL;
  v16 = 0;
  v17 = 0LL;
  Object = 0LL;
  v135 = 0LL;
  v138 = 0LL;
  v154 = 0LL;
  *(_DWORD *)&v125[1] = 0;
  v128 = 0;
  v178 = 0LL;
  v153 = 0LL;
  v149 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v168 = 0LL;
  v133 = 0;
  v144 = 0LL;
  v175 = 0LL;
  v176 = 0LL;
  v177 = 0;
  v148 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v174 = 0LL;
  v152 = 0LL;
  v124 = 0;
  v122 = 0;
  v142 = 0;
  v131 = 0;
  v129 = 0;
  v158 = 0LL;
  v125[0] = 0;
  v18 = 0;
  v123 = 0;
  v164 = 0LL;
  v127 = -1073741790;
  v145 = 0;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v118 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a9);
    v12 = v121;
    v14 = v150;
    LOBYTE(PreviousMode) = v118;
    v15 = v136;
  }
  else
  {
    ULongFromUser = *a9;
  }
  v132 = ULongFromUser;
  v145 = ULongFromUser;
  v21 = Src;
  LODWORD(v156) = -1;
  v146 = -1;
  LODWORD(Src) = -1;
  if ( (_BYTE)PreviousMode )
  {
    if ( a12 )
    {
      if ( !v130 )
      {
        v16 = -1073741811;
        v126 = -1073741811;
LABEL_13:
        if ( v16 < 0 )
          return (unsigned int)v16;
        if ( (v12 & 0xF0000000) != 0 )
        {
          v16 = -1073741594;
          goto LABEL_92;
        }
        LOBYTE(v14) = PreviousMode;
        v16 = SepReferenceTokenByHandle(a3, 8u, (__int64)v14, a4, &Object, v125, &v164);
        if ( v16 < 0 )
        {
          v17 = 0LL;
          goto LABEL_92;
        }
        v17 = Object;
        if ( (unsigned __int64)a3 + 6 > 2 )
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
        v16 = SeCaptureObjectTypeList(v169, v130, v118, &v153);
        if ( v16 < 0 )
        {
LABEL_92:
          v32 = v121;
          goto LABEL_69;
        }
        v16 = SeCaptureSecurityDescriptor(v170, (__int64)&v138);
        if ( v16 < 0 )
        {
          v135 = v138;
          goto LABEL_92;
        }
        v135 = v138;
        if ( v138 )
        {
          v22 = *(_WORD *)(v138 + 2);
          if ( v22 < 0 )
          {
            v49 = *(unsigned int *)(v138 + 4);
            if ( !(_DWORD)v49 )
              goto LABEL_159;
            v23 = v138 + v49;
          }
          else
          {
            v23 = *(_QWORD *)(v138 + 8);
          }
          if ( v23 )
          {
            if ( v22 < 0 )
            {
              v48 = *(unsigned int *)(v138 + 8);
              if ( !(_DWORD)v48 )
                goto LABEL_159;
              v24 = v138 + v48;
            }
            else
            {
              v24 = *(_QWORD *)(v138 + 16);
            }
            if ( v24 )
            {
              v25 = (_DWORD *)v164;
              if ( !v125[0] )
                v25 = (_DWORD *)*((_QWORD *)v17 + 138);
              v16 = SepTrustLevelCheck((__int64)&v156, v138, 0LL, (__int64)v17, v25, 1, (int *)&v156);
              if ( v16 < 0 )
                goto LABEL_92;
              v27 = v121 & 0xFDFFFFFF;
              v28 = (int)v156;
              v29 = (unsigned int)v156 & v121 & 0xFDFFFFFF;
              v30 = (v121 & 0xFDFFFFFF) != v29 ? 0xC0000022 : 0;
              v18 = v29 != (v121 & 0xFDFFFFFF);
              v119 = v18;
              if ( v29 == (v121 & 0xFDFFFFFF) )
              {
                LOBYTE(v26) = 1;
                v16 = SepFilterCheck(v135, &v144, (__int64)v17, v26, (int *)&Src);
                if ( v16 < 0 )
                  goto LABEL_92;
                v146 = (int)Src;
                v30 = v27 != ((unsigned int)Src & v27) ? 0xC0000022 : 0;
                v123 = ((unsigned int)Src & v27) != v27;
              }
              if ( v30 < 0 )
              {
                LOBYTE(v31) = v133;
              }
              else
              {
                v16 = SepMandatoryIntegrityCheck(&v178, v135, 0, (__int64)v17, 1, (__int64)&v168);
                if ( v16 < 0 )
                  goto LABEL_92;
                LOBYTE(v31) = 0;
                v133 = v31;
                if ( DWORD2(v168) )
                  v30 = v27 != (v27 & (unsigned int)v168) ? 0xC0000022 : 0;
                else
                  v30 = 0;
                if ( (v30 < 0 || (v121 & 0x2000000) != 0) && (v17[50] & 0x4000) != 0 )
                {
                  LOBYTE(v31) = HIDWORD(v168) <= 0x2000;
                  v133 = HIDWORD(v168) <= 0x2000;
                }
                if ( v30 >= 0 || v31 )
                {
                  v30 = SePrivilegePolicyCheck(&v125[5], &v125[1], 0LL, (__int64)v17, (__int64)&v149, v118);
                  v32 = *(_DWORD *)&v125[5];
                  v121 = *(_DWORD *)&v125[5];
                  v33 = v131;
                  LOBYTE(v31) = v133;
                  if ( !*(_DWORD *)&v125[5] && *(_DWORD *)&v125[1] )
                    v33 = 1;
LABEL_40:
                  if ( v30 < 0 && !v31 )
                  {
                    if ( a12 )
                    {
                      v79 = 0;
                      v134 = 0;
                      while ( v79 < v130 )
                      {
                        RtlWriteULongToUser((char *)Address + 4 * v79, (unsigned int)v30);
                        RtlWriteULongToUser((char *)v136 + 4 * v79++, 0LL);
                        v134 = v79;
                      }
                    }
                    else
                    {
                      RtlWriteULongToUser(Address, (unsigned int)v30);
                      RtlWriteULongToUser(v136, 0LL);
                    }
                    v127 = v30;
                    v16 = 0;
                    v126 = 0;
                    goto LABEL_106;
                  }
                  if ( v149 )
                  {
                    v72 = *(_DWORD *)v149;
                    v73 = 8LL;
                    if ( *(_DWORD *)v149 )
                      v74 = 12 * v72 + 8;
                    else
                      v74 = 8;
                    if ( v74 > v132 )
                    {
                      if ( v72 )
                        v73 = (unsigned int)(12 * v72 + 8);
                      RtlWriteULongToUser(v157, v73);
                      v16 = -1073741789;
                      ExFreePoolWithTag(v149, 0);
                      goto LABEL_106;
                    }
                    if ( v72 )
                      LODWORD(v73) = 12 * v72 + 8;
                    RtlCopyToUser(v150, v149, (unsigned int)v73);
                    ExFreePoolWithTag(v149, 0);
                  }
                  else
                  {
                    if ( v132 < 0x14 )
                    {
                      RtlWriteULongToUser(v157, 20LL);
                      v16 = -1073741789;
                      v126 = -1073741789;
                      goto LABEL_106;
                    }
                    v34 = (char *)v150;
                    RtlWriteULongToUser(v150, 0LL);
                    RtlWriteULongToUser(v34 + 4, 0LL);
                  }
                  if ( v163 )
                  {
                    v16 = SeCaptureSid(v163, v117, 1, (__int64)&v154);
                    if ( v16 < 0 )
                    {
                      v154 = 0LL;
                      goto LABEL_106;
                    }
                  }
                  SeCaptureSubjectContext(&SubjectContext);
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)v17 + 6), 1u);
                  v36 = v135;
                  IsOwner = SepTokenIsOwner(v17, v135);
                  v120 = IsOwner;
                  if ( !SepAllowAccessUponLogoff && (v17[50] & 0x20) == 0 )
                  {
                    v80 = *((_QWORD *)v17 + 27);
                    if ( v80 )
                    {
                      if ( (*(_DWORD *)(v80 + 40) & 0x20) != 0 )
                      {
                        if ( a12 )
                        {
                          v81 = 0;
                          v134 = 0;
                          while ( v81 < v130 )
                          {
                            RtlWriteULongToUser((char *)Address + 4 * v81, 3221225506LL);
                            RtlWriteULongToUser((char *)v136 + 4 * v81++, 0LL);
                            v134 = v81;
                          }
                        }
                        else
                        {
                          RtlWriteULongToUser(Address, 3221225506LL);
                          RtlWriteULongToUser(v136, 0LL);
                        }
                        v127 = -1073741790;
                        v16 = 0;
                        v126 = 0;
LABEL_214:
                        ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                        KeLeaveCriticalRegion();
                        SeReleaseSubjectContext(&SubjectContext);
                        goto LABEL_106;
                      }
                    }
                  }
                  if ( !SepRmEnforceCap )
                  {
LABEL_47:
                    if ( (v32 & 0x2060000) == 0 || !IsOwner )
                    {
LABEL_48:
                      if ( !v32 && (!v124 || v33) && ((v17[50] & 0x2000) != 0 || !v128) )
                      {
                        if ( a12 )
                        {
                          for ( i = 0; ; ++i )
                          {
                            v134 = i;
                            if ( i >= v130 )
                              break;
                            v87 = &v171[i];
                            v88 = &v172[i];
                            if ( *(_DWORD *)&v125[1] )
                            {
                              RtlWriteULongToUser(v87, 0LL);
                              v127 = 0;
                              v89 = *(unsigned int *)&v125[1];
                            }
                            else
                            {
                              RtlWriteULongToUser(v87, 3221225506LL);
                              v127 = -1073741790;
                              v89 = 0LL;
                            }
                            RtlWriteULongToUser(v88, v89);
                          }
                        }
                        else
                        {
                          if ( *(_DWORD *)&v125[1] )
                          {
                            RtlWriteULongToUser(Address, 0LL);
                            v127 = 0;
                            v90 = *(unsigned int *)&v125[1];
                          }
                          else
                          {
                            RtlWriteULongToUser(Address, 3221225506LL);
                            v127 = -1073741790;
                            v90 = 0LL;
                          }
                          RtlWriteULongToUser(v136, v90);
                        }
                        v16 = 0;
                        v126 = 0;
                        goto LABEL_214;
                      }
                      v38 = v141;
                      if ( !a12 )
                      {
                        v39 = &v162;
                        P = &v162;
                        v40 = &v161;
                        goto LABEL_51;
                      }
                      Pool2 = (int *)ExAllocatePool2(0x100uLL);
                      v39 = Pool2;
                      P = Pool2;
                      if ( Pool2 )
                      {
                        v40 = &Pool2[v38];
LABEL_51:
                        LODWORD(v175) = v128;
                        SepAccessCheck(
                          v135,
                          v154,
                          SubjectContext.PrimaryToken,
                          (_DWORD)v17,
                          v121,
                          v153,
                          v130,
                          (__int64)&v178,
                          *(_DWORD *)&v125[1],
                          v118,
                          (__int64)v39,
                          0LL,
                          (__int64)v40,
                          a12,
                          v120,
                          (__int64)&v175,
                          (__int64)&v144,
                          0LL,
                          0LL);
                        if ( !SepRmEnforceCap || *v40 < 0 || !v124 )
                          goto LABEL_52;
                        if ( a12 )
                        {
                          v91 = (char *)ExAllocatePool2(0x100uLL);
                          v147 = v91;
                          if ( !v91 )
                          {
                            ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                            KeLeaveCriticalRegion();
                            SeReleaseSubjectContext(&SubjectContext);
                            v16 = -1073741670;
LABEL_243:
                            v18 = v119;
                            goto LABEL_92;
                          }
                          v143 = (int *)&v91[4 * v141];
                        }
                        else
                        {
                          v147 = &v160;
                          v143 = &v159;
                        }
                        v92 = *v40;
                        v132 = *v40;
                        v93 = *v39;
                        v128 = *v39;
                        LOBYTE(v39) = 0;
                        v131 = (int)v39;
                        if ( !v130 )
                        {
LABEL_249:
                          for ( j = 0; ; j = v141 + 1 )
                          {
                            v141 = j;
                            if ( j >= v152[15] )
                              break;
                            v95 = *(_QWORD *)&v152[2 * j + 16];
                            if ( !*(_QWORD *)(v95 + 24) )
                              goto LABEL_287;
                            v96 = v144;
                            if ( !v144 )
                            {
                              LODWORD(v39) = (unsigned __int8)v39;
                              if ( (int)AuthzBasepInitializeResourceClaimsFromSacl(v148, &v144, 0LL, v41) < 0 )
                                LODWORD(v39) = 1;
                              v131 = (int)v39;
                              v96 = v144;
                            }
                            v97 = (_QWORD *)*((_QWORD *)v17 + 137);
                            v98 = v97 ? (void *)v97[75] : 0LL;
                            v99 = v97 ? (void *)v97[73] : 0LL;
                            v100 = v97 ? (void *)v97[74] : 0LL;
                            v101 = v97 ? (void *)v97[72] : 0LL;
                            v102 = AuthzBasepEvaluateAceCondition(
                                     v17,
                                     *((void **)v17 + 97),
                                     v96,
                                     v101,
                                     v100,
                                     v99,
                                     v98,
                                     *(_DWORD **)(v95 + 24),
                                     *(_DWORD *)(v95 + 16),
                                     1u,
                                     0,
                                     &v142);
                            v16 = v102;
                            if ( v142 == 1 )
                              goto LABEL_287;
                            if ( v102 < 0
                              || (v17[50] & 0x10) != 0
                              && ((v103 = (_QWORD *)*((_QWORD *)v17 + 137)) == 0LL
                                ? (v104 = 0LL)
                                : (v104 = (void *)v103[75]),
                                  !v103 ? (v105 = 0LL) : (v105 = (void *)v103[73]),
                                  !v103 ? (v106 = 0LL) : (v106 = (void *)v103[74]),
                                  !v103 ? (v107 = 0LL) : (v107 = (void *)v103[72]),
                                  v16 = AuthzBasepEvaluateAceCondition(
                                          v17,
                                          *((void **)v17 + 97),
                                          v144,
                                          v107,
                                          v106,
                                          v105,
                                          v104,
                                          *(_DWORD **)(v95 + 24),
                                          *(_DWORD *)(v95 + 16),
                                          1u,
                                          1u,
                                          &v142),
                                  v16 < 0) )
                            {
LABEL_242:
                              ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                              KeLeaveCriticalRegion();
                              SeReleaseSubjectContext(&SubjectContext);
                              goto LABEL_243;
                            }
                            LOBYTE(v39) = v131;
                            if ( (_BYTE)v131 || v142 == 1 )
                            {
LABEL_287:
                              v16 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                              if ( v16 < 0 )
                                goto LABEL_242;
                              if ( (*(_DWORD *)(v95 + 48) & 1) != 0 )
                              {
                                v108 = v121;
                                if ( (v121 & 0x2000000) == 0 )
                                  v108 = *(_DWORD *)&v125[1] | v121;
                                v109 = 0;
                              }
                              else
                              {
                                v108 = v121;
                                v109 = *(_DWORD *)&v125[1];
                              }
                              v110 = (int *)v147;
                              v111 = v130;
                              SepAccessCheck(
                                (unsigned int)SecurityDescriptor,
                                v154,
                                SubjectContext.PrimaryToken,
                                (_DWORD)v17,
                                v108,
                                (__int64)v158,
                                v130,
                                (__int64)&v178,
                                v109,
                                v118,
                                (__int64)v147,
                                0LL,
                                (__int64)v143,
                                a12,
                                v120,
                                (__int64)&v175,
                                (__int64)&v144,
                                0LL,
                                0LL);
                              if ( v122 )
                                v93 = *v110 & v128;
                              else
                                v93 = *v110;
                              v128 = v93;
                              if ( v93 )
                                v92 = *v143;
                              else
                                v92 = -1073741790;
                              v132 = v92;
                              v122 = 1;
                              if ( v158 )
                                SepMergeObjectTypeListAccesses(v153, v158, v111);
                              if ( v92 < 0 )
                                break;
                              LOBYTE(v39) = v131;
                            }
                            else
                            {
                              v92 = v132;
                              v93 = v128;
                            }
                          }
                          *v40 = v92;
                          v39 = (int *)P;
                          *(_DWORD *)P &= v93;
LABEL_52:
                          ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                          KeLeaveCriticalRegion();
                          SeReleaseSubjectContext(&SubjectContext);
                          v42 = v121;
                          if ( (v121 & 0x2000000) != 0 )
                          {
                            if ( !v133 || !*(_WORD *)((char *)&v176 + 5) && (v17[50] & 0x3000000) != 0x3000000 )
                            {
                              SepConstrainByMandatory(
                                (unsigned int)&v168,
                                v121,
                                (_DWORD)v39,
                                (_DWORD)v40,
                                0LL,
                                a12 != 0 ? v140 : 0);
                              v42 = v112;
                            }
                          }
                          else if ( v133 && !*(_WORD *)((char *)&v176 + 5) )
                          {
                            if ( (v17[50] & 0x3000000) != 0x3000000 || HIDWORD(v175) )
                            {
                              if ( a12 )
                              {
                                v116 = 0;
                                v134 = 0;
                                while ( v116 < v130 )
                                {
                                  RtlWriteULongToUser((char *)Address + 4 * v116, 3221225506LL);
                                  RtlWriteULongToUser((char *)v136 + 4 * v116++, 0LL);
                                  v134 = v116;
                                }
                              }
                              else
                              {
                                RtlWriteULongToUser(Address, 3221225506LL);
                                RtlWriteULongToUser(v136, 0LL);
                              }
                              v127 = -1073741790;
                              v16 = 0;
                              v126 = 0;
                              v32 = v121;
                              goto LABEL_106;
                            }
                            HIBYTE(v176) = 1;
                            v43 = a12;
                            if ( a12 )
                            {
                              v113 = v130;
                              if ( v130 )
                              {
                                v114 = *(_DWORD *)&v125[1] | v121;
                                v115 = v39;
                                do
                                {
                                  *(int *)((char *)v115 + (char *)v40 - (char *)v39) = 0;
                                  *v115++ = v114;
                                  --v113;
                                }
                                while ( v113 );
                              }
                            }
                            else
                            {
                              *v40 = 0;
                              *v39 = *(_DWORD *)&v125[1] | v121;
                            }
                            goto LABEL_55;
                          }
                          v43 = a12;
LABEL_55:
                          v18 = v119;
                          if ( (v42 & 0x2000000) != 0 )
                          {
                            v57 = v43 != 0 ? v140 : 0;
                            v18 = 0;
                            if ( v28 != -1 )
                            {
                              if ( v57 )
                              {
                                v62 = v57;
                                if ( (v42 & 0x2000000) != 0 )
                                {
                                  v63 = v40;
                                  v64 = (char *)v39 - (char *)v40;
                                  do
                                  {
                                    v65 = v28 & *(int *)((char *)v63 + v64);
                                    if ( v65 != *(int *)((char *)v63 + v64) )
                                    {
                                      v18 = 1;
                                      *(int *)((char *)v63 + v64) = v65;
                                      *v63 = v65 == 0 ? 0xC0000022 : 0;
                                    }
                                    ++v63;
                                    --v62;
                                  }
                                  while ( v62 );
                                }
                                else
                                {
                                  v66 = v39;
                                  do
                                  {
                                    v67 = v28 & *v66;
                                    if ( v67 != *v66 )
                                    {
                                      v18 = 1;
                                      *v66 = v67;
                                      *(int *)((char *)v66 + (char *)v40 - (char *)v39) = -1073741790;
                                    }
                                    ++v66;
                                    --v62;
                                  }
                                  while ( v62 );
                                }
                              }
                              else
                              {
                                v61 = v28 & *v39;
                                if ( v61 != *v39 )
                                {
                                  v18 = 1;
                                  *v39 = v61;
                                  if ( (v42 & 0x2000000) != 0 )
                                    *v40 = v61 == 0 ? 0xC0000022 : 0;
                                  else
                                    *v40 = -1073741790;
                                }
                              }
                            }
                            v58 = v43 != 0 ? v140 : 0;
                            v123 = 0;
                            v59 = v146;
                            if ( v146 != -1 )
                            {
                              if ( v58 )
                              {
                                v68 = v39;
                                v69 = (char *)v40 - (char *)v39;
                                v70 = v58;
                                do
                                {
                                  v71 = v59 & *v68;
                                  if ( v71 != *v68 )
                                  {
                                    v123 = 1;
                                    *v68 = v71;
                                    if ( (v42 & 0x2000000) != 0 )
                                      *(int *)((char *)v68 + v69) = v71 == 0 ? 0xC0000022 : 0;
                                    else
                                      *(int *)((char *)v68 + v69) = -1073741790;
                                  }
                                  ++v68;
                                  --v70;
                                }
                                while ( v70 );
                              }
                              else
                              {
                                v60 = v146 & *v39;
                                if ( v60 != *v39 )
                                {
                                  v123 = 1;
                                  *v39 = v60;
                                  if ( (v42 & 0x2000000) != 0 )
                                    *v40 = v60 == 0 ? 0xC0000022 : 0;
                                  else
                                    *v40 = -1073741790;
                                }
                              }
                            }
                          }
                          RtlWriteULongToUser(Address, (unsigned int)*v40);
                          v44 = v136;
                          RtlWriteULongToUser(v136, (unsigned int)*v39);
                          v127 = *v40;
                          if ( SepRmEnforceCap && v122 && *v40 >= 0 )
                          {
                            RtlWriteULongToUser(Address, (unsigned int)*v143);
                            RtlWriteULongToUser(v44, *(_DWORD *)v147 & (unsigned int)*v39);
                            v127 = *v143;
                          }
                          if ( a12 )
                          {
                            for ( k = 1; ; ++k )
                            {
                              v134 = k;
                              if ( k >= v130 )
                                break;
                              RtlWriteULongToUser((char *)Address + 4 * k, (unsigned int)v40[k]);
                              RtlWriteULongToUser((char *)v136 + 4 * k, *((unsigned int *)P + k));
                              if ( SepRmEnforceCap && v122 && v40[k] >= 0 )
                              {
                                RtlWriteULongToUser((char *)Address + 4 * k, (unsigned int)v143[k]);
                                RtlWriteULongToUser(
                                  (char *)v136 + 4 * k,
                                  (unsigned int)(*((_DWORD *)P + k) & *((_DWORD *)v147 + k)));
                              }
                            }
                          }
                          v16 = 0;
                          v126 = 0;
                          v32 = v121;
LABEL_69:
                          v46 = v135;
                          if ( v135 && v17 )
                          {
                            if ( v18 || v123 )
                              goto LABEL_186;
                            if ( HIDWORD(v175) || (v17[50] & 0x4000) == 0 )
                            {
LABEL_98:
                              if ( v16 >= 0
                                && !HIDWORD(v175)
                                && v127 < 0
                                && (v17[50] & 0x4000) != 0
                                && (unsigned __int8)SepLpacCausedAccessFailure(&v175, v32) )
                              {
                                SepLogLpacAccessFailure(v50, PreviousMode, v14, v51);
                              }
                              goto LABEL_70;
                            }
                            if ( v16 >= 0 )
                            {
                              if ( v127 >= 0 && !HIBYTE(v176) )
                                goto LABEL_98;
LABEL_186:
                              v77 = KeGetCurrentThread();
                              --v77->KernelApcDisable;
                              ExAcquireResourceSharedLite(*((PERESOURCE *)v17 + 6), 1u);
                              v78 = v164;
                              if ( !v125[0] )
                                v78 = *((_QWORD *)v17 + 138);
                              SeLogAccessFailure((char *)v17, 0LL, 0LL, v78, v46, v125[1] | v32, v127 >= 0);
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
                            if ( v147 )
                              ExFreePoolWithTag(v147, 0);
                          }
                          if ( v17 )
                            ObfDereferenceObjectWithTag(v17, 0x74726853u);
                          if ( v153 )
                            SeFreeCapturedObjectTypeList();
                          if ( v154 )
                          {
                            LOBYTE(v14) = 1;
                            LOBYTE(PreviousMode) = v118;
                            SeReleaseSid(v154, PreviousMode, v14);
                          }
                          if ( v135 )
                          {
                            LOBYTE(PreviousMode) = v118;
                            SeReleaseSecurityDescriptor(v135, PreviousMode, 0LL);
                          }
                          if ( v124 )
                            SepRmDereferenceCap(v152);
                          if ( v158 )
                            ExFreePoolWithTag(v158, 0);
                          SepFreeResourceInfo(v144);
                          return (unsigned int)v16;
                        }
                        v16 = SepCopyObjectTypeList(v153, v130, &v158);
                        v18 = v119;
                        if ( v16 >= 0 )
                        {
                          v92 = v132;
                          v93 = v128;
                          LOBYTE(v39) = v131;
                          goto LABEL_249;
                        }
                        goto LABEL_92;
                      }
                      ExReleaseResourceLite(*((PERESOURCE *)v17 + 6));
                      KeLeaveCriticalRegion();
                      SeReleaseSubjectContext(&SubjectContext);
                      v16 = -1073741670;
LABEL_106:
                      v18 = v119;
                      goto LABEL_69;
                    }
                    v53 = *(_WORD *)(v36 + 2);
                    if ( (v53 & 4) != 0 )
                    {
                      if ( v53 >= 0 )
                      {
                        v55 = *(_QWORD *)(v36 + 32);
LABEL_112:
                        if ( !(unsigned __int8)RtlpOwnerAcesPresent(0LL, v55) )
                        {
                          if ( (v32 & 0x2000000) != 0 )
                          {
                            v128 = 393216;
                            v56 = *(_DWORD *)&v125[1] | 0x60000;
                          }
                          else
                          {
                            v128 = v32 & 0x60000;
                            v56 = *(_DWORD *)&v125[1] | v32 & 0x60000;
                          }
                          *(_DWORD *)&v125[1] = v56;
                          v32 &= 0xFFF9FFFF;
                          v121 = v32;
                          *(_DWORD *)&v125[5] = v32;
                        }
                        goto LABEL_48;
                      }
                      v54 = *(unsigned int *)(v36 + 16);
                      if ( (_DWORD)v54 )
                      {
                        v55 = v36 + v54;
                        goto LABEL_112;
                      }
                    }
                    v55 = 0LL;
                    goto LABEL_112;
                  }
                  v75 = *(_WORD *)(v36 + 2);
                  if ( (v75 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
                  {
                    if ( v75 >= 0 )
                    {
                      v82 = *(_QWORD *)(v36 + 24);
                    }
                    else
                    {
                      v76 = *(unsigned int *)(v36 + 12);
                      if ( !(_DWORD)v76 )
                      {
                        v148 = 0LL;
                        goto LABEL_222;
                      }
                      v82 = v36 + v76;
                    }
                    v148 = v82;
                    if ( v82 )
                    {
                      ScopedPolicySid = (void *)SepGetScopedPolicySid(v82);
                      if ( ScopedPolicySid )
                      {
                        Cap = SepRmReferenceFindCap(ScopedPolicySid);
                        StackBase = v152;
                        if ( Cap < 0 )
                          StackBase = ExpPlatformBinaryLock.StackBase;
                        v152 = StackBase;
                        v124 = 1;
                      }
                    }
                  }
LABEL_222:
                  IsOwner = v120;
                  goto LABEL_47;
                }
              }
              v33 = v131;
              v32 = v121;
              goto LABEL_40;
            }
          }
        }
LABEL_159:
        v16 = -1073741703;
        goto LABEL_92;
      }
      ProbeForWrite(Address, 4LL * v130, 4u);
      ProbeForWrite(v136, 4LL * v130, 4u);
      v14 = v150;
    }
    if ( v14 && v132 >= 0x14 )
      RtlWriteULongToUser(v14, 0LL);
    RtlCopyFromUser(&v178, v21, 0x10uLL);
    v12 = v121;
    LOBYTE(PreviousMode) = v118;
    goto LABEL_13;
  }
  *a11 = 0;
  *v15 = v12;
  return 0LL;
}

/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x140A5E120
 * Callers:
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x140819A90 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140819B40 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x140A5DFE0 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckAndAuditAlarm @ 0x140A5E090 (NtAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1403000E0 (SepMandatoryIntegrityCheck.c)
 *     SeLogAccessFailure @ 0x1403006A0 (SeLogAccessFailure.c)
 *     SepFilterCheck @ 0x140302450 (SepFilterCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepExamineGlobalSaclEx @ 0x14031070C (SepExamineGlobalSaclEx.c)
 *     SePrivilegePolicyCheck @ 0x1403AB520 (SePrivilegePolicyCheck.c)
 *     SeCaptureObjectTypeList @ 0x1403AB7A0 (SeCaptureObjectTypeList.c)
 *     SepLocateTokenTrustLevel @ 0x1403AB850 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x1403AB8E0 (SepTrustLevelCheck.c)
 *     SepTokenIsOwner @ 0x1403AE5D0 (SepTokenIsOwner.c)
 *     SepFreeResourceInfo @ 0x1403AE8A0 (SepFreeResourceInfo.c)
 *     SepRmDereferenceCap @ 0x1403AF894 (SepRmDereferenceCap.c)
 *     SepGetScopedPolicySid @ 0x1403C8280 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403C82D8 (SepRmReferenceFindCap.c)
 *     RtlOwnerAcesPresent @ 0x140411B90 (RtlOwnerAcesPresent.c)
 *     SepMandatoryToDiscretionary @ 0x140440610 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x140445960 (SepFilterToDiscretionary.c)
 *     SeTokenIsRestricted @ 0x14045A300 (SeTokenIsRestricted.c)
 *     SepConstrainByConstraintMask @ 0x14045FC10 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x140461E00 (SepConstrainByMandatory.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140485224 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeIsPermissiveLearningModeEnabled @ 0x14049AE60 (SeIsPermissiveLearningModeEnabled.c)
 *     SepLpacCausedAccessFailure @ 0x1404A8EB0 (SepLpacCausedAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D5398 (SepBuildCapeSecurityDescriptor.c)
 *     SepLogLpacAccessFailure @ 0x1404EFB5C (SepLogLpacAccessFailure.c)
 *     SeFreeCapturedObjectTypeList @ 0x1404FBF88 (SeFreeCapturedObjectTypeList.c)
 *     SepCopyObjectTypeList @ 0x1405121F0 (SepCopyObjectTypeList.c)
 *     SepAccessCheck @ 0x1405196A0 (SepAccessCheck.c)
 *     SepMergeObjectTypeListAccesses @ 0x140534A20 (SepMergeObjectTypeListAccesses.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14090B910 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14090EA50 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepProbeAndCaptureString_U @ 0x140A5FD38 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140A5FE70 (SeCheckAuditPrivilege.c)
 *     SepExamineSaclEx @ 0x140A60770 (SepExamineSaclEx.c)
 *     SeReleaseSid @ 0x140A9E228 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAccessCheckAndAuditAlarm(
        void *a1,
        __int64 a2,
        HANDLE *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        void *a7,
        int a8,
        int a9,
        char a10,
        char *a11,
        int a12,
        __int128 *Address,
        volatile void *a14,
        volatile void *a15,
        _BYTE *a16,
        char a17)
{
  unsigned __int16 *v18; // rbx
  __int128 *v19; // r15
  signed int v20; // esi
  unsigned int *v21; // r14
  PVOID v22; // r12
  int ULongFromUser; // eax
  int v24; // eax
  _DWORD *PrimaryToken; // r15
  int v26; // r12d
  __int16 *v27; // rbx
  __int16 v28; // ax
  char *v29; // rcx
  __int64 v30; // rax
  char *v31; // rax
  char UCharFromUser; // al
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r9
  char v37; // di
  char v38; // al
  int v39; // ecx
  char IsOwner; // al
  __int64 v41; // rbx
  unsigned int *v42; // rdx
  char *v43; // rax
  __int64 v44; // r13
  char *v45; // r8
  char v46; // cl
  unsigned int v47; // ebx
  char *v48; // r10
  char *v49; // r15
  PERESOURCE *v50; // rbx
  int v51; // esi
  unsigned __int16 *v52; // rdi
  char v53; // r8
  char v54; // dl
  unsigned int *v55; // rbx
  char v56; // bl
  _DWORD *v57; // rdx
  _DWORD *v58; // rcx
  unsigned int v59; // ecx
  int v60; // edx
  char *v61; // r10
  char *v62; // r11
  int *v63; // r9
  unsigned int *v64; // r8
  _DWORD *v65; // r8
  _DWORD *v66; // r9
  __int64 v67; // rdx
  unsigned __int8 v68; // bl
  __int64 v69; // r15
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v74; // rcx
  unsigned int *v75; // rax
  char *v76; // rax
  int *v77; // r8
  unsigned int v78; // r15d
  int v79; // ecx
  __int64 v80; // rax
  ACL *v81; // rcx
  int v82; // r8d
  __int16 *v83; // rbx
  __int16 v84; // cx
  unsigned int v85; // edx
  __int64 v86; // rdx
  unsigned int v87; // eax
  __int64 v88; // rcx
  char v89; // si
  int v90; // r8d
  unsigned int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rbx
  char *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v96; // bl
  char v97; // di
  _DWORD *v98; // rax
  unsigned int v99; // eax
  int v100; // r9d
  unsigned __int16 *v101; // rsi
  int *v102; // rbx
  _DWORD *v103; // rdx
  unsigned __int64 *v104; // r8
  NTSTATUS v105; // eax
  int v106; // ecx
  int *v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rax
  int v110; // edx
  int *v111; // r8
  ACL *v112; // rcx
  void *ScopedPolicySid; // rax
  __int64 v114; // r8
  bool v115; // sf
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *StackBase; // rax
  int v117; // edx
  char v118; // al
  char v119; // cl
  __int64 v120; // rbx
  char *v121; // rax
  int *v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // r11
  PVOID v125; // r8
  int v126; // eax
  int v127; // ecx
  _QWORD *v128; // rax
  void *v129; // r10
  void *v130; // rdx
  void *v131; // rcx
  void *v132; // r9
  int v133; // eax
  _QWORD *v134; // rax
  void *v135; // r8
  void *v136; // rdx
  void *v137; // rcx
  void *v138; // r9
  unsigned int v139; // eax
  int *v140; // rcx
  char *v141; // rdx
  unsigned int *v142; // rdx
  unsigned __int64 *v143; // r8
  unsigned int v144; // r9d
  int Object; // [rsp+20h] [rbp-308h]
  char v146; // [rsp+30h] [rbp-2F8h]
  int v147; // [rsp+68h] [rbp-2C0h]
  unsigned __int8 PreviousMode; // [rsp+A0h] [rbp-288h]
  char v149; // [rsp+A1h] [rbp-287h] BYREF
  char v150; // [rsp+A2h] [rbp-286h]
  char v151; // [rsp+A3h] [rbp-285h] BYREF
  char v152; // [rsp+A4h] [rbp-284h]
  char v153; // [rsp+A5h] [rbp-283h]
  char v154; // [rsp+A6h] [rbp-282h]
  char v155; // [rsp+A7h] [rbp-281h] BYREF
  char v156; // [rsp+A8h] [rbp-280h] BYREF
  char v157; // [rsp+A9h] [rbp-27Fh] BYREF
  char v158; // [rsp+AAh] [rbp-27Eh] BYREF
  char v159; // [rsp+ABh] [rbp-27Dh]
  char v160; // [rsp+ACh] [rbp-27Ch]
  int v161; // [rsp+B0h] [rbp-278h] BYREF
  int v162; // [rsp+B8h] [rbp-270h]
  unsigned int v163; // [rsp+C0h] [rbp-268h]
  unsigned __int8 v164; // [rsp+C4h] [rbp-264h]
  __int64 v165; // [rsp+C8h] [rbp-260h] BYREF
  __int64 v166; // [rsp+D0h] [rbp-258h]
  PVOID v167; // [rsp+D8h] [rbp-250h] BYREF
  unsigned int v168; // [rsp+E0h] [rbp-248h] BYREF
  char v169; // [rsp+E4h] [rbp-244h] BYREF
  char v170[2]; // [rsp+E5h] [rbp-243h] BYREF
  char v171; // [rsp+E7h] [rbp-241h]
  char v172; // [rsp+E8h] [rbp-240h]
  bool v173; // [rsp+E9h] [rbp-23Fh]
  char v174; // [rsp+EAh] [rbp-23Eh]
  char v175; // [rsp+EBh] [rbp-23Dh]
  int v176; // [rsp+F0h] [rbp-238h]
  PVOID v177; // [rsp+F8h] [rbp-230h]
  char v178; // [rsp+100h] [rbp-228h]
  char v179; // [rsp+101h] [rbp-227h]
  int v180; // [rsp+104h] [rbp-224h]
  PVOID P; // [rsp+108h] [rbp-220h] BYREF
  unsigned int v182; // [rsp+110h] [rbp-218h] BYREF
  int v183; // [rsp+114h] [rbp-214h]
  int v184; // [rsp+118h] [rbp-210h]
  int v185; // [rsp+11Ch] [rbp-20Ch]
  int v186; // [rsp+120h] [rbp-208h]
  int v187; // [rsp+124h] [rbp-204h]
  int v188; // [rsp+128h] [rbp-200h]
  __int64 v189; // [rsp+130h] [rbp-1F8h]
  PACCESS_TOKEN Token; // [rsp+138h] [rbp-1F0h]
  char *v191; // [rsp+140h] [rbp-1E8h]
  unsigned int v192; // [rsp+148h] [rbp-1E0h]
  int v193; // [rsp+14Ch] [rbp-1DCh]
  int v194; // [rsp+150h] [rbp-1D8h] BYREF
  __int64 v195; // [rsp+158h] [rbp-1D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+160h] [rbp-1C8h] BYREF
  int *v197; // [rsp+180h] [rbp-1A8h]
  volatile void *v198; // [rsp+188h] [rbp-1A0h]
  volatile void *v199; // [rsp+190h] [rbp-198h]
  PVOID v200; // [rsp+198h] [rbp-190h]
  PVOID v201; // [rsp+1A0h] [rbp-188h] BYREF
  int v202; // [rsp+1A8h] [rbp-180h] BYREF
  unsigned int v203; // [rsp+1ACh] [rbp-17Ch]
  ACL *v204; // [rsp+1B0h] [rbp-178h]
  PVOID v205; // [rsp+1B8h] [rbp-170h] BYREF
  PVOID v206; // [rsp+1C0h] [rbp-168h] BYREF
  PVOID v207; // [rsp+1C8h] [rbp-160h] BYREF
  __int64 v208; // [rsp+1D0h] [rbp-158h] BYREF
  PVOID v209; // [rsp+1D8h] [rbp-150h] BYREF
  __int64 v210; // [rsp+1E0h] [rbp-148h] BYREF
  int v211[2]; // [rsp+1E8h] [rbp-140h] BYREF
  _BYTE *v212; // [rsp+1F0h] [rbp-138h]
  PVOID v213; // [rsp+1F8h] [rbp-130h] BYREF
  unsigned __int16 *v214; // [rsp+200h] [rbp-128h]
  __int64 v215; // [rsp+208h] [rbp-120h] BYREF
  int v216; // [rsp+210h] [rbp-118h] BYREF
  void *Src; // [rsp+218h] [rbp-110h]
  int v218; // [rsp+220h] [rbp-108h] BYREF
  void *v219; // [rsp+228h] [rbp-100h]
  __int64 v220; // [rsp+230h] [rbp-F8h]
  __int64 v221; // [rsp+238h] [rbp-F0h]
  PACCESS_TOKEN ClientToken; // [rsp+250h] [rbp-D8h]
  __int128 v223; // [rsp+258h] [rbp-D0h] BYREF
  __int64 v224; // [rsp+268h] [rbp-C0h]
  HANDLE *v225; // [rsp+270h] [rbp-B8h]
  __int64 v226; // [rsp+278h] [rbp-B0h]
  unsigned __int16 *v227; // [rsp+280h] [rbp-A8h]
  char *v228; // [rsp+288h] [rbp-A0h]
  _OWORD SecurityDescriptor[2]; // [rsp+290h] [rbp-98h] BYREF
  __int64 v230; // [rsp+2B0h] [rbp-78h]
  __int128 v231; // [rsp+2B8h] [rbp-70h] BYREF
  __int64 v232; // [rsp+2C8h] [rbp-60h]
  int v233; // [rsp+2D0h] [rbp-58h]
  __int128 v234; // [rsp+2D8h] [rbp-50h] BYREF

  v220 = a4;
  v219 = a1;
  v171 = a17;
  v176 = a12;
  Token = a1;
  v215 = a2;
  v225 = a3;
  v226 = a4;
  v221 = a5;
  v18 = a6;
  v214 = a6;
  v227 = a6;
  Src = a7;
  v228 = a11;
  v162 = a12;
  v203 = a12;
  v19 = Address;
  v199 = a14;
  v198 = a15;
  v212 = a16;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v20 = 0;
  v168 = 0;
  v177 = 0LL;
  v159 = 0;
  v161 = -1073741823;
  v216 = 0;
  v200 = 0LL;
  v218 = 0;
  v197 = 0LL;
  v188 = 0;
  v180 = 0;
  v174 = 0;
  v209 = 0LL;
  v167 = 0LL;
  v206 = 0LL;
  v21 = 0LL;
  v207 = 0LL;
  v166 = 0LL;
  v208 = 0LL;
  v195 = 0LL;
  v163 = 0;
  v182 = 0;
  v234 = 0LL;
  v22 = 0LL;
  P = 0LL;
  v149 = 0;
  v151 = 0;
  v157 = 0;
  v158 = 0;
  v175 = 0;
  v154 = 0;
  v152 = 0;
  v169 = 1;
  v170[0] = 0;
  v205 = 0LL;
  ClientToken = 0LL;
  v172 = 0;
  v223 = 0LL;
  v211[1] = 0;
  v204 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v230 = 0LL;
  v210 = 0LL;
  v160 = 0;
  v153 = 0;
  v150 = 0;
  v173 = 0;
  v186 = 999;
  LOWORD(v165) = 999;
  v231 = 0LL;
  v232 = 0LL;
  v233 = 0;
  v184 = 0;
  v178 = 0;
  v187 = 0;
  v201 = 0LL;
  v194 = 0;
  v183 = 0;
  v179 = 0;
  v155 = 0;
  v156 = 0;
  v213 = 0LL;
  v202 = -1;
  v211[0] = -1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v164 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( a9 )
  {
    if ( a9 != 1 )
    {
      v20 = -1073741811;
      goto LABEL_134;
    }
    v193 = 7;
  }
  else
  {
    v193 = 2;
  }
  if ( !a3 )
  {
    if ( !SubjectContext.ClientToken )
    {
      v20 = -1073741732;
      v69 = v166;
      v52 = (unsigned __int16 *)v167;
      v68 = PreviousMode;
      goto LABEL_104;
    }
    if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
    {
      v20 = -1073741659;
      v69 = v166;
      v52 = (unsigned __int16 *)v167;
      v68 = PreviousMode;
      goto LABEL_104;
    }
  }
  if ( a17 )
  {
    if ( !v162 )
    {
      v20 = -1073741811;
      v185 = -1073741811;
      goto LABEL_14;
    }
    if ( (unsigned int)v162 > 0x1000 )
    {
      v20 = -1073741811;
      v185 = -1073741811;
      goto LABEL_14;
    }
    ProbeForWrite(v198, 4LL * (unsigned int)v162, 4u);
    ProbeForWrite(v199, 4LL * (unsigned int)v162, 4u);
    v18 = v214;
  }
  else
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)v198);
    RtlWriteULongToUser(v198, ULongFromUser);
    v24 = RtlReadULongFromUser((unsigned int *)v199);
    RtlWriteULongToUser(v199, v24);
  }
  v224 = 1LL;
  ProbeForRead(v19, 1uLL, 4u);
  v234 = *v19;
LABEL_14:
  if ( v20 < 0 )
  {
LABEL_134:
    v69 = v166;
LABEL_135:
    v52 = (unsigned __int16 *)v167;
    v68 = PreviousMode;
    goto LABEL_104;
  }
  if ( a3 )
  {
    v205 = 0LL;
    v105 = ObReferenceObjectByHandle(*a3, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v205, 0LL);
    v20 = v105;
    if ( v105 < 0 )
    {
      v205 = 0LL;
      v173 = v105 != -1073741816;
      goto LABEL_134;
    }
    ClientToken = SubjectContext.ClientToken;
    SubjectContext.ClientToken = v205;
    v172 = 1;
  }
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  Token = PrimaryToken;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, PreviousMode) )
  {
    if ( (a10 & 1) == 0 )
    {
      v20 = -1073741727;
      goto LABEL_134;
    }
    v175 = 1;
  }
  v26 = a8;
  if ( (a8 & 0xF0000000) != 0 )
  {
    v20 = -1073741594;
    goto LABEL_141;
  }
  v20 = SeCaptureSecurityDescriptor(v18, PreviousMode, 1, 0, (unsigned __int16 **)&v207);
  if ( v20 < 0 )
  {
    v21 = 0LL;
    v22 = P;
    goto LABEL_134;
  }
  v21 = (unsigned int *)v207;
  if ( !v207 )
    goto LABEL_211;
  v27 = (__int16 *)((char *)v207 + 2);
  v214 = (unsigned __int16 *)((char *)v207 + 2);
  v28 = *((_WORD *)v207 + 1);
  if ( v28 < 0 )
  {
    v74 = *((unsigned int *)v207 + 1);
    if ( !(_DWORD)v74 )
      goto LABEL_211;
    v29 = (char *)v207 + v74;
  }
  else
  {
    v29 = (char *)*((_QWORD *)v207 + 1);
  }
  if ( !v29 )
    goto LABEL_211;
  if ( v28 < 0 )
  {
    v30 = *((unsigned int *)v207 + 2);
    if ( (_DWORD)v30 )
    {
      v31 = (char *)v207 + v30;
      goto LABEL_28;
    }
LABEL_211:
    v20 = -1073741703;
    v22 = P;
    v69 = v166;
    v52 = (unsigned __int16 *)v167;
    v68 = PreviousMode;
    goto LABEL_104;
  }
  v31 = (char *)*((_QWORD *)v207 + 2);
LABEL_28:
  if ( !v31 )
    goto LABEL_211;
  UCharFromUser = RtlReadUCharFromUser(v212);
  RtlWriteUCharToUser(v212, UCharFromUser);
  v20 = SepProbeAndCaptureString_U(v219, &v209);
  v185 = v20;
  if ( v20 >= 0 )
  {
    v20 = SepProbeAndCaptureString_U(v220, &v167);
    v185 = v20;
    if ( v20 >= 0 )
    {
      v20 = SepProbeAndCaptureString_U(v221, &v206);
      v185 = v20;
    }
  }
  if ( v20 < 0 )
    goto LABEL_141;
  if ( Src )
  {
    v20 = SeCaptureSid((char *)Src, PreviousMode, v33, v34, Object, 1, (PSID *)&v208);
    if ( v20 < 0 )
    {
      v69 = 0LL;
      v22 = P;
      goto LABEL_135;
    }
    v166 = v208;
  }
  v20 = SeCaptureObjectTypeList(v228, v162, PreviousMode, &v195);
  if ( v20 < 0 )
    goto LABEL_141;
  v20 = SepTrustLevelCheck(v35, (__int64)v21, &SubjectContext, 0LL, 0LL, 1, &v202);
  if ( v20 < 0 )
    goto LABEL_141;
  v20 = SepFilterToDiscretionary(&v202, v26);
  v37 = v155;
  if ( v20 < 0 )
    v37 = 1;
  v155 = v37;
  if ( v20 >= 0 )
  {
    LOBYTE(v36) = 1;
    v20 = SepFilterCheck((__int64)v21, &v201, (__int64)PrimaryToken, v36, v211);
    if ( v20 < 0 )
      goto LABEL_141;
    v20 = SepFilterToDiscretionary(v211, v26);
    v38 = v156;
    if ( v20 < 0 )
      v38 = 1;
    v156 = v38;
    if ( v20 >= 0 )
    {
      v20 = SepMandatoryIntegrityCheck(&v234, (__int64)v21, 0, (__int64)PrimaryToken, 1, (__int64)&v223);
      if ( v20 >= 0 )
      {
        v20 = SepMandatoryToDiscretionary(&v223, v26);
        if ( (v20 < 0 || (v26 & 0x2000000) != 0) && (PrimaryToken[50] & 0x4000) != 0 )
        {
          v39 = (unsigned __int8)v184;
          if ( HIDWORD(v223) <= 0x2000 )
            v39 = 1;
          v184 = v39;
        }
        else
        {
          LOBYTE(v39) = v184;
        }
        if ( v20 >= 0 || (_BYTE)v39 )
        {
          v20 = SePrivilegePolicyCheck(&a8, &v182, (__int64 *)&SubjectContext, 0LL, (__int64)&P, PreviousMode);
          v26 = a8;
          v163 = v182;
          if ( !a8 )
          {
            v106 = (unsigned __int8)v183;
            if ( v182 )
              v106 = 1;
            v183 = v106;
          }
        }
        goto LABEL_49;
      }
LABEL_141:
      v22 = P;
      v69 = v166;
      v52 = (unsigned __int16 *)v167;
      v68 = PreviousMode;
      goto LABEL_104;
    }
  }
LABEL_49:
  SeLockSubjectContext(&SubjectContext);
  if ( v20 < 0 && !(_BYTE)v184 )
  {
    v151 = 1;
    v161 = v20;
    if ( a17 )
    {
      v93 = (unsigned int)v162;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v177 = Pool2;
      if ( Pool2 )
      {
        v159 = 1;
        v49 = &Pool2[4 * v162];
        if ( v162 )
        {
          v107 = (int *)&Pool2[4 * v162];
          v108 = 0x3FFFFFFFFFFFFFFFLL * (unsigned int)v162;
          do
          {
            v107[v108] = v168;
            *v107++ = v161;
            --v93;
          }
          while ( v93 );
        }
        goto LABEL_62;
      }
      SeUnlockSubjectContext(&SubjectContext);
      v20 = -1073741670;
      v22 = P;
      v69 = v166;
      v52 = (unsigned __int16 *)v167;
      v68 = PreviousMode;
      goto LABEL_104;
    }
LABEL_257:
    v177 = &v168;
    v49 = (char *)&v161;
    goto LABEL_62;
  }
  IsOwner = SepTokenIsOwner((__int64)PrimaryToken, (__int64)v21);
  v150 = IsOwner;
  if ( !SepRmEnforceCap || (*v27 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_51;
  if ( *v27 >= 0 )
  {
    v112 = (ACL *)*((_QWORD *)v21 + 3);
  }
  else
  {
    v109 = v21[3];
    if ( !(_DWORD)v109 )
    {
      v204 = 0LL;
LABEL_286:
      IsOwner = v150;
      goto LABEL_51;
    }
    v112 = (ACL *)((char *)v21 + v109);
    IsOwner = v150;
  }
  v204 = v112;
  if ( v112 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid((__int64)v112);
    if ( ScopedPolicySid )
    {
      v115 = (int)SepRmReferenceFindCap(ScopedPolicySid, (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v210, v114) < 0;
      StackBase = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v210;
      if ( v115 )
        StackBase = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExpPlatformBinaryLock.StackBase;
      v210 = (__int64)StackBase;
      v20 = 0;
      v160 = 1;
    }
    goto LABEL_286;
  }
LABEL_51:
  if ( (v26 & 0x2060000) != 0 && IsOwner )
  {
    if ( (*v27 & 4) != 0 )
    {
      if ( *v27 >= 0 )
      {
        v81 = (ACL *)*((_QWORD *)v21 + 4);
      }
      else
      {
        v80 = v21[4];
        v81 = (_DWORD)v80 ? (ACL *)((char *)v21 + v80) : 0LL;
      }
    }
    else
    {
      v81 = 0LL;
    }
    if ( !RtlOwnerAcesPresent(v81) )
    {
      if ( (v26 & 0x2000000) != 0 )
      {
        v163 |= 0x60000u;
        v187 = 393216;
      }
      else
      {
        v163 |= v26 & 0x60000;
        v187 = v26 & 0x60000;
      }
      v26 &= 0xFFF9FFFF;
    }
  }
  if ( !v26 && (!v160 || (_BYTE)v183) && ((PrimaryToken[50] & 0x2000) != 0 || !v187) )
  {
    v168 = v163;
    if ( v163 )
    {
      v117 = 0;
      v118 = 0;
      v119 = 1;
    }
    else
    {
      v117 = -1073741790;
      v118 = 1;
      v119 = 0;
    }
    v149 = v119;
    v151 = v118;
    v161 = v117;
    if ( !a17 )
      goto LABEL_257;
    v120 = (unsigned int)v162;
    v121 = (char *)ExAllocatePool2(0x100uLL);
    v177 = v121;
    if ( v121 )
    {
      v159 = 1;
      v49 = &v121[4 * v162];
      if ( v162 )
      {
        v122 = (int *)&v121[4 * v162];
        v123 = 0x3FFFFFFFFFFFFFFFLL * (unsigned int)v162;
        do
        {
          v122[v123] = v168;
          *v122++ = v161;
          --v120;
        }
        while ( v120 );
      }
      goto LABEL_62;
    }
    goto LABEL_133;
  }
  v41 = v203;
  if ( a17 )
  {
    v75 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v42 = v75;
    v177 = v75;
    if ( !v75 )
    {
LABEL_133:
      v20 = -1073741670;
      SeUnlockSubjectContext(&SubjectContext);
      v22 = P;
      goto LABEL_134;
    }
    v159 = 1;
    v44 = 4 * v41;
    v43 = (char *)&v75[v41];
  }
  else
  {
    v42 = &v168;
    v177 = &v168;
    v43 = (char *)&v161;
    v44 = 4LL * v203;
  }
  v191 = v43;
  LODWORD(v231) = v187;
  SepAccessCheck(
    (__int64)v21,
    v166,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)Token,
    v26,
    (__int128 *)v195,
    v162,
    &v234,
    v163,
    PreviousMode,
    v42,
    0LL,
    (int *)v43,
    a17,
    v150,
    (__int64)&v231,
    (__int64)&v201,
    &v149,
    &v151);
  v45 = v191;
  if ( !SepRmEnforceCap || *(int *)v191 < 0 || !v160 )
    goto LABEL_56;
  if ( a17 )
  {
    v76 = (char *)ExAllocatePool2(0x100uLL);
    v200 = v76;
    if ( !v76 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v20 = -1073741670;
      goto LABEL_141;
    }
    v77 = (int *)&v76[v44];
  }
  else
  {
    v200 = &v216;
    v77 = &v218;
  }
  v197 = v77;
  if ( v162 )
  {
    v20 = SepCopyObjectTypeList(v195, v162, (__int64 *)&v213);
    if ( v20 < 0 )
      goto LABEL_141;
  }
  LOBYTE(v183) = 0;
  v78 = 0;
  v79 = v188;
  while ( 1 )
  {
    v203 = v79;
    if ( v78 >= *(_DWORD *)(v210 + 60) )
      break;
    v124 = *(_QWORD *)(v210 + 8LL * v78 + 64);
    v189 = v124;
    if ( *(_QWORD *)(v124 + 24) )
    {
      v125 = v201;
      if ( !v201 )
      {
        v126 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v204, &v201);
        v127 = (unsigned __int8)v183;
        if ( v126 < 0 )
          v127 = 1;
        v183 = v127;
        v125 = v201;
        v124 = v189;
      }
      v128 = (_QWORD *)*((_QWORD *)Token + 137);
      if ( v128 )
        v129 = (void *)v128[75];
      else
        v129 = 0LL;
      if ( v128 )
        v130 = (void *)v128[73];
      else
        v130 = 0LL;
      if ( v128 )
        v131 = (void *)v128[74];
      else
        v131 = 0LL;
      if ( v128 )
        v132 = (void *)v128[72];
      else
        v132 = 0LL;
      v133 = AuthzBasepEvaluateAceCondition(
               Token,
               *((void **)Token + 97),
               v125,
               v132,
               v131,
               v130,
               v129,
               *(_DWORD **)(v124 + 24),
               *(_DWORD *)(v124 + 16),
               1u,
               0,
               &v194);
      v20 = v133;
      if ( v194 != 1 )
      {
        if ( v133 < 0 )
          goto LABEL_141;
        if ( SeTokenIsRestricted(Token) )
        {
          v134 = (_QWORD *)*((_QWORD *)Token + 137);
          v135 = v134 ? (void *)v134[75] : 0LL;
          v136 = v134 ? (void *)v134[73] : 0LL;
          v137 = v134 ? (void *)v134[74] : 0LL;
          v138 = v134 ? (void *)v134[72] : 0LL;
          v20 = AuthzBasepEvaluateAceCondition(
                  Token,
                  *((void **)Token + 97),
                  v201,
                  v138,
                  v137,
                  v136,
                  v135,
                  *(_DWORD **)(v189 + 24),
                  *(_DWORD *)(v189 + 16),
                  1u,
                  1u,
                  &v194);
          if ( v20 < 0 )
            goto LABEL_141;
        }
        if ( !(_BYTE)v183 && v194 != 1 )
        {
          v79 = v188;
          goto LABEL_347;
        }
      }
      v124 = v189;
    }
    if ( (*(_DWORD *)(v124 + 48) & 1) != 0 )
    {
      if ( (v26 & 0x2000000) != 0 )
        v182 = v26;
      else
        v182 = v26 | v163;
      LODWORD(v189) = 0;
    }
    else
    {
      v182 = v26;
      LODWORD(v189) = v163;
    }
    v20 = SepBuildCapeSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 **)(v124 + 32), v204);
    if ( v20 < 0 )
      goto LABEL_141;
    SepAccessCheck(
      (__int64)SecurityDescriptor,
      v166,
      (__int64)SubjectContext.PrimaryToken,
      (__int64)SubjectContext.ClientToken,
      v182,
      (__int128 *)v213,
      v162,
      &v234,
      v189,
      PreviousMode,
      v200,
      0LL,
      v197,
      a17,
      v150,
      (__int64)&v231,
      (__int64)&v201,
      &v169,
      v170);
    v79 = *(_DWORD *)v200;
    if ( v153 )
      v79 = v203 & *(_DWORD *)v200;
    v188 = v79;
    if ( v213 )
    {
      SepMergeObjectTypeListAccesses(v195, (__int64)v213, v162);
      v79 = v188;
    }
    v153 = 1;
LABEL_347:
    ++v78;
  }
  v149 = v169;
  v151 = v170[0];
  *(_DWORD *)v200 &= v79;
  v45 = v191;
  if ( !v79 )
  {
    *v197 = -1073741790;
    v149 = 0;
    v151 = 1;
  }
LABEL_56:
  if ( (v26 & 0x2000000) != 0 )
  {
    if ( !(_BYTE)v184 || !*(_WORD *)((char *)&v232 + 5) && !SeIsPermissiveLearningModeEnabled((__int64)Token) )
    {
      v47 = v176;
      v99 = v176;
      if ( !a17 )
        v99 = 0;
      SepConstrainByMandatory((__int64)&v223, v26, (char *)v177, v45, 0LL, v99);
      v46 = a17;
      goto LABEL_60;
    }
LABEL_58:
    v46 = a17;
    goto LABEL_59;
  }
  if ( !(_BYTE)v184 || *(_WORD *)((char *)&v232 + 5) )
    goto LABEL_58;
  if ( SeIsPermissiveLearningModeEnabled((__int64)Token) && !HIDWORD(v231) )
  {
    HIBYTE(v232) = 1;
    v149 = 1;
    v151 = 0;
    v168 = v26;
    v161 = 0;
    goto LABEL_58;
  }
  v149 = 0;
  v151 = 1;
  v139 = 0;
  v168 = 0;
  v161 = v110;
  v46 = a17;
  if ( a17 && v162 )
  {
    v140 = v111;
    v48 = (char *)v177;
    v141 = (char *)((_BYTE *)v177 - (_BYTE *)v111);
    while ( 1 )
    {
      *(_DWORD *)&v141[(_QWORD)v140] = v139;
      *v140++ = v161;
      if ( !--v41 )
        break;
      v139 = v168;
    }
    v46 = a17;
    v47 = v176;
    goto LABEL_61;
  }
LABEL_59:
  v47 = v176;
LABEL_60:
  v48 = (char *)v177;
LABEL_61:
  v49 = v191;
  if ( (v26 & 0x2000000) != 0 )
  {
    if ( !v46 )
      v47 = 0;
    SepConstrainByConstraintMask(v202, v26, v48, v191, 0LL, v47, &v155);
    SepConstrainByConstraintMask(v211[0], v26, (char *)v177, v49, 0LL, v47, &v156);
    v37 = v155;
  }
LABEL_62:
  v50 = (PERESOURCE *)Token;
  if ( Token )
  {
    if ( v37 || v156 )
    {
LABEL_192:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(v50[6], 1u);
      v96 = v161 >= 0;
      v97 = v26 | v163;
      v98 = SepLocateTokenTrustLevel(&SubjectContext);
      v146 = v96;
      v50 = (PERESOURCE *)Token;
      SeLogAccessFailure((char *)Token, 0LL, 0LL, (ULONGLONG)v98, (__int64)v21, v97, v146);
      ExReleaseResourceLite(v50[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_67;
    }
    if ( HIDWORD(v231) || (*((_DWORD *)Token + 50) & 0x4000) == 0 )
      goto LABEL_67;
    if ( v20 >= 0 )
    {
      if ( v161 < 0 || HIBYTE(v232) )
        goto LABEL_192;
LABEL_67:
      if ( v20 >= 0
        && v161 < 0
        && !HIDWORD(v231)
        && ((_DWORD)v50[25] & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v231, v26) )
      {
        SepLogLpacAccessFailure();
      }
    }
  }
  if ( v175 )
  {
    v52 = (unsigned __int16 *)v167;
    goto LABEL_81;
  }
  v51 = v193;
  if ( v193 != 2 )
  {
    if ( v149 )
    {
      LOWORD(v186) = 152;
      v154 = SepAdtAuditThisEventWithContext(152LL, v149, 0, &SubjectContext);
    }
    if ( v151 )
    {
      LOWORD(v186) = 152;
      v53 = SepAdtAuditThisEventWithContext(152LL, 0, v151, &SubjectContext);
      v152 = v53;
      v52 = (unsigned __int16 *)v167;
      goto LABEL_75;
    }
    v52 = (unsigned __int16 *)v167;
    goto LABEL_162;
  }
  v52 = (unsigned __int16 *)v167;
  if ( v149 )
  {
    v154 = SepAdtAuditObjectAccessWithContext(
             0LL,
             (unsigned __int16 *)v167,
             v149,
             0,
             &SubjectContext,
             0,
             (__int16 *)&v165);
    v186 = (unsigned __int16)v165;
  }
  if ( !v151 )
  {
LABEL_162:
    v53 = v152;
    goto LABEL_75;
  }
  v53 = SepAdtAuditObjectAccessWithContext(0LL, v52, 0, v151, &SubjectContext, 0, (__int16 *)&v165);
  v152 = v53;
  v186 = (unsigned __int16)v165;
LABEL_75:
  v54 = v154;
  if ( v154 || v53 )
  {
    v82 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v82 = (int)SubjectContext.ClientToken;
    v83 = (__int16 *)v214;
    v84 = *v214;
    if ( (*v214 & 0x10) != 0 )
    {
      if ( v84 >= 0 )
      {
        v86 = *((_QWORD *)v21 + 3);
      }
      else
      {
        v85 = v21[3];
        if ( v85 )
          LODWORD(v86) = (_DWORD)v21 + v85;
        else
          LODWORD(v86) = 0;
      }
    }
    else
    {
      LODWORD(v86) = 0;
    }
    if ( (*v214 & 0x10) != 0 )
    {
      if ( v84 >= 0 )
      {
        v88 = *((_QWORD *)v21 + 3);
      }
      else
      {
        v87 = v21[3];
        if ( v87 )
          LODWORD(v88) = (_DWORD)v21 + v87;
        else
          LODWORD(v88) = 0;
      }
    }
    else
    {
      LODWORD(v88) = 0;
    }
    v163 |= v26;
    v89 = a17;
    SepExamineSaclEx(
      v88,
      v86,
      v82,
      v163,
      v195,
      v162,
      a17,
      (__int64)v49,
      (__int64)v177,
      v166,
      v150,
      (__int64)&v157,
      (__int64)&v158);
    v90 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v90 = (int)SubjectContext.ClientToken;
    if ( (*v83 & 0x10) != 0 )
    {
      if ( *v83 >= 0 )
      {
        v92 = *((_QWORD *)v21 + 3);
      }
      else
      {
        v91 = v21[3];
        if ( v91 )
          LODWORD(v92) = (_DWORD)v21 + v91;
        else
          LODWORD(v92) = 0;
      }
    }
    else
    {
      LODWORD(v92) = 0;
    }
    v55 = (unsigned int *)v177;
    SepExamineGlobalSaclEx(
      (__int64)v52,
      v92,
      v90,
      v163,
      v195,
      v162,
      v89,
      (__int64)v49,
      (__int64)v177,
      v166,
      v150,
      (__int64)&v157,
      &v158);
    v51 = v193;
    v54 = v154;
    v53 = v152;
  }
  else
  {
    v55 = (unsigned int *)v177;
  }
  if ( v157 || v158 )
  {
    v100 = (unsigned __int8)v180;
    if ( v149 )
      v100 = 1;
    v180 = v100;
    if ( v157 && v54 )
    {
      v142 = v55;
      if ( !v171 )
        v142 = 0LL;
      v143 = (unsigned __int64 *)&v215;
      if ( !v149 )
        v143 = 0LL;
      v144 = *v55;
      v147 = v51;
      v102 = (int *)P;
      v101 = (unsigned __int16 *)v206;
      SepAdtOpenObjectAuditAlarm(
        v186,
        (const int *)v209,
        v143,
        v52,
        (unsigned __int16 *)v206,
        (__int16 *)v21,
        SubjectContext.ClientToken,
        (_QWORD *)SubjectContext.PrimaryToken,
        v144,
        v144,
        (int *)P,
        1u,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v147,
        v195,
        v162,
        v142,
        0LL,
        0LL);
      v53 = v152;
    }
    else
    {
      v101 = (unsigned __int16 *)v206;
      v102 = (int *)P;
    }
    if ( v158 && v53 )
    {
      v103 = v177;
      if ( !v171 )
        v103 = 0LL;
      v104 = (unsigned __int64 *)&v215;
      if ( !v149 )
        v104 = 0LL;
      SepAdtOpenObjectAuditAlarm(
        v186,
        (const int *)v209,
        v104,
        v52,
        v101,
        (__int16 *)v21,
        SubjectContext.ClientToken,
        (_QWORD *)SubjectContext.PrimaryToken,
        v26,
        v26,
        v102,
        0,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v193,
        v195,
        v162,
        v103,
        0LL,
        0LL);
    }
    goto LABEL_81;
  }
  if ( !P || !v149 )
  {
LABEL_81:
    v56 = v180;
    goto LABEL_82;
  }
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)v209,
    v52,
    (unsigned __int16 *)v206,
    (__int64)&v215,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
    v26,
    (unsigned int *)P,
    v149);
  v56 = 0;
LABEL_82:
  SeUnlockSubjectContext(&SubjectContext);
  if ( a17 )
  {
    v59 = 0;
    v192 = 0;
    if ( v49 )
    {
      v65 = v199;
      v66 = v198;
      while ( v59 < v162 )
      {
        v67 = 4LL * v59;
        v66[(unsigned __int64)v67 / 4] = *(_DWORD *)&v49[v67];
        v65[(unsigned __int64)v67 / 4] = *(_DWORD *)((char *)v177 + v67);
        if ( SepRmEnforceCap && v153 && *(int *)&v49[v67] >= 0 )
        {
          v66[v59] = v197[v59];
          v65[v59] &= *((_DWORD *)v200 + v59);
        }
        v192 = ++v59;
      }
    }
    else
    {
      v60 = v161;
      v61 = (char *)v199;
      v62 = (char *)v198;
      while ( v59 < v162 )
      {
        v63 = (int *)&v62[4 * v59];
        *v63 = v60;
        v64 = (unsigned int *)&v61[4 * v59];
        *v64 = v168;
        if ( SepRmEnforceCap && v153 )
        {
          v60 = v161;
          if ( v161 >= 0 )
          {
            *v63 = v161;
            *v64 &= v168;
          }
        }
        else
        {
          v60 = v161;
        }
        v192 = ++v59;
      }
    }
  }
  else
  {
    v57 = v198;
    *(_DWORD *)v198 = v161;
    v58 = v199;
    *(_DWORD *)v199 = v168;
    if ( SepRmEnforceCap && v153 && v161 >= 0 )
    {
      *v57 = *v197;
      *v58 &= *(_DWORD *)v200;
    }
  }
  *v212 = v56;
  v20 = 0;
  v185 = 0;
  v22 = P;
  v68 = PreviousMode;
  v69 = v166;
LABEL_104:
  if ( v172 )
  {
    ObfDereferenceObject(v205);
    SubjectContext.ClientToken = ClientToken;
  }
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v68 == 1 && v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v209 )
    ExFreePoolWithTag(v209, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  if ( v69 )
  {
    LOBYTE(v71) = 1;
    SeReleaseSid(v69, v68, v71);
  }
  if ( v195 )
    SeFreeCapturedObjectTypeList((void *)v195);
  if ( v159 )
  {
    if ( v177 )
      ExFreePoolWithTag(v177, 0);
    if ( v200 )
      ExFreePoolWithTag(v200, 0);
  }
  if ( v160 )
    SepRmDereferenceCap(v210, v70, v71, v72);
  if ( v213 )
    ExFreePoolWithTag(v213, 0);
  SepFreeResourceInfo((char *)v201);
  if ( v20 == -1073741670 || v173 )
    SepAuditFailed(v20);
  return (unsigned int)v20;
}

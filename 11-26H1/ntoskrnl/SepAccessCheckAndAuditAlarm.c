/*
 * XREFs of SepAccessCheckAndAuditAlarm @ 0x1409F55D0
 * Callers:
 *     NtAccessCheckByTypeResultListAndAuditAlarm @ 0x140813C30 (NtAccessCheckByTypeResultListAndAuditAlarm.c)
 *     NtAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x140813CE0 (NtAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 *     NtAccessCheckByTypeAndAuditAlarm @ 0x1409F5490 (NtAccessCheckByTypeAndAuditAlarm.c)
 *     NtAccessCheckAndAuditAlarm @ 0x1409F5540 (NtAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     SePrivilegePolicyCheck @ 0x1402AAA40 (SePrivilegePolicyCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1402AC130 (SepLocateTokenTrustLevel.c)
 *     SepTrustLevelCheck @ 0x1402AC1C0 (SepTrustLevelCheck.c)
 *     SeCaptureObjectTypeList @ 0x1402AC9C0 (SeCaptureObjectTypeList.c)
 *     SepRmDereferenceCap @ 0x1402ACB20 (SepRmDereferenceCap.c)
 *     SepTokenIsOwner @ 0x1402AE190 (SepTokenIsOwner.c)
 *     SepFreeResourceInfo @ 0x1402AE460 (SepFreeResourceInfo.c)
 *     SepAccessCheck @ 0x1402B00F0 (SepAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5410 (SepMandatoryIntegrityCheck.c)
 *     SeLogAccessFailure @ 0x1402B59D0 (SeLogAccessFailure.c)
 *     SepFilterCheck @ 0x1402B7790 (SepFilterCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepExamineGlobalSaclEx @ 0x1402C5A70 (SepExamineGlobalSaclEx.c)
 *     SepGetScopedPolicySid @ 0x1403BE380 (SepGetScopedPolicySid.c)
 *     SepRmReferenceFindCap @ 0x1403BE3D8 (SepRmReferenceFindCap.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403CDD60 (AuthzBasepEvaluateAceCondition.c)
 *     RtlOwnerAcesPresent @ 0x14041A340 (RtlOwnerAcesPresent.c)
 *     SepMandatoryToDiscretionary @ 0x140447B20 (SepMandatoryToDiscretionary.c)
 *     SepFilterToDiscretionary @ 0x14044D830 (SepFilterToDiscretionary.c)
 *     SeTokenIsRestricted @ 0x140461340 (SeTokenIsRestricted.c)
 *     SepConstrainByConstraintMask @ 0x140466AB0 (SepConstrainByConstraintMask.c)
 *     SepConstrainByMandatory @ 0x140468750 (SepConstrainByMandatory.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14048B6E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SeIsPermissiveLearningModeEnabled @ 0x1404A1330 (SeIsPermissiveLearningModeEnabled.c)
 *     SepLpacCausedAccessFailure @ 0x1404AF820 (SepLpacCausedAccessFailure.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404DBCB8 (SepBuildCapeSecurityDescriptor.c)
 *     SepLogLpacAccessFailure @ 0x1404F654C (SepLogLpacAccessFailure.c)
 *     SeFreeCapturedObjectTypeList @ 0x1405026B8 (SeFreeCapturedObjectTypeList.c)
 *     SepCopyObjectTypeList @ 0x140518780 (SepCopyObjectTypeList.c)
 *     SepMergeObjectTypeListAccesses @ 0x140532580 (SepMergeObjectTypeListAccesses.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     SeLockSubjectContext @ 0x1408EE720 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408EE780 (SeUnlockSubjectContext.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14092FDE0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140932EA0 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1409F71E8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1409F7320 (SeCheckAuditPrivilege.c)
 *     SepExamineSaclEx @ 0x1409F7C30 (SepExamineSaclEx.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SeReleaseSid @ 0x140A9A0A8 (SeReleaseSid.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  _QWORD *v21; // r14
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
  char v36; // di
  char v37; // al
  int v38; // ecx
  char IsOwner; // al
  __int64 v40; // rbx
  unsigned int *v41; // rdx
  char *v42; // rax
  __int64 v43; // r13
  char *v44; // r8
  char v45; // cl
  unsigned int v46; // ebx
  char *v47; // r10
  char *v48; // r15
  PERESOURCE *v49; // rbx
  int v50; // esi
  unsigned __int16 *v51; // rdi
  char v52; // r8
  char v53; // dl
  int *v54; // rbx
  char v55; // bl
  _DWORD *v56; // rdx
  _DWORD *v57; // rcx
  unsigned int v58; // ecx
  int v59; // edx
  char *v60; // r10
  char *v61; // r11
  int *v62; // r9
  int *v63; // r8
  _DWORD *v64; // r8
  _DWORD *v65; // r9
  __int64 v66; // rdx
  unsigned __int8 v67; // bl
  __int64 v68; // r15
  __int64 v69; // r8
  __int64 v71; // rcx
  unsigned int *v72; // rax
  char *v73; // rax
  int *v74; // r8
  unsigned int v75; // r15d
  int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // rcx
  int v79; // r8d
  __int16 *v80; // rbx
  __int16 v81; // cx
  int v82; // edx
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rcx
  char v86; // si
  int v87; // r8d
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rbx
  char *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v93; // bl
  char v94; // di
  __int64 v95; // rdx
  ULONGLONG v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  unsigned int v99; // eax
  int v100; // r9d
  PVOID v101; // rsi
  PVOID v102; // rbx
  PVOID v103; // rdx
  __int64 *v104; // r8
  NTSTATUS v105; // eax
  int v106; // ecx
  int *v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rax
  int v110; // edx
  int *v111; // r8
  __int64 v112; // rcx
  void *ScopedPolicySid; // rax
  __int64 v114; // r8
  bool v115; // sf
  struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *ThreadLock; // rax
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
  int v139; // eax
  int *v140; // rcx
  char *v141; // rdx
  __int64 v142; // rdx
  __int64 *v143; // r8
  int v144; // r9d
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
  int v163; // [rsp+C0h] [rbp-268h]
  unsigned __int8 v164; // [rsp+C4h] [rbp-264h]
  __int64 v165; // [rsp+C8h] [rbp-260h] BYREF
  __int64 v166; // [rsp+D0h] [rbp-258h]
  PVOID v167; // [rsp+D8h] [rbp-250h] BYREF
  int v168; // [rsp+E0h] [rbp-248h] BYREF
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
  int v182; // [rsp+110h] [rbp-218h] BYREF
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
  __int64 v204; // [rsp+1B0h] [rbp-178h]
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
      v68 = v166;
      v51 = (unsigned __int16 *)v167;
      v67 = PreviousMode;
      goto LABEL_104;
    }
    if ( SubjectContext.ImpersonationLevel < SecurityIdentification )
    {
      v20 = -1073741659;
      v68 = v166;
      v51 = (unsigned __int16 *)v167;
      v67 = PreviousMode;
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
    v68 = v166;
LABEL_135:
    v51 = (unsigned __int16 *)v167;
    v67 = PreviousMode;
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
  v21 = v207;
  if ( !v207 )
    goto LABEL_211;
  v27 = (__int16 *)((char *)v207 + 2);
  v214 = (unsigned __int16 *)((char *)v207 + 2);
  v28 = *((_WORD *)v207 + 1);
  if ( v28 < 0 )
  {
    v71 = *((unsigned int *)v207 + 1);
    if ( !(_DWORD)v71 )
      goto LABEL_211;
    v29 = (char *)v207 + v71;
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
    v68 = v166;
    v51 = (unsigned __int16 *)v167;
    v67 = PreviousMode;
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
      v68 = 0LL;
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
  v36 = v155;
  if ( v20 < 0 )
    v36 = 1;
  v155 = v36;
  if ( v20 >= 0 )
  {
    v20 = SepFilterCheck((__int64)v21, &v201, (__int64)PrimaryToken, 1, v211);
    if ( v20 < 0 )
      goto LABEL_141;
    v20 = SepFilterToDiscretionary(v211, v26);
    v37 = v156;
    if ( v20 < 0 )
      v37 = 1;
    v156 = v37;
    if ( v20 >= 0 )
    {
      v20 = SepMandatoryIntegrityCheck(&v234, (__int64)v21, 0, (__int64)PrimaryToken, 1, (__int64)&v223);
      if ( v20 >= 0 )
      {
        v20 = SepMandatoryToDiscretionary(&v223, v26);
        if ( (v20 < 0 || (v26 & 0x2000000) != 0) && (PrimaryToken[50] & 0x4000) != 0 )
        {
          v38 = (unsigned __int8)v184;
          if ( HIDWORD(v223) <= 0x2000 )
            v38 = 1;
          v184 = v38;
        }
        else
        {
          LOBYTE(v38) = v184;
        }
        if ( v20 >= 0 || (_BYTE)v38 )
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
      v68 = v166;
      v51 = (unsigned __int16 *)v167;
      v67 = PreviousMode;
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
      v90 = (unsigned int)v162;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      v177 = Pool2;
      if ( Pool2 )
      {
        v159 = 1;
        v48 = &Pool2[4 * v162];
        if ( v162 )
        {
          v107 = (int *)&Pool2[4 * v162];
          v108 = 0x3FFFFFFFFFFFFFFFLL * (unsigned int)v162;
          do
          {
            v107[v108] = v168;
            *v107++ = v161;
            --v90;
          }
          while ( v90 );
        }
        goto LABEL_62;
      }
      SeUnlockSubjectContext(&SubjectContext);
      v20 = -1073741670;
      v22 = P;
      v68 = v166;
      v51 = (unsigned __int16 *)v167;
      v67 = PreviousMode;
      goto LABEL_104;
    }
LABEL_257:
    v177 = &v168;
    v48 = (char *)&v161;
    goto LABEL_62;
  }
  IsOwner = SepTokenIsOwner((__int64)PrimaryToken, (__int64)v21);
  v150 = IsOwner;
  if ( !BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) || (*v27 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_51;
  if ( *v27 >= 0 )
  {
    v112 = v21[3];
  }
  else
  {
    v109 = *((unsigned int *)v21 + 3);
    if ( !(_DWORD)v109 )
    {
      v204 = 0LL;
LABEL_286:
      IsOwner = v150;
      goto LABEL_51;
    }
    v112 = (__int64)v21 + v109;
    IsOwner = v150;
  }
  v204 = v112;
  if ( v112 )
  {
    ScopedPolicySid = (void *)SepGetScopedPolicySid(v112);
    if ( ScopedPolicySid )
    {
      v115 = (int)SepRmReferenceFindCap(ScopedPolicySid, (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&v210, v114) < 0;
      ThreadLock = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)v210;
      if ( v115 )
        ThreadLock = (struct _RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExpPlatformBinaryLock.ThreadLock;
      v210 = (__int64)ThreadLock;
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
        v78 = v21[4];
      }
      else
      {
        v77 = *((unsigned int *)v21 + 4);
        v78 = (_DWORD)v77 ? (__int64)v21 + v77 : 0LL;
      }
    }
    else
    {
      v78 = 0LL;
    }
    if ( !RtlOwnerAcesPresent(v78) )
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
      v48 = &v121[4 * v162];
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
  v40 = v203;
  if ( a17 )
  {
    v72 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v41 = v72;
    v177 = v72;
    if ( !v72 )
    {
LABEL_133:
      v20 = -1073741670;
      SeUnlockSubjectContext(&SubjectContext);
      v22 = P;
      goto LABEL_134;
    }
    v159 = 1;
    v43 = 4 * v40;
    v42 = (char *)&v72[v40];
  }
  else
  {
    v41 = (unsigned int *)&v168;
    v177 = &v168;
    v42 = (char *)&v161;
    v43 = 4LL * v203;
  }
  v191 = v42;
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
    v41,
    0LL,
    (int *)v42,
    a17,
    v150,
    (__int64)&v231,
    (__int64)&v201,
    &v149,
    &v151);
  v44 = v191;
  if ( !BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) || *(int *)v191 < 0 || !v160 )
    goto LABEL_56;
  if ( a17 )
  {
    v73 = (char *)ExAllocatePool2(0x100uLL);
    v200 = v73;
    if ( !v73 )
    {
      SeUnlockSubjectContext(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v20 = -1073741670;
      goto LABEL_141;
    }
    v74 = (int *)&v73[v43];
  }
  else
  {
    v200 = &v216;
    v74 = &v218;
  }
  v197 = v74;
  if ( v162 )
  {
    v20 = SepCopyObjectTypeList(v195, v162, (__int64 *)&v213);
    if ( v20 < 0 )
      goto LABEL_141;
  }
  LOBYTE(v183) = 0;
  v75 = 0;
  v76 = v188;
  while ( 1 )
  {
    v203 = v76;
    if ( v75 >= *(_DWORD *)(v210 + 60) )
      break;
    v124 = *(_QWORD *)(v210 + 8LL * v75 + 64);
    v189 = v124;
    if ( *(_QWORD *)(v124 + 24) )
    {
      v125 = v201;
      if ( !v201 )
      {
        v126 = AuthzBasepInitializeResourceClaimsFromSacl(v204, (__int64 *)&v201);
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
          v76 = v188;
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
      (unsigned int *)v200,
      0LL,
      v197,
      a17,
      v150,
      (__int64)&v231,
      (__int64)&v201,
      &v169,
      v170);
    v76 = *(_DWORD *)v200;
    if ( v153 )
      v76 = v203 & *(_DWORD *)v200;
    v188 = v76;
    if ( v213 )
    {
      SepMergeObjectTypeListAccesses(v195, (__int64)v213, v162);
      v76 = v188;
    }
    v153 = 1;
LABEL_347:
    ++v75;
  }
  v149 = v169;
  v151 = v170[0];
  *(_DWORD *)v200 &= v76;
  v44 = v191;
  if ( !v76 )
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
      v46 = v176;
      v99 = v176;
      if ( !a17 )
        v99 = 0;
      SepConstrainByMandatory((__int64)&v223, v26, (char *)v177, v44, 0LL, v99);
      v45 = a17;
      goto LABEL_60;
    }
LABEL_58:
    v45 = a17;
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
  v45 = a17;
  if ( a17 && v162 )
  {
    v140 = v111;
    v47 = (char *)v177;
    v141 = (char *)((_BYTE *)v177 - (_BYTE *)v111);
    while ( 1 )
    {
      *(_DWORD *)&v141[(_QWORD)v140] = v139;
      *v140++ = v161;
      if ( !--v40 )
        break;
      v139 = v168;
    }
    v45 = a17;
    v46 = v176;
    goto LABEL_61;
  }
LABEL_59:
  v46 = v176;
LABEL_60:
  v47 = (char *)v177;
LABEL_61:
  v48 = v191;
  if ( (v26 & 0x2000000) != 0 )
  {
    if ( !v45 )
      v46 = 0;
    SepConstrainByConstraintMask(v202, v26, v47, v191, 0LL, v46, &v155);
    SepConstrainByConstraintMask(v211[0], v26, (char *)v177, v48, 0LL, v46, &v156);
    v36 = v155;
  }
LABEL_62:
  v49 = (PERESOURCE *)Token;
  if ( Token )
  {
    if ( v36 || v156 )
    {
LABEL_192:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(v49[6], 1u);
      v93 = v161 >= 0;
      v94 = v26 | v163;
      v96 = SepLocateTokenTrustLevel(&SubjectContext, v95);
      v146 = v93;
      v49 = (PERESOURCE *)Token;
      SeLogAccessFailure((char *)Token, 0LL, 0LL, v96, (__int64)v21, v94, v146);
      ExReleaseResourceLite(v49[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v97, v98);
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
        && ((_DWORD)v49[25] & 0x4000) != 0
        && SepLpacCausedAccessFailure((__int64)&v231, v26) )
      {
        SepLogLpacAccessFailure();
      }
    }
  }
  if ( v175 )
  {
    v51 = (unsigned __int16 *)v167;
    goto LABEL_81;
  }
  v50 = v193;
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
      v52 = SepAdtAuditThisEventWithContext(152LL, 0, v151, &SubjectContext);
      v152 = v52;
      v51 = (unsigned __int16 *)v167;
      goto LABEL_75;
    }
    v51 = (unsigned __int16 *)v167;
    goto LABEL_162;
  }
  v51 = (unsigned __int16 *)v167;
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
    v52 = v152;
    goto LABEL_75;
  }
  v52 = SepAdtAuditObjectAccessWithContext(0LL, v51, 0, v151, &SubjectContext, 0, (__int16 *)&v165);
  v152 = v52;
  v186 = (unsigned __int16)v165;
LABEL_75:
  v53 = v154;
  if ( v154 || v52 )
  {
    v79 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v79 = (int)SubjectContext.ClientToken;
    v80 = (__int16 *)v214;
    v81 = *v214;
    if ( (*v214 & 0x10) != 0 )
    {
      if ( v81 >= 0 )
      {
        v83 = v21[3];
      }
      else
      {
        v82 = *((_DWORD *)v21 + 3);
        if ( v82 )
          LODWORD(v83) = (_DWORD)v21 + v82;
        else
          LODWORD(v83) = 0;
      }
    }
    else
    {
      LODWORD(v83) = 0;
    }
    if ( (*v214 & 0x10) != 0 )
    {
      if ( v81 >= 0 )
      {
        v85 = v21[3];
      }
      else
      {
        v84 = *((_DWORD *)v21 + 3);
        if ( v84 )
          LODWORD(v85) = (_DWORD)v21 + v84;
        else
          LODWORD(v85) = 0;
      }
    }
    else
    {
      LODWORD(v85) = 0;
    }
    v163 |= v26;
    v86 = a17;
    SepExamineSaclEx(
      v85,
      v83,
      v79,
      v163,
      v195,
      v162,
      a17,
      (__int64)v48,
      (__int64)v177,
      v166,
      v150,
      (__int64)&v157,
      (__int64)&v158);
    v87 = (int)SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      v87 = (int)SubjectContext.ClientToken;
    if ( (*v80 & 0x10) != 0 )
    {
      if ( *v80 >= 0 )
      {
        v89 = v21[3];
      }
      else
      {
        v88 = *((_DWORD *)v21 + 3);
        if ( v88 )
          LODWORD(v89) = (_DWORD)v21 + v88;
        else
          LODWORD(v89) = 0;
      }
    }
    else
    {
      LODWORD(v89) = 0;
    }
    v54 = (int *)v177;
    SepExamineGlobalSaclEx(
      (__int64)v51,
      v89,
      v87,
      v163,
      v195,
      v162,
      v86,
      (__int64)v48,
      (__int64)v177,
      v166,
      v150,
      (__int64)&v157,
      &v158);
    v50 = v193;
    v53 = v154;
    v52 = v152;
  }
  else
  {
    v54 = (int *)v177;
  }
  if ( v157 || v158 )
  {
    v100 = (unsigned __int8)v180;
    if ( v149 )
      v100 = 1;
    v180 = v100;
    if ( v157 && v53 )
    {
      v142 = (__int64)v54;
      if ( !v171 )
        v142 = 0LL;
      v143 = &v215;
      if ( !v149 )
        LODWORD(v143) = 0;
      v144 = *v54;
      v147 = v50;
      v102 = P;
      v101 = v206;
      SepAdtOpenObjectAuditAlarm(
        (unsigned __int16)v186,
        (int)v209,
        (int)v143,
        (int)v51,
        (__int64)v206,
        v21,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        v144,
        v144,
        (__int64)P,
        1,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v147,
        v195,
        v162,
        v142,
        0LL,
        0LL);
      v52 = v152;
    }
    else
    {
      v101 = v206;
      v102 = P;
    }
    if ( v158 && v52 )
    {
      v103 = v177;
      if ( !v171 )
        v103 = 0LL;
      v104 = &v215;
      if ( !v149 )
        LODWORD(v104) = 0;
      SepAdtOpenObjectAuditAlarm(
        (unsigned __int16)v186,
        (int)v209,
        (int)v104,
        (int)v51,
        (__int64)v101,
        v21,
        (__int64)SubjectContext.ClientToken,
        (__int64)SubjectContext.PrimaryToken,
        v26,
        v26,
        (__int64)v102,
        0,
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v193,
        v195,
        v162,
        (__int64)v103,
        0LL,
        0LL);
    }
    goto LABEL_81;
  }
  if ( !P || !v149 )
  {
LABEL_81:
    v55 = v180;
    goto LABEL_82;
  }
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)v209,
    v51,
    (unsigned __int16 *)v206,
    (__int64)&v215,
    (__int64)SubjectContext.ClientToken,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
    v26,
    (unsigned int *)P,
    v149);
  v55 = 0;
LABEL_82:
  SeUnlockSubjectContext(&SubjectContext);
  if ( a17 )
  {
    v58 = 0;
    v192 = 0;
    if ( v48 )
    {
      v64 = v199;
      v65 = v198;
      while ( v58 < v162 )
      {
        v66 = 4LL * v58;
        v65[(unsigned __int64)v66 / 4] = *(_DWORD *)&v48[v66];
        v64[(unsigned __int64)v66 / 4] = *(_DWORD *)((char *)v177 + v66);
        if ( BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) && v153 && *(int *)&v48[v66] >= 0 )
        {
          v65[v58] = v197[v58];
          v64[v58] &= *((_DWORD *)v200 + v58);
        }
        v192 = ++v58;
      }
    }
    else
    {
      v59 = v161;
      v60 = (char *)v199;
      v61 = (char *)v198;
      while ( v58 < v162 )
      {
        v62 = (int *)&v61[4 * v58];
        *v62 = v59;
        v63 = (int *)&v60[4 * v58];
        *v63 = v168;
        if ( BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) && v153 )
        {
          v59 = v161;
          if ( v161 >= 0 )
          {
            *v62 = v161;
            *v63 &= v168;
          }
        }
        else
        {
          v59 = v161;
        }
        v192 = ++v58;
      }
    }
  }
  else
  {
    v56 = v198;
    *(_DWORD *)v198 = v161;
    v57 = v199;
    *(_DWORD *)v199 = v168;
    if ( BYTE1(SepRmCapTableLock.Header.WaitListHead.Flink) && v153 && v161 >= 0 )
    {
      *v56 = *v197;
      *v57 &= *(_DWORD *)v200;
    }
  }
  *v212 = v55;
  v20 = 0;
  v185 = 0;
  v22 = P;
  v67 = PreviousMode;
  v68 = v166;
LABEL_104:
  if ( v172 )
  {
    ObfDereferenceObject(v205);
    SubjectContext.ClientToken = ClientToken;
  }
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v67 == 1 && v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v209 )
    ExFreePoolWithTag(v209, 0);
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  if ( v206 )
    ExFreePoolWithTag(v206, 0);
  if ( v68 )
  {
    LOBYTE(v69) = 1;
    SeReleaseSid(v68, v67, v69);
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
    SepRmDereferenceCap(v210);
  if ( v213 )
    ExFreePoolWithTag(v213, 0);
  SepFreeResourceInfo((char *)v201);
  if ( v20 == -1073741670 || v173 )
    SepAuditFailed(v20);
  return (unsigned int)v20;
}

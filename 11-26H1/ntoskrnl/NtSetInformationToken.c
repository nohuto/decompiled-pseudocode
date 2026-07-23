/*
 * XREFs of NtSetInformationToken @ 0x140816660
 * Callers:
 *     DifNtSetInformationTokenWrapper @ 0x1406904E0 (DifNtSetInformationTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140404F5C (SepRemoveAceFromTokenDefaultDacl.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x140441DE0 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 *     SepLinkLogonSessions @ 0x1404DA5DC (SepLinkLogonSessions.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14050BACC (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x14063DF54 (Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepModifyTokenPolicyCounter @ 0x140777FAC (SepModifyTokenPolicyCounter.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SeSetPrivateNameSpaceToken @ 0x140817D70 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x140817FAC (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x140818018 (SepFreePrimaryGroup.c)
 *     SepCaptureAuditPolicy @ 0x1408194F0 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1408199C4 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1408199E8 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x14081BA88 (SepRemoveTokenLogonSession.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeCaptureAcl @ 0x1409E0A20 (SeCaptureAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1409E21E8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x1409E439C (SeReleaseAcl.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A90EB0 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SeReleaseSid @ 0x140A9E228 (SeReleaseSid.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A9F480 (SepDereferenceLowBoxNumberEntry.c)
 *     RtlQueryElevationFlags @ 0x140AADFA0 (RtlQueryElevationFlags.c)
 *     SepIdAssignableAsOwner @ 0x140AAE6BC (SepIdAssignableAsOwner.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140AC5698 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x140AD1140 (SepShouldSetDelinkFlags.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADA87C (SeSetMandatoryPolicyToken.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepExpandDynamic @ 0x140AE3A68 (SepExpandDynamic.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140AF2C7C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepAppendDefaultDacl @ 0x140AFC098 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140AFD348 (SepFreeDefaultDacl.c)
 *     SepStopReferencingLogonSession @ 0x140B223FC (SepStopReferencingLogonSession.c)
 *     SeSetVirtualizationToken @ 0x140B33E8C (SeSetVirtualizationToken.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  char v8; // r12
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // rsi
  NTSTATUS v16; // ebx
  void *v17; // rax
  int v18; // eax
  struct _KTHREAD *v19; // rax
  struct _KTHREAD *v20; // rax
  char v21; // bl
  struct _KTHREAD *v22; // rax
  struct _KTHREAD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  ULONG v26; // ebx
  struct _KTHREAD *v27; // rax
  ULONG ULongFromUser; // ebx
  void *v29; // rbx
  NTSTATUS v30; // edi
  int v31; // r15d
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  void *v36; // rcx
  int v37; // ecx
  __int64 v38; // rdx
  void *v39; // rax
  void *v40; // rcx
  unsigned __int8 *v41; // rdi
  unsigned int v42; // ebx
  struct _KTHREAD *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // eax
  __int64 v46; // r8
  __int64 v47; // rdx
  void *v48; // rax
  unsigned int v49; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PSID v51; // rdi
  NTSTATUS v52; // ebx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rdx
  void *ULong64FromUser; // rax
  ULONG v58; // ebx
  struct _KTHREAD *v59; // rax
  unsigned int v60; // eax
  int v61; // ecx
  __int32 v62; // ebx
  __int32 v63; // ebx
  __int32 v64; // ebx
  __int32 v65; // ebx
  int v66; // ebx
  int v67; // ebx
  int v68; // ebx
  int v69; // ebx
  ULONG v70; // edx
  unsigned int v71; // ecx
  ULONG v72; // eax
  struct _KTHREAD *v73; // rax
  ULONG v74; // ebx
  int v75; // edi
  PSID v76; // rcx
  int **v77; // rbx
  char ShouldSetDelinkFlags; // r15
  struct _KTHREAD *v79; // rcx
  ULONG v80; // eax
  struct _KTHREAD *v81; // rax
  void *v82; // rcx
  void *v83; // rcx
  struct _KTHREAD *v84; // rax
  __int64 v85; // rdi
  _WORD *v86; // rbx
  int v87; // ecx
  ULONG v88; // edi
  struct _KTHREAD *v89; // rax
  PSID *TokenIntegrity; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  PSID v93; // r13
  int v94; // r12d
  ULONG v95; // ebx
  ULONG v96; // eax
  ULONG v97; // eax
  struct _KTHREAD *v98; // rax
  PACCESS_TOKEN PrimaryToken; // rbx
  void *v100; // r12
  int v101; // ecx
  ULONG v102; // eax
  struct _ERESOURCE *v103; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  PSID *v105; // r12
  void *v106; // rbx
  int v107; // ecx
  ULONG v108; // eax
  int v109; // ebx
  char v110; // bl
  int v111; // eax
  int v112; // eax
  int v113; // ecx
  void *v114; // rcx
  void *v115; // rcx
  PSID v116; // rbx
  int v117; // ecx
  void *v118; // rcx
  void *v119; // rcx
  __int64 v120; // rdx
  ULONG v121; // eax
  signed __int32 v122[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v125; // [rsp+38h] [rbp-D0h]
  _RTL_ELEVATION_FLAGS *v126; // [rsp+40h] [rbp-C8h]
  char v127; // [rsp+50h] [rbp-B8h]
  PSID Sid1; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Token; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v130; // [rsp+68h] [rbp-A0h] BYREF
  NTSTATUS v131; // [rsp+70h] [rbp-98h]
  _RTL_ELEVATION_FLAGS Flags[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v133; // [rsp+80h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-80h] BYREF
  ULONG v135; // [rsp+A8h] [rbp-60h]
  ULONG v136; // [rsp+ACh] [rbp-5Ch]
  ULONG v137; // [rsp+B0h] [rbp-58h]
  ULONG v138; // [rsp+B4h] [rbp-54h]
  ULONG v139; // [rsp+B8h] [rbp-50h]
  ULONG v140; // [rsp+BCh] [rbp-4Ch]
  ULONG v141; // [rsp+C0h] [rbp-48h]
  ULONG v142; // [rsp+C4h] [rbp-44h]
  ULONG v143; // [rsp+C8h] [rbp-40h]
  void *v144; // [rsp+D0h] [rbp-38h]
  void *v145; // [rsp+D8h] [rbp-30h]
  __int64 v146; // [rsp+118h] [rbp+10h] BYREF

  v8 = 0;
  v127 = 0;
  LODWORD(v133) = 0;
  Sid1 = 0LL;
  v130 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v146) = PreviousMode;
  if ( (unsigned int)TokenInformationClass > (TokenIsAppSilo|TokenOwner)
    || (v10 = 0x1024802F8B5070LL, !_bittest64(&v10, TokenInformationClass)) )
  {
    if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      return -1073741821;
    Flags[0].Flags = 0;
    if ( RtlQueryElevationFlags(Flags) < 0 || (Flags[0].Flags & 0x18) != 0x10 || TokenInformationClass != -2 )
      return -1073741821;
  }
  if ( !(unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline()
    && TokenInformationClass == (TokenIsAppSilo|TokenOwner) )
  {
    return -1073741821;
  }
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken || TokenInformationClass == -2 )
  {
    v11 = 136;
  }
  Token = 0LL;
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v15 = (char *)Token;
  *(_QWORD *)&Flags[0].Flags = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenVirtualizationAllowed )
    {
      if ( TokenInformationClass != TokenVirtualizationAllowed )
      {
        switch ( TokenInformationClass )
        {
          case -2:
            if ( TokenInformationLength != 8 )
              goto LABEL_27;
            if ( PreviousMode )
              ULong64FromUser = (void *)RtlReadULong64FromUser(TokenInformation);
            else
              ULong64FromUser = *(void **)TokenInformation;
            v145 = ULong64FromUser;
            v18 = SepOneWayLinkLogonSessions((__int64)v15, ULong64FromUser, PreviousMode);
            goto LABEL_66;
          case 4:
            if ( TokenInformationLength < 8 )
              goto LABEL_109;
            if ( PreviousMode )
              v48 = (void *)RtlReadULong64FromUser(TokenInformation);
            else
              v48 = *(void **)TokenInformation;
            Sid1 = v48;
            v16 = SeCaptureSid(v48, (int)Object, 1, (__int64)&Sid1);
            v131 = v16;
            if ( v16 < 0 )
              goto LABEL_114;
            v49 = 0;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
            _InterlockedOr(v122, 0);
            v51 = Sid1;
            while ( 1 )
            {
              if ( v49 >= *((_DWORD *)v15 + 31) )
              {
                _InterlockedOr(v122, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                KeLeaveCriticalRegion();
                ObfDereferenceObject(v15);
                LOBYTE(v55) = 1;
                LOBYTE(v56) = PreviousMode;
                SeReleaseSid(v51, v56, v55);
                return -1073741734;
              }
              if ( RtlEqualSid(v51, *(PSID *)(*((_QWORD *)v15 + 19) + 16LL * v49)) )
                break;
              ++v49;
            }
            if ( (unsigned __int8)SepIdAssignableAsOwner(v15, v49) )
            {
              *((_DWORD *)v15 + 36) = v49;
              v8 = 1;
              v127 = 1;
              v52 = 0;
            }
            else
            {
              v52 = -1073741734;
            }
            if ( v8 )
            {
              v130 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              *((_QWORD *)v15 + 7) = v130;
            }
            _InterlockedOr(v122, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
            KeLeaveCriticalRegion();
            ObfDereferenceObject(v15);
            LOBYTE(v53) = 1;
            LOBYTE(v54) = PreviousMode;
            SeReleaseSid(v51, v54, v53);
            return v52;
          case 5:
            if ( TokenInformationLength >= 8 )
            {
              if ( PreviousMode )
                v39 = (void *)RtlReadULong64FromUser(TokenInformation);
              else
                v39 = *(void **)TokenInformation;
              Sid1 = v39;
              v16 = SeCaptureSid(v39, (int)Object, 1, (__int64)&Sid1);
              v131 = v16;
              v40 = v15;
              if ( v16 >= 0 )
              {
                v41 = (unsigned __int8 *)Sid1;
                if ( (unsigned __int8)SepIdAssignableAsGroup(v15, Sid1) )
                {
                  v42 = 4 * v41[1] + 8;
                  v43 = KeGetCurrentThread();
                  --v43->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                  _InterlockedOr(v122, 0);
                  v44 = *((_QWORD *)v15 + 23);
                  v45 = v42;
                  if ( v44 )
                  {
                    v45 = v42 + *(unsigned __int16 *)(v44 + 2);
                    v42 = v45;
                  }
                  if ( v45 <= *((_DWORD *)v15 + 34) )
                  {
                    v16 = SepExpandDynamic(v15, v42);
                    if ( v16 >= 0 )
                    {
                      SepFreePrimaryGroup(v15);
                      SepAppendPrimaryGroup(v15, v41);
                      *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                      _InterlockedOr(v122, 0);
                      ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                      KeLeaveCriticalRegion();
                      v16 = 0;
                    }
                    else
                    {
                      _InterlockedOr(v122, 0);
                      ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                      KeLeaveCriticalRegion();
                    }
                  }
                  else
                  {
                    _InterlockedOr(v122, 0);
                    ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                    KeLeaveCriticalRegion();
                    v16 = -1073741671;
                  }
                }
                else
                {
                  v16 = -1073741733;
                }
                ObfDereferenceObject(v15);
                LOBYTE(v46) = 1;
                LOBYTE(v47) = PreviousMode;
                SeReleaseSid(v41, v47, v46);
                return v16;
              }
              goto LABEL_115;
            }
            goto LABEL_109;
          case 6:
            if ( TokenInformationLength < 8 )
              goto LABEL_109;
            if ( PreviousMode )
              v29 = (void *)RtlReadULong64FromUser(TokenInformation);
            else
              v29 = *(void **)TokenInformation;
            v130 = (__int64)v29;
            if ( v29 )
            {
              v30 = SeCaptureAcl(v29, 1, (int)HandleInformation, (__int64)&v130, (__int64)&v133);
              v131 = v30;
              v31 = v133;
              v29 = (void *)v130;
            }
            else
            {
              v31 = 0;
              LODWORD(v133) = 0;
              v30 = 0;
              v131 = 0;
            }
            if ( v30 < 0 )
            {
              ObfDereferenceObject(v15);
              return v30;
            }
            v32 = KeGetCurrentThread();
            --v32->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
            _InterlockedOr(v122, 0);
            v33 = v31 + 4 * ((unsigned int)*(unsigned __int8 *)(*((_QWORD *)v15 + 21) + 1LL) + 2);
            if ( (unsigned int)v33 <= *((_DWORD *)v15 + 34) )
            {
              v30 = SepExpandDynamic(v15, v33);
              if ( v30 >= 0 )
              {
                v36 = (void *)*((_QWORD *)v15 + 23);
                if ( !v36
                  || (v30 = SeCaptureAcl(v36, 1, (int)HandleInformation, (__int64)&Sid1, (__int64)&v146), v30 >= 0) )
                {
                  SepFreeDefaultDacl(v15);
                  if ( v29 )
                    SepAppendDefaultDacl(v15, v29);
                  SeTokenDefaultDaclChangedAuditAlarm(v37, (_DWORD)v15, (_DWORD)TokenHandle, (_DWORD)Sid1, (__int64)v29);
                  *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v122, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                  KeLeaveCriticalRegion();
                  ObfDereferenceObject(v15);
                  if ( v29 )
                  {
                    LOBYTE(v38) = PreviousMode;
                    SeReleaseAcl(v29, v38);
                  }
                  if ( Sid1 )
                    SeReleaseAcl(Sid1, 0LL);
                  return 0;
                }
              }
              _InterlockedOr(v122, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
              KeLeaveCriticalRegion();
              ObfDereferenceObject(v15);
              if ( v29 )
              {
                LOBYTE(v35) = PreviousMode;
                SeReleaseAcl(v29, v35);
              }
              return v30;
            }
            _InterlockedOr(v122, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
            KeLeaveCriticalRegion();
            ObfDereferenceObject(v15);
            if ( v29 )
            {
              LOBYTE(v34) = PreviousMode;
              SeReleaseAcl(v29, v34);
            }
            return -1073741671;
          case 12:
            if ( TokenInformationLength == 4 )
            {
              if ( PreviousMode )
                ULongFromUser = RtlReadULongFromUser((unsigned int *)TokenInformation);
              else
                ULongFromUser = *(_DWORD *)TokenInformation;
              v136 = ULongFromUser;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                v18 = SeSetSessionIdToken(v15, ULongFromUser);
                goto LABEL_66;
              }
              goto LABEL_64;
            }
LABEL_109:
            ObfDereferenceObject(Token);
            return -1073741820;
          default:
            switch ( TokenInformationClass )
            {
              case TokenSessionReference:
                if ( TokenInformationLength != 4 )
                  goto LABEL_27;
                if ( PreviousMode )
                  v26 = RtlReadULongFromUser((unsigned int *)TokenInformation);
                else
                  v26 = *(_DWORD *)TokenInformation;
                v135 = v26;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_64;
                if ( !v26 )
                {
                  v27 = KeGetCurrentThread();
                  --v27->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                  _InterlockedOr(v122, 0);
                  if ( (*((_DWORD *)v15 + 50) & 0x20) == 0 )
                  {
                    if ( SeTokenLeakTracking )
                      SepRemoveTokenLogonSession(v15);
                    v16 = SepStopReferencingLogonSession(v15);
                    if ( v16 < 0 )
                      goto LABEL_114;
                  }
                  goto LABEL_57;
                }
                break;
              case TokenAuditPolicy:
                v130 = 0LL;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_64;
                v20 = KeGetCurrentThread();
                --v20->KernelApcDisable;
                ExAcquireResourceSharedLite(*((PERESOURCE *)v15 + 6), 1u);
                v21 = v15[119];
                ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                KeLeaveCriticalRegion();
                if ( !v21 )
                {
                  if ( !TokenInformation )
                  {
                    v22 = KeGetCurrentThread();
                    --v22->KernelApcDisable;
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                    _InterlockedOr(v122, 0);
                    v15[119] = 1;
                    *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v122, 0);
                    ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                    KeLeaveCriticalRegion();
                    v16 = 0;
                    goto LABEL_114;
                  }
                  v16 = SepCaptureAuditPolicy(TokenInformation, (int)Object, (int)HandleInformation, (__int64)&v130);
                  v131 = v16;
                  if ( v16 < 0 )
                    goto LABEL_114;
                  v23 = KeGetCurrentThread();
                  --v23->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                  _InterlockedOr(v122, 0);
                  v15[119] = 2;
                  v24 = v130;
                  *(_OWORD *)(v15 + 88) = *(_OWORD *)v130;
                  *((_QWORD *)v15 + 13) = *(_QWORD *)(v24 + 16);
                  *((_DWORD *)v15 + 28) = *(_DWORD *)(v24 + 24);
                  *((_WORD *)v15 + 58) = *(_WORD *)(v24 + 28);
                  v15[118] = *(_BYTE *)(v24 + 30);
                  *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v122, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                  KeLeaveCriticalRegion();
                  SepModifyTokenPolicyCounter((__int64)(v15 + 88), 1);
                  ObfDereferenceObject(v15);
                  LOBYTE(v25) = PreviousMode;
                  SepReleaseAuditPolicy(v24, v25);
                  return 0;
                }
                break;
              case TokenOrigin:
                v130 = 0LL;
                if ( TokenInformationLength != 8 )
                  goto LABEL_27;
                if ( PreviousMode )
                  v130 = RtlReadULong64FromUser(TokenInformation);
                else
                  RtlCopyVolatileMemory(&v130, TokenInformation, 8uLL);
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v19 = KeGetCurrentThread();
                  --v19->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                  _InterlockedOr(v122, 0);
                  if ( !*((_QWORD *)v15 + 28) )
                    *((_QWORD *)v15 + 28) = v130;
                  goto LABEL_39;
                }
LABEL_64:
                v16 = -1073741727;
                goto LABEL_114;
              case TokenLinkedToken:
                if ( TokenInformationLength != 8 )
                {
LABEL_27:
                  v16 = -1073741820;
LABEL_114:
                  v40 = v15;
LABEL_115:
                  ObfDereferenceObject(v40);
                  return v16;
                }
                if ( PreviousMode )
                  v17 = (void *)RtlReadULong64FromUser(TokenInformation);
                else
                  v17 = *(void **)TokenInformation;
                v144 = v17;
                v18 = SepLinkLogonSessions((__int64)v15, v17, PreviousMode);
LABEL_66:
                v16 = v18;
                goto LABEL_114;
              default:
                return -1073741811;
            }
            v16 = -1073741811;
            goto LABEL_114;
        }
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_27;
      if ( PreviousMode )
        v58 = RtlReadULongFromUser((unsigned int *)TokenInformation);
      else
        v58 = *(_DWORD *)TokenInformation;
      v137 = v58;
      if ( !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.SListFaultAddress, PreviousMode) )
        goto LABEL_64;
      v59 = KeGetCurrentThread();
      --v59->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
      _InterlockedOr(v122, 0);
      v60 = *((_DWORD *)v15 + 50) & 0xFFFFFDFF;
      v61 = *((_DWORD *)v15 + 50) | 0x200;
      goto LABEL_139;
    }
    v62 = TokenInformationClass - 24;
    if ( !v62 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_27;
      if ( PreviousMode )
        v121 = RtlReadULongFromUser((unsigned int *)TokenInformation);
      else
        v121 = *(_DWORD *)TokenInformation;
      v143 = v121;
      SeSetVirtualizationToken(v15, v121);
      goto LABEL_58;
    }
    v63 = v62 - 1;
    if ( v63 )
    {
      v64 = v63 - 1;
      if ( !v64 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_27;
        if ( PreviousMode )
          v58 = RtlReadULongFromUser((unsigned int *)TokenInformation);
        else
          v58 = *(_DWORD *)TokenInformation;
        v142 = v58;
        if ( v58 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_64;
        v84 = KeGetCurrentThread();
        --v84->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
        _InterlockedOr(v122, 0);
        v60 = *((_DWORD *)v15 + 50) & 0xFFFFEFFF;
        v61 = *((_DWORD *)v15 + 50) | 0x1000;
LABEL_139:
        if ( !v58 )
          v61 = v60;
        *((_DWORD *)v15 + 50) = v61;
        *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v122, 0);
        ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
        KeLeaveCriticalRegion();
LABEL_142:
        ObfDereferenceObject(v15);
        return 0;
      }
      v65 = v64 - 1;
      if ( !v65 )
      {
        LODWORD(Sid1) = 0;
        if ( TokenInformationLength != 4 )
          goto LABEL_27;
        if ( PreviousMode )
          LODWORD(Sid1) = RtlReadULongFromUser((unsigned int *)TokenInformation);
        else
          RtlCopyVolatileMemory(&Sid1, TokenInformation, 4uLL);
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( v15[204] )
          {
            v16 = -1073741525;
            goto LABEL_114;
          }
          v18 = SeSetMandatoryPolicyToken(v15, &Sid1);
          goto LABEL_66;
        }
        goto LABEL_64;
      }
      v66 = v65 - 2;
      if ( !v66 )
      {
        v16 = 0;
        if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_27;
          if ( PreviousMode )
            v80 = RtlReadULongFromUser((unsigned int *)TokenInformation);
          else
            v80 = *(_DWORD *)TokenInformation;
          v141 = v80;
          if ( v80 )
          {
            v16 = -1073741637;
            goto LABEL_114;
          }
          if ( !_bittest((const signed __int32 *)v15 + 50, 0xEu) )
          {
            v16 = -1073700352;
            goto LABEL_114;
          }
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v81 = KeGetCurrentThread();
            --v81->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
            _InterlockedOr(v122, 0);
            SepRemoveAceFromTokenDefaultDacl((__int64)v15, *((void **)v15 + 98));
            *((_DWORD *)v15 + 50) &= ~0x4000u;
            v82 = (void *)*((_QWORD *)v15 + 98);
            if ( v82 )
            {
              ExFreePoolWithTag(v82, 0);
              *((_QWORD *)v15 + 98) = 0LL;
            }
            v83 = (void *)*((_QWORD *)v15 + 99);
            if ( v83 )
            {
              ExFreePoolWithTag(v83, 0);
              *((_QWORD *)v15 + 99) = 0LL;
              *((_DWORD *)v15 + 200) = 0;
              memset_0(v15 + 808, 0, 0x110uLL);
            }
            if ( *((_QWORD *)v15 + 135) )
            {
              SepDereferenceLowBoxNumberEntry(*((unsigned int *)v15 + 30));
              *((_QWORD *)v15 + 135) = 0LL;
            }
            if ( *((_QWORD *)v15 + 136) )
            {
              SepDereferenceCachedHandlesEntryInternal((struct _KTHREAD *)(*((_QWORD *)v15 + 27) + 96LL));
              *((_QWORD *)v15 + 136) = 0LL;
            }
            _InterlockedOr(v122, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
            KeLeaveCriticalRegion();
            goto LABEL_114;
          }
          goto LABEL_64;
        }
        goto LABEL_154;
      }
      v67 = v66 - 10;
      if ( !v67 )
      {
        Sid1 = 0LL;
        if ( TokenInformation && TokenInformationLength >= 0x10 )
        {
          LOBYTE(v13) = PreviousMode;
          v75 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v13, &Sid1);
          if ( v75 >= 0 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              v75 = -1073741727;
            if ( v75 >= 0 )
            {
              v77 = (int **)Sid1;
              ShouldSetDelinkFlags = SepShouldSetDelinkFlags(*((_QWORD *)Sid1 + 1), *(_QWORD *)Sid1);
              v79 = KeGetCurrentThread();
              --v79->KernelApcDisable;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
              _InterlockedOr(v122, 0);
              v75 = AuthzBasepSetSecurityAttributesToken(*((_DWORD **)v15 + 97), v77[1], (__int64)*v77);
              if ( v75 >= 0 && ShouldSetDelinkFlags )
                *((_DWORD *)v15 + 50) |= 0x20000u;
              *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v122, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
              KeLeaveCriticalRegion();
              v76 = v77;
            }
            else
            {
              v76 = Sid1;
            }
            SepReleaseTokenSecurityAttributesAndOperationsInformation(v76);
          }
          v16 = v75;
          goto LABEL_114;
        }
        goto LABEL_27;
      }
      v68 = v67 - 3;
      if ( !v68 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_27;
        if ( PreviousMode )
          v74 = RtlReadULongFromUser((unsigned int *)TokenInformation);
        else
          v74 = *(_DWORD *)TokenInformation;
        v140 = v74;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          v18 = SeSetPrivateNameSpaceToken(v15, v74);
          goto LABEL_66;
        }
        goto LABEL_64;
      }
      v69 = v68 - 3;
      if ( v69 )
      {
        if ( v69 != 7 )
          return -1073741811;
        if ( (unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_27;
          if ( PreviousMode )
            v70 = RtlReadULongFromUser((unsigned int *)TokenInformation);
          else
            v70 = *(_DWORD *)TokenInformation;
          v138 = v70;
          v71 = *((_DWORD *)v15 + 292) | 1;
          if ( !v70 )
            v71 = *((_DWORD *)v15 + 292) & 0xFFFFFFFE;
          *((_DWORD *)v15 + 292) = v71;
          goto LABEL_142;
        }
LABEL_154:
        v16 = -1073741821;
        goto LABEL_114;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_64;
      if ( TokenInformationLength != 4 )
        goto LABEL_27;
      if ( PreviousMode )
        v72 = RtlReadULongFromUser((unsigned int *)TokenInformation);
      else
        v72 = *(_DWORD *)TokenInformation;
      v139 = v72;
      if ( !v72 && (*((_DWORD *)v15 + 50) & 0x80000) != 0 )
      {
        v73 = KeGetCurrentThread();
        --v73->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
        _InterlockedOr(v122, 0);
        *((_DWORD *)v15 + 50) &= ~0x80000u;
LABEL_39:
        *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_57:
        _InterlockedOr(v122, 0);
        ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
        KeLeaveCriticalRegion();
      }
LABEL_58:
      v16 = 0;
      goto LABEL_114;
    }
    LOBYTE(v146) = 0;
    if ( TokenInformationLength < 0x10 )
      goto LABEL_27;
    v126 = Flags;
    v125 = (__int64)&v130;
    LOBYTE(v14) = PreviousMode;
    v18 = SeCaptureSidAndAttributesArray(TokenInformation, 1LL, v14, 0LL, 0);
    v131 = v18;
    if ( v18 < 0 )
      goto LABEL_66;
    v85 = v130;
    v86 = *(_WORD **)v130;
    if ( *(_DWORD *)(*(_QWORD *)v130 + 2LL) == *(_DWORD *)((char *)SeUntrustedMandatorySid + 2)
      && v86[3] == *((_WORD *)SeUntrustedMandatorySid + 3) )
    {
      v87 = *RtlSubAuthorityCountSid(*(PSID *)v130);
      if ( !(_BYTE)v87 )
      {
        v88 = 0;
        goto LABEL_229;
      }
      v88 = *RtlSubAuthoritySid(v86, v87 - 1);
      if ( v88 <= 0x4000 )
      {
LABEL_229:
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
        _InterlockedOr(v122, 0);
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)v15);
        Sid1 = TokenIntegrity;
        if ( !TokenIntegrity )
        {
          v16 = -1073740730;
LABEL_293:
          _InterlockedOr(v122, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v15);
          LOBYTE(v120) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v130, v120);
          return v16;
        }
        v93 = *TokenIntegrity;
        v94 = *RtlSubAuthorityCountSid(*TokenIntegrity);
        v95 = v94 - 1;
        if ( (_BYTE)v94 )
          v96 = *RtlSubAuthoritySid(v93, v95);
        else
          v96 = 0;
        if ( v88 <= v96 )
        {
          if ( (_BYTE)v94 )
            v97 = *RtlSubAuthoritySid(v93, v95);
          else
            v97 = 0;
          if ( v88 < v97 )
          {
            Flags[0].Flags = 0;
            RtlQueryElevationFlags(Flags);
            if ( (Flags[0].Flags & 0x18) == 0x10 && (_BYTE)v94 && *RtlSubAuthoritySid(v93, v95) >= 0x3000 )
            {
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              SeCaptureSubjectContext(&SubjectContext);
              v98 = KeGetCurrentThread();
              --v98->KernelApcDisable;
              PrimaryToken = SubjectContext.PrimaryToken;
              ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
              v100 = *(void **)SepLocateTokenIntegrity((__int64)PrimaryToken);
              v101 = *RtlSubAuthorityCountSid(v100);
              if ( (_BYTE)v101 )
                v102 = *RtlSubAuthoritySid(v100, v101 - 1);
              else
                v102 = 0;
              v103 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
              if ( v102 < 0x3000 )
              {
                ExReleaseResourceLite(v103);
                KeLeaveCriticalRegion();
                SeReleaseSubjectContext(&SubjectContext);
                v16 = -1073741790;
                goto LABEL_293;
              }
              ExReleaseResourceLite(v103);
              KeLeaveCriticalRegion();
              SeReleaseSubjectContext(&SubjectContext);
            }
            *((_DWORD *)v15 + 50) &= ~0x1000u;
          }
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v16 = -1073741727;
            goto LABEL_293;
          }
          if ( v15[204] )
          {
            v16 = -1073741525;
            goto LABEL_293;
          }
        }
        IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
        v105 = (PSID *)Sid1;
        if ( IsEnabledDeviceUsageNoInline
          && ((v106 = *(void **)Sid1, v107 = *RtlSubAuthorityCountSid(*(PSID *)Sid1), (_BYTE)v107)
            ? (v108 = *RtlSubAuthoritySid(v106, v107 - 1))
            : (v108 = 0),
              v88 >= v108) )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          SeLockSubjectContext(&SubjectContext);
          v109 = *((_DWORD *)SubjectContext.PrimaryToken + 50);
          SeUnlockSubjectContext(&SubjectContext);
          SeReleaseSubjectContext(&SubjectContext);
          v110 = (v109 & 0x4000) == 0;
        }
        else
        {
          v110 = v146;
        }
        v111 = *((unsigned __int8 *)*v105 + 1);
        if ( !(_BYTE)v111 )
        {
          v16 = -1073741811;
          goto LABEL_293;
        }
        *RtlSubAuthoritySid(*v105, v111 - 1) = v88;
        if ( v88 < 0x3000 )
        {
          *((_QWORD *)v15 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
          *((_QWORD *)v15 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
        }
        if ( v88 >= 0x2000 )
        {
          v112 = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
          v113 = *((_DWORD *)v15 + 50) & 0x4000;
          if ( v112 )
          {
            if ( v113 && v110 )
            {
              SepRemoveAceFromTokenDefaultDacl((__int64)v15, *((void **)v15 + 98));
              *((_DWORD *)v15 + 50) &= ~0x4000u;
              v114 = (void *)*((_QWORD *)v15 + 98);
              if ( v114 )
              {
                ExFreePoolWithTag(v114, 0);
                *((_QWORD *)v15 + 98) = 0LL;
              }
              v115 = (void *)*((_QWORD *)v15 + 99);
              if ( v115 )
              {
                ExFreePoolWithTag(v115, 0);
                *((_QWORD *)v15 + 99) = 0LL;
                *((_DWORD *)v15 + 200) = 0;
                memset_0(v15 + 808, 0, 0x110uLL);
              }
              if ( *((_QWORD *)v15 + 135) )
              {
                SepDereferenceLowBoxNumberEntry(*((unsigned int *)v15 + 30));
                *((_QWORD *)v15 + 135) = 0LL;
              }
              if ( *((_QWORD *)v15 + 136) )
              {
                SepDereferenceCachedHandlesEntryInternal((struct _KTHREAD *)(*((_QWORD *)v15 + 27) + 96LL));
                *((_QWORD *)v15 + 136) = 0LL;
              }
            }
            v116 = *v105;
            v117 = *RtlSubAuthorityCountSid(*v105);
            if ( !(_BYTE)v117 || *RtlSubAuthoritySid(v116, v117 - 1) < 0x2000 )
              goto LABEL_291;
          }
          else if ( v113 )
          {
            SepRemoveAceFromTokenDefaultDacl((__int64)v15, *((void **)v15 + 98));
            *((_DWORD *)v15 + 50) &= ~0x4000u;
            v118 = (void *)*((_QWORD *)v15 + 98);
            if ( v118 )
            {
              ExFreePoolWithTag(v118, 0);
              *((_QWORD *)v15 + 98) = 0LL;
            }
            v119 = (void *)*((_QWORD *)v15 + 99);
            if ( v119 )
            {
              ExFreePoolWithTag(v119, 0);
              *((_QWORD *)v15 + 99) = 0LL;
              *((_DWORD *)v15 + 200) = 0;
              memset_0(v15 + 808, 0, 0x110uLL);
            }
            if ( *((_QWORD *)v15 + 135) )
            {
              SepDereferenceLowBoxNumberEntry(*((unsigned int *)v15 + 30));
              *((_QWORD *)v15 + 135) = 0LL;
            }
            if ( *((_QWORD *)v15 + 136) )
            {
              SepDereferenceCachedHandlesEntryInternal((struct _KTHREAD *)(*((_QWORD *)v15 + 27) + 96LL));
              *((_QWORD *)v15 + 136) = 0LL;
            }
          }
          *((_DWORD *)v15 + 50) |= 0x2000u;
        }
        else
        {
          *((_QWORD *)v15 + 9) &= 0x202800000uLL;
          *((_QWORD *)v15 + 10) &= 0x202800000uLL;
          *((_DWORD *)v15 + 50) &= ~0x2000u;
        }
LABEL_291:
        *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        v16 = 0;
        goto LABEL_293;
      }
      ObfDereferenceObject(v15);
      v92 = v130;
    }
    else
    {
      ObfDereferenceObject(v15);
      v92 = v85;
    }
    LOBYTE(v91) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v92, v91);
    return -1073740730;
  }
  return result;
}

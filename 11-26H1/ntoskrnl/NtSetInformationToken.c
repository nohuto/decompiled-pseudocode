/*
 * XREFs of NtSetInformationToken @ 0x140810BD0
 * Callers:
 *     DifNtSetInformationTokenWrapper @ 0x14068C900 (DifNtSetInformationTokenWrapper.c)
 * Callees:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x14025ED78 (SepRemoveAceFromTokenDefaultDacl.c)
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepLocateTokenIntegrity @ 0x140449CB0 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140491650 (RtlSubAuthorityCountSid.c)
 *     SepLinkLogonSessions @ 0x1404E0EFC (SepLinkLogonSessions.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14051205C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepModifyTokenPolicyCounter @ 0x140774FAC (SepModifyTokenPolicyCounter.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     SeSetPrivateNameSpaceToken @ 0x140811FE0 (SeSetPrivateNameSpaceToken.c)
 *     SepCaptureAuditPolicy @ 0x140813690 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x140813B64 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x140813B88 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x1408158D8 (SepRemoveTokenLogonSession.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     SeCaptureAcl @ 0x1409F4CD0 (SeCaptureAcl.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1409F8EF4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A2C9E4 (SepDereferenceLowBoxNumberEntry.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140A43238 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140A461FC (SeReleaseAcl.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A8BBE8 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SeReleaseSid @ 0x140A9A0A8 (SeReleaseSid.c)
 *     RtlQueryElevationFlags @ 0x140AB0350 (RtlQueryElevationFlags.c)
 *     SepIdAssignableAsOwner @ 0x140AB06D8 (SepIdAssignableAsOwner.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140AC3A28 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x140ACEF00 (SepShouldSetDelinkFlags.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADDB0C (SeSetMandatoryPolicyToken.c)
 *     SepExpandDynamic @ 0x140AE5CA8 (SepExpandDynamic.c)
 *     SeSetSessionIdToken @ 0x140AE7F2C (SeSetSessionIdToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140AF00AC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepAppendDefaultDacl @ 0x140AF9C0C (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140AFB438 (SepFreeDefaultDacl.c)
 *     SepStopReferencingLogonSession @ 0x140B1FFDC (SepStopReferencingLogonSession.c)
 *     SeSetVirtualizationToken @ 0x140B31C8C (SeSetVirtualizationToken.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  struct _KTHREAD *v16; // rax
  struct _KTHREAD *v17; // rax
  char v18; // bl
  struct _KTHREAD *v19; // rax
  NTSTATUS v20; // ebx
  struct _KTHREAD *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  ULONG v24; // ebx
  struct _KTHREAD *v25; // rax
  ULONG ULongFromUser; // ebx
  int v27; // eax
  void *v28; // rbx
  NTSTATUS v29; // edi
  int v30; // r15d
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  void *v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  void *v38; // rax
  void *v39; // rcx
  unsigned __int8 *v40; // r15
  unsigned int v41; // ebx
  struct _KTHREAD *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned __int16 *v45; // rdx
  unsigned __int16 *v46; // rax
  unsigned __int16 *v47; // rcx
  void *v48; // rdi
  unsigned int v49; // ebx
  __int64 v50; // r8
  __int64 v51; // rdx
  void *v52; // rax
  unsigned int v53; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PSID v55; // rdi
  NTSTATUS v56; // ebx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rdx
  void *v61; // rax
  void *ULong64FromUser; // rax
  __int32 v63; // ebx
  __int32 v64; // ebx
  __int32 v65; // ebx
  __int32 v66; // ebx
  int v67; // ebx
  int v68; // ebx
  int v69; // ebx
  ULONG v70; // eax
  struct _KTHREAD *v71; // rax
  ULONG v72; // ebx
  int v73; // edi
  PSID v74; // rcx
  int **v75; // rbx
  char ShouldSetDelinkFlags; // r15
  struct _KTHREAD *v77; // rcx
  ULONG v78; // ebx
  struct _KTHREAD *v79; // rax
  unsigned int v80; // eax
  int v81; // ecx
  PSID *v82; // r13
  unsigned __int16 *v83; // rbx
  int v84; // ecx
  int v85; // ecx
  ULONG v86; // ebx
  struct _KTHREAD *v87; // rax
  PSID *TokenIntegrity; // rax
  PSID v89; // r12
  int v90; // r15d
  ULONG v91; // edi
  ULONG v92; // eax
  ULONG v93; // eax
  struct _KTHREAD *v94; // rax
  PACCESS_TOKEN PrimaryToken; // rdi
  void *v96; // r15
  int v97; // ecx
  ULONG v98; // eax
  struct _ERESOURCE *v99; // rcx
  int v100; // eax
  int v101; // eax
  void *v102; // rcx
  void *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rdx
  ULONG v106; // eax
  struct _KTHREAD *v107; // rax
  signed __int32 v108[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v111; // [rsp+38h] [rbp-D0h]
  __int64 *v112; // [rsp+40h] [rbp-C8h]
  char v113; // [rsp+50h] [rbp-B8h]
  PVOID Token; // [rsp+58h] [rbp-B0h] BYREF
  PSID Sid1; // [rsp+60h] [rbp-A8h] BYREF
  NTSTATUS v116; // [rsp+68h] [rbp-A0h]
  __int64 v117; // [rsp+70h] [rbp-98h] BYREF
  void *Src; // [rsp+78h] [rbp-90h] BYREF
  PSID *v119; // [rsp+80h] [rbp-88h] BYREF
  ULONG v120; // [rsp+88h] [rbp-80h]
  ULONG v121; // [rsp+8Ch] [rbp-7Ch]
  ULONG v122; // [rsp+90h] [rbp-78h]
  ULONG v123; // [rsp+94h] [rbp-74h]
  ULONG v124; // [rsp+98h] [rbp-70h]
  ULONG v125; // [rsp+9Ch] [rbp-6Ch]
  ULONG v126; // [rsp+A0h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-60h] BYREF
  void *v128; // [rsp+C8h] [rbp-40h]
  void *v129; // [rsp+D0h] [rbp-38h]
  __int64 v130; // [rsp+118h] [rbp+10h] BYREF

  v8 = 0;
  v113 = 0;
  LODWORD(v117) = 0;
  Sid1 = 0LL;
  v119 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v130) = PreviousMode;
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags
    || (v10 = 0x24800F8B5070LL, !_bittest64(&v10, TokenInformationClass)) )
  {
    if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      return -1073741821;
    LODWORD(Token) = 0;
    if ( (int)RtlQueryElevationFlags(&Token) < 0
      || ((unsigned __int8)Token & 0x18) != 0x10
      || TokenInformationClass != -2 )
    {
      return -1073741821;
    }
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
  Src = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenLinkedToken )
    {
      switch ( TokenInformationClass )
      {
        case 19:
          if ( TokenInformationLength != 8 )
            goto LABEL_131;
          if ( PreviousMode )
            ULong64FromUser = (void *)RtlReadULong64FromUser(TokenInformation);
          else
            ULong64FromUser = *(void **)TokenInformation;
          v129 = ULong64FromUser;
          v27 = SepLinkLogonSessions((__int64)v15, ULong64FromUser, PreviousMode);
          break;
        case -2:
          if ( TokenInformationLength != 8 )
            goto LABEL_131;
          if ( PreviousMode )
            v61 = (void *)RtlReadULong64FromUser(TokenInformation);
          else
            v61 = *(void **)TokenInformation;
          v128 = v61;
          v27 = SepOneWayLinkLogonSessions((__int64)v15, v61, PreviousMode);
          break;
        case 4:
          if ( TokenInformationLength < 8 )
            goto LABEL_106;
          if ( PreviousMode )
            v52 = (void *)RtlReadULong64FromUser(TokenInformation);
          else
            v52 = *(void **)TokenInformation;
          Sid1 = v52;
          v20 = SeCaptureSid(v52, (int)Object, 1, (__int64)&Sid1);
          v116 = v20;
          if ( v20 < 0 )
            goto LABEL_111;
          v53 = 0;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
          _InterlockedOr(v108, 0);
          v55 = Sid1;
          while ( 1 )
          {
            if ( v53 >= *((_DWORD *)v15 + 31) )
            {
              _InterlockedOr(v108, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
              KeLeaveCriticalRegion();
              ObfDereferenceObject(v15);
              LOBYTE(v59) = 1;
              LOBYTE(v60) = PreviousMode;
              SeReleaseSid(v55, v60, v59);
              return -1073741734;
            }
            if ( RtlEqualSid(v55, *(PSID *)(*((_QWORD *)v15 + 19) + 16LL * v53)) )
              break;
            ++v53;
          }
          if ( (unsigned __int8)SepIdAssignableAsOwner(v15, v53) )
          {
            *((_DWORD *)v15 + 36) = v53;
            v8 = 1;
            v113 = 1;
            v56 = 0;
          }
          else
          {
            v56 = -1073741734;
          }
          if ( v8 )
          {
            v119 = (PSID *)(_InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement) + ExpLuidIncrement);
            *((_QWORD *)v15 + 7) = v119;
          }
          _InterlockedOr(v108, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v15);
          LOBYTE(v57) = 1;
          LOBYTE(v58) = PreviousMode;
          SeReleaseSid(v55, v58, v57);
          return v56;
        case 5:
          if ( TokenInformationLength >= 8 )
          {
            if ( PreviousMode )
              v38 = (void *)RtlReadULong64FromUser(TokenInformation);
            else
              v38 = *(void **)TokenInformation;
            Src = v38;
            v20 = SeCaptureSid(v38, (int)Object, 1, (__int64)&Src);
            v116 = v20;
            v39 = v15;
            if ( v20 >= 0 )
            {
              v40 = (unsigned __int8 *)Src;
              if ( (unsigned __int8)SepIdAssignableAsGroup(v15, Src) )
              {
                v41 = 4 * v40[1] + 8;
                v42 = KeGetCurrentThread();
                --v42->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                _InterlockedOr(v108, 0);
                v43 = *((_QWORD *)v15 + 23);
                v44 = v41;
                if ( v43 )
                {
                  v44 = v41 + *(unsigned __int16 *)(v43 + 2);
                  v41 = v44;
                }
                if ( v44 <= *((_DWORD *)v15 + 34) )
                {
                  v20 = SepExpandDynamic(v15, v41);
                  if ( v20 >= 0 )
                  {
                    *((_DWORD *)v15 + 35) += 4 * *(unsigned __int8 *)(*((_QWORD *)v15 + 21) + 1LL) + 8;
                    v45 = (unsigned __int16 *)*((_QWORD *)v15 + 23);
                    v46 = v45;
                    if ( v45 )
                    {
                      v47 = (unsigned __int16 *)*((_QWORD *)v15 + 22);
                      if ( v47 != v45 )
                      {
                        memmove(v47, v45, v45[1]);
                        v46 = (unsigned __int16 *)*((_QWORD *)v15 + 22);
                        *((_QWORD *)v15 + 23) = v46;
                      }
                    }
                    if ( v46 )
                      v48 = (void *)(*((_QWORD *)v15 + 22) + v46[1]);
                    else
                      v48 = (void *)*((_QWORD *)v15 + 22);
                    v49 = 4 * v40[1] + 8;
                    memmove(v48, v40, v49);
                    *((_QWORD *)v15 + 21) = v48;
                    *((_DWORD *)v15 + 35) -= v49;
                    *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v108, 0);
                    ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                    KeLeaveCriticalRegion();
                    v20 = 0;
                  }
                  else
                  {
                    _InterlockedOr(v108, 0);
                    ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                    KeLeaveCriticalRegion();
                  }
                }
                else
                {
                  _InterlockedOr(v108, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                  KeLeaveCriticalRegion();
                  v20 = -1073741671;
                }
              }
              else
              {
                v20 = -1073741733;
              }
              ObfDereferenceObject(v15);
              LOBYTE(v50) = 1;
              LOBYTE(v51) = PreviousMode;
              SeReleaseSid(v40, v51, v50);
              return v20;
            }
            goto LABEL_112;
          }
          goto LABEL_106;
        case 6:
          if ( TokenInformationLength < 8 )
            goto LABEL_106;
          if ( PreviousMode )
            v28 = (void *)RtlReadULong64FromUser(TokenInformation);
          else
            v28 = *(void **)TokenInformation;
          Src = v28;
          if ( v28 )
          {
            v29 = SeCaptureAcl(v28, 1, (int)HandleInformation, (__int64)&Src, (__int64)&v117);
            v116 = v29;
            v30 = v117;
            v28 = Src;
          }
          else
          {
            v30 = 0;
            LODWORD(v117) = 0;
            v29 = 0;
            v116 = 0;
          }
          if ( v29 < 0 )
          {
            ObfDereferenceObject(v15);
            return v29;
          }
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
          _InterlockedOr(v108, 0);
          v32 = v30 + 4 * ((unsigned int)*(unsigned __int8 *)(*((_QWORD *)v15 + 21) + 1LL) + 2);
          if ( (unsigned int)v32 <= *((_DWORD *)v15 + 34) )
          {
            v29 = SepExpandDynamic(v15, v32);
            if ( v29 >= 0 )
            {
              v35 = (void *)*((_QWORD *)v15 + 23);
              if ( !v35
                || (v29 = SeCaptureAcl(v35, 1, (int)HandleInformation, (__int64)&Sid1, (__int64)&v130), v29 >= 0) )
              {
                SepFreeDefaultDacl(v15);
                if ( v28 )
                  SepAppendDefaultDacl(v15, v28);
                SeTokenDefaultDaclChangedAuditAlarm(v36, (_DWORD)v15, (_DWORD)TokenHandle, (_DWORD)Sid1, (__int64)v28);
                *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v108, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                KeLeaveCriticalRegion();
                ObfDereferenceObject(v15);
                if ( v28 )
                {
                  LOBYTE(v37) = PreviousMode;
                  SeReleaseAcl(v28, v37);
                }
                if ( Sid1 )
                  SeReleaseAcl(Sid1, 0LL);
                return 0;
              }
            }
            _InterlockedOr(v108, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
            KeLeaveCriticalRegion();
            ObfDereferenceObject(v15);
            if ( v28 )
            {
              LOBYTE(v34) = PreviousMode;
              SeReleaseAcl(v28, v34);
            }
            return v29;
          }
          _InterlockedOr(v108, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v15);
          if ( v28 )
          {
            LOBYTE(v33) = PreviousMode;
            SeReleaseAcl(v28, v33);
          }
          return -1073741671;
        case 12:
          if ( TokenInformationLength == 4 )
          {
            if ( PreviousMode )
              ULongFromUser = RtlReadULongFromUser((unsigned int *)TokenInformation);
            else
              ULongFromUser = *(_DWORD *)TokenInformation;
            v121 = ULongFromUser;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_55;
            v27 = SeSetSessionIdToken(v15, ULongFromUser);
            break;
          }
LABEL_106:
          ObfDereferenceObject(Token);
          return -1073741820;
        default:
          switch ( TokenInformationClass )
          {
            case TokenSessionReference:
              if ( TokenInformationLength != 4 )
                goto LABEL_131;
              if ( PreviousMode )
                v24 = RtlReadULongFromUser((unsigned int *)TokenInformation);
              else
                v24 = *(_DWORD *)TokenInformation;
              v120 = v24;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_55;
              if ( !v24 )
              {
                v25 = KeGetCurrentThread();
                --v25->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                _InterlockedOr(v108, 0);
                if ( (*((_DWORD *)v15 + 50) & 0x20) == 0 )
                {
                  if ( SeTokenLeakTracking )
                    SepRemoveTokenLogonSession(v15);
                  v20 = SepStopReferencingLogonSession(v15);
                  if ( v20 < 0 )
                    goto LABEL_111;
                }
                goto LABEL_48;
              }
              break;
            case TokenAuditPolicy:
              v117 = 0LL;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_55;
              v17 = KeGetCurrentThread();
              --v17->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)v15 + 6), 1u);
              v18 = v15[119];
              ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
              KeLeaveCriticalRegion();
              if ( !v18 )
              {
                if ( !TokenInformation )
                {
                  v19 = KeGetCurrentThread();
                  --v19->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                  _InterlockedOr(v108, 0);
                  v15[119] = 1;
                  *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v108, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                  KeLeaveCriticalRegion();
                  v20 = 0;
LABEL_111:
                  v39 = v15;
LABEL_112:
                  ObfDereferenceObject(v39);
                  return v20;
                }
                v20 = SepCaptureAuditPolicy(TokenInformation, (int)Object, (int)HandleInformation, (__int64)&v117);
                v116 = v20;
                if ( v20 < 0 )
                  goto LABEL_111;
                v21 = KeGetCurrentThread();
                --v21->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                _InterlockedOr(v108, 0);
                v15[119] = 2;
                v22 = v117;
                *(_OWORD *)(v15 + 88) = *(_OWORD *)v117;
                *((_QWORD *)v15 + 13) = *(_QWORD *)(v22 + 16);
                *((_DWORD *)v15 + 28) = *(_DWORD *)(v22 + 24);
                *((_WORD *)v15 + 58) = *(_WORD *)(v22 + 28);
                v15[118] = *(_BYTE *)(v22 + 30);
                *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v108, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                KeLeaveCriticalRegion();
                SepModifyTokenPolicyCounter((__int64)(v15 + 88), 1);
                ObfDereferenceObject(v15);
                LOBYTE(v23) = PreviousMode;
                SepReleaseAuditPolicy(v22, v23);
                return 0;
              }
              break;
            case TokenOrigin:
              v117 = 0LL;
              if ( TokenInformationLength == 8 )
              {
                if ( PreviousMode )
                  v117 = RtlReadULong64FromUser(TokenInformation);
                else
                  RtlCopyVolatileMemory(&v117, TokenInformation, 8uLL);
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v16 = KeGetCurrentThread();
                  --v16->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                  _InterlockedOr(v108, 0);
                  if ( !*((_QWORD *)v15 + 28) )
                    *((_QWORD *)v15 + 28) = v117;
                  *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_48:
                  _InterlockedOr(v108, 0);
                  ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                  KeLeaveCriticalRegion();
LABEL_49:
                  v20 = 0;
                  goto LABEL_111;
                }
LABEL_55:
                v20 = -1073741727;
                goto LABEL_111;
              }
LABEL_131:
              v20 = -1073741820;
              goto LABEL_111;
            default:
              return -1073741811;
          }
          v20 = -1073741811;
          goto LABEL_111;
      }
LABEL_57:
      v20 = v27;
      goto LABEL_111;
    }
    v63 = TokenInformationClass - 23;
    if ( !v63 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_131;
      if ( PreviousMode )
        v78 = RtlReadULongFromUser((unsigned int *)TokenInformation);
      else
        v78 = *(_DWORD *)TokenInformation;
      v126 = v78;
      if ( !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.SListFaultAddress, PreviousMode) )
        goto LABEL_55;
      v107 = KeGetCurrentThread();
      --v107->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
      _InterlockedOr(v108, 0);
      v80 = *((_DWORD *)v15 + 50) & 0xFFFFFDFF;
      v81 = *((_DWORD *)v15 + 50) | 0x200;
      goto LABEL_249;
    }
    v64 = v63 - 1;
    if ( !v64 )
    {
      if ( TokenInformationLength == 4 )
      {
        if ( PreviousMode )
          v106 = RtlReadULongFromUser((unsigned int *)TokenInformation);
        else
          v106 = *(_DWORD *)TokenInformation;
        v125 = v106;
        SeSetVirtualizationToken(v15, v106);
        goto LABEL_49;
      }
      goto LABEL_131;
    }
    v65 = v64 - 1;
    if ( v65 )
    {
      v66 = v65 - 1;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( !v67 )
        {
          LODWORD(Sid1) = 0;
          if ( TokenInformationLength != 4 )
            goto LABEL_131;
          if ( PreviousMode )
            LODWORD(Sid1) = RtlReadULongFromUser((unsigned int *)TokenInformation);
          else
            RtlCopyVolatileMemory(&Sid1, TokenInformation, 4uLL);
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_55;
          if ( v15[204] )
          {
            v20 = -1073741525;
            goto LABEL_111;
          }
          v27 = SeSetMandatoryPolicyToken(v15, &Sid1);
          goto LABEL_57;
        }
        v68 = v67 - 12;
        if ( !v68 )
        {
          Sid1 = 0LL;
          if ( TokenInformation && TokenInformationLength >= 0x10 )
          {
            LOBYTE(v13) = PreviousMode;
            v73 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v13, &Sid1);
            if ( v73 >= 0 )
            {
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                v73 = -1073741727;
              if ( v73 >= 0 )
              {
                v75 = (int **)Sid1;
                ShouldSetDelinkFlags = SepShouldSetDelinkFlags(*((_QWORD *)Sid1 + 1), *(_QWORD *)Sid1);
                v77 = KeGetCurrentThread();
                --v77->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
                _InterlockedOr(v108, 0);
                v73 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v15 + 97), v75[1], (__int64)*v75);
                if ( v73 >= 0 && ShouldSetDelinkFlags )
                  *((_DWORD *)v15 + 50) |= 0x20000u;
                *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v108, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                KeLeaveCriticalRegion();
                v74 = v75;
              }
              else
              {
                v74 = Sid1;
              }
              SepReleaseTokenSecurityAttributesAndOperationsInformation(v74);
            }
            v20 = v73;
            goto LABEL_111;
          }
          goto LABEL_131;
        }
        v69 = v68 - 3;
        if ( !v69 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_131;
          if ( PreviousMode )
            v72 = RtlReadULongFromUser((unsigned int *)TokenInformation);
          else
            v72 = *(_DWORD *)TokenInformation;
          v123 = v72;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_55;
          v27 = SeSetPrivateNameSpaceToken(v15, v72);
          goto LABEL_57;
        }
        if ( v69 != 3 )
          return -1073741811;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_55;
        if ( TokenInformationLength != 4 )
          goto LABEL_131;
        if ( PreviousMode )
          v70 = RtlReadULongFromUser((unsigned int *)TokenInformation);
        else
          v70 = *(_DWORD *)TokenInformation;
        v122 = v70;
        if ( v70 || (*((_DWORD *)v15 + 50) & 0x80000) == 0 )
        {
LABEL_253:
          ObfDereferenceObject(v15);
          return 0;
        }
        v71 = KeGetCurrentThread();
        --v71->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
        _InterlockedOr(v108, 0);
        *((_DWORD *)v15 + 50) &= ~0x80000u;
LABEL_252:
        *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v108, 0);
        ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
        KeLeaveCriticalRegion();
        goto LABEL_253;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_131;
      if ( PreviousMode )
        v78 = RtlReadULongFromUser((unsigned int *)TokenInformation);
      else
        v78 = *(_DWORD *)TokenInformation;
      v124 = v78;
      if ( v78 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_55;
      v79 = KeGetCurrentThread();
      --v79->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
      _InterlockedOr(v108, 0);
      v80 = *((_DWORD *)v15 + 50) & 0xFFFFEFFF;
      v81 = *((_DWORD *)v15 + 50) | 0x1000;
LABEL_249:
      if ( !v78 )
        v81 = v80;
      *((_DWORD *)v15 + 50) = v81;
      goto LABEL_252;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_131;
    v112 = &v130;
    v111 = (__int64)&v119;
    LODWORD(Object) = 0;
    LOBYTE(v14) = PreviousMode;
    v27 = SeCaptureSidAndAttributesArray(TokenInformation, 1LL, v14);
    v116 = v27;
    if ( v27 < 0 )
      goto LABEL_57;
    v82 = v119;
    v83 = (unsigned __int16 *)*v119;
    v84 = *(_DWORD *)((char *)*v119 + 2) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v84 )
      v84 = v83[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( !v84 )
    {
      v85 = *RtlSubAuthorityCountSid(*v119);
      if ( !(_BYTE)v85 )
      {
        v86 = 0;
        goto LABEL_195;
      }
      v86 = *RtlSubAuthoritySid(v83, v85 - 1);
      if ( v86 <= 0x4000 )
      {
LABEL_195:
        v87 = KeGetCurrentThread();
        --v87->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v15 + 6), 1u);
        _InterlockedOr(v108, 0);
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)v15);
        v119 = TokenIntegrity;
        if ( !TokenIntegrity )
        {
          v20 = -1073740730;
LABEL_236:
          _InterlockedOr(v108, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v15);
          LOBYTE(v104) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v82, v104);
          return v20;
        }
        v89 = *TokenIntegrity;
        v90 = *RtlSubAuthorityCountSid(*TokenIntegrity);
        v91 = v90 - 1;
        if ( (_BYTE)v90 )
          v92 = *RtlSubAuthoritySid(v89, v91);
        else
          v92 = 0;
        if ( v86 <= v92 )
        {
          if ( (_BYTE)v90 )
            v93 = *RtlSubAuthoritySid(v89, v91);
          else
            v93 = 0;
          if ( v86 < v93 )
          {
            LODWORD(v130) = 0;
            RtlQueryElevationFlags(&v130);
            if ( (v130 & 0x18) == 0x10 && (_BYTE)v90 && *RtlSubAuthoritySid(v89, v91) >= 0x3000 )
            {
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              SeCaptureSubjectContext(&SubjectContext);
              v94 = KeGetCurrentThread();
              --v94->KernelApcDisable;
              PrimaryToken = SubjectContext.PrimaryToken;
              ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
              v96 = *(void **)SepLocateTokenIntegrity((__int64)PrimaryToken);
              v97 = *RtlSubAuthorityCountSid(v96);
              if ( (_BYTE)v97 )
                v98 = *RtlSubAuthoritySid(v96, v97 - 1);
              else
                v98 = 0;
              v99 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
              if ( v98 < 0x3000 )
              {
                ExReleaseResourceLite(v99);
                KeLeaveCriticalRegion();
                SeReleaseSubjectContext(&SubjectContext);
                v20 = -1073741790;
                goto LABEL_236;
              }
              ExReleaseResourceLite(v99);
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
            v20 = -1073741727;
            goto LABEL_236;
          }
          if ( v15[204] )
          {
            v20 = -1073741525;
            goto LABEL_236;
          }
        }
        v100 = *((unsigned __int8 *)*v119 + 1);
        if ( (_BYTE)v100 )
        {
          *RtlSubAuthoritySid(*v119, v100 - 1) = v86;
          if ( v86 < 0x3000 )
          {
            *((_QWORD *)v15 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v15 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          v101 = *((_DWORD *)v15 + 50);
          if ( v86 >= 0x2000 )
          {
            if ( (v101 & 0x4000) != 0 )
            {
              SepRemoveAceFromTokenDefaultDacl((__int64)v15, *((void **)v15 + 98));
              *((_DWORD *)v15 + 50) &= ~0x4000u;
              v102 = (void *)*((_QWORD *)v15 + 98);
              if ( v102 )
              {
                ExFreePoolWithTag(v102, 0);
                *((_QWORD *)v15 + 98) = 0LL;
              }
              v103 = (void *)*((_QWORD *)v15 + 99);
              if ( v103 )
              {
                ExFreePoolWithTag(v103, 0);
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
            *((_DWORD *)v15 + 50) = v101 & 0xFFFFDFFF;
          }
          *((_QWORD *)v15 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v20 = 0;
        }
        else
        {
          v20 = -1073741811;
        }
        goto LABEL_236;
      }
    }
    ObfDereferenceObject(v15);
    LOBYTE(v105) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v82, v105);
    return -1073740730;
  }
  return result;
}

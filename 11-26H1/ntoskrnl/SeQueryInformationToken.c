/*
 * XREFs of SeQueryInformationToken @ 0x1408FA8C0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x14045AF90 (RtlpQueryLowBoxId.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x140791B6C (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     PspAllocateNotificationChannel @ 0x1407FD498 (PspAllocateNotificationChannel.c)
 *     RtlpIsAppContainer @ 0x14080A3BC (RtlpIsAppContainer.c)
 *     SepCheckCapabilities @ 0x14081AEC4 (SepCheckCapabilities.c)
 *     CmpCreateRegistryProcessToken @ 0x14085D1A0 (CmpCreateRegistryProcessToken.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140861458 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408EED68 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408EF444 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SeTokenIsElevated @ 0x1408FBC38 (SeTokenIsElevated.c)
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     EtwTiLogImpersonateClient @ 0x140904FBC (EtwTiLogImpersonateClient.c)
 *     ObpParseSymbolicLinkEx @ 0x140930290 (ObpParseSymbolicLinkEx.c)
 *     PiDqOpenUserObjectRegKey @ 0x140952B4C (PiDqOpenUserObjectRegKey.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 *     EtwpPsProvTraceProcess @ 0x1409CE5FC (EtwpPsProvTraceProcess.c)
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 *     SeQuerySigningPolicyWorker @ 0x140A3D144 (SeQuerySigningPolicyWorker.c)
 *     CmpBuildAdminInformation @ 0x140A4E958 (CmpBuildAdminInformation.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A9A970 (ObpVerifyCreatorAccessCheck.c)
 *     ObpGetIntegrityLevel @ 0x140AB6F0C (ObpGetIntegrityLevel.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140AFEDF8 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpTiQueryTokenIdentity @ 0x140B1B73C (EtwpTiQueryTokenIdentity.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1402FD040 (SepCanTokenMatchAllPackageSid.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepCopyTokenIntegrity @ 0x14043A480 (SepCopyTokenIntegrity.c)
 *     SepGetTokenElevation @ 0x1404707C0 (SepGetTokenElevation.c)
 *     SepConvertTokenPrivileges @ 0x140475C9C (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140475CC0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x1404776A4 (SepTokenPrivilegeCount.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     SepIsSandboxedToken @ 0x14047CE68 (SepIsSandboxedToken.c)
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 *     SepGetTokenElevationType @ 0x1404A4C78 (SepGetTokenElevationType.c)
 *     Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x14063DF54 (Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     SepCopyTokenAccessInformation @ 0x140A4E3E8 (SepCopyTokenAccessInformation.c)
 *     SepCopyTokenLoggingInformation @ 0x140A4ECB4 (SepCopyTokenLoggingInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x140A4EE60 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x140A4EF60 (SepGetTokenAccessInformationBufferSize.c)
 *     SeQuerySessionIdToken @ 0x140A87F60 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A92D0C (AuthzBasepQueryClaimAttributesToken.c)
 *     SepGetTokenLoggingInformationBufferSize @ 0x140ABC0A0 (SepGetTokenLoggingInformationBufferSize.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  NTSTATUS v3; // ebx
  _DWORD *v7; // rcx
  int v8; // eax
  _OWORD *v9; // rax
  struct _KTHREAD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  void *v13; // rcx
  struct _KTHREAD *v14; // rax
  int v15; // r14d
  _QWORD *v16; // rax
  void *v17; // rdx
  void *v18; // r8
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rax
  struct _KTHREAD *v21; // rax
  _DWORD *v22; // rax
  struct _KTHREAD *v23; // rax
  unsigned int v24; // ecx
  ULONG v25; // r12d
  __int64 v26; // r8
  __int64 *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // r13
  struct _KTHREAD *v31; // rax
  ULONG v32; // r12d
  _SID_AND_ATTRIBUTES *v33; // rax
  _DWORD *v34; // r14
  __int64 Pool2; // rax
  struct _KTHREAD *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  struct _KTHREAD *v40; // rax
  struct _ERESOURCE *v41; // rcx
  int TokenAccessInformationBufferSize; // r14d
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  bool IsSandboxedToken; // al
  struct _KTHREAD *v47; // rax
  int TokenElevation; // ebx
  int TokenElevationType; // eax
  _DWORD *v50; // rdx
  struct _KTHREAD *v51; // rax
  int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // r13d
  __int64 *v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rax
  unsigned int v58; // ecx
  unsigned int v59; // r12d
  __int64 *v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  _SID_AND_ATTRIBUTES *v64; // r9
  unsigned __int64 v65; // rcx
  __int64 v66; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v68; // ecx
  ULONG v69; // eax
  struct _KTHREAD *v70; // rax
  __int64 v71; // rsi
  int v72; // r12d
  __int64 v73; // rax
  void *v74; // r8
  struct _KTHREAD *v75; // rax
  char *v76; // rax
  __int64 v77; // rcx
  ULONG v78; // r13d
  ULONG v79; // r12d
  ULONG v80; // r13d
  __int64 *v81; // rdx
  __int64 v82; // r9
  __int64 v83; // rax
  PERESOURCE *v84; // rsi
  __int64 v85; // rax
  void *v86; // rdi
  struct _ERESOURCE *v87; // rcx
  PERESOURCE *v88; // r12
  struct _KTHREAD *v89; // rax
  __int64 v90; // rax
  __int128 *v91; // rdi
  ULONG v92; // r14d
  __int64 v93; // rax
  void *v94; // rsi
  NTSTATUS v95; // edi
  struct _KTHREAD *v96; // rax
  __int64 v97; // rax
  struct _KTHREAD *v98; // rax
  struct _KTHREAD *v99; // rax
  unsigned int v100; // ecx
  ULONG v101; // r12d
  __int64 *v102; // rdx
  __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // rax
  struct _KTHREAD *v106; // rax
  struct _ERESOURCE *v107; // rcx
  __int64 v108; // rax
  int v109; // r8d
  int v110; // eax
  BOOL v111; // esi
  struct _KTHREAD *v112; // rax
  __int64 v113; // rax
  int v114; // [rsp+80h] [rbp-39h] BYREF
  int v115; // [rsp+84h] [rbp-35h] BYREF
  int v116; // [rsp+88h] [rbp-31h] BYREF
  int v117; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v118; // [rsp+90h] [rbp-29h] BYREF
  int v119; // [rsp+94h] [rbp-25h] BYREF
  int v120; // [rsp+98h] [rbp-21h] BYREF
  __int128 v121; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v122; // [rsp+B0h] [rbp-9h]
  __int128 v123; // [rsp+C0h] [rbp+7h] BYREF
  PSID Sid[8]; // [rsp+D0h] [rbp+17h] BYREF
  PSID RemainingSidArea; // [rsp+120h] [rbp+67h] BYREF
  ULONG SidAreaSize; // [rsp+128h] [rbp+6Fh] BYREF
  char *v127; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  SidAreaSize = 0;
  v114 = 0;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  if ( TokenInformationClass <= TokenIntegrityLevel )
  {
    if ( TokenInformationClass == TokenIntegrityLevel )
    {
      CurrentThread = KeGetCurrentThread();
      *(_OWORD *)Sid = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      SepCopyTokenIntegrity((__int64)Token, (__int64)Sid);
      v68 = *RtlSubAuthorityCountSid(Sid[0]);
      if ( (_BYTE)v68 )
        v69 = *RtlSubAuthoritySid(Sid[0], v68 - 1);
      else
        v69 = 0;
      *(_DWORD *)TokenInformation = v69;
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      goto LABEL_183;
    }
    if ( TokenInformationClass <= TokenStatistics )
    {
      if ( TokenInformationClass == TokenStatistics )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v34 = (_DWORD *)Pool2;
        if ( !Pool2 )
          return -1073741670;
        *(_QWORD *)Pool2 = *((_QWORD *)Token + 2);
        *(_QWORD *)(Pool2 + 8) = *((_QWORD *)Token + 3);
        *(_DWORD *)(Pool2 + 24) = *((_DWORD *)Token + 48);
        *(_DWORD *)(Pool2 + 28) = *((_DWORD *)Token + 49);
        *(_QWORD *)(Pool2 + 16) = *((_QWORD *)Token + 5);
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v34[8] = *((_DWORD *)Token + 34);
        v38 = *((_QWORD *)Token + 23);
        v39 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
        if ( v38 )
          v39 -= *(unsigned __int16 *)(v38 + 2);
        v34[9] = v39;
        v34[9] = *((_DWORD *)Token + 35);
        v34[10] = *((_DWORD *)Token + 31) - 1;
        v34[11] = SepTokenPrivilegeCount((__int64)Token);
        *((_QWORD *)v34 + 6) = *((_QWORD *)Token + 7);
      }
      else
      {
        if ( TokenInformationClass != TokenUser )
        {
          switch ( TokenInformationClass )
          {
            case TokenGroups:
              v23 = KeGetCurrentThread();
              --v23->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v24 = *((_DWORD *)Token + 31);
              v25 = 16 * v24 - 8;
              if ( v24 > 1 )
              {
                v26 = v24 - 1;
                v27 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
                do
                {
                  v28 = *v27;
                  v27 += 2;
                  v25 += 4 * *(unsigned __int8 *)(v28 + 1) + 8;
                  --v26;
                }
                while ( v26 );
              }
              v29 = ExAllocatePool2(0x100uLL);
              v30 = (void *)v29;
              if ( v29 )
              {
                *(_DWORD *)v29 = *((_DWORD *)Token + 31) - 1;
                RtlCopySidAndAttributesArray(
                  *((_DWORD *)Token + 31) - 1,
                  (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
                  v25,
                  (PSID_AND_ATTRIBUTES)(v29 + 8),
                  (PSID)(v29 + (unsigned int)(16 * *((_DWORD *)Token + 31) - 32) + 24LL),
                  &RemainingSidArea,
                  (PULONG)&RemainingSidArea);
                ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
                KeLeaveCriticalRegion();
                *TokenInformation = v30;
                return 0;
              }
              break;
            case TokenPrivileges:
              v21 = KeGetCurrentThread();
              --v21->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              SepTokenPrivilegeCount((__int64)Token);
              v22 = (_DWORD *)ExAllocatePool2(0x100uLL);
              v12 = v22;
              if ( v22 )
              {
                SepConvertTokenPrivileges((__int64)Token, v22);
                goto LABEL_26;
              }
              break;
            case TokenOwner:
              v19 = KeGetCurrentThread();
              --v19->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v15 = 4
                  * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36))
                                       + 1LL)
                  + 16;
              v20 = (_QWORD *)ExAllocatePool2(0x100uLL);
              v12 = v20;
              if ( v20 )
              {
                v17 = v20 + 1;
                *v20 = v20 + 1;
                v18 = *(void **)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36));
                goto LABEL_29;
              }
              break;
            case TokenPrimaryGroup:
              v14 = KeGetCurrentThread();
              --v14->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v15 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
              v16 = (_QWORD *)ExAllocatePool2(0x100uLL);
              v12 = v16;
              if ( v16 )
              {
                v17 = v16 + 1;
                *v16 = v16 + 1;
                v18 = (void *)*((_QWORD *)Token + 21);
LABEL_29:
                RtlCopySid(v15 - 8, v17, v18);
LABEL_26:
                ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
                KeLeaveCriticalRegion();
                *TokenInformation = v12;
                return 0;
              }
LABEL_181:
              v87 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
              goto LABEL_182;
            case TokenDefaultDacl:
              v10 = KeGetCurrentThread();
              --v10->KernelApcDisable;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v11 = (_QWORD *)ExAllocatePool2(0x100uLL);
              v12 = v11;
              if ( v11 )
              {
                v13 = v11 + 1;
                if ( *((_QWORD *)Token + 23) )
                {
                  *v11 = v13;
                  memmove(v13, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
                }
                else
                {
                  *v11 = 0LL;
                }
                goto LABEL_26;
              }
              goto LABEL_181;
            case TokenSource:
              v9 = (_OWORD *)ExAllocatePool2(0x100uLL);
              if ( v9 )
              {
                *v9 = *(_OWORD *)Token;
                *TokenInformation = v9;
                return 0;
              }
              return -1073741670;
            case TokenType:
              v7 = (_DWORD *)ExAllocatePool2(0x100uLL);
              if ( v7 )
              {
                v8 = *((_DWORD *)Token + 48);
                goto LABEL_17;
              }
              return -1073741670;
            default:
              if ( TokenInformationClass == TokenImpersonationLevel && *((_DWORD *)Token + 48) == 2 )
              {
                v7 = (_DWORD *)ExAllocatePool2(0x100uLL);
                if ( v7 )
                {
                  v8 = *((_DWORD *)Token + 49);
LABEL_17:
                  *v7 = v8;
                  *TokenInformation = v7;
                  return 0;
                }
                return -1073741670;
              }
              return -1073741821;
          }
LABEL_40:
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          return -1073741670;
        }
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v32 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
        v33 = (_SID_AND_ATTRIBUTES *)ExAllocatePool2(0x100uLL);
        v34 = v33;
        if ( !v33 )
          goto LABEL_40;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v32,
          v33,
          &v33[1],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      }
      goto LABEL_187;
    }
    switch ( TokenInformationClass )
    {
      case TokenSessionId:
        SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
        return 0;
      case TokenGroupsAndPrivileges:
        v51 = KeGetCurrentThread();
        --v51->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v52 = SepTokenPrivilegeCount((__int64)Token);
        v53 = *((_DWORD *)Token + 31);
        LODWORD(RemainingSidArea) = v52;
        v54 = 16 * v53;
        SidAreaSize = 12 * v52;
        LODWORD(v127) = 16 * v53;
        if ( v53 )
        {
          v55 = (__int64 *)*((_QWORD *)Token + 19);
          v56 = v53;
          do
          {
            v57 = *v55;
            v55 += 2;
            v54 += (4 * *(unsigned __int8 *)(v57 + 1) + 15) & 0xFFFFFFF8;
            --v56;
          }
          while ( v56 );
        }
        v58 = *((_DWORD *)Token + 32);
        v114 = 16 * v58;
        v59 = 16 * v58;
        if ( v58 )
        {
          v60 = (__int64 *)*((_QWORD *)Token + 20);
          v61 = v58;
          do
          {
            v62 = *v60;
            v60 += 2;
            v59 += (4 * *(unsigned __int8 *)(v62 + 1) + 15) & 0xFFFFFFF8;
            --v61;
          }
          while ( v61 );
        }
        v63 = ExAllocatePool2(0x100uLL);
        v12 = (_QWORD *)v63;
        if ( v63 )
        {
          v64 = (_SID_AND_ATTRIBUTES *)(v63 + 56);
          *(_QWORD *)(v63 + 48) = *((_QWORD *)Token + 3);
          *(_DWORD *)(v63 + 4) = v54;
          *(_DWORD *)v63 = *((_DWORD *)Token + 31);
          *(_QWORD *)(v63 + 8) = v63 + 56;
          *(_DWORD *)(v63 + 20) = v59;
          *(_DWORD *)(v63 + 16) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            v65 = v63 + ((v54 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
          else
            v65 = 0LL;
          *(_QWORD *)(v63 + 24) = v65;
          v66 = (unsigned int)v127;
          *(_DWORD *)(v63 + 36) = SidAreaSize;
          *(_DWORD *)(v63 + 32) = (_DWORD)RemainingSidArea;
          *(_QWORD *)(v63 + 40) = (char *)v64 + v59 + v54;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((PSID_AND_ATTRIBUTES *)Token + 19),
            v54 - v66,
            v64,
            (char *)v64 + v66,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          if ( *((_DWORD *)v12 + 4) )
            RtlCopySidAndAttributesArray(
              *((_DWORD *)Token + 32),
              *((PSID_AND_ATTRIBUTES *)Token + 20),
              v59 - v114,
              (PSID_AND_ATTRIBUTES)v12[3],
              (PSID)(v12[3] + (unsigned int)v114),
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
          SepConvertTokenPrivilegesToLuidAndAttributes(Token, v12[5]);
          goto LABEL_26;
        }
        goto LABEL_40;
      case TokenElevationType:
        if ( ExAllocatePool2(0x100uLL) )
        {
          TokenElevationType = SepGetTokenElevationType((__int64)Token);
          *v50 = TokenElevationType;
          *TokenInformation = v50;
          return 0;
        }
        return -1073741670;
      case TokenElevation:
        v34 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !v34 )
          return -1073741670;
        v47 = KeGetCurrentThread();
        --v47->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        TokenElevation = SepGetTokenElevation((__int64)Token);
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        *v34 = TokenElevation;
LABEL_188:
        *TokenInformation = v34;
        return 0;
    }
    if ( TokenInformationClass != TokenHasRestrictions )
    {
      if ( TokenInformationClass == TokenAccessInformation )
      {
        v40 = KeGetCurrentThread();
        v120 = 0;
        v119 = 0;
        v118 = 0;
        --v40->KernelApcDisable;
        v41 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
        v117 = 0;
        v116 = 0;
        v115 = 0;
        LODWORD(v127) = 0;
        LODWORD(RemainingSidArea) = 0;
        SidAreaSize = 0;
        ExAcquireResourceSharedLite(v41, 1u);
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (_DWORD)Token,
                                             0,
                                             0,
                                             (unsigned int)&v114,
                                             (__int64)&v120,
                                             (__int64)&v119,
                                             (__int64)&v118,
                                             (__int64)&v117,
                                             (__int64)&v116,
                                             (__int64)&v115,
                                             (__int64)&v127,
                                             (__int64)&RemainingSidArea,
                                             (__int64)&SidAreaSize);
        v43 = ExAllocatePool2(0x100uLL);
        v12 = (_QWORD *)v43;
        if ( v43 )
        {
          SepCopyTokenAccessInformation(
            (int)Token,
            v43,
            TokenAccessInformationBufferSize,
            v114,
            v120,
            v119,
            v118,
            v117,
            v116,
            v115,
            (int)v127,
            (int)RemainingSidArea,
            SidAreaSize,
            0,
            0LL);
          goto LABEL_26;
        }
        goto LABEL_40;
      }
      if ( (unsigned int)(TokenInformationClass - 23) >= 2 )
        return -1073741821;
    }
    switch ( TokenInformationClass )
    {
      case TokenVirtualizationAllowed:
        v44 = *((_DWORD *)Token + 50) >> 9;
LABEL_59:
        v45 = v44 & 1;
LABEL_174:
        *(_DWORD *)TokenInformation = v45;
        return 0;
      case TokenVirtualizationEnabled:
        v44 = *((_DWORD *)Token + 50) >> 10;
        goto LABEL_59;
      case TokenHasRestrictions:
        IsSandboxedToken = (*((_DWORD *)Token + 50) & 0x810) != 0;
        goto LABEL_165;
    }
LABEL_159:
    if ( TokenInformationClass == TokenIsAppSilo )
    {
      *(_DWORD *)TokenInformation = SepSidInTokenSidHash(
                                      (__int64)Token + 808,
                                      0LL,
                                      *(unsigned __int8 **)&RtlpBootStatHandleLock.ApcStateFill[40],
                                      0,
                                      1,
                                      0);
      return 0;
    }
    if ( TokenInformationClass != TokenIsSandboxed )
    {
      if ( TokenInformationClass == (MaxTokenInfoClass|TokenGroups) )
      {
        if ( !(unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
          return -1073741821;
        v110 = *((_DWORD *)Token + 50) >> 27;
      }
      else
      {
        if ( TokenInformationClass != (TokenIsAppSilo|TokenOwner) )
        {
          v45 = *((_BYTE *)Token + 203) & 3;
          goto LABEL_174;
        }
        if ( !(unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
          return -1073741821;
        LOBYTE(v110) = *((_BYTE *)Token + 1168);
      }
      *(_BYTE *)TokenInformation = v110 & 1;
      return 0;
    }
    IsSandboxedToken = SepIsSandboxedToken(Token, KeGetCurrentThread()->PreviousMode);
LABEL_165:
    *(_BYTE *)TokenInformation = IsSandboxedToken;
    return 0;
  }
  if ( TokenInformationClass > TokenPrivateNameSpace )
  {
    if ( TokenInformationClass != TokenBnoIsolation )
    {
      if ( TokenInformationClass == TokenIsLessPrivilegedAppContainer )
      {
        v111 = (*((_DWORD *)Token + 50) & 0x4000) != 0 && !SepCanTokenMatchAllPackageSid((__int64)Token);
        *(_DWORD *)TokenInformation = v111;
        return 0;
      }
      if ( TokenInformationClass != TokenIsSandboxed && TokenInformationClass != TokenIsAppSilo )
      {
        if ( TokenInformationClass == MaxTokenInfoClass )
        {
          v106 = KeGetCurrentThread();
          v114 = 0;
          LODWORD(v127) = 0;
          LODWORD(RemainingSidArea) = 0;
          --v106->KernelApcDisable;
          v107 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
          SidAreaSize = 0;
          ExAcquireResourceSharedLite(v107, 1u);
          SepGetTokenLoggingInformationBufferSize(
            (_DWORD)Token,
            (unsigned int)&v114,
            (unsigned int)&v127,
            (unsigned int)&RemainingSidArea,
            (__int64)&SidAreaSize);
          v108 = ExAllocatePool2(0x100uLL);
          v12 = (_QWORD *)v108;
          if ( v108 )
          {
            SepCopyTokenLoggingInformation((int)Token, v108, v109, v114, (int)v127, (int)RemainingSidArea, SidAreaSize);
            goto LABEL_26;
          }
          goto LABEL_40;
        }
        if ( TokenInformationClass != (TokenIsAppSilo|TokenGroups) && (unsigned int)(TokenInformationClass - 51) > 1 )
          return -1073741821;
      }
      goto LABEL_159;
    }
    v112 = KeGetCurrentThread();
    --v112->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    v113 = ExAllocatePool2(0x100uLL);
    v34 = (_DWORD *)v113;
    if ( !v113 )
      goto LABEL_181;
    if ( *((_QWORD *)Token + 144) )
    {
      *(_BYTE *)(v113 + 8) = 1;
      *(_QWORD *)v113 = v113 + 16;
      memmove(
        (void *)(v113 + 16),
        *(const void **)(*((_QWORD *)Token + 144) + 48LL),
        *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
    }
    else
    {
      *(_BYTE *)(v113 + 8) = 0;
      *(_QWORD *)v113 = 0LL;
    }
LABEL_187:
    ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
    KeLeaveCriticalRegion();
    goto LABEL_188;
  }
  switch ( TokenInformationClass )
  {
    case TokenPrivateNameSpace:
      LOWORD(v44) = *((_WORD *)Token + 101);
      goto LABEL_59;
    case TokenUIAccess:
    case TokenIsAppContainer:
      if ( TokenInformationClass == TokenUIAccess )
        v44 = *((_DWORD *)Token + 50) >> 12;
      else
        v44 = *((_DWORD *)Token + 50) >> 14;
      goto LABEL_59;
    case TokenCapabilities:
      v99 = KeGetCurrentThread();
      --v99->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v100 = *((_DWORD *)Token + 200);
      v101 = 16 * v100 + 24;
      if ( v100 )
      {
        v102 = (__int64 *)*((_QWORD *)Token + 99);
        v103 = v100;
        do
        {
          v104 = *v102;
          v102 += 2;
          v101 += 4 * *(unsigned __int8 *)(v104 + 1) + 8;
          --v103;
        }
        while ( v103 );
      }
      v105 = ExAllocatePool2(0x100uLL);
      v12 = (_QWORD *)v105;
      if ( v105 )
      {
        *(_DWORD *)v105 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((PSID_AND_ATTRIBUTES *)Token + 99),
          v101,
          (PSID_AND_ATTRIBUTES)(v105 + 8),
          (PSID)(v105 + (unsigned int)(16 * *((_DWORD *)Token + 200)) + 24LL),
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_26;
      }
      goto LABEL_181;
    case TokenAppContainerSid:
      v98 = KeGetCurrentThread();
      --v98->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v71 = *((_QWORD *)Token + 98);
      if ( v71 )
        v72 = 4 * *(unsigned __int8 *)(v71 + 1) + 16;
      else
        v72 = 8;
      v73 = ExAllocatePool2(0x100uLL);
      v34 = (_DWORD *)v73;
      if ( !v73 )
        goto LABEL_181;
      if ( !v71 )
        goto LABEL_104;
      v74 = (void *)*((_QWORD *)Token + 98);
      goto LABEL_103;
    case TokenAppContainerNumber:
      v96 = KeGetCurrentThread();
      --v96->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v97 = *((_QWORD *)Token + 135);
      if ( v97 )
        v3 = *(_DWORD *)(v97 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *(_DWORD *)TokenInformation = v3;
      return 0;
  }
  if ( TokenInformationClass != TokenUserClaimAttributes && TokenInformationClass != TokenDeviceClaimAttributes )
  {
    if ( TokenInformationClass == TokenDeviceGroups )
    {
      v75 = KeGetCurrentThread();
      v127 = (char *)Token + 48;
      --v75->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v76 = (char *)Token + 1096;
      v77 = *((_QWORD *)Token + 137);
      RemainingSidArea = (char *)Token + 1096;
      if ( v77 && (v78 = *(_DWORD *)v77, (SidAreaSize = v78) != 0) )
      {
        v79 = SidAreaSize;
        v80 = 16 * v78 + 8;
        v81 = *(__int64 **)(v77 + 8);
        v82 = SidAreaSize;
        do
        {
          v83 = *v81;
          v81 += 2;
          v80 += 4 * *(unsigned __int8 *)(v83 + 1) + 8;
          --v82;
        }
        while ( v82 );
        v76 = (char *)Token + 1096;
      }
      else
      {
        v80 = 24;
        v79 = 0;
      }
      v84 = (PERESOURCE *)((char *)Token + 48);
      RemainingSidArea = v76;
      v85 = ExAllocatePool2(0x100uLL);
      v86 = (void *)v85;
      if ( v85 )
      {
        *(_OWORD *)v85 = 0LL;
        *(_QWORD *)(v85 + 16) = 0LL;
        *(_DWORD *)v85 = v79;
        if ( v79 )
          RtlCopySidAndAttributesArray(
            **(_DWORD **)RemainingSidArea,
            *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)RemainingSidArea + 8LL),
            v80,
            (PSID_AND_ATTRIBUTES)(v85 + 8),
            (PSID)(v85 + 16 * v79 - 16 + 24LL),
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        ExReleaseResourceLite(*v84);
        KeLeaveCriticalRegion();
        *TokenInformation = v86;
        return 0;
      }
      v87 = *v84;
      goto LABEL_182;
    }
    if ( TokenInformationClass != TokenProcessTrustLevel )
      return -1073741821;
    v70 = KeGetCurrentThread();
    --v70->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    v71 = *((_QWORD *)Token + 138);
    if ( v71 )
      v72 = 4 * *(unsigned __int8 *)(v71 + 1) + 16;
    else
      v72 = 8;
    v73 = ExAllocatePool2(0x100uLL);
    v34 = (_DWORD *)v73;
    if ( !v73 )
      goto LABEL_181;
    if ( !v71 )
      goto LABEL_104;
    v74 = (void *)*((_QWORD *)Token + 138);
LABEL_103:
    v71 = v73 + 8;
    RtlCopySid(v72 - 8, (PSID)(v73 + 8), v74);
LABEL_104:
    *(_QWORD *)v34 = v71;
    goto LABEL_187;
  }
  *TokenInformation = 0LL;
  v88 = (PERESOURCE *)((char *)Token + 48);
  v89 = KeGetCurrentThread();
  --v89->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v90 = *((_QWORD *)Token + 137);
  if ( !v90 )
    goto LABEL_126;
  if ( !*(_QWORD *)(v90 + 576) )
  {
    if ( TokenInformationClass == TokenUserClaimAttributes )
    {
LABEL_126:
      DWORD2(v122) = 0;
      *(_QWORD *)&v122 = (char *)&v121 + 8;
      v91 = &v121;
      v92 = 16;
      *((_QWORD *)&v121 + 1) = (char *)&v121 + 8;
      *((_QWORD *)&v123 + 1) = &v123;
      *(_QWORD *)&v123 = &v123;
      goto LABEL_127;
    }
    v88 = (PERESOURCE *)((char *)Token + 48);
  }
  v91 = *(__int128 **)(v90 + 584);
  if ( !v91 && TokenInformationClass == TokenDeviceClaimAttributes )
    goto LABEL_126;
  if ( TokenInformationClass == TokenUserClaimAttributes )
    v91 = *(__int128 **)(v90 + 576);
  AuthzBasepQueryClaimAttributesToken(v91, 0LL, 0LL, &SidAreaSize);
  v92 = SidAreaSize;
LABEL_127:
  v93 = ExAllocatePool2(0x100uLL);
  v94 = (void *)v93;
  if ( !v93 )
  {
    v87 = *v88;
LABEL_182:
    ExReleaseResourceLite(v87);
    v3 = -1073741670;
LABEL_183:
    KeLeaveCriticalRegion();
    return v3;
  }
  v95 = AuthzBasepQueryClaimAttributesToken(v91, v93, v92, &SidAreaSize);
  ExReleaseResourceLite(*v88);
  KeLeaveCriticalRegion();
  if ( v95 >= 0 )
    *TokenInformation = v94;
  else
    ExFreePoolWithTag(v94, 0);
  return v95;
}

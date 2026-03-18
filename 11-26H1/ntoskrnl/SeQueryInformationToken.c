/*
 * XREFs of SeQueryInformationToken @ 0x1408F4300
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140461FD0 (RtlpQueryLowBoxId.c)
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x14078F03C (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     RtlpIsAppContainer @ 0x14080491C (RtlpIsAppContainer.c)
 *     SepCheckCapabilities @ 0x140814DD4 (SepCheckCapabilities.c)
 *     CmpCreateRegistryProcessToken @ 0x140856E08 (CmpCreateRegistryProcessToken.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14085B164 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408E87A8 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408E8E84 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     RtlIsSandboxedToken @ 0x1408F4B90 (RtlIsSandboxedToken.c)
 *     ObpParseSymbolicLinkEx @ 0x140900300 (ObpParseSymbolicLinkEx.c)
 *     EtwTiLogImpersonateClient @ 0x1409294AC (EtwTiLogImpersonateClient.c)
 *     EtwpPsProvTraceProcess @ 0x140952CBC (EtwpPsProvTraceProcess.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     EtwpBuildProcessEvent @ 0x14096D8A8 (EtwpBuildProcessEvent.c)
 *     PiDqOpenUserObjectRegKey @ 0x1409920EC (PiDqOpenUserObjectRegKey.c)
 *     PsIsProcessAppContainer @ 0x1409D6220 (PsIsProcessAppContainer.c)
 *     SeCompareTokens @ 0x140A28A40 (SeCompareTokens.c)
 *     SeQuerySigningPolicyWorker @ 0x140A2A0A4 (SeQuerySigningPolicyWorker.c)
 *     CmpBuildAdminInformation @ 0x140A339F8 (CmpBuildAdminInformation.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A967F0 (ObpVerifyCreatorAccessCheck.c)
 *     SeTokenIsElevated @ 0x140A9BCE0 (SeTokenIsElevated.c)
 *     ObpGetIntegrityLevel @ 0x140AB5B6C (ObpGetIntegrityLevel.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140AFD288 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpTiQueryTokenIdentity @ 0x140B192EC (EtwpTiQueryTokenIdentity.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1402B2370 (SepCanTokenMatchAllPackageSid.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SepSidInTokenSidHash @ 0x1403C06B0 (SepSidInTokenSidHash.c)
 *     SepCopyTokenIntegrity @ 0x140441970 (SepCopyTokenIntegrity.c)
 *     SepGetTokenElevation @ 0x140477040 (SepGetTokenElevation.c)
 *     SepConvertTokenPrivileges @ 0x14047C32C (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x14047C350 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x14047DD34 (SepTokenPrivilegeCount.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     SepIsSandboxedToken @ 0x140483538 (SepIsSandboxedToken.c)
 *     RtlSubAuthorityCountSid @ 0x140491650 (RtlSubAuthorityCountSid.c)
 *     SepGetTokenElevationType @ 0x1404AB5E8 (SepGetTokenElevationType.c)
 *     Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline @ 0x14063AE8C (Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopySid @ 0x140A2AE10 (RtlCopySid.c)
 *     SepCopyTokenAccessInformation @ 0x140A33488 (SepCopyTokenAccessInformation.c)
 *     SepCopyTokenLoggingInformation @ 0x140A33D54 (SepCopyTokenLoggingInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x140A33F00 (RtlCopySidAndAttributesArray.c)
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x140A342B0 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 *     SeQuerySessionIdToken @ 0x140A820F0 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A8E03C (AuthzBasepQueryClaimAttributesToken.c)
 *     SepGetTokenLoggingInformationBufferSize @ 0x140ABABE0 (SepGetTokenLoggingInformationBufferSize.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  NTSTATUS v3; // ebx
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r12d
  __int64 v10; // rax
  _DWORD *v11; // r14
  int v13; // eax
  __int64 v14; // rax
  struct _KTHREAD *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  _DWORD *v18; // rax
  _QWORD *v19; // rsi
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  struct _KTHREAD *v23; // rax
  int v24; // ecx
  ULONG v25; // eax
  struct _KTHREAD *v26; // rax
  int TokenElevation; // ebx
  struct _KTHREAD *v28; // rax
  int v29; // eax
  __int64 v30; // r10
  __int64 v31; // r11
  bool v32; // zf
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // edx
  int v36; // r13d
  int v37; // r12d
  __int64 *v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  int v41; // r12d
  __int64 *v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r14d
  __int64 v47; // rax
  unsigned int v48; // esi
  void *v49; // rax
  __int64 *v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  bool IsSandboxedToken; // al
  int v54; // eax
  _DWORD *Pool2; // rcx
  int TokenElevationType; // eax
  _DWORD *v57; // rdx
  struct _KTHREAD *v58; // rax
  __int64 v59; // rsi
  int v60; // r12d
  BOOL v61; // esi
  struct _KTHREAD *v62; // rax
  struct _KTHREAD *v63; // rax
  int v64; // eax
  _OWORD *v65; // rax
  struct _KTHREAD *v66; // rax
  _QWORD *v67; // rax
  void *v68; // rcx
  struct _KTHREAD *v69; // rax
  int v70; // r14d
  _QWORD *v71; // rax
  void *v72; // rdx
  void *v73; // r8
  struct _KTHREAD *v74; // rax
  _QWORD *v75; // rax
  struct _KTHREAD *v76; // rax
  unsigned int v77; // ecx
  int v78; // r12d
  __int64 v79; // r8
  __int64 *v80; // rdx
  __int64 v81; // rax
  _DWORD *v82; // rax
  void *v83; // r13
  struct _KTHREAD *v84; // rax
  int v85; // eax
  unsigned int v86; // ecx
  unsigned int v87; // r13d
  __int64 *v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  unsigned int v91; // ecx
  unsigned int v92; // r12d
  __int64 *v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r9
  unsigned __int64 v98; // rcx
  __int64 v99; // rcx
  PERESOURCE *v100; // r12
  struct _KTHREAD *v101; // rax
  __int64 v102; // rax
  __int128 *v103; // rdi
  unsigned int v104; // r14d
  __int64 v105; // rax
  void *v106; // rsi
  struct _ERESOURCE *v107; // rcx
  NTSTATUS v108; // edi
  __int64 v109; // rax
  void *v110; // r8
  struct _KTHREAD *v111; // rax
  unsigned int v112; // ecx
  int v113; // r12d
  __int64 *v114; // rdx
  __int64 v115; // r8
  __int64 v116; // rax
  _DWORD *v117; // rax
  struct _KTHREAD *v118; // rax
  PERESOURCE *v119; // rcx
  int *v120; // rdx
  unsigned int v121; // eax
  int v122; // r12d
  __int64 *v123; // rdx
  __int64 v124; // r9
  __int64 v125; // rax
  PERESOURCE *v126; // rsi
  _QWORD *v127; // rdi
  struct _KTHREAD *v128; // rax
  struct _ERESOURCE *v129; // rcx
  __int64 v130; // rax
  int v131; // r8d
  __int64 v132; // rax
  int v133; // [rsp+80h] [rbp-29h] BYREF
  int v134; // [rsp+84h] [rbp-25h]
  int v135; // [rsp+88h] [rbp-21h]
  int v136; // [rsp+8Ch] [rbp-1Dh]
  PSID Sid[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v138; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v139; // [rsp+B0h] [rbp+7h]
  _OWORD v140[4]; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v141; // [rsp+110h] [rbp+67h] BYREF
  int v142; // [rsp+118h] [rbp+6Fh] BYREF
  PERESOURCE *v143; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = 0;
  v142 = 0;
  v138 = 0LL;
  v7 = 24;
  v139 = 0LL;
  v140[0] = 0LL;
  if ( TokenInformationClass <= TokenVirtualizationEnabled )
  {
    if ( TokenInformationClass == TokenVirtualizationEnabled )
    {
      v54 = *((_DWORD *)Token + 50) >> 10;
    }
    else
    {
      if ( TokenInformationClass <= TokenImpersonationLevel )
      {
        switch ( TokenInformationClass )
        {
          case TokenImpersonationLevel:
            if ( *((_DWORD *)Token + 48) == 2 )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
                return -1073741670;
              v64 = *((_DWORD *)Token + 49);
LABEL_116:
              *Pool2 = v64;
              *TokenInformation = Pool2;
              return 0;
            }
            return -1073741821;
          case TokenUser:
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            v9 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
            v10 = ExAllocatePool2(0x100uLL);
            v11 = (_DWORD *)v10;
            if ( v10 )
            {
              RtlCopySidAndAttributesArray(
                1,
                *((_QWORD *)Token + 19),
                v9,
                v10,
                (void *)(v10 + 16),
                (__int64)&v141,
                (__int64)&v141);
LABEL_8:
              ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
              KeLeaveCriticalRegion();
LABEL_9:
              *TokenInformation = v11;
              return 0;
            }
            goto LABEL_30;
          case TokenGroups:
            v76 = KeGetCurrentThread();
            --v76->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            v77 = *((_DWORD *)Token + 31);
            v78 = 16 * v77 - 8;
            if ( v77 > 1 )
            {
              v79 = v77 - 1;
              v80 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
              do
              {
                v81 = *v80;
                v80 += 2;
                v78 += 4 * *(unsigned __int8 *)(v81 + 1) + 8;
                --v79;
              }
              while ( v79 );
            }
            v82 = (_DWORD *)ExAllocatePool2(0x100uLL);
            v83 = v82;
            if ( v82 )
            {
              *v82 = *((_DWORD *)Token + 31) - 1;
              RtlCopySidAndAttributesArray(
                *((_DWORD *)Token + 31) - 1,
                *((_DWORD *)Token + 38) + 16,
                v78,
                (_DWORD)v82 + 8,
                (char *)v82 + (unsigned int)(16 * *((_DWORD *)Token + 31) - 32) + 24,
                (__int64)&v141,
                (__int64)&v141);
              ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
              KeLeaveCriticalRegion();
              *TokenInformation = v83;
              return 0;
            }
            goto LABEL_30;
          case TokenPrivileges:
            v22 = KeGetCurrentThread();
            --v22->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            SepTokenPrivilegeCount((__int64)Token);
            v18 = (_DWORD *)ExAllocatePool2(0x100uLL);
            v19 = v18;
            if ( !v18 )
              goto LABEL_30;
            SepConvertTokenPrivileges((__int64)Token, v18);
LABEL_124:
            ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
            KeLeaveCriticalRegion();
            *TokenInformation = v19;
            return 0;
        }
        if ( TokenInformationClass != TokenOwner )
        {
          if ( TokenInformationClass != TokenPrimaryGroup )
          {
            if ( TokenInformationClass != TokenDefaultDacl )
            {
              if ( TokenInformationClass != TokenSource )
              {
                if ( TokenInformationClass == TokenType )
                {
                  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
                  if ( !Pool2 )
                    return -1073741670;
                  v64 = *((_DWORD *)Token + 48);
                  goto LABEL_116;
                }
                return -1073741821;
              }
              v65 = (_OWORD *)ExAllocatePool2(0x100uLL);
              if ( !v65 )
                return -1073741670;
              *v65 = *(_OWORD *)Token;
LABEL_119:
              *TokenInformation = v65;
              return 0;
            }
            v66 = KeGetCurrentThread();
            --v66->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            v67 = (_QWORD *)ExAllocatePool2(0x100uLL);
            v19 = v67;
            if ( v67 )
            {
              v68 = v67 + 1;
              if ( *((_QWORD *)Token + 23) )
              {
                *v67 = v68;
                memmove(v68, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
              }
              else
              {
                *v67 = 0LL;
              }
              goto LABEL_124;
            }
            goto LABEL_199;
          }
          v69 = KeGetCurrentThread();
          --v69->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
          v70 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
          v71 = (_QWORD *)ExAllocatePool2(0x100uLL);
          v19 = v71;
          if ( v71 )
          {
            v72 = v71 + 1;
            *v71 = v71 + 1;
            v73 = (void *)*((_QWORD *)Token + 21);
LABEL_127:
            RtlCopySid(v70 - 8, v72, v73);
            goto LABEL_124;
          }
LABEL_199:
          v107 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
          goto LABEL_200;
        }
        v74 = KeGetCurrentThread();
        --v74->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
        v70 = 4
            * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
            + 16;
        v75 = (_QWORD *)ExAllocatePool2(0x100uLL);
        v19 = v75;
        if ( v75 )
        {
          v72 = v75 + 1;
          *v75 = v75 + 1;
          v73 = *(void **)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36));
          goto LABEL_127;
        }
LABEL_30:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return -1073741670;
      }
      switch ( TokenInformationClass )
      {
        case TokenStatistics:
          v14 = ExAllocatePool2(0x100uLL);
          v11 = (_DWORD *)v14;
          if ( v14 )
          {
            *(_QWORD *)v14 = *((_QWORD *)Token + 2);
            *(_QWORD *)(v14 + 8) = *((_QWORD *)Token + 3);
            *(_DWORD *)(v14 + 24) = *((_DWORD *)Token + 48);
            *(_DWORD *)(v14 + 28) = *((_DWORD *)Token + 49);
            *(_QWORD *)(v14 + 16) = *((_QWORD *)Token + 5);
            v15 = KeGetCurrentThread();
            --v15->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            v11[8] = *((_DWORD *)Token + 34);
            v16 = *((_QWORD *)Token + 23);
            v17 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
            if ( v16 )
              v17 -= *(unsigned __int16 *)(v16 + 2);
            v11[9] = v17;
            v11[9] = *((_DWORD *)Token + 35);
            v11[10] = *((_DWORD *)Token + 31) - 1;
            v11[11] = SepTokenPrivilegeCount((__int64)Token);
            *((_QWORD *)v11 + 6) = *((_QWORD *)Token + 7);
            goto LABEL_8;
          }
          return -1073741670;
        case TokenSessionId:
          SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
          return 0;
        case TokenGroupsAndPrivileges:
          v84 = KeGetCurrentThread();
          --v84->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
          v85 = SepTokenPrivilegeCount((__int64)Token);
          v86 = *((_DWORD *)Token + 31);
          LODWORD(v141) = v85;
          v87 = 16 * v86;
          v142 = 12 * v85;
          LODWORD(v143) = 16 * v86;
          if ( v86 )
          {
            v88 = (__int64 *)*((_QWORD *)Token + 19);
            v89 = v86;
            do
            {
              v90 = *v88;
              v88 += 2;
              v87 += (4 * *(unsigned __int8 *)(v90 + 1) + 15) & 0xFFFFFFF8;
              --v89;
            }
            while ( v89 );
          }
          v91 = *((_DWORD *)Token + 32);
          v134 = 16 * v91;
          v92 = 16 * v91;
          if ( v91 )
          {
            v93 = (__int64 *)*((_QWORD *)Token + 20);
            v94 = v91;
            do
            {
              v95 = *v93;
              v93 += 2;
              v92 += (4 * *(unsigned __int8 *)(v95 + 1) + 15) & 0xFFFFFFF8;
              --v94;
            }
            while ( v94 );
          }
          v96 = ExAllocatePool2(0x100uLL);
          v19 = (_QWORD *)v96;
          if ( !v96 )
            goto LABEL_30;
          v97 = v96 + 56;
          *(_QWORD *)(v96 + 48) = *((_QWORD *)Token + 3);
          *(_DWORD *)(v96 + 4) = v87;
          *(_DWORD *)v96 = *((_DWORD *)Token + 31);
          *(_QWORD *)(v96 + 8) = v96 + 56;
          *(_DWORD *)(v96 + 20) = v92;
          *(_DWORD *)(v96 + 16) = *((_DWORD *)Token + 32);
          if ( *((_DWORD *)Token + 32) )
            v98 = v96 + ((v87 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
          else
            v98 = 0LL;
          *(_QWORD *)(v96 + 24) = v98;
          v99 = (unsigned int)v143;
          *(_DWORD *)(v96 + 36) = v142;
          *(_DWORD *)(v96 + 32) = v141;
          *(_QWORD *)(v96 + 40) = v97 + v87 + (unsigned __int64)v92;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 31),
            *((_QWORD *)Token + 19),
            v87 - v99,
            v97,
            (void *)(v97 + v99),
            (__int64)&v141,
            (__int64)&v141);
          if ( *((_DWORD *)v19 + 4) )
            RtlCopySidAndAttributesArray(
              *((_DWORD *)Token + 32),
              *((_QWORD *)Token + 20),
              v92 - v134,
              v19[3],
              (void *)(v19[3] + (unsigned int)v134),
              (__int64)&v141,
              (__int64)&v141);
          SepConvertTokenPrivilegesToLuidAndAttributes(Token, v19[5]);
          goto LABEL_124;
        case TokenElevationType:
          if ( ExAllocatePool2(0x100uLL) )
          {
            TokenElevationType = SepGetTokenElevationType((__int64)Token);
            *v57 = TokenElevationType;
            *TokenInformation = v57;
            return 0;
          }
          return -1073741670;
        case TokenElevation:
          v11 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( v11 )
          {
            v26 = KeGetCurrentThread();
            --v26->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            TokenElevation = SepGetTokenElevation((__int64)Token);
            ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
            KeLeaveCriticalRegion();
            *v11 = TokenElevation;
            goto LABEL_9;
          }
          return -1073741670;
      }
      if ( TokenInformationClass != TokenHasRestrictions )
      {
        if ( TokenInformationClass == TokenAccessInformation )
        {
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
          v142 = 0;
          v29 = SepTokenPrivilegeCount((__int64)Token);
          v30 = *((unsigned int *)Token + 32);
          v31 = *((unsigned int *)Token + 200);
          v134 = v29;
          v32 = v29 == 0;
          v33 = *((_DWORD *)Token + 31);
          v34 = 12 * v29 + 16;
          v35 = v34 - 12;
          if ( v32 )
            v35 = v34;
          v36 = 16 * v30;
          v133 = v35;
          v136 = 16 * v33;
          v37 = 16 * v33;
          LODWORD(v141) = 16 * v33;
          v135 = 16 * v30;
          LODWORD(v143) = 16 * v31;
          if ( v33 )
          {
            v38 = (__int64 *)*((_QWORD *)Token + 19);
            v39 = v33;
            do
            {
              v40 = *v38;
              v38 += 2;
              v37 += (4 * *(unsigned __int8 *)(v40 + 1) + 15) & 0xFFFFFFF8;
              --v39;
            }
            while ( v39 );
            LODWORD(v141) = v37;
          }
          if ( (_DWORD)v30 )
          {
            v50 = (__int64 *)*((_QWORD *)Token + 20);
            v51 = v30;
            do
            {
              v52 = *v50;
              v50 += 2;
              v36 += (4 * *(unsigned __int8 *)(v52 + 1) + 15) & 0xFFFFFFF8;
              --v51;
            }
            while ( v51 );
          }
          v41 = (int)v143;
          if ( (_DWORD)v31 )
          {
            v42 = (__int64 *)*((_QWORD *)Token + 99);
            v43 = v31;
            do
            {
              v44 = *v42;
              v42 += 2;
              v41 += (4 * *(unsigned __int8 *)(v44 + 1) + 15) & 0xFFFFFFF8;
              --v43;
            }
            while ( v43 );
          }
          v45 = *((_QWORD *)Token + 98);
          v46 = 0;
          if ( v45 )
            v46 = (4 * *(unsigned __int8 *)(v45 + 1) + 15) & 0xFFFFFFF8;
          v47 = *((_QWORD *)Token + 138);
          v48 = 0;
          if ( v47 )
            v48 = (4 * *(unsigned __int8 *)(v47 + 1) + 15) & 0xFFFFFFF8;
          AuthzBasepQueryInternalSecurityAttributesToken(*((_QWORD *)Token + 97), 0LL, 0LL, &v142);
          v133 += 904 + v141 + v36 + v46 + v41 + v48 + v142;
          v49 = (void *)ExAllocatePool2(0x100uLL);
          Sid[0] = v49;
          if ( !v49 )
            goto LABEL_30;
          SepCopyTokenAccessInformation(
            (int)Token,
            (int)v49,
            v133,
            v134,
            v141,
            v136,
            v36,
            v135,
            v46,
            v41,
            (int)v143,
            v48,
            v142,
            0,
            0LL);
          ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
          KeLeaveCriticalRegion();
          v65 = Sid[0];
          goto LABEL_119;
        }
        if ( TokenInformationClass != TokenVirtualizationAllowed )
          return -1073741821;
      }
      if ( TokenInformationClass != TokenVirtualizationAllowed )
      {
        IsSandboxedToken = (*((_DWORD *)Token + 50) & 0x810) != 0;
LABEL_194:
        *(_BYTE *)TokenInformation = IsSandboxedToken;
        return 0;
      }
      v54 = *((_DWORD *)Token + 50) >> 9;
    }
    goto LABEL_81;
  }
  if ( TokenInformationClass > TokenDeviceGroups )
  {
    if ( TokenInformationClass != TokenProcessTrustLevel )
    {
      if ( TokenInformationClass != TokenPrivateNameSpace )
      {
        if ( TokenInformationClass == TokenBnoIsolation )
        {
          v62 = KeGetCurrentThread();
          --v62->KernelApcDisable;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
          v132 = ExAllocatePool2(0x100uLL);
          v11 = (_DWORD *)v132;
          if ( v132 )
          {
            if ( *((_QWORD *)Token + 144) )
            {
              *(_BYTE *)(v132 + 8) = 1;
              *(_QWORD *)v132 = v132 + 16;
              memmove(
                (void *)(v132 + 16),
                *(const void **)(*((_QWORD *)Token + 144) + 48LL),
                *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
            }
            else
            {
              *(_BYTE *)(v132 + 8) = 0;
              *(_QWORD *)v132 = 0LL;
            }
            goto LABEL_8;
          }
          goto LABEL_199;
        }
        if ( TokenInformationClass == TokenIsLessPrivilegedAppContainer )
        {
          v61 = (*((_DWORD *)Token + 50) & 0x4000) != 0 && !SepCanTokenMatchAllPackageSid((__int64)Token);
          *(_DWORD *)TokenInformation = v61;
          return 0;
        }
        if ( TokenInformationClass != MaxTokenInfoClass
          && TokenInformationClass != (TokenAppContainerNumber|TokenAuditPolicy) )
        {
          if ( TokenInformationClass == (TokenUserClaimAttributes|TokenAuditPolicy) )
          {
            v128 = KeGetCurrentThread();
            v133 = 0;
            LODWORD(v143) = 0;
            LODWORD(v141) = 0;
            --v128->KernelApcDisable;
            v129 = (struct _ERESOURCE *)*((_QWORD *)Token + 6);
            v142 = 0;
            ExAcquireResourceSharedLite(v129, 1u);
            SepGetTokenLoggingInformationBufferSize(
              (_DWORD)Token,
              (unsigned int)&v133,
              (unsigned int)&v143,
              (unsigned int)&v141,
              (__int64)&v142);
            v130 = ExAllocatePool2(0x100uLL);
            v19 = (_QWORD *)v130;
            if ( v130 )
            {
              SepCopyTokenLoggingInformation((_DWORD)Token, v130, v131, v133, (_DWORD)v143, v141, v142);
              goto LABEL_124;
            }
            goto LABEL_30;
          }
          if ( TokenInformationClass != (TokenDeviceClaimAttributes|TokenAuditPolicy) )
            return -1073741821;
        }
      }
      if ( TokenInformationClass != TokenPrivateNameSpace )
      {
        if ( TokenInformationClass == (TokenAppContainerNumber|TokenAuditPolicy) )
        {
          v13 = SepSidInTokenSidHash(
                  (__int64)Token + 808,
                  0LL,
                  (unsigned __int8 *)RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink,
                  0,
                  1,
                  0);
        }
        else
        {
          if ( TokenInformationClass == MaxTokenInfoClass )
          {
            IsSandboxedToken = SepIsSandboxedToken(Token, KeGetCurrentThread()->PreviousMode);
            goto LABEL_194;
          }
          if ( !(unsigned int)Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline() )
            return -1073741821;
          v13 = *((_BYTE *)Token + 203) & 3;
        }
        *(_DWORD *)TokenInformation = v13;
        return 0;
      }
      LOWORD(v54) = *((_WORD *)Token + 101);
LABEL_81:
      *(_DWORD *)TokenInformation = v54 & 1;
      return 0;
    }
    v63 = KeGetCurrentThread();
    --v63->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    v59 = *((_QWORD *)Token + 138);
    if ( v59 )
      v60 = 4 * *(unsigned __int8 *)(v59 + 1) + 16;
    else
      v60 = 8;
    v109 = ExAllocatePool2(0x100uLL);
    v11 = (_DWORD *)v109;
    if ( !v109 )
      goto LABEL_199;
    if ( v59 )
    {
      v110 = (void *)*((_QWORD *)Token + 138);
      goto LABEL_168;
    }
    goto LABEL_169;
  }
  switch ( TokenInformationClass )
  {
    case TokenDeviceGroups:
      v118 = KeGetCurrentThread();
      v119 = (PERESOURCE *)((char *)Token + 48);
      v143 = v119;
      --v118->KernelApcDisable;
      ExAcquireResourceSharedLite(*v119, 1u);
      v120 = (int *)*((_QWORD *)Token + 137);
      v141 = (__int64)Token + 1096;
      if ( v120 && (v121 = *v120) != 0 )
      {
        v122 = *v120;
        v7 = 16 * v121 + 8;
        v123 = (__int64 *)*((_QWORD *)v120 + 1);
        v124 = v121;
        do
        {
          v125 = *v123;
          v123 += 2;
          v7 += 4 * *(unsigned __int8 *)(v125 + 1) + 8;
          --v124;
        }
        while ( v124 );
        v141 = (__int64)Token + 1096;
        v126 = (PERESOURCE *)((char *)Token + 48);
      }
      else
      {
        v122 = 0;
        v141 = (__int64)Token + 1096;
        v126 = (PERESOURCE *)((char *)Token + 48);
      }
      v127 = (_QWORD *)ExAllocatePool2(0x100uLL);
      if ( v127 )
      {
        *(_OWORD *)v127 = 0LL;
        v127[2] = 0LL;
        *(_DWORD *)v127 = v122;
        if ( v122 )
          RtlCopySidAndAttributesArray(
            **(_DWORD **)v141,
            *(_QWORD *)(*(_QWORD *)v141 + 8LL),
            v7,
            (_DWORD)v127 + 8,
            (char *)v127 + (unsigned int)(16 * v122 - 16) + 24,
            (__int64)&v141,
            (__int64)&v141);
        ExReleaseResourceLite(*v126);
        KeLeaveCriticalRegion();
        *TokenInformation = v127;
        return 0;
      }
      v107 = *v126;
      goto LABEL_200;
    case TokenIntegrityLevel:
      v23 = KeGetCurrentThread();
      *(_OWORD *)Sid = 0LL;
      --v23->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      SepCopyTokenIntegrity((__int64)Token, (__int64)Sid);
      v24 = *RtlSubAuthorityCountSid(Sid[0]);
      if ( (_BYTE)v24 )
        v25 = *RtlSubAuthoritySid(Sid[0], v24 - 1);
      else
        v25 = 0;
      *(_DWORD *)TokenInformation = v25;
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      goto LABEL_50;
    case TokenUIAccess:
    case TokenIsAppContainer:
      if ( TokenInformationClass == TokenUIAccess )
        v54 = *((_DWORD *)Token + 50) >> 12;
      else
        v54 = *((_DWORD *)Token + 50) >> 14;
      goto LABEL_81;
    case TokenCapabilities:
      v111 = KeGetCurrentThread();
      --v111->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v112 = *((_DWORD *)Token + 200);
      v113 = 16 * v112 + 24;
      if ( v112 )
      {
        v114 = (__int64 *)*((_QWORD *)Token + 99);
        v115 = v112;
        do
        {
          v116 = *v114;
          v114 += 2;
          v113 += 4 * *(unsigned __int8 *)(v116 + 1) + 8;
          --v115;
        }
        while ( v115 );
      }
      v117 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v19 = v117;
      if ( v117 )
      {
        *v117 = *((_DWORD *)Token + 200);
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 200),
          *((_QWORD *)Token + 99),
          v113,
          (_DWORD)v117 + 8,
          (char *)v117 + (unsigned int)(16 * *((_DWORD *)Token + 200)) + 24,
          (__int64)&v141,
          (__int64)&v141);
        goto LABEL_124;
      }
      goto LABEL_199;
    case TokenAppContainerSid:
      v58 = KeGetCurrentThread();
      --v58->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v59 = *((_QWORD *)Token + 98);
      if ( v59 )
        v60 = 4 * *(unsigned __int8 *)(v59 + 1) + 16;
      else
        v60 = 8;
      v109 = ExAllocatePool2(0x100uLL);
      v11 = (_DWORD *)v109;
      if ( !v109 )
        goto LABEL_199;
      if ( v59 )
      {
        v110 = (void *)*((_QWORD *)Token + 98);
LABEL_168:
        v59 = v109 + 8;
        RtlCopySid(v60 - 8, (PSID)(v109 + 8), v110);
      }
LABEL_169:
      *(_QWORD *)v11 = v59;
      goto LABEL_8;
    case TokenAppContainerNumber:
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v21 = *((_QWORD *)Token + 135);
      if ( v21 )
        v3 = *(_DWORD *)(v21 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *(_DWORD *)TokenInformation = v3;
      return 0;
  }
  if ( (unsigned int)(TokenInformationClass - 33) >= 2 )
    return -1073741821;
  *TokenInformation = 0LL;
  v100 = (PERESOURCE *)((char *)Token + 48);
  v101 = KeGetCurrentThread();
  --v101->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v102 = *((_QWORD *)Token + 137);
  if ( !v102 )
    goto LABEL_157;
  if ( !*(_QWORD *)(v102 + 576) )
  {
    if ( TokenInformationClass == TokenUserClaimAttributes )
    {
LABEL_157:
      DWORD2(v139) = 0;
      *(_QWORD *)&v139 = (char *)&v138 + 8;
      v103 = &v138;
      v104 = 16;
      *((_QWORD *)&v138 + 1) = (char *)&v138 + 8;
      *((_QWORD *)&v140[0] + 1) = v140;
      *(_QWORD *)&v140[0] = v140;
      goto LABEL_158;
    }
    v100 = (PERESOURCE *)((char *)Token + 48);
  }
  v103 = *(__int128 **)(v102 + 584);
  if ( !v103 && TokenInformationClass == TokenDeviceClaimAttributes )
    goto LABEL_157;
  if ( TokenInformationClass == TokenUserClaimAttributes )
    v103 = *(__int128 **)(v102 + 576);
  AuthzBasepQueryClaimAttributesToken(v103, 0LL, 0LL, &v142);
  v104 = v142;
LABEL_158:
  v105 = ExAllocatePool2(0x100uLL);
  v106 = (void *)v105;
  if ( !v105 )
  {
    v107 = *v100;
LABEL_200:
    ExReleaseResourceLite(v107);
    v3 = -1073741670;
LABEL_50:
    KeLeaveCriticalRegion();
    return v3;
  }
  v108 = AuthzBasepQueryClaimAttributesToken(v103, v105, v104, &v142);
  ExReleaseResourceLite(*v100);
  KeLeaveCriticalRegion();
  if ( v108 >= 0 )
    *TokenInformation = v106;
  else
    ExFreePoolWithTag(v106, 0);
  return v108;
}

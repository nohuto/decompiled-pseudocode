/*
 * XREFs of NtQueryInformationToken @ 0x140B81F50
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14061C8D0 (RtlGetAppContainerNamedObjectPath.c)
 *     DifNtQueryInformationTokenWrapper @ 0x140687200 (DifNtQueryInformationTokenWrapper.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140780FE0 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepReferenceTokenByHandle @ 0x1403ABB50 (SepReferenceTokenByHandle.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepCopyTokenIntegrity @ 0x14043A480 (SepCopyTokenIntegrity.c)
 *     SeQueryMandatoryPolicyToken @ 0x140456C70 (SeQueryMandatoryPolicyToken.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140470310 (SepDeReferenceLogonSessionDirect.c)
 *     SepGetTokenElevation @ 0x1404707C0 (SepGetTokenElevation.c)
 *     SepConvertTokenPrivileges @ 0x140475C9C (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140475CC0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x1404776A4 (SepTokenPrivilegeCount.c)
 *     SepIsSandboxedToken @ 0x14047CE68 (SepIsSandboxedToken.c)
 *     SepGetTokenElevationType @ 0x1404A4C78 (SepGetTokenElevationType.c)
 *     Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline @ 0x1404D8854 (Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063DEF8 (Feature_295645497__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     SepCopyTokenAccessInformation @ 0x140A4E3E8 (SepCopyTokenAccessInformation.c)
 *     RtlCopySidAndAttributesArray @ 0x140A4EE60 (RtlCopySidAndAttributesArray.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x140A4EF60 (SepGetTokenAccessInformationBufferSize.c)
 *     SeQuerySessionIdToken @ 0x140A87F60 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A92D0C (AuthzBasepQueryClaimAttributesToken.c)
 *     RtlQueryElevationFlags @ 0x140AADFA0 (RtlQueryElevationFlags.c)
 *     SepReferenceLogonSession @ 0x140AB85F0 (SepReferenceLogonSession.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB8628 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 *     SepLogonSystemManagedAdmin @ 0x140B53828 (SepLogonSystemManagedAdmin.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _DWORD *v6; // r14
  NTSTATUS SecurityAttributesToken; // edi
  KPROCESSOR_MODE PreviousMode; // r15
  PULONG v11; // r12
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v14; // rax
  unsigned int *v15; // rbx
  ULONG v16; // ecx
  struct _KTHREAD *v17; // rax
  PVOID v18; // rdi
  unsigned int v19; // eax
  ULONG v20; // ebx
  PVOID v21; // rcx
  PVOID v22; // rcx
  struct _KTHREAD *v23; // rax
  unsigned int v24; // ecx
  ULONG v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r9
  struct _KTHREAD *v28; // rax
  ULONG v29; // r8d
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdx
  NTSTATUS inserted; // esi
  _QWORD *v35; // r15
  _QWORD *v36; // rcx
  PVOID v37; // rcx
  struct _KTHREAD *v38; // rax
  ULONG v39; // ecx
  __int32 v40; // ebx
  __int32 v41; // ebx
  __int32 v42; // ebx
  _DWORD *v43; // r8
  ULONG v44; // esi
  struct _KTHREAD *v45; // rax
  __int64 v46; // rax
  void *v47; // rcx
  struct _KTHREAD *v48; // rax
  int v49; // edx
  __int64 v50; // rax
  __int32 v51; // ebx
  __int32 v52; // ebx
  __int32 v53; // ebx
  __int32 v54; // ebx
  __int64 v55; // r8
  struct _KLOCK_ENTRIES *v56; // r9
  struct _KTHREAD *v57; // rax
  struct _KTHREAD *v58; // rax
  _QWORD *v59; // rsi
  int v60; // r11d
  unsigned int v61; // ecx
  unsigned int v62; // r10d
  unsigned int v63; // r8d
  __int64 v64; // rdx
  __int64 v65; // r9
  unsigned int v66; // eax
  unsigned int v67; // r13d
  unsigned int v68; // r15d
  int v69; // ecx
  __int64 v70; // rdx
  __int64 v71; // r9
  ULONG v72; // ecx
  _SID_AND_ATTRIBUTES *v73; // r9
  _SID_AND_ATTRIBUTES *v74; // r12
  __int64 v75; // rbx
  struct _KTHREAD *v76; // rax
  unsigned int v77; // ecx
  ULONG v78; // r8d
  __int64 v79; // rdx
  __int64 v80; // r9
  __int32 v81; // ebx
  __int32 v82; // ebx
  __int32 v83; // ebx
  struct _KTHREAD *v84; // rax
  int TokenElevation; // ebx
  _QWORD *v86; // r13
  __int64 v87; // rcx
  int v88; // eax
  NTSTATUS v89; // ebx
  PVOID v90; // rbx
  int v91; // r12d
  _QWORD *v92; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 *v94; // rdi
  char v95; // si
  ULONG TokenAccessInformationBufferSize; // eax
  void *v97; // rcx
  NTSTATUS MandatoryPolicyToken; // ebx
  struct _KTHREAD *v99; // rax
  unsigned __int8 *Sid; // r9
  ULONG v101; // eax
  struct _KTHREAD *v102; // rax
  __int64 v103; // r9
  unsigned int v104; // ecx
  unsigned int v105; // r10d
  __int64 v106; // r8
  __int64 v107; // r8
  ULONG v108; // eax
  struct _KTHREAD *v109; // rax
  __int64 v110; // rax
  ULONG v111; // esi
  struct _KTHREAD *v112; // rax
  __int64 v113; // rcx
  void *v114; // rdx
  struct _KTHREAD *v115; // rax
  unsigned int v116; // ecx
  ULONG v117; // r8d
  __int64 v118; // rdx
  __int64 v119; // r9
  ULONG v120; // esi
  struct _KTHREAD *v121; // rax
  PSID v122; // r8
  unsigned __int8 *v123; // rcx
  void *v124; // rdx
  struct _KTHREAD *v125; // rax
  unsigned int *v126; // rcx
  ULONG v127; // ebx
  struct _KTHREAD *v128; // rax
  PVOID v129; // r15
  __int64 v130; // rax
  ULONG v131; // r11d
  ULONG v132; // r8d
  __int64 v133; // rdx
  __int64 v134; // r9
  struct _KTHREAD *v135; // rax
  __int64 v136; // r15
  __int128 *v137; // rax
  __int128 *v138; // r15
  ULONG v139; // ebx
  int v140; // edi
  bool IsSandboxedToken; // al
  bool v142; // zf
  struct _KTHREAD *v143; // rax
  ULONG v144; // ebx
  __int64 v145; // rax
  struct _KTHREAD *v146; // rax
  PERESOURCE *v147; // rbx
  PSID SidArea; // [rsp+20h] [rbp-158h]
  PULONG RemainingSidAreaSize; // [rsp+30h] [rbp-148h]
  char v150[8]; // [rsp+80h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+88h] [rbp-F0h] BYREF
  PSID DestinationSid; // [rsp+90h] [rbp-E8h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+98h] [rbp-E0h] BYREF
  ULONG SessionId; // [rsp+9Ch] [rbp-DCh] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-D8h] BYREF
  PVOID v156; // [rsp+A8h] [rbp-D0h] BYREF
  HANDLE v157; // [rsp+B0h] [rbp-C8h] BYREF
  NTSTATUS v158; // [rsp+B8h] [rbp-C0h]
  int v159; // [rsp+BCh] [rbp-BCh]
  int v160; // [rsp+C0h] [rbp-B8h] BYREF
  int v161; // [rsp+C4h] [rbp-B4h] BYREF
  int v162; // [rsp+C8h] [rbp-B0h] BYREF
  int v163[2]; // [rsp+D0h] [rbp-A8h] BYREF
  PVOID v164; // [rsp+D8h] [rbp-A0h] BYREF
  int v165; // [rsp+E0h] [rbp-98h] BYREF
  int v166; // [rsp+E4h] [rbp-94h]
  __int64 v167; // [rsp+E8h] [rbp-90h]
  __int64 v168; // [rsp+F0h] [rbp-88h]
  int v169; // [rsp+F8h] [rbp-80h]
  int v170; // [rsp+FCh] [rbp-7Ch]
  __int128 v171; // [rsp+100h] [rbp-78h]
  __int128 v172; // [rsp+110h] [rbp-68h] BYREF
  __int128 v173; // [rsp+120h] [rbp-58h]
  __int128 v174; // [rsp+130h] [rbp-48h] BYREF
  _SID_AND_ATTRIBUTES Src; // [rsp+140h] [rbp-38h] BYREF

  v6 = TokenInformation;
  SecurityAttributesToken = 0;
  Object = 0LL;
  Flags.Flags = 0;
  LODWORD(Handle) = 0;
  LODWORD(v164) = 0;
  LODWORD(v157) = 0;
  v163[0] = 0;
  LODWORD(v156) = 0;
  Src = 0LL;
  SessionId = 0;
  v172 = 0LL;
  v173 = 0LL;
  v174 = 0LL;
  v150[0] = 0;
  DestinationSid = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(TokenInformation, TokenInformationLength, 4u);
    v11 = ReturnLength;
    ULongFromUser = RtlReadULongFromUser(ReturnLength);
    RtlWriteULongToUser(ReturnLength, ULongFromUser);
  }
  else
  {
    v11 = ReturnLength;
  }
  if ( TokenInformationClass <= TokenAccessInformation )
  {
    if ( TokenInformationClass == TokenAccessInformation )
    {
      v162 = 0;
      v161 = 0;
      v160 = 0;
      SessionId = 0;
      Flags.Flags = 0;
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v15 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v94 = (unsigned __int8 *)DestinationSid;
        v95 = v150[0];
        TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                             (__int64)v15,
                                             v150[0],
                                             (__int64)DestinationSid,
                                             &v156,
                                             (int *)&Handle,
                                             (int *)&v157,
                                             (int *)&v164,
                                             v163,
                                             (unsigned int *)&v162,
                                             &v161,
                                             &v160,
                                             &SessionId,
                                             &Flags.Flags);
        *v11 = TokenAccessInformationBufferSize;
        if ( TokenInformationLength >= TokenAccessInformationBufferSize )
        {
          SepCopyTokenAccessInformation(
            (__int64)v15,
            (__int64)v6,
            TokenInformationLength,
            (int)v156,
            (unsigned int)Handle,
            (int)v157,
            (unsigned int)v164,
            v163[0],
            v162,
            v161,
            v160,
            SessionId,
            Flags.Flags,
            v95,
            v94);
          goto LABEL_39;
        }
        goto LABEL_35;
      }
      return result;
    }
    if ( TokenInformationClass <= TokenStatistics )
    {
      if ( TokenInformationClass == TokenStatistics )
      {
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result < 0 )
          return result;
        *v11 = 56;
        if ( TokenInformationLength >= 0x38 )
        {
          v48 = KeGetCurrentThread();
          --v48->KernelApcDisable;
          v15 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v159 = 0;
          *(_QWORD *)v6 = *((_QWORD *)v15 + 2);
          *((_QWORD *)v6 + 1) = *((_QWORD *)v15 + 3);
          *((_QWORD *)v6 + 2) = *((_QWORD *)v15 + 5);
          v6[6] = v15[48];
          v6[7] = v15[49];
          v6[8] = v15[34];
          v49 = v15[34] - 4 * *(unsigned __int8 *)(*((_QWORD *)v15 + 21) + 1LL) - 8;
          v159 = v49;
          v50 = *((_QWORD *)v15 + 23);
          if ( v50 )
          {
            v49 -= *(unsigned __int16 *)(v50 + 2);
            v159 = v49;
          }
          v6[9] = v49;
          v6[10] = v15[31] - 1;
          v6[11] = SepTokenPrivilegeCount((__int64)v15);
          *((_QWORD *)v6 + 6) = *((_QWORD *)v15 + 7);
          goto LABEL_39;
        }
      }
      else
      {
        if ( TokenInformationClass <= TokenPrimaryGroup )
        {
          if ( TokenInformationClass != TokenPrimaryGroup )
          {
            if ( TokenInformationClass != -2 )
            {
              switch ( TokenInformationClass )
              {
                case TokenUser:
                  LOBYTE(TokenInformation) = PreviousMode;
                  result = SepReferenceTokenByHandle(
                             TokenHandle,
                             8u,
                             (__int64)TokenInformation,
                             *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                             &Object,
                             v150,
                             &DestinationSid);
                  if ( result < 0 )
                    return result;
                  v28 = KeGetCurrentThread();
                  --v28->KernelApcDisable;
                  v15 = (unsigned int *)Object;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
                  v29 = 4 * *(unsigned __int8 *)(**((_QWORD **)v15 + 19) + 1LL) + 24;
                  *v11 = v29;
                  if ( TokenInformationLength >= v29 )
                  {
                    RtlCopySidAndAttributesArray(
                      1u,
                      *((PSID_AND_ATTRIBUTES *)v15 + 19),
                      v29,
                      (PSID_AND_ATTRIBUTES)v6,
                      v6 + 4,
                      &DestinationSid,
                      (PULONG)&DestinationSid);
                    goto LABEL_39;
                  }
                  goto LABEL_35;
                case TokenGroups:
                  LOBYTE(TokenInformation) = PreviousMode;
                  result = SepReferenceTokenByHandle(
                             TokenHandle,
                             8u,
                             (__int64)TokenInformation,
                             *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                             &Object,
                             v150,
                             &DestinationSid);
                  if ( result < 0 )
                    return result;
                  v23 = KeGetCurrentThread();
                  --v23->KernelApcDisable;
                  v18 = Object;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
                  v24 = *((_DWORD *)v18 + 31);
                  v25 = 16 * v24 - 8;
                  if ( v24 > 1 )
                  {
                    v26 = *((_QWORD *)v18 + 19) + 16LL;
                    v27 = v24 - 1;
                    do
                    {
                      v25 += 4 * *(unsigned __int8 *)(*(_QWORD *)v26 + 1LL) + 8;
                      v26 += 16LL;
                      --v27;
                    }
                    while ( v27 );
                  }
                  *v11 = v25;
                  if ( TokenInformationLength < v25 )
                    goto LABEL_23;
                  *v6 = *((_DWORD *)v18 + 31) - 1;
                  RtlCopySidAndAttributesArray(
                    *((_DWORD *)v18 + 31) - 1,
                    (PSID_AND_ATTRIBUTES)(*((_QWORD *)v18 + 19) + 16LL),
                    v25,
                    (PSID_AND_ATTRIBUTES)(v6 + 2),
                    (char *)v6 + (unsigned int)(16 * *((_DWORD *)v18 + 31) - 32) + 24,
                    &DestinationSid,
                    (PULONG)&DestinationSid);
                  break;
                case TokenPrivileges:
                  LOBYTE(TokenInformation) = PreviousMode;
                  result = SepReferenceTokenByHandle(
                             TokenHandle,
                             8u,
                             (__int64)TokenInformation,
                             *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                             &Object,
                             v150,
                             &DestinationSid);
                  if ( result < 0 )
                    return result;
                  v17 = KeGetCurrentThread();
                  --v17->KernelApcDisable;
                  v18 = Object;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
                  v19 = SepTokenPrivilegeCount((__int64)v18);
                  if ( v19 <= 1 )
                    v20 = 16;
                  else
                    v20 = 12 * v19 + 4;
                  *v11 = v20;
                  if ( TokenInformationLength < v20 )
                  {
LABEL_23:
                    ExReleaseResourceLite(*((PERESOURCE *)v18 + 6));
                    KeLeaveCriticalRegion();
                    v21 = v18;
LABEL_36:
                    ObfDereferenceObjectWithTag(v21, 0x74726853u);
                    return -1073741789;
                  }
                  SepConvertTokenPrivileges((__int64)v18, v6);
                  break;
                case TokenOwner:
                  LOBYTE(TokenInformation) = PreviousMode;
                  result = SepReferenceTokenByHandle(
                             TokenHandle,
                             8u,
                             (__int64)TokenInformation,
                             *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                             &Object,
                             v150,
                             &DestinationSid);
                  if ( result < 0 )
                    return result;
                  v14 = KeGetCurrentThread();
                  --v14->KernelApcDisable;
                  v15 = (unsigned int *)Object;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
                  v16 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v15 + 19) + 16LL * v15[36]) + 1LL) + 16;
                  *v11 = v16;
                  if ( TokenInformationLength >= v16 )
                  {
                    *(_QWORD *)v6 = v6 + 2;
                    RtlCopySid(v16 - 8, v6 + 2, *(PSID *)(*((_QWORD *)v15 + 19) + 16LL * v15[36]));
LABEL_39:
                    ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
                    KeLeaveCriticalRegion();
LABEL_40:
                    v22 = v15;
                    goto LABEL_41;
                  }
                  goto LABEL_35;
                default:
                  return -1073741821;
              }
              ExReleaseResourceLite(*((PERESOURCE *)v18 + 6));
              KeLeaveCriticalRegion();
LABEL_26:
              v22 = v18;
LABEL_41:
              ObfDereferenceObjectWithTag(v22, 0x74726853u);
              return 0;
            }
            if ( !(unsigned int)Feature_295645497__private_IsEnabledDeviceUsageNoInline() )
              return -1073741821;
            v157 = 0LL;
            Handle = 0LL;
            v156 = 0LL;
            v166 = 0;
            v170 = 0;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741821;
            LOBYTE(v30) = PreviousMode;
            result = SepReferenceTokenByHandle(TokenHandle, 8u, v30, v31, &Object, v150, &DestinationSid);
            if ( result < 0 )
              return result;
            *v11 = 8;
            if ( TokenInformationLength == 8 )
            {
              if ( !(unsigned int)Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline() )
              {
                SecurityAttributesToken = -1073741821;
LABEL_61:
                v37 = Object;
LABEL_177:
                ObfDereferenceObjectWithTag(v37, 0x74726853u);
                return SecurityAttributesToken;
              }
              Flags.Flags = 0;
              RtlQueryElevationFlags(&Flags);
              if ( (Flags.Flags & 0x18) == 0x10 && (unsigned int)SepGetTokenElevationType((__int64)Object) == 2 )
              {
                v33 = *(_QWORD *)(v32 + 216);
                if ( *(_QWORD *)(v33 + 24) )
                {
                  inserted = SepReferenceLogonSessionSilo(
                               (_DWORD *)(v33 + 24),
                               *(_QWORD *)(v33 + 168),
                               (__int64 *)&v157);
                  if ( inserted < 0 )
                    goto LABEL_171;
                  v165 = 48;
                  v167 = 0LL;
                  v169 = PreviousMode == 0 ? 0x200 : 0;
                  v168 = 0LL;
                  v171 = 0LL;
                  SeQuerySessionIdToken(Object, &SessionId);
                  v35 = v157;
                  inserted = SeSetSessionIdToken(*((PACCESS_TOKEN *)v157 + 7), SessionId);
                  if ( inserted < 0 )
                  {
                    v36 = v35;
LABEL_165:
                    SepDeReferenceLogonSessionDirect(v36);
                    goto LABEL_171;
                  }
                  inserted = SepDuplicateToken(v35[7], (int)&v165, 0, 1, 1u, 0, 0, (char **)&v156);
                  SepDeReferenceLogonSessionDirect(v35);
                  if ( inserted < 0 )
                  {
LABEL_171:
                    ObfDereferenceObjectWithTag(Object, 0x74726853u);
                    return inserted;
                  }
                  inserted = SepReferenceLogonSession(*((_QWORD *)v156 + 27) + 16LL, (__int64)&DestinationSid);
                  if ( inserted < 0
                    || (*((_DWORD *)v156 + 50) |= 0x10000000u,
                        inserted = ObInsertObjectEx((char *)v156, 0LL, 983551, 0, 0, 0LL, &Handle),
                        inserted < 0) )
                  {
                    ObfDereferenceObject(v156);
                    goto LABEL_171;
                  }
                  *(_QWORD *)v6 = Handle;
                  SecurityAttributesToken = 0;
                  goto LABEL_61;
                }
              }
              ObfDereferenceObjectWithTag(Object, 0x74726853u);
              return -1073741821;
            }
LABEL_151:
            inserted = -1073741820;
            goto LABEL_171;
          }
          LOBYTE(TokenInformation) = PreviousMode;
          result = SepReferenceTokenByHandle(
                     TokenHandle,
                     8u,
                     (__int64)TokenInformation,
                     *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                     &Object,
                     v150,
                     &DestinationSid);
          if ( result < 0 )
            return result;
          v38 = KeGetCurrentThread();
          --v38->KernelApcDisable;
          v15 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v39 = 4 * *(unsigned __int8 *)(*((_QWORD *)v15 + 21) + 1LL) + 16;
          *v11 = v39;
          if ( TokenInformationLength >= v39 )
          {
            *(_QWORD *)v6 = v6 + 2;
            RtlCopySid(v39 - 8, v6 + 2, *((PSID *)v15 + 21));
            goto LABEL_39;
          }
LABEL_35:
          ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
          KeLeaveCriticalRegion();
          v21 = v15;
          goto LABEL_36;
        }
        v40 = TokenInformationClass - 6;
        if ( !v40 )
        {
          LOBYTE(TokenInformation) = PreviousMode;
          v44 = 8;
          result = SepReferenceTokenByHandle(
                     TokenHandle,
                     8u,
                     (__int64)TokenInformation,
                     *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                     &Object,
                     v150,
                     &DestinationSid);
          if ( result < 0 )
            return result;
          v45 = KeGetCurrentThread();
          --v45->KernelApcDisable;
          v15 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v46 = *((_QWORD *)v15 + 23);
          if ( v46 )
            v44 = *(unsigned __int16 *)(v46 + 2) + 8;
          *v11 = v44;
          if ( TokenInformationLength >= v44 )
          {
            v47 = v6 + 2;
            if ( *((_QWORD *)v15 + 23) )
            {
              *(_QWORD *)v6 = v47;
              memmove(v47, *((const void **)v15 + 23), *(unsigned __int16 *)(*((_QWORD *)v15 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)v6 = 0LL;
            }
            goto LABEL_39;
          }
          goto LABEL_35;
        }
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 != 1 )
              return -1073741821;
            LOBYTE(TokenInformation) = PreviousMode;
            result = SepReferenceTokenByHandle(
                       TokenHandle,
                       8u,
                       (__int64)TokenInformation,
                       *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                       &Object,
                       v150,
                       &DestinationSid);
            if ( result < 0 )
              return result;
            v43 = Object;
            if ( *((_DWORD *)Object + 48) == 2 )
            {
              *v11 = 4;
              if ( TokenInformationLength >= 4 )
              {
                *v6 = v43[49];
                v22 = v43;
                goto LABEL_41;
              }
              v21 = v43;
              goto LABEL_36;
            }
            SecurityAttributesToken = -1073741821;
LABEL_176:
            v37 = v43;
            goto LABEL_177;
          }
          LOBYTE(TokenInformation) = PreviousMode;
          result = SepReferenceTokenByHandle(
                     TokenHandle,
                     8u,
                     (__int64)TokenInformation,
                     *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                     &Object,
                     v150,
                     &DestinationSid);
          if ( result < 0 )
            return result;
          *v11 = 4;
          if ( TokenInformationLength >= 4 )
          {
            v22 = Object;
            *v6 = *((_DWORD *)Object + 48);
            goto LABEL_41;
          }
        }
        else
        {
          LOBYTE(TokenInformation) = PreviousMode;
          result = SepReferenceTokenByHandle(
                     TokenHandle,
                     0x10u,
                     (__int64)TokenInformation,
                     *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                     &Object,
                     v150,
                     &DestinationSid);
          if ( result < 0 )
            return result;
          *v11 = 16;
          if ( TokenInformationLength >= 0x10 )
          {
            v22 = Object;
            *(_OWORD *)v6 = *(_OWORD *)Object;
            goto LABEL_41;
          }
        }
      }
      goto LABEL_80;
    }
    if ( TokenInformationClass <= TokenOrigin )
    {
      if ( TokenInformationClass == TokenOrigin )
      {
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result < 0 )
          return result;
        *v11 = 8;
        if ( TokenInformationLength >= 8 )
        {
          v22 = Object;
          *(_QWORD *)v6 = *((_QWORD *)Object + 28);
          goto LABEL_41;
        }
        goto LABEL_80;
      }
      v51 = TokenInformationClass - 11;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( v52 )
        {
          v53 = v52 - 1;
          if ( v53 )
          {
            v54 = v53 - 2;
            if ( v54 )
            {
              if ( v54 != 1 )
                return -1073741821;
              if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
                return -1073741727;
              LOBYTE(v55) = PreviousMode;
              result = SepReferenceTokenByHandle(TokenHandle, 8u, v55, v56, &Object, v150, &DestinationSid);
              if ( result >= 0 )
              {
                *v11 = 31;
                if ( TokenInformationLength >= 0x1F )
                {
                  v57 = KeGetCurrentThread();
                  --v57->KernelApcDisable;
                  v15 = (unsigned int *)Object;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
                  *(_OWORD *)v6 = *(_OWORD *)(v15 + 22);
                  *((_QWORD *)v6 + 2) = *((_QWORD *)v15 + 13);
                  v6[6] = v15[28];
                  *((_WORD *)v6 + 14) = *((_WORD *)v15 + 58);
                  *((_BYTE *)v6 + 30) = *((_BYTE *)v15 + 118);
                  goto LABEL_39;
                }
                goto LABEL_80;
              }
            }
            else
            {
              LOBYTE(TokenInformation) = PreviousMode;
              result = SepReferenceTokenByHandle(
                         TokenHandle,
                         8u,
                         (__int64)TokenInformation,
                         *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                         &Object,
                         v150,
                         &DestinationSid);
              if ( result >= 0 )
              {
                *v11 = 4;
                if ( TokenInformationLength >= 4 )
                {
                  v22 = Object;
                  *v6 = (*((_DWORD *)Object + 50) >> 6) & 1;
                  goto LABEL_41;
                }
                return -1073741789;
              }
            }
            return result;
          }
          LOBYTE(TokenInformation) = PreviousMode;
          result = SepReferenceTokenByHandle(
                     TokenHandle,
                     8u,
                     (__int64)TokenInformation,
                     *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                     &Object,
                     v150,
                     &DestinationSid);
          if ( result < 0 )
            return result;
          v58 = KeGetCurrentThread();
          --v58->KernelApcDisable;
          v59 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          LODWORD(v156) = SepTokenPrivilegeCount((__int64)v59);
          v60 = 12 * (_DWORD)v156;
          v61 = *((_DWORD *)v59 + 31);
          v62 = v61;
          v63 = 16 * v61;
          if ( v61 )
          {
            v64 = v59[19];
            v65 = v61;
            do
            {
              v63 += (4 * *(unsigned __int8 *)(*(_QWORD *)v64 + 1LL) + 15) & 0xFFFFFFF8;
              v64 += 16LL;
              --v65;
            }
            while ( v65 );
          }
          v66 = *((_DWORD *)v59 + 32);
          v67 = v66;
          v68 = 16 * v66;
          v69 = 16 * v66;
          if ( v66 )
          {
            v70 = v59[20];
            v71 = v66;
            do
            {
              v68 += (4 * *(unsigned __int8 *)(*(_QWORD *)v70 + 1LL) + 15) & 0xFFFFFFF8;
              v69 = v68;
              v70 += 16LL;
              --v71;
            }
            while ( v71 );
          }
          v72 = v63 + v60 + v69 + 56;
          *v11 = v72;
          if ( TokenInformationLength >= v72 )
          {
            *((_QWORD *)v6 + 6) = v59[3];
            v6[1] = v63;
            *v6 = *((_DWORD *)v59 + 31);
            v73 = (_SID_AND_ATTRIBUTES *)(v6 + 14);
            *((_QWORD *)v6 + 1) = v6 + 14;
            v6[5] = v68;
            v6[4] = *((_DWORD *)v59 + 32);
            if ( *((_DWORD *)v59 + 32) )
            {
              v74 = (_SID_AND_ATTRIBUTES *)((char *)v73 + ((v63 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *((_QWORD *)v6 + 3) = v74;
            }
            else
            {
              *((_QWORD *)v6 + 3) = 0LL;
              v74 = 0LL;
            }
            v6[9] = v60;
            v6[8] = (_DWORD)v156;
            v75 = (__int64)v73 + v68 + v63;
            *((_QWORD *)v6 + 5) = v75;
            RtlCopySidAndAttributesArray(
              *((_DWORD *)v59 + 31),
              (PSID_AND_ATTRIBUTES)v59[19],
              v63 - v62 * 16,
              v73,
              &v73[v62],
              &DestinationSid,
              (PULONG)&DestinationSid);
            if ( v74 )
              RtlCopySidAndAttributesArray(
                *((_DWORD *)v59 + 32),
                (PSID_AND_ATTRIBUTES)v59[20],
                v68 - v67 * 16,
                v74,
                &v74[v67],
                &DestinationSid,
                (PULONG)&DestinationSid);
            SepConvertTokenPrivilegesToLuidAndAttributes(v59, v75);
            goto LABEL_134;
          }
LABEL_132:
          ExReleaseResourceLite((PERESOURCE)v59[6]);
          KeLeaveCriticalRegion();
          v21 = v59;
          goto LABEL_36;
        }
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result < 0 )
          return result;
        *v11 = 4;
        v21 = Object;
        if ( TokenInformationLength < 4 )
          goto LABEL_36;
        SeQuerySessionIdToken(Object, &SessionId);
        *v6 = SessionId;
        *v11 = 4;
LABEL_126:
        v22 = Object;
        goto LABEL_41;
      }
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v76 = KeGetCurrentThread();
      --v76->KernelApcDisable;
      v59 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v77 = *((_DWORD *)v59 + 32);
      v78 = 16 * v77 + 8;
      if ( v77 )
      {
        v79 = v59[20];
        v80 = v77;
        do
        {
          v78 += 4 * *(unsigned __int8 *)(*(_QWORD *)v79 + 1LL) + 8;
          v79 += 16LL;
          --v80;
        }
        while ( v80 );
      }
      *v11 = v78;
      if ( TokenInformationLength < v78 )
        goto LABEL_132;
      *v6 = *((_DWORD *)v59 + 32);
      RtlCopySidAndAttributesArray(
        *((_DWORD *)v59 + 32),
        (PSID_AND_ATTRIBUTES)v59[20],
        v78,
        (PSID_AND_ATTRIBUTES)(v6 + 2),
        (char *)v6 + (unsigned int)(16 * *((_DWORD *)v59 + 32)) + 8,
        &DestinationSid,
        (PULONG)&DestinationSid);
LABEL_134:
      ExReleaseResourceLite((PERESOURCE)v59[6]);
      KeLeaveCriticalRegion();
      v22 = v59;
      goto LABEL_41;
    }
    v81 = TokenInformationClass - 18;
    if ( !v81 )
    {
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v11 = 4;
      if ( TokenInformationLength >= 4 )
      {
        *v6 = SepGetTokenElevationType((__int64)Object);
        goto LABEL_176;
      }
LABEL_80:
      v21 = Object;
      goto LABEL_36;
    }
    v82 = v81 - 1;
    if ( v82 )
    {
      v83 = v82 - 1;
      if ( v83 )
      {
        if ( v83 != 1 )
          return -1073741821;
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result < 0 )
          return result;
        *v11 = 1;
        if ( TokenInformationLength )
        {
          v22 = Object;
          *(_BYTE *)v6 = (*((_DWORD *)Object + 50) & 0x810) != 0;
          goto LABEL_41;
        }
        goto LABEL_80;
      }
      *v11 = 4;
      if ( TokenInformationLength != 4 )
        return -1073741820;
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result >= 0 )
      {
        v84 = KeGetCurrentThread();
        --v84->KernelApcDisable;
        v18 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        TokenElevation = SepGetTokenElevation((__int64)v18);
        ExReleaseResourceLite(*((PERESOURCE *)v18 + 6));
        KeLeaveCriticalRegion();
        *v6 = TokenElevation;
        goto LABEL_26;
      }
      return result;
    }
    Handle = 0LL;
    v157 = 0LL;
    *(_QWORD *)v163 = 0LL;
    v166 = 0;
    v170 = 0;
    LOBYTE(TokenInformation) = PreviousMode;
    result = SepReferenceTokenByHandle(
               TokenHandle,
               8u,
               (__int64)TokenInformation,
               *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
               &Object,
               v150,
               &DestinationSid);
    if ( result < 0 )
      return result;
    *v11 = 8;
    if ( TokenInformationLength != 8 )
      goto LABEL_151;
    LODWORD(v156) = 2 - (SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
    if ( (unsigned int)Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline()
      && (Flags.Flags = 0, RtlQueryElevationFlags(&Flags), (Flags.Flags & 0x18) == 0x10)
      && (v86 = Object, (unsigned int)SepGetTokenElevationType((__int64)Object) == 3)
      && (v87 = v86[27], !*(_QWORD *)(v87 + 16)) )
    {
      DestinationSid = 0LL;
      v88 = SepLogonSystemManagedAdmin(*(_QWORD *)(v87 + 8), (__int64)&DestinationSid);
      if ( v88 < 0 )
        goto LABEL_170;
      v164 = 0LL;
      v89 = ObReferenceObjectByHandle(DestinationSid, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &v164, 0LL);
      ObCloseHandle(DestinationSid, 0);
      if ( v89 < 0 )
      {
        inserted = v89;
        goto LABEL_171;
      }
      v90 = v164;
      v91 = SepReferenceLogonSessionSilo((_DWORD *)v164 + 6, *(_QWORD *)(v86[27] + 168LL), (__int64 *)&Handle);
      ObfDereferenceObject(v90);
      if ( v91 < 0 )
      {
LABEL_160:
        inserted = v91;
        goto LABEL_171;
      }
      SeQuerySessionIdToken(Object, &SessionId);
      v92 = Handle;
      v91 = SeSetSessionIdToken(*((PACCESS_TOKEN *)Handle + 7), SessionId);
      if ( v91 < 0 )
      {
        SepDeReferenceLogonSessionDirect(v92);
        goto LABEL_160;
      }
      v92[2] = *(_QWORD *)(v86[27] + 8LL);
      inserted = SepReferenceLogonSession(v86[27] + 8LL, (__int64)&Handle);
      if ( inserted < 0 )
      {
        v36 = v92;
        goto LABEL_165;
      }
    }
    else
    {
      v88 = SepReferenceLogonSessionSilo(
              (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
              *(_QWORD *)(*((_QWORD *)Object + 27) + 168LL),
              (__int64 *)&Handle);
      if ( v88 < 0 )
        goto LABEL_170;
      v92 = Handle;
    }
    v165 = 48;
    v167 = 0LL;
    v169 = PreviousMode == 0 ? 0x200 : 0;
    v168 = 0LL;
    v171 = 0LL;
    inserted = SepDuplicateToken(v92[7], (int)&v165, 0, (int)v156, 1u, 0, 0, (char **)v163);
    SepDeReferenceLogonSessionDirect(v92);
    if ( inserted < 0 )
      goto LABEL_171;
    v88 = ObInsertObjectEx(*(char **)v163, 0LL, 983551, 0, 0, 0LL, &v157);
    if ( v88 >= 0 )
    {
      *(_QWORD *)v6 = v157;
      goto LABEL_126;
    }
LABEL_170:
    inserted = v88;
    goto LABEL_171;
  }
  if ( TokenInformationClass > TokenUserClaimAttributes )
  {
    if ( TokenInformationClass > TokenPrivateNameSpace )
    {
      if ( TokenInformationClass == TokenSingletonAttributes )
      {
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result >= 0 )
        {
          v146 = KeGetCurrentThread();
          --v146->KernelApcDisable;
          v147 = (PERESOURCE *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          LODWORD(RemainingSidAreaSize) = TokenInformationLength;
          SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                      (__int64)v147,
                                      PreviousMode,
                                      0LL,
                                      0,
                                      1,
                                      v6,
                                      (size_t)RemainingSidAreaSize,
                                      (__int64)v11);
          v158 = SecurityAttributesToken;
          ExReleaseResourceLite(v147[6]);
          KeLeaveCriticalRegion();
          v37 = v147;
          goto LABEL_177;
        }
        return result;
      }
      if ( TokenInformationClass == TokenBnoIsolation )
      {
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result < 0 )
          return result;
        v143 = KeGetCurrentThread();
        --v143->KernelApcDisable;
        v59 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v144 = 16;
        v145 = v59[144];
        if ( v145 )
          v144 = *(unsigned __int16 *)(v145 + 42) + 16;
        *v11 = v144;
        if ( TokenInformationLength < v144 )
          goto LABEL_132;
        if ( v59[144] )
        {
          *((_BYTE *)v6 + 8) = 1;
          *(_QWORD *)v6 = v6 + 4;
          memmove(v6 + 4, *(const void **)(v59[144] + 48LL), *(unsigned __int16 *)(v59[144] + 42LL));
        }
        else
        {
          *((_BYTE *)v6 + 8) = 0;
          *(_QWORD *)v6 = 0LL;
        }
        goto LABEL_134;
      }
      if ( (unsigned int)(TokenInformationClass - 47) > 1 )
        return -1073741821;
      goto LABEL_285;
    }
    if ( TokenInformationClass == TokenPrivateNameSpace )
      goto LABEL_285;
    if ( TokenInformationClass != TokenDeviceClaimAttributes )
    {
      if ( TokenInformationClass == TokenDeviceGroups )
      {
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result >= 0 )
        {
          v128 = KeGetCurrentThread();
          --v128->KernelApcDisable;
          v129 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v130 = *((_QWORD *)v129 + 137);
          if ( v130 && (v131 = *(_DWORD *)v130) != 0 )
          {
            v132 = 16 * v131 + 8;
          }
          else
          {
            v131 = 0;
            v132 = 24;
          }
          if ( v131 )
          {
            v133 = *(_QWORD *)(v130 + 8);
            v134 = v131;
            do
            {
              v132 += 4 * *(unsigned __int8 *)(*(_QWORD *)v133 + 1LL) + 8;
              v133 += 16LL;
              --v134;
            }
            while ( v134 );
          }
          *v11 = v132;
          if ( TokenInformationLength >= v132 )
          {
            *(_OWORD *)v6 = 0LL;
            *((_QWORD *)v6 + 2) = 0LL;
            *v6 = v131;
            if ( v131 )
              RtlCopySidAndAttributesArray(
                v131,
                *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v129 + 137) + 8LL),
                v132,
                (PSID_AND_ATTRIBUTES)(v6 + 2),
                &v6[4 * v131 + 2],
                &DestinationSid,
                (PULONG)&DestinationSid);
            ExReleaseResourceLite(*((PERESOURCE *)v129 + 6));
            KeLeaveCriticalRegion();
            v22 = v129;
            goto LABEL_41;
          }
          ExReleaseResourceLite(*((PERESOURCE *)v129 + 6));
          KeLeaveCriticalRegion();
          v21 = v129;
          goto LABEL_36;
        }
        return result;
      }
      if ( TokenInformationClass != TokenSecurityAttributes )
      {
        if ( TokenInformationClass != TokenIsRestricted )
        {
          if ( TokenInformationClass != TokenProcessTrustLevel )
            return -1073741821;
          LOBYTE(TokenInformation) = PreviousMode;
          v120 = 8;
          result = SepReferenceTokenByHandle(
                     TokenHandle,
                     8u,
                     (__int64)TokenInformation,
                     *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                     &Object,
                     v150,
                     &DestinationSid);
          if ( result >= 0 )
          {
            v121 = KeGetCurrentThread();
            --v121->KernelApcDisable;
            v15 = (unsigned int *)Object;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
            v122 = DestinationSid;
            v123 = (unsigned __int8 *)DestinationSid;
            if ( !v150[0] )
              v123 = (unsigned __int8 *)*((_QWORD *)v15 + 138);
            if ( v123 )
              v120 = 4 * v123[1] + 16;
            *v11 = v120;
            if ( TokenInformationLength >= v120 )
            {
              v124 = v6 + 2;
              if ( !v123 )
                v124 = 0LL;
              *(_QWORD *)v6 = v124;
              if ( v124 )
              {
                if ( !v150[0] )
                  v122 = (PSID)*((_QWORD *)v15 + 138);
                RtlCopySid(v120 - 8, v124, v122);
              }
              goto LABEL_39;
            }
            goto LABEL_35;
          }
          return result;
        }
        goto LABEL_285;
      }
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v125 = KeGetCurrentThread();
      --v125->KernelApcDisable;
      v59 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v126 = (unsigned int *)v59[97];
      if ( v126 )
      {
        LODWORD(SidArea) = 0;
        AuthzBasepQuerySecurityAttributesToken(v126, 0LL, 0, 0LL, (size_t)SidArea, &Flags);
        v127 = Flags.Flags;
      }
      else
      {
        v127 = 16;
      }
      *v11 = v127;
      if ( TokenInformationLength < v127 )
        goto LABEL_132;
      LODWORD(SidArea) = TokenInformationLength;
      MandatoryPolicyToken = AuthzBasepQuerySecurityAttributesToken(
                               (unsigned int *)v59[97],
                               0LL,
                               0,
                               v6,
                               (size_t)SidArea,
                               &Flags);
      v158 = MandatoryPolicyToken;
LABEL_281:
      ExReleaseResourceLite((PERESOURCE)v59[6]);
      KeLeaveCriticalRegion();
      v97 = v59;
LABEL_192:
      ObfDereferenceObjectWithTag(v97, 0x74726853u);
      return MandatoryPolicyToken;
    }
LABEL_269:
    LOBYTE(TokenInformation) = PreviousMode;
    result = SepReferenceTokenByHandle(
               TokenHandle,
               8u,
               (__int64)TokenInformation,
               *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
               &Object,
               v150,
               &DestinationSid);
    if ( result < 0 )
      return result;
    v135 = KeGetCurrentThread();
    --v135->KernelApcDisable;
    v59 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v136 = v59[137];
    if ( v136
      && ((v137 = *(__int128 **)(v136 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
      && ((v138 = *(__int128 **)(v136 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
    {
      if ( TokenInformationClass == TokenUserClaimAttributes )
        v138 = v137;
      AuthzBasepQueryClaimAttributesToken(v138, 0LL, 0, &Flags);
      v139 = Flags.Flags;
    }
    else
    {
      v139 = 16;
      *(_QWORD *)&v173 = (char *)&v172 + 8;
      *((_QWORD *)&v172 + 1) = (char *)&v172 + 8;
      DWORD2(v173) = 0;
      *((_QWORD *)&v174 + 1) = &v174;
      *(_QWORD *)&v174 = &v174;
      v138 = &v172;
    }
    *v11 = v139;
    if ( TokenInformationLength < v139 )
      goto LABEL_132;
    MandatoryPolicyToken = AuthzBasepQueryClaimAttributesToken(v138, v6, TokenInformationLength, &Flags);
    v158 = MandatoryPolicyToken;
    goto LABEL_281;
  }
  if ( TokenInformationClass == TokenUserClaimAttributes )
    goto LABEL_269;
  if ( TokenInformationClass <= TokenLogonSid )
  {
    if ( TokenInformationClass == TokenLogonSid )
    {
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result >= 0 )
      {
        v102 = KeGetCurrentThread();
        --v102->KernelApcDisable;
        v15 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v103 = 0LL;
        v104 = 0;
        v105 = v15[31];
        if ( v105 )
        {
          v106 = *((_QWORD *)v15 + 19);
          while ( (*(_DWORD *)(v106 + 16LL * v104 + 8) & 0xC0000000) != 0xC0000000 )
          {
            if ( ++v104 >= v105 )
              goto LABEL_203;
          }
          v103 = *(_QWORD *)(v106 + 16LL * v104);
        }
LABEL_203:
        if ( v103 )
        {
          v107 = 16LL * v104;
          v108 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v107 + *((_QWORD *)v15 + 19)) + 1LL) + 32;
          *v11 = v108;
          if ( TokenInformationLength >= v108 )
          {
            *v6 = 1;
            RtlCopySidAndAttributesArray(
              1u,
              (PSID_AND_ATTRIBUTES)(v107 + *((_QWORD *)v15 + 19)),
              4 * *(unsigned __int8 *)(*(_QWORD *)(v107 + *((_QWORD *)v15 + 19)) + 1LL) + 8,
              (PSID_AND_ATTRIBUTES)(v6 + 2),
              v6 + 6,
              &DestinationSid,
              (PULONG)&DestinationSid);
            goto LABEL_39;
          }
          goto LABEL_35;
        }
        ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
        KeLeaveCriticalRegion();
        ObfDereferenceObjectWithTag(v15, 0x74726853u);
        return -1073741275;
      }
      return result;
    }
    if ( TokenInformationClass != TokenVirtualizationAllowed && TokenInformationClass != TokenVirtualizationEnabled )
    {
      if ( TokenInformationClass == TokenIntegrityLevel )
      {
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result >= 0 )
        {
          v99 = KeGetCurrentThread();
          --v99->KernelApcDisable;
          v15 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          SepCopyTokenIntegrity((__int64)v15, (__int64)&Src);
          Sid = (unsigned __int8 *)Src.Sid;
          v101 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
          *v11 = v101;
          if ( TokenInformationLength >= v101 )
          {
            RtlCopySidAndAttributesArray(
              1u,
              &Src,
              4 * Sid[1] + 8,
              (PSID_AND_ATTRIBUTES)v6,
              v6 + 4,
              &DestinationSid,
              (PULONG)&DestinationSid);
            goto LABEL_39;
          }
          goto LABEL_35;
        }
        return result;
      }
      if ( TokenInformationClass != TokenUIAccess )
      {
        LOBYTE(TokenInformation) = PreviousMode;
        result = SepReferenceTokenByHandle(
                   TokenHandle,
                   8u,
                   (__int64)TokenInformation,
                   *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                   &Object,
                   v150,
                   &DestinationSid);
        if ( result < 0 )
          return result;
        *v11 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_80;
        MandatoryPolicyToken = SeQueryMandatoryPolicyToken((__int64)Object, v6);
        v158 = MandatoryPolicyToken;
        goto LABEL_192;
      }
    }
LABEL_285:
    LOBYTE(TokenInformation) = PreviousMode;
    result = SepReferenceTokenByHandle(
               TokenHandle,
               8u,
               (__int64)TokenInformation,
               *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
               &Object,
               v150,
               &DestinationSid);
    if ( result < 0 )
      return result;
    *v11 = 4;
    if ( TokenInformationLength < 4 )
      goto LABEL_80;
    if ( TokenInformationClass == TokenVirtualizationAllowed )
    {
      v15 = (unsigned int *)Object;
      v140 = *((_DWORD *)Object + 50) >> 9;
    }
    else if ( TokenInformationClass == TokenVirtualizationEnabled )
    {
      v15 = (unsigned int *)Object;
      v140 = *((_DWORD *)Object + 50) >> 10;
    }
    else
    {
      if ( TokenInformationClass != TokenUIAccess )
      {
        if ( TokenInformationClass == TokenIsRestricted )
        {
          v15 = (unsigned int *)Object;
          LOBYTE(SecurityAttributesToken) = (*((_DWORD *)Object + 50) & 0x18) != 0;
        }
        else
        {
          if ( TokenInformationClass == TokenPrivateNameSpace )
          {
            v15 = (unsigned int *)Object;
            LOWORD(v140) = *((_WORD *)Object + 101);
            goto LABEL_303;
          }
          if ( TokenInformationClass == TokenIsSandboxed )
          {
            v15 = (unsigned int *)Object;
            IsSandboxedToken = SepIsSandboxedToken(Object, PreviousMode);
          }
          else
          {
            v142 = TokenInformationClass == TokenIsAppSilo;
            v15 = (unsigned int *)Object;
            if ( !v142 )
            {
              v140 = *((_DWORD *)Object + 50) >> 14;
              goto LABEL_303;
            }
            IsSandboxedToken = SepSidInTokenSidHash(
                                 (__int64)Object + 808,
                                 0LL,
                                 *(unsigned __int8 **)&RtlpBootStatHandleLock.ApcStateFill[40],
                                 0,
                                 1,
                                 0);
          }
          SecurityAttributesToken = IsSandboxedToken;
        }
LABEL_304:
        *v6 = SecurityAttributesToken;
        goto LABEL_40;
      }
      v15 = (unsigned int *)Object;
      v140 = *((_DWORD *)Object + 50) >> 12;
    }
LABEL_303:
    SecurityAttributesToken = v140 & 1;
    goto LABEL_304;
  }
  switch ( TokenInformationClass )
  {
    case TokenIsAppContainer:
      goto LABEL_285;
    case TokenCapabilities:
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v115 = KeGetCurrentThread();
      --v115->KernelApcDisable;
      v59 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v116 = *((_DWORD *)v59 + 200);
      v117 = 16 * v116 + 8;
      if ( v116 )
      {
        v118 = v59[99];
        v119 = v116;
        do
        {
          v117 += 4 * *(unsigned __int8 *)(*(_QWORD *)v118 + 1LL) + 8;
          v118 += 16LL;
          --v119;
        }
        while ( v119 );
      }
      *v11 = v117;
      if ( TokenInformationLength < v117 )
        goto LABEL_132;
      *v6 = *((_DWORD *)v59 + 200);
      RtlCopySidAndAttributesArray(
        *((_DWORD *)v59 + 200),
        (PSID_AND_ATTRIBUTES)v59[99],
        v117,
        (PSID_AND_ATTRIBUTES)(v6 + 2),
        (char *)v6 + (unsigned int)(16 * *((_DWORD *)v59 + 200)) + 8,
        &DestinationSid,
        (PULONG)&DestinationSid);
      goto LABEL_134;
    case TokenAppContainerSid:
      LOBYTE(TokenInformation) = PreviousMode;
      v111 = 8;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result >= 0 )
      {
        v112 = KeGetCurrentThread();
        --v112->KernelApcDisable;
        v15 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v113 = *((_QWORD *)v15 + 98);
        if ( v113 )
          v111 = 4 * *(unsigned __int8 *)(v113 + 1) + 16;
        *v11 = v111;
        if ( TokenInformationLength >= v111 )
        {
          v114 = v6 + 2;
          if ( !v113 )
            v114 = 0LL;
          *(_QWORD *)v6 = v114;
          if ( v114 )
            RtlCopySid(v111 - 8, v114, *((PSID *)v15 + 98));
          goto LABEL_39;
        }
        goto LABEL_35;
      }
      break;
    default:
      LOBYTE(TokenInformation) = PreviousMode;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 (__int64)TokenInformation,
                 *(struct _KLOCK_ENTRIES **)&TokenInformationLength,
                 &Object,
                 v150,
                 &DestinationSid);
      if ( result >= 0 )
      {
        *v11 = 4;
        if ( TokenInformationLength >= 4 )
        {
          v109 = KeGetCurrentThread();
          --v109->KernelApcDisable;
          v15 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v110 = *((_QWORD *)v15 + 135);
          if ( v110 )
            SecurityAttributesToken = *(_DWORD *)(v110 + 40);
          ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
          KeLeaveCriticalRegion();
          *v6 = SecurityAttributesToken;
          goto LABEL_40;
        }
        goto LABEL_80;
      }
      break;
  }
  return result;
}

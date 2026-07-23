/*
 * XREFs of NtCreateLowBoxToken @ 0x140819F50
 * Callers:
 *     DifNtCreateLowBoxTokenWrapper @ 0x140675750 (DifNtCreateLowBoxTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCapabilitiesHasAppSiloBaseSID @ 0x1404052A8 (SepCapabilitiesHasAppSiloBaseSID.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x140441DE0 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14048B1A0 (RtlSubAuthorityCountSid.c)
 *     SepIsAppSiloCapability @ 0x1404B6E7C (SepIsAppSiloCapability.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14050BACC (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     SeCaptureHandles @ 0x14063F7E4 (SeCaptureHandles.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SepCheckCapabilities @ 0x14081AEC4 (SepCheckCapabilities.c)
 *     SepCheckCreateAppContainer @ 0x14081B0F4 (SepCheckCreateAppContainer.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1409E21E8 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x1409E47AC (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x140A3B748 (SepSetTokenCachedHandles.c)
 *     RtlGetAppContainerSidType @ 0x140A3D0C0 (RtlGetAppContainerSidType.c)
 *     SepSetTokenLowboxNumber @ 0x140A3E100 (SepSetTokenLowboxNumber.c)
 *     SeReleaseSid @ 0x140A9E228 (SeReleaseSid.c)
 *     RtlQueryElevationFlags @ 0x140AADFA0 (RtlQueryElevationFlags.c)
 *     RtlIsPackageSid @ 0x140AD1F2C (RtlIsPackageSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADA87C (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x140ADB034 (RtlIsCapabilitySid.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  int v9; // r13d
  PVOID v13; // r14
  KPROCESSOR_MODE v14; // si
  __int64 v15; // rax
  __int64 v16; // rdx
  NTSTATUS appended; // ebx
  __int64 v18; // r8
  _QWORD *v19; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 ULong64FromUser; // rax
  NTSTATUS result; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  _BYTE *v25; // r14
  ACCESS_MASK GrantedAccess; // eax
  char v27; // si
  char v28; // al
  unsigned int v29; // ebx
  unsigned int v30; // esi
  void *v31; // r12
  ULONG v32; // ebx
  _BYTE **v33; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v35; // rsi
  PSID *TokenIntegrity; // rax
  PSID v37; // r12
  int v38; // ecx
  struct _KTHREAD *v39; // rax
  PERESOURCE *PrimaryToken; // r12
  int v41; // ecx
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  void *v44; // rcx
  int v45; // eax
  _DWORD *v46; // rbx
  signed __int32 v47[8]; // [rsp+0h] [rbp-138h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-118h]
  PSID *v49; // [rsp+38h] [rbp-100h]
  void *p_Sid; // [rsp+40h] [rbp-F8h]
  KPROCESSOR_MODE v51; // [rsp+50h] [rbp-E8h]
  char v52; // [rsp+51h] [rbp-E7h]
  char v53; // [rsp+52h] [rbp-E6h]
  PVOID v54; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-D8h] BYREF
  PVOID P; // [rsp+68h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-C8h] BYREF
  PVOID v58; // [rsp+78h] [rbp-C0h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+80h] [rbp-B8h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+84h] [rbp-B4h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-B0h] BYREF
  PSID Sid; // [rsp+90h] [rbp-A8h] BYREF
  PSID v63; // [rsp+98h] [rbp-A0h] BYREF
  int v64; // [rsp+A0h] [rbp-98h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-70h]
  __int64 v67[2]; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v68; // [rsp+E8h] [rbp-50h]
  int v71; // [rsp+158h] [rbp+20h]

  v71 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v58 = 0LL;
  Handle = 0LL;
  *(_OWORD *)v67 = 0LL;
  if ( !(unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
  {
    v19 = 0LL;
    v63 = 0LL;
    Sid = 0LL;
    HandleInformation = 0LL;
    v54 = 0LL;
    v64 = 1;
    v53 = 0;
    v52 = 0;
    AppContainerSidType = NotAppContainerSidType;
    LOBYTE(v55) = 0;
    *(_QWORD *)&v68 = 0LL;
    Flags.Flags = 0;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v51 = PreviousMode;
    if ( PreviousMode )
    {
      ULong64FromUser = RtlReadULong64FromUser(TokenHandle);
      RtlWriteULong64ToUser(TokenHandle, ULong64FromUser);
      ProbeForRead(Handles, 8LL * HandleCount, 8u);
    }
    if ( !PackageSid )
      return -1073741811;
    if ( HandleCount )
    {
      if ( !Handles )
        return -1073741776;
    }
    else if ( Handles )
    {
      return -1073741776;
    }
    P = 0LL;
    result = ObReferenceObjectByHandle(
               ExistingTokenHandle,
               2u,
               (POBJECT_TYPE)SeTokenObjectType,
               PreviousMode,
               &P,
               &HandleInformation);
    if ( result < 0 )
      return result;
    appended = SeCaptureSid(PackageSid, (int)Object, 1, (__int64)&Sid);
    v25 = Sid;
    if ( appended < 0 )
      goto LABEL_44;
    appended = SepCheckCreateAppContainer(Sid);
    if ( appended < 0 )
      goto LABEL_44;
    if ( *((_DWORD *)P + 48) != 1 && *((int *)P + 49) < 2 )
    {
      appended = -1073741659;
LABEL_44:
      v27 = v52;
LABEL_45:
      if ( v53 )
      {
        if ( appended >= 0 )
          *((_QWORD *)v54 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v47, 0);
        ExReleaseResourceLite(*((PERESOURCE *)v54 + 6));
        KeLeaveCriticalRegion();
      }
      if ( appended < 0 )
      {
        if ( v27 )
          ObfDereferenceObject(v54);
        if ( Handle )
          ObCloseHandle(Handle, PreviousMode);
      }
      if ( v19 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v19, v23);
      }
      if ( v25 )
      {
        LOBYTE(v24) = 1;
        LOBYTE(v23) = PreviousMode;
        SeReleaseSid(v25, v23, v24);
      }
      if ( P )
        ObfDereferenceObject(P);
      if ( v58 )
        ExFreePoolWithTag(v58, 0);
      if ( appended >= 0 )
      {
        if ( PreviousMode )
          RtlWriteULong64ToUser(TokenHandle, (__int64)Handle);
        else
          *TokenHandle = Handle;
      }
      return appended;
    }
    GrantedAccess = HandleInformation.GrantedAccess;
    if ( DesiredAccess )
      GrantedAccess = DesiredAccess;
    HandleInformation.HandleAttributes = GrantedAccess;
    if ( CapabilityCount )
    {
      if ( Capabilities )
      {
LABEL_65:
        if ( Capabilities )
        {
          p_Sid = &Sid;
          v49 = &v63;
          LOBYTE(v24) = v51;
          appended = SeCaptureSidAndAttributesArray(Capabilities, CapabilityCount, v24, 0LL, 0);
          v19 = v63;
        }
        if ( appended < 0 )
          goto LABEL_43;
        appended = SeCaptureHandles(HandleCount, (__int64)Handles, (__int64 *)&v58);
        if ( appended < 0 )
          goto LABEL_43;
        if ( !RtlIsPackageSid(v25) )
          goto LABEL_70;
        v28 = v25[1];
        if ( v28 != 8 && v28 != 12 )
        {
          appended = -1073700350;
          goto LABEL_43;
        }
        v29 = 0;
        if ( CapabilityCount )
        {
          while ( RtlIsCapabilitySid((PSID)v19[2 * v29]) )
          {
            v30 = 0;
            if ( v29 )
            {
              v31 = (void *)v19[2 * v29];
              while ( !RtlEqualSid(v31, (PSID)v19[2 * v30]) )
              {
                if ( ++v30 >= v29 )
                  goto LABEL_80;
              }
              goto LABEL_70;
            }
LABEL_80:
            if ( ++v29 >= CapabilityCount )
              goto LABEL_81;
          }
          goto LABEL_70;
        }
LABEL_81:
        if ( !SepCapabilitiesHasAppSiloBaseSID(CapabilityCount, (__int64)v19) )
        {
          v32 = 0;
          if ( CapabilityCount )
          {
            v33 = (_BYTE **)v19;
            while ( !SepIsAppSiloCapability(*v33) )
            {
              ++v32;
              v33 += 2;
              if ( v32 >= CapabilityCount )
                goto LABEL_86;
            }
LABEL_70:
            appended = -1073741811;
            goto LABEL_43;
          }
        }
LABEL_86:
        appended = RtlGetAppContainerSidType(v25, &AppContainerSidType);
        if ( appended >= 0 )
        {
          if ( AppContainerSidType != ChildAppContainerSidType
            || (appended = SepCheckCapabilities(P, (__int64)&v55), (_BYTE)v55) )
          {
            if ( appended < 0 )
              goto LABEL_43;
            RtlQueryElevationFlags(&Flags);
            if ( (Flags.Flags & 0x18) == 0x10 )
            {
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v35 = (PERESOURCE *)P;
              ExAcquireResourceSharedLite(*((PERESOURCE *)P + 6), 1u);
              TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)v35);
              if ( TokenIntegrity )
              {
                v37 = *TokenIntegrity;
                v38 = *RtlSubAuthorityCountSid(*TokenIntegrity);
                if ( (_BYTE)v38 )
                {
                  if ( *RtlSubAuthoritySid(v37, v38 - 1) >= 0x3000 )
                  {
                    memset(&SubjectContext, 0, sizeof(SubjectContext));
                    SeCaptureSubjectContext(&SubjectContext);
                    v39 = KeGetCurrentThread();
                    --v39->KernelApcDisable;
                    PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                    ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                    v63 = *(PSID *)SepLocateTokenIntegrity((__int64)PrimaryToken);
                    v41 = *RtlSubAuthorityCountSid(v63);
                    if ( !(_BYTE)v41 || *RtlSubAuthoritySid(v63, v41 - 1) < 0x3000 )
                      appended = -1073741790;
                    ExReleaseResourceLite(PrimaryToken[6]);
                    KeLeaveCriticalRegion();
                    SeReleaseSubjectContext(&SubjectContext);
                  }
                }
              }
              ExReleaseResourceLite(v35[6]);
              KeLeaveCriticalRegion();
              if ( appended < 0 )
                goto LABEL_43;
            }
            appended = SepDuplicateToken((_DWORD)P, v71, 0, 1, 0, v51, 0, (__int64)&v54);
            if ( appended < 0 )
              goto LABEL_43;
            v52 = 1;
            appended = SeSetMandatoryPolicyToken(v54, &v64);
            if ( appended < 0 )
              goto LABEL_43;
            v42 = KeGetCurrentThread();
            --v42->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v54 + 6), 1u);
            _InterlockedOr(v47, 0);
            v53 = 1;
            v43 = SepLocateTokenIntegrity((__int64)v54);
            if ( v43 )
            {
              v44 = *(void **)v43;
              v45 = *(unsigned __int8 *)(*(_QWORD *)v43 + 1LL);
              if ( (_BYTE)v45 )
                *RtlSubAuthoritySid(v44, v45 - 1) = 4096;
              *((_QWORD *)v54 + 9) &= 0x200800000uLL;
              *((_QWORD *)v54 + 10) &= 0x200800000uLL;
              *((_QWORD *)v54 + 8) &= 0x200800000uLL;
              *((_DWORD *)v54 + 50) &= (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
                                     ? 0xFFFFCFFF
                                     : 0xFFFFDFFF;
              *((_DWORD *)v54 + 50) |= 0x4000u;
            }
            else
            {
              appended = -1073740730;
            }
            if ( appended < 0 )
              goto LABEL_43;
            appended = SepSetTokenCapabilities(v54, v25, v19, CapabilityCount);
            if ( appended < 0 )
              goto LABEL_43;
            appended = SepSetTokenLowboxNumber(v54, v25);
            if ( appended < 0 )
              goto LABEL_43;
            v67[1] = (__int64)v25;
            appended = SepSetTokenCachedHandles(v54, v67, HandleCount, v58);
            if ( appended < 0 )
              goto LABEL_43;
            appended = SepSetTokenPackage(v54, v25);
            if ( appended < 0 )
              goto LABEL_43;
            appended = SepAppendAceToTokenDefaultDacl((__int64)v54, v25);
            if ( appended < 0 )
              goto LABEL_43;
            v46 = v54;
            if ( SepSidInTokenSidHash(
                   (__int64)v54 + 808,
                   0LL,
                   (unsigned __int8 *)SePermissiveLearningModeCapabilitySid,
                   0,
                   1,
                   0) )
            {
              _InterlockedAdd(&SepLearningModeTokenCount, 1u);
              *((_DWORD *)v54 + 50) |= 0x3000000u;
            }
            else
            {
              v46[50] &= 0xFCFFFFFF;
              if ( SepSidInTokenSidHash(
                     (__int64)v54 + 808,
                     0LL,
                     (unsigned __int8 *)SeLearningModeLoggingCapabilitySid,
                     0,
                     1,
                     0) )
              {
                _InterlockedAdd(&SepLearningModeTokenCount, 1u);
                *((_DWORD *)v54 + 50) |= 0x1000000u;
              }
            }
            *((_QWORD *)v54 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v47, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v54 + 6));
            KeLeaveCriticalRegion();
            v53 = 0;
            appended = ObInsertObjectEx(v54, 0LL, HandleInformation.HandleAttributes, 1LL, 0, 0LL, &Handle);
            if ( appended >= 0 )
            {
              appended = SepAppendAceToTokenObjectAcl(v54, 983551LL, v25);
              if ( appended < 0 )
                goto LABEL_43;
              SepFinalizeTokenAcls(v54);
              ObfDereferenceObject(v54);
            }
            v27 = 0;
            PreviousMode = v51;
            goto LABEL_45;
          }
          appended = -1073741790;
        }
LABEL_43:
        PreviousMode = v51;
        goto LABEL_44;
      }
    }
    else if ( !Capabilities )
    {
      goto LABEL_65;
    }
    appended = -1073741776;
    goto LABEL_43;
  }
  v13 = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v66 = 0LL;
  v68 = 0LL;
  v14 = KeGetCurrentThread()->PreviousMode;
  if ( v14 )
  {
    v15 = RtlReadULong64FromUser(TokenHandle);
    RtlWriteULong64ToUser(TokenHandle, v15);
    ProbeForRead(Handles, 8LL * HandleCount, 8u);
  }
  if ( !PackageSid )
    return -1073741811;
  if ( !HandleCount )
  {
    if ( !Handles )
      goto LABEL_9;
    return -1073741776;
  }
  if ( !Handles )
    return -1073741776;
LABEL_9:
  appended = SeCaptureSid(PackageSid, (int)Object, 1, (__int64)&Handle);
  if ( appended >= 0 )
  {
    if ( Capabilities )
    {
      p_Sid = &HandleInformation;
      v49 = &v58;
      LOBYTE(v18) = v14;
      appended = SeCaptureSidAndAttributesArray(Capabilities, CapabilityCount, v18, 0LL, 0);
      v13 = v58;
    }
    if ( appended >= 0 )
    {
      appended = SeCaptureHandles(HandleCount, (__int64)Handles, (__int64 *)&P);
      if ( appended >= 0 )
      {
        v67[1] = (__int64)&SubjectContext;
        LODWORD(SubjectContext.ClientToken) = 48;
        HIDWORD(SubjectContext.ClientToken) |= 1u;
        SubjectContext.PrimaryToken = Handle;
        SubjectContext.ProcessAuditId = v13;
        LODWORD(v66) = CapabilityCount;
        *(_QWORD *)&SubjectContext.ImpersonationLevel = ExistingTokenHandle;
        *(_QWORD *)&v68 = P;
        DWORD2(v68) = HandleCount;
        appended = SepCreateAppContainerToken(TokenHandle, 0LL, DesiredAccess, v9, v14, (__int64)v67);
      }
    }
  }
  if ( v13 )
  {
    LOBYTE(v16) = v14;
    SeReleaseLuidAndAttributesArray(v13, v16);
  }
  if ( Handle )
  {
    LOBYTE(v18) = 1;
    LOBYTE(v16) = v14;
    SeReleaseSid(Handle, v16, v18);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return appended;
}

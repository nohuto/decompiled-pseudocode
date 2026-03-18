/*
 * XREFs of NtCreateLowBoxToken @ 0x1408140F0
 * Callers:
 *     DifNtCreateLowBoxTokenWrapper @ 0x140671B70 (DifNtCreateLowBoxTokenWrapper.c)
 * Callees:
 *     SepAppendAceToTokenDefaultDacl @ 0x14025EEEC (SepAppendAceToTokenDefaultDacl.c)
 *     SepCapabilitiesHasAppSiloBaseSID @ 0x14025F0C4 (SepCapabilitiesHasAppSiloBaseSID.c)
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SepSidInTokenSidHash @ 0x1403C06B0 (SepSidInTokenSidHash.c)
 *     SepLocateTokenIntegrity @ 0x140449CB0 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14047F970 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140491650 (RtlSubAuthorityCountSid.c)
 *     SepIsAppSiloCapability @ 0x1404BD69C (SepIsAppSiloCapability.c)
 *     SepCaptureHandles @ 0x1404E6E88 (SepCaptureHandles.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14051205C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     SepCheckCapabilities @ 0x140814DD4 (SepCheckCapabilities.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SepFinalizeTokenAcls @ 0x140926FDC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     SepSetTokenCachedHandles @ 0x140A286A8 (SepSetTokenCachedHandles.c)
 *     RtlGetAppContainerSidType @ 0x140A2A020 (RtlGetAppContainerSidType.c)
 *     SepSetTokenLowboxNumber @ 0x140A2C4A4 (SepSetTokenLowboxNumber.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140A43238 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x140A44AC4 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x140A8F860 (SepSetTokenPackage.c)
 *     SeReleaseSid @ 0x140A9A0A8 (SeReleaseSid.c)
 *     RtlQueryElevationFlags @ 0x140AB0350 (RtlQueryElevationFlags.c)
 *     RtlIsPackageSid @ 0x140AD4ACC (RtlIsPackageSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADDB0C (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x140ADE2C4 (RtlIsCapabilitySid.c)
 *     SepCheckCreateLowBox @ 0x140B095C4 (SepCheckCreateLowBox.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtCreateLowBoxToken(
        HANDLE *a1,
        void *a2,
        ACCESS_MASK a3,
        int a4,
        PSID Sid,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v10; // r15
  char v11; // di
  KPROCESSOR_MODE PreviousMode; // r13
  PSID v13; // rbx
  NTSTATUS result; // eax
  unsigned int v15; // r12d
  __int64 v16; // rdx
  int AppContainerSidType; // ebx
  __int64 v18; // r8
  _BYTE *v19; // rsi
  ACCESS_MASK GrantedAccess; // eax
  unsigned int v21; // r14d
  char v22; // al
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int k; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v27; // rdi
  PSID *TokenIntegrity; // rax
  PSID v29; // r12
  int v30; // ecx
  struct _KTHREAD *v31; // rax
  PERESOURCE *PrimaryToken; // r12
  int v33; // ecx
  struct _KTHREAD *v34; // rax
  __int64 v35; // rax
  void *v36; // rcx
  int v37; // eax
  _DWORD *v38; // rbx
  signed __int32 v39[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  __int64 *v41; // [rsp+38h] [rbp-D0h]
  PSID *p_Sid; // [rsp+40h] [rbp-C8h]
  char v43; // [rsp+50h] [rbp-B8h]
  char v44; // [rsp+51h] [rbp-B7h]
  PVOID v45; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+68h] [rbp-A0h] BYREF
  int v48; // [rsp+70h] [rbp-98h]
  PSID v49; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  int v51; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v55; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF

  v10 = 0LL;
  v54 = 0LL;
  P = 0LL;
  v49 = 0LL;
  HandleInformation = 0LL;
  Handle = 0LL;
  v45 = 0LL;
  v51 = 1;
  v44 = 0;
  v11 = 0;
  v43 = 0;
  v48 = 0;
  LOBYTE(v46) = 0;
  v55 = 0LL;
  v56 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = Sid;
  if ( !Sid )
    return -1073741811;
  v15 = a8;
  if ( a8 )
  {
    if ( a9 )
      goto LABEL_8;
    return -1073741776;
  }
  if ( a9 )
    return -1073741776;
LABEL_8:
  Token = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, &HandleInformation);
  if ( result < 0 )
    return result;
  AppContainerSidType = SeCaptureSid(v13, (int)Object, 1, (__int64)&v49);
  v19 = v49;
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  AppContainerSidType = SepCheckCreateLowBox(v49);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    AppContainerSidType = -1073741659;
LABEL_14:
    v11 = 0;
    goto LABEL_29;
  }
  GrantedAccess = HandleInformation.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  LODWORD(v49) = GrantedAccess;
  v21 = a6;
  if ( !a6 )
  {
    if ( !a7 )
      goto LABEL_22;
LABEL_21:
    AppContainerSidType = -1073741776;
    goto LABEL_14;
  }
  if ( !a7 )
    goto LABEL_21;
LABEL_22:
  if ( a7 )
  {
    p_Sid = &Sid;
    v41 = &v54;
    LODWORD(Object) = 0;
    LOBYTE(v18) = PreviousMode;
    AppContainerSidType = SeCaptureSidAndAttributesArray(a7, a6, v18);
    v10 = v54;
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_28;
  AppContainerSidType = SepCaptureHandles(v15, a9, (__int64 *)&P);
  if ( AppContainerSidType < 0 )
    goto LABEL_28;
  if ( !(unsigned __int8)RtlIsPackageSid(v19) )
  {
LABEL_27:
    AppContainerSidType = -1073741811;
LABEL_28:
    v11 = v43;
    goto LABEL_29;
  }
  v22 = v19[1];
  if ( v22 != 8 && v22 != 12 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_28;
  }
  for ( i = 0; i < v21; ++i )
  {
    if ( !(unsigned __int8)RtlIsCapabilitySid(*(_QWORD *)(v10 + 16LL * i)) )
      goto LABEL_27;
    for ( j = 0; j < i; ++j )
    {
      if ( RtlEqualSid(*(PSID *)(v10 + 16LL * i), *(PSID *)(v10 + 16LL * j)) )
        goto LABEL_27;
    }
  }
  if ( !SepCapabilitiesHasAppSiloBaseSID(v21, v10) )
  {
    for ( k = 0; k < v21; ++k )
    {
      if ( SepIsAppSiloCapability(*(_BYTE **)(v10 + 16LL * k)) )
        goto LABEL_27;
    }
  }
  AppContainerSidType = RtlGetAppContainerSidType(v19);
  if ( AppContainerSidType < 0 )
    goto LABEL_28;
  if ( v48 == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(Token, (__int64)&v46);
    if ( !(_BYTE)v46 )
    {
      AppContainerSidType = -1073741790;
      goto LABEL_28;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_28;
  LODWORD(Sid) = 0;
  RtlQueryElevationFlags(&Sid);
  if ( ((unsigned __int8)Sid & 0x18) == 0x10 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v27 = (PERESOURCE *)Token;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
    TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)v27);
    if ( TokenIntegrity )
    {
      v29 = *TokenIntegrity;
      v30 = *RtlSubAuthorityCountSid(*TokenIntegrity);
      if ( (_BYTE)v30 )
      {
        if ( *RtlSubAuthoritySid(v29, v30 - 1) >= 0x3000 )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
          ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
          Sid = *(PSID *)SepLocateTokenIntegrity((__int64)PrimaryToken);
          v33 = *RtlSubAuthorityCountSid(Sid);
          if ( !(_BYTE)v33 || *RtlSubAuthoritySid(Sid, v33 - 1) < 0x3000 )
            AppContainerSidType = -1073741790;
          ExReleaseResourceLite(PrimaryToken[6]);
          KeLeaveCriticalRegion();
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
    }
    ExReleaseResourceLite(v27[6]);
    KeLeaveCriticalRegion();
    if ( AppContainerSidType < 0 )
      goto LABEL_28;
  }
  AppContainerSidType = SepDuplicateToken((_DWORD)Token, a4, 0, 1, 0, PreviousMode, 0, (__int64)&v45);
  if ( AppContainerSidType < 0 )
    goto LABEL_28;
  v11 = 1;
  AppContainerSidType = SeSetMandatoryPolicyToken(v45, &v51);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  v34 = KeGetCurrentThread();
  --v34->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v45 + 6), 1u);
  _InterlockedOr(v39, 0);
  v44 = 1;
  v35 = SepLocateTokenIntegrity((__int64)v45);
  if ( v35 )
  {
    v36 = *(void **)v35;
    v37 = *(unsigned __int8 *)(*(_QWORD *)v35 + 1LL);
    if ( (_BYTE)v37 )
      *RtlSubAuthoritySid(v36, v37 - 1) = 4096;
    *((_QWORD *)v45 + 9) &= 0x200800000uLL;
    *((_QWORD *)v45 + 10) &= 0x200800000uLL;
    *((_QWORD *)v45 + 8) &= 0x200800000uLL;
    *((_DWORD *)v45 + 50) &= (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
                           ? 0xFFFFCFFF
                           : 0xFFFFDFFF;
    *((_DWORD *)v45 + 50) |= 0x4000u;
  }
  else
  {
    AppContainerSidType = -1073740730;
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  AppContainerSidType = SepSetTokenCapabilities(v45, v19, v10, v21);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  AppContainerSidType = SepSetTokenLowboxNumber(v45, v19);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  *((_QWORD *)&v55 + 1) = v19;
  AppContainerSidType = SepSetTokenCachedHandles(v45, &v55, a8, P);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  AppContainerSidType = SepSetTokenPackage(v45, v19);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  AppContainerSidType = SepAppendAceToTokenDefaultDacl((__int64)v45, v19);
  if ( AppContainerSidType < 0 )
    goto LABEL_29;
  v38 = v45;
  if ( SepSidInTokenSidHash((__int64)v45 + 808, 0LL, (unsigned __int8 *)SePermissiveLearningModeCapabilitySid, 0, 1, 0) )
  {
    _InterlockedIncrement(&SepLearningModeTokenCount);
    *((_DWORD *)v45 + 50) |= 0x3000000u;
  }
  else
  {
    v38[50] &= 0xFCFFFFFF;
    if ( SepSidInTokenSidHash((__int64)v45 + 808, 0LL, (unsigned __int8 *)SeLearningModeLoggingCapabilitySid, 0, 1, 0) )
    {
      _InterlockedIncrement(&SepLearningModeTokenCount);
      *((_DWORD *)v45 + 50) |= 0x1000000u;
    }
  }
  *((_QWORD *)v45 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v39, 0);
  ExReleaseResourceLite(*((PERESOURCE *)v45 + 6));
  KeLeaveCriticalRegion();
  v44 = 0;
  AppContainerSidType = ObInsertObjectEx(v45, 0LL, (unsigned int)v49, 1LL, 0, 0LL, &Handle);
  if ( AppContainerSidType >= 0 )
  {
    AppContainerSidType = SepAppendAceToTokenObjectAcl(v45, 983551LL, v19);
    if ( AppContainerSidType < 0 )
      goto LABEL_29;
    SepFinalizeTokenAcls(v45);
    ObfDereferenceObject(v45);
  }
  v11 = 0;
LABEL_29:
  if ( v44 )
  {
    if ( AppContainerSidType >= 0 )
      *((_QWORD *)v45 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v39, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v45 + 6));
    KeLeaveCriticalRegion();
  }
  if ( AppContainerSidType < 0 )
  {
    if ( v11 )
      ObfDereferenceObject(v45);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v10 )
  {
    LOBYTE(v16) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v10, v16);
  }
  if ( v19 )
  {
    LOBYTE(v18) = 1;
    LOBYTE(v16) = PreviousMode;
    SeReleaseSid(v19, v16, v18);
  }
  if ( Token )
    ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AppContainerSidType >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, (__int64)Handle);
    else
      *a1 = Handle;
  }
  return AppContainerSidType;
}

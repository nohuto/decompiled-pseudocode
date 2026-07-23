/*
 * XREFs of SepCreateAppContainerToken @ 0x14063EAD8
 * Callers:
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCapabilitiesHasAppSiloBaseSID @ 0x1404052A8 (SepCapabilitiesHasAppSiloBaseSID.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x140441DE0 (SepLocateTokenIntegrity.c)
 *     SepIsAppSiloCapability @ 0x1404B6E7C (SepIsAppSiloCapability.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14050BACC (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     SepCheckCapabilities @ 0x14081AEC4 (SepCheckCapabilities.c)
 *     SepCheckCreateAppContainer @ 0x14081B0F4 (SepCheckCreateAppContainer.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x140906AE0 (ObInsertObject.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1409E47AC (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x140A3B748 (SepSetTokenCachedHandles.c)
 *     RtlGetAppContainerSidType @ 0x140A3D0C0 (RtlGetAppContainerSidType.c)
 *     SepSetTokenLowboxNumber @ 0x140A3E100 (SepSetTokenLowboxNumber.c)
 *     RtlQueryElevationFlags @ 0x140AADFA0 (RtlQueryElevationFlags.c)
 *     RtlIsPackageSid @ 0x140AD1F2C (RtlIsPackageSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140ADA87C (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x140ADB034 (RtlIsCapabilitySid.c)
 */

NTSTATUS __fastcall SepCreateAppContainerToken(
        HANDLE *a1,
        PVOID *a2,
        ACCESS_MASK a3,
        int a4,
        KPROCESSOR_MODE AccessMode,
        __int64 a6)
{
  __int64 v8; // rax
  _BYTE *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // r13d
  NTSTATUS result; // eax
  void *v13; // rcx
  PVOID v14; // r15
  int AppContainerSidType; // ebx
  char v16; // r12
  HANDLE *v17; // rsi
  PVOID *v18; // rdi
  ACCESS_MASK GrantedAccess; // eax
  char v20; // al
  unsigned int v21; // ebx
  unsigned int v22; // edi
  __int64 v23; // rax
  void *v24; // rsi
  unsigned int v25; // edi
  _BYTE **v26; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenIntegrity; // rax
  __int64 v29; // rdx
  int v30; // eax
  struct _KTHREAD *v31; // rax
  PERESOURCE *PrimaryToken; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  struct _KTHREAD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  int v39; // r9d
  struct _KTHREAD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // r10
  int v53; // r8d
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  _DWORD *v60; // rdi
  signed __int32 v61[8]; // [rsp+0h] [rbp-108h] BYREF
  char v62; // [rsp+40h] [rbp-C8h]
  char v63; // [rsp+41h] [rbp-C7h]
  PVOID v64; // [rsp+48h] [rbp-C0h] BYREF
  char v65; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+51h] [rbp-B7h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+58h] [rbp-B0h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v69; // [rsp+60h] [rbp-A8h]
  int v70; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Token; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v73; // [rsp+80h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v75; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v76; // [rsp+B8h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF

  *(_DWORD *)((char *)&v66 + 3) = 0;
  Handle = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v65 = 0;
  v62 = 0;
  Flags.Flags = 0;
  HandleInformation = 0LL;
  v64 = 0LL;
  v70 = 1;
  memset(&v73, 0, sizeof(v73));
  v63 = 0;
  v8 = *(_QWORD *)(a6 + 8);
  v9 = *(_BYTE **)(v8 + 16);
  v10 = *(_QWORD *)(v8 + 24);
  v69 = v10;
  v11 = *(_DWORD *)(v8 + 32);
  if ( a1 )
  {
    if ( !a2 )
      goto LABEL_5;
    return -1073741811;
  }
  if ( !a2 )
    return -1073741811;
LABEL_5:
  if ( !v9 )
    return -1073741811;
  v13 = *(void **)(v8 + 8);
  if ( v13 )
  {
    Token = 0LL;
    result = ObReferenceObjectByHandle(v13, 2u, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Token, &HandleInformation);
    v14 = Token;
    if ( result < 0 )
      return result;
  }
  else
  {
    v14 = (PVOID)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &Token, &v66, &DesiredAccess, 0LL);
  }
  AppContainerSidType = SepCheckCreateAppContainer(v9);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  if ( *((_DWORD *)v14 + 48) != 1 && *((int *)v14 + 49) < 2 )
  {
    AppContainerSidType = -1073741659;
LABEL_15:
    v16 = v62;
    goto LABEL_16;
  }
  GrantedAccess = HandleInformation.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  DesiredAccess = GrantedAccess;
  if ( !RtlIsPackageSid(v9) )
  {
LABEL_33:
    AppContainerSidType = -1073741811;
    goto LABEL_15;
  }
  v20 = v9[1];
  if ( v20 != 8 && v20 != 12 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_15;
  }
  v21 = 0;
  if ( v11 )
  {
    while ( RtlIsCapabilitySid(*(PSID *)(v69 + 16LL * v21)) )
    {
      v22 = 0;
      if ( v21 )
      {
        v23 = v69;
        v24 = *(void **)(v69 + 16LL * v21);
        while ( !RtlEqualSid(v24, *(PSID *)(v23 + 16LL * v22)) )
        {
          ++v22;
          v23 = v69;
          if ( v22 >= v21 )
            goto LABEL_43;
        }
        goto LABEL_33;
      }
LABEL_43:
      if ( ++v21 >= v11 )
      {
        v10 = v69;
        goto LABEL_45;
      }
    }
    goto LABEL_33;
  }
LABEL_45:
  if ( !SepCapabilitiesHasAppSiloBaseSID(v11, v10) )
  {
    v25 = 0;
    if ( v11 )
    {
      v26 = (_BYTE **)v10;
      while ( !SepIsAppSiloCapability(*v26) )
      {
        ++v25;
        v26 += 2;
        if ( v25 >= v11 )
          goto LABEL_50;
      }
      goto LABEL_33;
    }
  }
LABEL_50:
  AppContainerSidType = RtlGetAppContainerSidType(v9, (PAPPCONTAINER_SID_TYPE)((char *)&v66 + 3));
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  if ( *(_DWORD *)((char *)&v66 + 3) == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(v14, (__int64)&v65);
    if ( !v65 )
    {
LABEL_53:
      AppContainerSidType = -1073741790;
      goto LABEL_15;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  RtlQueryElevationFlags(&Flags);
  if ( (Flags.Flags & 0x18) == 0x10 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v14 + 6), 1u);
    TokenIntegrity = SepLocateTokenIntegrity((__int64)v14);
    if ( TokenIntegrity )
    {
      v29 = *(_QWORD *)TokenIntegrity;
      v30 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( (_BYTE)v30 )
      {
        if ( *(_DWORD *)(v29 + 4LL * (unsigned int)(v30 - 1) + 8) >= 0x3000u )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
          ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
          v33 = SepLocateTokenIntegrity((__int64)PrimaryToken);
          if ( v33 )
          {
            v34 = *(_QWORD *)v33;
            v35 = *(unsigned __int8 *)(*(_QWORD *)v33 + 1LL);
            if ( !(_BYTE)v35 || *(_DWORD *)(v34 + 4LL * (unsigned int)(v35 - 1) + 8) < 0x3000u )
              AppContainerSidType = -1073741790;
          }
          ExReleaseResourceLite(PrimaryToken[6]);
          KeLeaveCriticalRegion();
          SeReleaseSubjectContext(&SubjectContext);
        }
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v14 + 6));
    KeLeaveCriticalRegion();
    if ( AppContainerSidType < 0 )
      goto LABEL_15;
  }
  AppContainerSidType = SepDuplicateToken((_DWORD)v14, a4, 0, 1, 0, AccessMode, 0, (__int64)&v64);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  v16 = 1;
  v62 = 1;
  AppContainerSidType = SeSetMandatoryPolicyToken(v64, &v70);
  if ( AppContainerSidType < 0 )
    goto LABEL_16;
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v64 + 6), 1u);
  _InterlockedOr(v61, 0);
  v63 = 1;
  v37 = SepLocateTokenIntegrity((__int64)v64);
  v38 = v37;
  if ( !v37 )
  {
    AppContainerSidType = -1073740730;
    goto LABEL_115;
  }
  v39 = *(unsigned __int8 *)(*(_QWORD *)v37 + 1LL);
  if ( (_BYTE)v39 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a6 + 8) + 4LL) & 1) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)v37 + 4LL * (unsigned int)(v39 - 1) + 8) = 4096;
LABEL_105:
      v16 = v62;
      goto LABEL_106;
    }
    SeCaptureSubjectContext(&v73);
    SeLockSubjectContext(&v73);
    v40 = KeGetCurrentThread();
    --v40->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v14 + 6), 1u);
    v41 = SepLocateTokenIntegrity((__int64)v14);
    if ( v41 )
    {
      v42 = *(_QWORD *)v41;
      v43 = *(unsigned __int8 *)(*(_QWORD *)v41 + 1LL);
      v44 = (_BYTE)v43 ? *(_DWORD *)(v42 + 4LL * (unsigned int)(v43 - 1) + 8) : 0;
      if ( *(_DWORD *)(*(_QWORD *)(a6 + 8) + 40LL) > v44 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v14 + 6));
        KeLeaveCriticalRegion();
LABEL_77:
        SeUnlockSubjectContext(&v73);
        SeReleaseSubjectContext(&v73);
        goto LABEL_53;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v14 + 6));
    KeLeaveCriticalRegion();
    v45 = SepLocateTokenIntegrity((__int64)v73.PrimaryToken);
    if ( v45 )
    {
      v46 = *(_QWORD *)v45;
      v47 = *(unsigned __int8 *)(*(_QWORD *)v45 + 1LL);
      if ( (_BYTE)v47 )
        v48 = *(_DWORD *)(v46 + 4LL * (unsigned int)(v47 - 1) + 8);
      else
        v48 = 0;
      v49 = *(_DWORD *)(*(_QWORD *)(a6 + 8) + 40LL);
      if ( v48 < v49 )
        goto LABEL_77;
      if ( v73.ClientToken )
      {
        if ( *((_DWORD *)v73.ClientToken + 48) == 2 && *((int *)v73.ClientToken + 49) < 2 )
          goto LABEL_77;
        v50 = SepLocateTokenIntegrity((__int64)v73.ClientToken);
        v52 = *(_QWORD *)v50;
        v53 = *(unsigned __int8 *)(*(_QWORD *)v50 + 1LL);
        if ( (_BYTE)v53 )
          v54 = *(_DWORD *)(v52 + 4LL * (unsigned int)(v53 - 1) + 8);
        else
          v54 = 0;
        if ( v54 >= v49 )
        {
          v55 = v49;
        }
        else if ( (_BYTE)v53 )
        {
          v55 = *(_DWORD *)(v52 + 4LL * (unsigned int)(v53 - 1) + 8);
        }
        else
        {
          v55 = 0;
        }
        if ( v49 >= v55 )
        {
          v56 = (_BYTE)v53 ? *(_DWORD *)(v52 + 4LL * (unsigned int)(v53 - 1) + 8) : 0;
          v49 = *(_DWORD *)(*(_QWORD *)(a6 + 8) + 40LL);
          if ( v56 < v49 )
          {
            if ( (_BYTE)v53 )
            {
              v57 = SepLocateTokenIntegrity(v51);
              v49 = *(_DWORD *)(*(_QWORD *)v57 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v57 + 1LL) - 1) + 8);
            }
            else
            {
              v49 = 0;
            }
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)v38 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v38 + 1LL) - 1) + 8) = v49;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v38 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v38 + 1LL) - 1) + 8) = 4096;
    }
    SeUnlockSubjectContext(&v73);
    SeReleaseSubjectContext(&v73);
    goto LABEL_105;
  }
LABEL_106:
  *((_QWORD *)v64 + 9) &= 0x200800000uLL;
  *((_QWORD *)v64 + 10) &= 0x200800000uLL;
  *((_QWORD *)v64 + 8) &= 0x200800000uLL;
  v58 = *(unsigned __int8 *)(*(_QWORD *)v38 + 1LL);
  if ( !(_BYTE)v58 || *(_DWORD *)(*(_QWORD *)v38 + 4LL * (unsigned int)(v58 - 1) + 8) < 0x2000u )
    *((_DWORD *)v64 + 50) &= ~0x2000u;
  if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    v59 = *(unsigned __int8 *)(*(_QWORD *)v38 + 1LL);
    if ( !(_BYTE)v59 || *(_DWORD *)(*(_QWORD *)v38 + 4LL * (unsigned int)(v59 - 1) + 8) < 0x3000u )
      *((_DWORD *)v64 + 50) &= ~0x1000u;
  }
  *((_DWORD *)v64 + 50) |= 0x4000u;
LABEL_115:
  if ( AppContainerSidType >= 0 )
  {
    AppContainerSidType = SepSetTokenCapabilities(v64, v9, v10, v11);
    if ( AppContainerSidType >= 0 )
    {
      AppContainerSidType = SepSetTokenLowboxNumber(v64, v9);
      if ( AppContainerSidType >= 0 )
      {
        *((_QWORD *)&v75 + 1) = v9;
        AppContainerSidType = SepSetTokenCachedHandles(v64, &v75, *(unsigned int *)(a6 + 24), *(_QWORD *)(a6 + 16));
        if ( AppContainerSidType >= 0 )
        {
          AppContainerSidType = SepSetTokenPackage(v64, v9);
          if ( AppContainerSidType >= 0 )
          {
            AppContainerSidType = SepAppendAceToTokenDefaultDacl((__int64)v64, v9);
            if ( AppContainerSidType >= 0 )
            {
              v60 = v64;
              if ( SepSidInTokenSidHash(
                     (__int64)v64 + 808,
                     0LL,
                     (unsigned __int8 *)SePermissiveLearningModeCapabilitySid,
                     0,
                     1,
                     0) )
              {
                _InterlockedIncrement(&SepLearningModeTokenCount);
                *((_DWORD *)v64 + 50) |= 0x3000000u;
              }
              else
              {
                v60[50] &= 0xFCFFFFFF;
                if ( SepSidInTokenSidHash(
                       (__int64)v64 + 808,
                       0LL,
                       (unsigned __int8 *)SeLearningModeLoggingCapabilitySid,
                       0,
                       1,
                       0) )
                {
                  _InterlockedIncrement(&SepLearningModeTokenCount);
                  *((_DWORD *)v64 + 50) |= 0x1000000u;
                }
              }
              *((_QWORD *)v64 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v61, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v64 + 6));
              KeLeaveCriticalRegion();
              v63 = 0;
              v17 = a1;
              if ( a1 )
              {
                AppContainerSidType = ObInsertObject(v64, 0LL, DesiredAccess, 1u, 0LL, &Handle);
                if ( AppContainerSidType < 0 )
                {
                  v16 = 0;
                  goto LABEL_17;
                }
                AppContainerSidType = SepAppendAceToTokenObjectAcl(v64, 983551LL, v9);
                if ( AppContainerSidType < 0 )
                  goto LABEL_17;
                SepFinalizeTokenAcls(v64);
                ObfDereferenceObjectWithTag(v64, 0x746C6644u);
                v16 = 0;
              }
              v18 = a2;
              if ( a2 )
                *a2 = v64;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
LABEL_16:
  v17 = a1;
LABEL_17:
  v18 = a2;
LABEL_18:
  if ( v63 )
  {
    if ( AppContainerSidType >= 0 )
      *((_QWORD *)v64 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v61, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v64 + 6));
    KeLeaveCriticalRegion();
  }
  if ( AppContainerSidType >= 0 )
  {
    if ( v17 )
    {
      *v17 = Handle;
    }
    else if ( v18 )
    {
      *v18 = v64;
    }
  }
  else
  {
    if ( v16 )
      ObfDereferenceObjectWithTag(v64, 0x746C6644u);
    if ( Handle )
      ObCloseHandle(Handle, AccessMode);
  }
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
  return AppContainerSidType;
}

/*
 * XREFs of SepFilterToken @ 0x1409E3714
 * Callers:
 *     SeFilterToken @ 0x140816470 (SeFilterToken.c)
 *     NtFilterToken @ 0x1409E32D0 (NtFilterToken.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x140406710 (RtlSidHashInitialize.c)
 *     SepDuplicateLogonSessionReference @ 0x140469C40 (SepDuplicateLogonSessionReference.c)
 *     Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063DEF8 (Feature_295645497__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x14063DF54 (Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline.c)
 *     SeIsSystemContext @ 0x14063E9E0 (SeIsSystemContext.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAddTokenLogonSession @ 0x140777EB0 (SepAddTokenLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x140777FAC (SepModifyTokenPolicyCounter.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1409E47AC (SepSetTokenPackage.c)
 *     RtlCopySidAndAttributesArray @ 0x140A4EE60 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenTrust @ 0x140A518F0 (SepSetTokenTrust.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140A62010 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x140A621C8 (SepSidInSidAndAttributes.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x140A829E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140A86468 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x140A88A44 (SepSetTokenSessionById.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A95C5C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepReferenceLogonSession @ 0x140AB85F0 (SepReferenceLogonSession.c)
 *     RtlIsPackageSid @ 0x140AD1F2C (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140ADB034 (RtlIsCapabilitySid.c)
 *     SepDuplicateTokenClaims @ 0x140AFDAB8 (SepDuplicateTokenClaims.c)
 *     SepStopReferencingLogonSession @ 0x140B223FC (SepStopReferencingLogonSession.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        PSID *a9,
        int a10,
        char **a11)
{
  PVOID *v13; // r14
  unsigned int v14; // esi
  PSID *v15; // rdi
  __int64 Pool2; // rax
  PVOID *v17; // rsi
  PVOID *v18; // rcx
  struct _ERESOURCE *v20; // r12
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // r8d
  ULONG v25; // r15d
  unsigned int v26; // edi
  int v27; // eax
  unsigned int v28; // r13d
  bool v29; // zf
  char *v30; // rdi
  ULONG v31; // eax
  struct _KTHREAD *CurrentThread; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  int v34; // ecx
  unsigned int v35; // ecx
  int v36; // esi
  struct _ERESOURCE *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct _KLOCK_ENTRIES *v40; // r9
  _DWORD *v41; // rcx
  __int64 v42; // rdx
  _KPROCESS *Process; // rcx
  void *v44; // rsi
  _SID_AND_ATTRIBUTES *v45; // r14
  int v46; // ecx
  unsigned int v47; // r12d
  _SID_AND_ATTRIBUTES *v48; // r12
  __int64 v49; // r8
  NTSTATUS v50; // eax
  _SID_AND_ATTRIBUTES *v51; // r14
  PSID *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r14d
  __int64 v56; // rax
  char *v57; // r15
  char v58; // al
  __int64 v59; // rax
  int v60; // eax
  char *v61; // rcx
  unsigned int v62; // r14d
  ULONG v63; // r9d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  int v68; // eax
  char v69; // bl
  struct _KTHREAD *v70; // rax
  PERESOURCE *PrimaryToken; // rbx
  _SID_AND_ATTRIBUTES *v72; // rcx
  __int64 v73; // rcx
  int v74; // edx
  PSID SidArea; // [rsp+28h] [rbp-B9h]
  int RemainingSidAreaSize; // [rsp+38h] [rbp-A9h]
  __int16 v77; // [rsp+58h] [rbp-89h] BYREF
  char PreviousMode; // [rsp+5Ah] [rbp-87h]
  char *v79; // [rsp+60h] [rbp-81h] BYREF
  PVOID Object; // [rsp+68h] [rbp-79h] BYREF
  __int64 v81; // [rsp+70h] [rbp-71h] BYREF
  __int128 v82; // [rsp+78h] [rbp-69h] BYREF
  __int128 v83; // [rsp+88h] [rbp-59h]
  __int128 v84; // [rsp+98h] [rbp-49h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-39h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v86; // [rsp+C8h] [rbp-19h] BYREF

  Object = 0LL;
  DWORD1(v82) = 0;
  HIDWORD(v83) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  v77 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v86, 0, sizeof(v86));
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v14 = 0;
  if ( a8 )
  {
    v15 = a9;
    while ( !RtlIsPackageSid(*v15) && !RtlIsCapabilitySid(*v15) )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= a8 )
        goto LABEL_8;
    }
    return 3221225485LL;
  }
LABEL_8:
  Pool2 = ExAllocatePool2(0x100uLL);
  v17 = (PVOID *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
  *(_DWORD *)(Pool2 + 24) = 0;
  if ( SeTokenLeakTracking )
  {
    v13 = (PVOID *)ExAllocatePool2(0x100uLL);
    if ( !v13 )
    {
      v18 = v17;
      goto LABEL_16;
    }
  }
  v20 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
  if ( !v20 )
  {
    ExFreePoolWithTag(v17, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v18 = v13;
LABEL_16:
    ExFreePoolWithTag(v18, 0);
    return 3221225626LL;
  }
  v21 = *(_DWORD *)(a1 + 132);
  v22 = v21 + a10;
  if ( v21 + a10 < v21 )
  {
    v26 = -1073741675;
LABEL_128:
    ExFreePoolWithTag(v20, 0);
    ExFreePoolWithTag(v17, 0);
    v29 = SeTokenLeakTracking == 0;
    goto LABEL_129;
  }
  v23 = v22 + 4;
  v24 = -1;
  v25 = -1;
  if ( v22 + 4 >= v22 )
    v25 = v22 + 4;
  v26 = v23 < v22 ? 0xC0000095 : 0;
  LODWORD(v79) = v25;
  if ( v23 < v22 )
    goto LABEL_128;
  if ( v25 < 0xFFFFFB68 )
    v24 = v25 + 1176;
  v26 = v25 >= 0xFFFFFB68 ? 0xC0000095 : 0;
  if ( v25 + 1176 < 0x498 )
    goto LABEL_128;
  RemainingSidAreaSize = *(_DWORD *)(a1 + 136);
  *((_QWORD *)&v82 + 1) = 0LL;
  DWORD2(v83) = 0;
  *(_QWORD *)&v83 = 0LL;
  LODWORD(v82) = 48;
  v84 = 0LL;
  v27 = ObCreateObjectEx(a2, SeTokenObjectType, 0LL, a2, (__int64)SidArea, v24, RemainingSidAreaSize, v24, &Object, 0LL);
  v28 = 0;
  v26 = v27;
  if ( v27 >= 0 )
  {
    v30 = (char *)Object;
    *((_QWORD *)Object + 6) = v20;
    ExInitializeResourceLite(v20);
    *((_QWORD *)v30 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    *((_QWORD *)v30 + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v30[204] = 0;
    *((_QWORD *)v30 + 3) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v30 = *(_OWORD *)a1;
    *((_DWORD *)v30 + 35) = 0;
    *((_DWORD *)v30 + 32) = 0;
    *((_DWORD *)v30 + 33) = v25;
    *((_QWORD *)v30 + 4) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v30 + 48) = *(_DWORD *)(a1 + 192);
    *((_DWORD *)v30 + 49) = *(_DWORD *)(a1 + 196);
    *((_QWORD *)v30 + 5) = *(_QWORD *)(a1 + 40);
    *((_QWORD *)v30 + 28) = *(_QWORD *)(a1 + 224);
    *((_QWORD *)v30 + 140) = 0LL;
    *((_QWORD *)v30 + 141) = 0LL;
    *((_QWORD *)v30 + 137) = 0LL;
    *((_QWORD *)v30 + 143) = v13;
    *((_DWORD *)v30 + 30) = 0;
    *((_QWORD *)v30 + 145) = 0LL;
    if ( SeTokenLeakTracking )
    {
      v31 = RtlWalkFrameChain(v13 + 5, 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*((_QWORD *)v30 + 143) + 40LL + 8LL * v31), 30 - v31, 1u);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    *((_DWORD *)v30 + 34) = *(_DWORD *)(a1 + 136);
    *((_DWORD *)v30 + 36) = *(_DWORD *)(a1 + 144);
    SepSetTokenSessionById((_DWORD)v30, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
    *((_DWORD *)v30 + 30) = *(_DWORD *)(a1 + 120);
    IsEnabledDeviceUsageNoInline = Feature_295645497__private_IsEnabledDeviceUsageNoInline();
    v34 = *(_DWORD *)(a1 + 200);
    if ( IsEnabledDeviceUsageNoInline )
      v35 = v34 & 0xEFFFFBD7;
    else
      v35 = v34 & 0xFFFFFBD7;
    *((_DWORD *)v30 + 50) = v35;
    if ( (v35 & 0x1000000) != 0 )
      _InterlockedIncrement(&SepLearningModeTokenCount);
    *(_OWORD *)(v30 + 88) = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(v30 + 104) = *(_OWORD *)(a1 + 104);
    *((_DWORD *)v30 + 52) = *(_DWORD *)(a1 + 208);
    *((_DWORD *)v30 + 53) = *(_DWORD *)(a1 + 212);
    *((_OWORD *)v30 + 4) = *(_OWORD *)(a1 + 64);
    *((_QWORD *)v30 + 10) = *(_QWORD *)(a1 + 80);
    if ( (unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
      *((_QWORD *)v30 + 146) = *(_QWORD *)(a1 + 1168);
    *((_QWORD *)v30 + 97) = v17;
    if ( v30[119] == 2 )
      SepModifyTokenPolicyCounter((__int64)(v30 + 88), 1);
    *((_QWORD *)v30 + 135) = 0LL;
    *((_QWORD *)v30 + 136) = 0LL;
    *((_QWORD *)v30 + 144) = 0LL;
    *((_QWORD *)v30 + 99) = 0LL;
    *((_QWORD *)v30 + 98) = 0LL;
    *((_DWORD *)v30 + 200) = 0;
    memset_0(v30 + 808, 0, 0x110uLL);
    *((_QWORD *)v30 + 22) = 0LL;
    *((_QWORD *)v30 + 138) = 0LL;
    *((_QWORD *)v30 + 139) = 0LL;
    *((_QWORD *)v30 + 142) = 0LL;
    v36 = SepDuplicateLogonSessionReference((__int64)v30, a1);
    if ( v36 < 0 )
      goto LABEL_40;
    if ( (unsigned int)Feature_295645497__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(a1 + 200) & 0x10000000) != 0 )
    {
      v38 = *((_QWORD *)v30 + 27) + 16LL;
      v81 = 0LL;
      v36 = SepReferenceLogonSession(v38, &v81);
      if ( v36 < 0 )
        goto LABEL_40;
      *((_DWORD *)v30 + 50) |= 0x10000000u;
    }
    SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
    *((_QWORD *)v30 + 142) = *(_QWORD *)(a1 + 1136);
    v41 = *(_DWORD **)(a1 + 776);
    if ( *v41 )
    {
      v36 = AuthzBasepDuplicateSecurityAttributes((__int64)v41, *((_QWORD *)v30 + 97), 0);
      if ( v36 < 0 )
        goto LABEL_40;
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v36 = SepDuplicateTokenClaims(a1, v30);
      if ( v36 < 0 )
        goto LABEL_40;
    }
    if ( SeTokenLeakTracking )
    {
      **((_QWORD **)v30 + 143) = KeGetCurrentThread()[1].CycleTime;
      *(_QWORD *)(*((_QWORD *)v30 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(*((_QWORD *)v30 + 143) + 32LL) = 15;
      *(_DWORD *)(*((_QWORD *)v30 + 143) + 280LL) = 0;
      *(_DWORD *)(*((_QWORD *)v30 + 143) + 284LL) = 0;
      v42 = *((_QWORD *)v30 + 143);
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v42 + 16) = Process[1].SecureState.EntireField;
      *(_DWORD *)(v42 + 24) = Process[1].KernelWaitTime;
      *(_WORD *)(v42 + 28) = WORD2(Process[1].KernelWaitTime);
      *(_BYTE *)(v42 + 30) = BYTE6(Process[1].KernelWaitTime);
      SepAddTokenLogonSession((__int64)v30);
    }
    if ( (a3 & 2) != 0 )
    {
      v44 = (void *)PsReferencePrimaryTokenWithTag(
                      (__int64)KeGetCurrentThread()->ApcState.Process,
                      0x746C6644u,
                      v39,
                      v40);
      if ( (int)SeIsSystemContext(v44, &v77) >= 0 && (_BYTE)v77 )
        *((_DWORD *)v30 + 50) |= 0x40u;
      ObfDereferenceObject(v44);
    }
    v45 = (_SID_AND_ATTRIBUTES *)(v30 + 1176);
    v46 = ((_BYTE)v30 - 104) & 7;
    if ( (((_BYTE)v30 - 104) & 7) != 0 )
    {
      v45 = (_SID_AND_ATTRIBUTES *)((char *)v45 + (unsigned int)(8 - v46));
      v25 -= 8 - v46;
      LODWORD(v79) = v25;
    }
    v47 = a8;
    if ( *(_DWORD *)(a1 + 128) > a8 )
      v47 = *(_DWORD *)(a1 + 128);
    v48 = &v45[*(_DWORD *)(a1 + 124) + v47];
    *((_QWORD *)v30 + 19) = v45;
    Object = v48;
    if ( LOBYTE(RtlpBootStatHandleLock.Queue) )
    {
      v36 = SepDuplicateTokenUserAndGroups(a1, v30);
      if ( v36 < 0 )
      {
        *((_QWORD *)v30 + 19) = 0LL;
        goto LABEL_40;
      }
    }
    else
    {
      *((_DWORD *)v30 + 31) = *(_DWORD *)(a1 + 124);
      v50 = RtlCopySidAndAttributesArray(
              *(_DWORD *)(a1 + 124),
              *(PSID_AND_ATTRIBUTES *)(a1 + 152),
              v25,
              v45,
              v48,
              &Object,
              (PULONG)&v79);
      v48 = (_SID_AND_ATTRIBUTES *)Object;
      v36 = v50;
      v25 = (unsigned int)v79;
    }
    v51 = (_SID_AND_ATTRIBUTES *)((char *)v45 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
    *((_QWORD *)v30 + 20) = v51;
    if ( a8 )
    {
      v52 = a9;
      v81 = (__int64)a9;
      do
      {
        v53 = *(unsigned int *)(a1 + 128);
        if ( !(_DWORD)v53 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v53, v49, *v52) )
        {
          v36 = RtlCopySidAndAttributesArray(
                  1u,
                  (PSID_AND_ATTRIBUTES)&a9[2 * v28],
                  v25,
                  v51,
                  v48,
                  &Object,
                  (PULONG)&v79);
          v48 = (_SID_AND_ATTRIBUTES *)Object;
          ++v51;
          v25 = (unsigned int)v79;
          *(_DWORD *)(*((_QWORD *)v30 + 20) + 16LL * (unsigned int)(*((_DWORD *)v30 + 32))++ + 8) = 7;
        }
        ++v28;
        v52 = (PSID *)(v81 + 16);
        v81 += 16LL;
      }
      while ( v28 < a8 );
    }
    v54 = *(_QWORD *)(a1 + 184);
    v55 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
    if ( v54 )
      v55 += *(unsigned __int16 *)(v54 + 2);
    v56 = ExAllocatePool2(0x100uLL);
    *((_QWORD *)v30 + 22) = v56;
    v57 = (char *)v56;
    if ( !v56 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v36 = -1073741670;
      goto LABEL_42;
    }
    if ( *(_DWORD *)(a1 + 128) && !*((_DWORD *)v30 + 32) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v36 = -1073741811;
      goto LABEL_42;
    }
    v58 = 0;
    if ( *((_DWORD *)v30 + 32) )
    {
      *((_DWORD *)v30 + 50) |= 0x810u;
      v58 = 1;
    }
    else
    {
      *((_QWORD *)v30 + 20) = 0LL;
    }
    if ( (a3 & 8) != 0 )
    {
      *((_DWORD *)v30 + 50) |= 0x18u;
      v58 = 1;
    }
    if ( v58 )
    {
      v79 = 0LL;
      *(_QWORD *)&v84 = 0LL;
      DWORD2(v84) = 0;
      v59 = *(_QWORD *)(a1 + 216);
      v82 = 0LL;
      v83 = 0LL;
      if ( !*(_QWORD *)(v59 + 56) && (*(_DWORD *)(a1 + 200) & 0x18) == 0 )
      {
        LODWORD(v82) = 48;
        *((_QWORD *)&v82 + 1) = 0LL;
        DWORD2(v83) = 0;
        *(_QWORD *)&v83 = 0LL;
        v84 = 0LL;
        if ( (int)SepDuplicateToken(a1, (int)&v82, 0, 1, 0, 0, 0, &v79) >= 0 )
        {
          v60 = SepStopReferencingLogonSession(v79);
          v61 = v79;
          if ( v60 >= 0 )
          {
            if ( !_InterlockedCompareExchange64(
                    (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 56LL),
                    (signed __int64)v79,
                    0LL) )
              goto LABEL_93;
            v61 = v79;
          }
          ObfDereferenceObject(v61);
        }
      }
    }
LABEL_93:
    memmove(v57, *(const void **)(a1 + 176), v55);
    if ( *(_QWORD *)(a1 + 184) )
      *((_QWORD *)v30 + 23) = &v57[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
    else
      *((_QWORD *)v30 + 23) = 0LL;
    v62 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
    v63 = *(_DWORD *)(a1 + 800);
    if ( v63 )
      v36 = SepSetTokenCapabilities((__int64)v30, *(void **)(a1 + 784), *(_QWORD *)(a1 + 792), v63);
    if ( v36 >= 0 )
    {
      v64 = *(_QWORD *)(a1 + 784);
      if ( !v64 || (v36 = SepSetTokenPackage(v30, v64), v36 >= 0) )
      {
        v65 = *(_QWORD *)(a1 + 1080);
        if ( v65 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v65 + 24)) <= 1 )
            __fastfail(0xEu);
          *((_QWORD *)v30 + 135) = *(_QWORD *)(a1 + 1080);
        }
        v66 = *(_QWORD *)(a1 + 1088);
        if ( v66 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
            __fastfail(0xEu);
          *((_QWORD *)v30 + 136) = *(_QWORD *)(a1 + 1088);
        }
        v67 = *(_QWORD *)(a1 + 1152);
        if ( v67 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v67 + 24)) <= 1 )
            __fastfail(0xEu);
          *((_QWORD *)v30 + 144) = *(_QWORD *)(a1 + 1152);
        }
        v68 = SepSetTokenTrust(v30, *(_QWORD *)(a1 + 1104));
        v37 = *(struct _ERESOURCE **)(a1 + 48);
        v36 = v68;
        if ( v68 >= 0 )
        {
          ExReleaseResourceLite(v37);
          KeLeaveCriticalRegion();
          *((_QWORD *)v30 + 21) = &v57[v62];
          SepRemoveDisabledGroupsAndPrivileges((_DWORD)v30, a3, a4, a5, a6, a7);
          RtlSidHashInitialize(
            *((PSID_AND_ATTRIBUTES *)v30 + 19),
            *((_DWORD *)v30 + 31),
            (PSID_AND_ATTRIBUTES_HASH)(v30 + 232));
          RtlSidHashInitialize(
            *((PSID_AND_ATTRIBUTES *)v30 + 20),
            *((_DWORD *)v30 + 32),
            (PSID_AND_ATTRIBUTES_HASH)(v30 + 504));
          SeCaptureSubjectContext(&SubjectContext);
          v69 = PreviousMode;
          v86.PrimaryToken = SubjectContext.PrimaryToken;
          if ( RtlIsSandboxedToken(&SubjectContext, PreviousMode)
            && RtlIsSandboxedToken(&v86, v69)
            && ((v70 = KeGetCurrentThread(),
                 PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken,
                 --v70->KernelApcDisable,
                 ExAcquireResourceSharedLite(PrimaryToken[6], 1u),
                 v36 = SepNewTokenAsRestrictedAsProcessToken(v30, PrimaryToken),
                 ExReleaseResourceLite(PrimaryToken[6]),
                 KeLeaveCriticalRegion(),
                 v36 < 0)
             || !HIBYTE(v77)) )
          {
            ObfDereferenceObject(v30);
            SeReleaseSubjectContext(&SubjectContext);
          }
          else
          {
            SeReleaseSubjectContext(&SubjectContext);
            v72 = (_SID_AND_ATTRIBUTES *)*((_QWORD *)v30 + 99);
            if ( v72 )
              RtlSidHashInitialize(v72, *((_DWORD *)v30 + 200), (PSID_AND_ATTRIBUTES_HASH)(v30 + 808));
            if ( SeTokenLeakTracking )
            {
              if ( *(_DWORD *)&RtlpBootStatHandleLock.ApcStateFill[8] == 15
                && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Blink )
              {
                v73 = *((_QWORD *)v30 + 143);
                *(_DWORD *)(v73 + 280) = _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.152);
                v74 = *(_DWORD *)(*((_QWORD *)v30 + 143) + 280LL);
                if ( v74 >= *(int *)&RtlpBootStatHandleLock.ApcStateFill[4] )
                {
                  DbgPrint("\nToken number 0x%x = 0x%p\n", v74, v30);
                  __debugbreak();
                }
              }
            }
            *a11 = v30;
          }
          return (unsigned int)v36;
        }
        goto LABEL_41;
      }
    }
LABEL_40:
    v37 = *(struct _ERESOURCE **)(a1 + 48);
LABEL_41:
    ExReleaseResourceLite(v37);
LABEL_42:
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v30);
    return (unsigned int)v36;
  }
  ExFreePoolWithTag(v20, 0);
  ExFreePoolWithTag(v17, 0);
  v29 = SeTokenLeakTracking == 0;
LABEL_129:
  if ( !v29 )
    ExFreePoolWithTag(v13, 0);
  return v26;
}

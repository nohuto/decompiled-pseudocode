/*
 * XREFs of SepFilterToken @ 0x140A45584
 * Callers:
 *     SeFilterToken @ 0x1408109E0 (SeFilterToken.c)
 *     NtFilterToken @ 0x140A45140 (NtFilterToken.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     RtlSidHashInitialize @ 0x140260B30 (RtlSidHashInitialize.c)
 *     RtlWalkFrameChain @ 0x140262D70 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403CA6D0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepDuplicateLogonSessionReference @ 0x1404704C0 (SepDuplicateLogonSessionReference.c)
 *     Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063AE30 (Feature_295645497__private_IsEnabledDeviceUsageNoInline.c)
 *     SeIsSystemContext @ 0x14063B870 (SeIsSystemContext.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepAddTokenLogonSession @ 0x140774EB0 (SepAddTokenLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x140774FAC (SepModifyTokenPolicyCounter.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x1408F4B90 (RtlIsSandboxedToken.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     RtlCopySidAndAttributesArray @ 0x140A33F00 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x140A44AC4 (SepSetTokenCapabilities.c)
 *     SepSetTokenTrust @ 0x140A48600 (SepSetTokenTrust.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140A54A70 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x140A54C28 (SepSidInSidAndAttributes.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x140A7AAA0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140A805F8 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x140A82BD4 (SepSetTokenSessionById.c)
 *     SepSetTokenPackage @ 0x140A8F860 (SepSetTokenPackage.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A9110C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepReferenceLogonSession @ 0x140AB6FB0 (SepReferenceLogonSession.c)
 *     RtlIsPackageSid @ 0x140AD4ACC (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140ADE2C4 (RtlIsCapabilitySid.c)
 *     SepDuplicateTokenClaims @ 0x140AFBEB8 (SepDuplicateTokenClaims.c)
 *     SepStopReferencingLogonSession @ 0x140B1FFDC (SepStopReferencingLogonSession.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
        _QWORD *a9,
        int a10,
        char **a11)
{
  PVOID *v12; // r14
  unsigned int v13; // esi
  _QWORD *v14; // rdi
  __int64 Pool2; // rax
  PVOID *v16; // rsi
  PVOID *v17; // rcx
  struct _ERESOURCE *v19; // r12
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // r8d
  unsigned int v24; // r15d
  signed int v25; // edi
  bool v26; // zf
  char *v27; // rdi
  ULONG v28; // eax
  struct _KTHREAD *CurrentThread; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  int v31; // ecx
  unsigned int v32; // ecx
  int v33; // esi
  struct _ERESOURCE *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  _KPROCESS *Process; // rcx
  void *v41; // rsi
  __int64 v42; // r14
  int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  int v46; // r12d
  PVOID v47; // r12
  __int64 v48; // r8
  int v49; // eax
  unsigned int v50; // r13d
  __int64 v51; // r14
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // r14d
  __int64 v56; // rax
  char *v57; // r15
  char v58; // al
  __int64 v59; // rax
  int v60; // eax
  void *v61; // rcx
  unsigned int v62; // r14d
  unsigned int v63; // r9d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  int v68; // eax
  char v69; // bl
  struct _KTHREAD *v70; // rax
  PERESOURCE *PrimaryToken; // rbx
  __int64 *v72; // rcx
  __int64 v73; // rcx
  int v74; // edx
  void *v75; // [rsp+28h] [rbp-B9h]
  int v76; // [rsp+38h] [rbp-A9h]
  __int16 v77; // [rsp+58h] [rbp-89h] BYREF
  char PreviousMode; // [rsp+5Ah] [rbp-87h]
  __int64 v79; // [rsp+60h] [rbp-81h] BYREF
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
  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v77 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v86, 0, sizeof(v86));
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v13 = 0;
  if ( a8 )
  {
    v14 = a9;
    while ( !(unsigned __int8)RtlIsPackageSid(*v14) && !(unsigned __int8)RtlIsCapabilitySid(*v14) )
    {
      ++v13;
      v14 += 2;
      if ( v13 >= a8 )
        goto LABEL_8;
    }
    return 3221225485LL;
  }
LABEL_8:
  Pool2 = ExAllocatePool2(0x100uLL);
  v16 = (PVOID *)Pool2;
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
    v12 = (PVOID *)ExAllocatePool2(0x100uLL);
    if ( !v12 )
    {
      v17 = v16;
      goto LABEL_16;
    }
  }
  v19 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
  if ( !v19 )
  {
    ExFreePoolWithTag(v16, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v17 = v12;
LABEL_16:
    ExFreePoolWithTag(v17, 0);
    return 3221225626LL;
  }
  v20 = *(_DWORD *)(a1 + 132);
  v21 = v20 + a10;
  if ( v20 + a10 < v20 )
  {
    v25 = -1073741675;
LABEL_126:
    ExFreePoolWithTag(v19, 0);
    ExFreePoolWithTag(v16, 0);
    v26 = SeTokenLeakTracking == 0;
    goto LABEL_127;
  }
  v22 = v21 + 4;
  v23 = -1;
  v24 = -1;
  if ( v21 + 4 >= v21 )
    v24 = v21 + 4;
  v25 = v22 < v21 ? 0xC0000095 : 0;
  LODWORD(v79) = v24;
  if ( v22 < v21 )
    goto LABEL_126;
  if ( v24 < 0xFFFFFB70 )
    v23 = v24 + 1168;
  v25 = v24 >= 0xFFFFFB70 ? 0xC0000095 : 0;
  if ( v24 + 1168 < 0x490 )
    goto LABEL_126;
  *((_QWORD *)&v82 + 1) = 0LL;
  DWORD2(v83) = 0;
  *(_QWORD *)&v83 = 0LL;
  v76 = *(_DWORD *)(a1 + 136);
  LODWORD(v82) = 48;
  v84 = 0LL;
  v25 = ObCreateObjectEx(a2, SeTokenObjectType, 0LL, a2, (__int64)v75, v23, v76, v23, &Object, 0LL);
  if ( v25 >= 0 )
  {
    v27 = (char *)Object;
    *((_QWORD *)Object + 6) = v19;
    ExInitializeResourceLite(v19);
    *((_QWORD *)v27 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    *((_QWORD *)v27 + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v27[204] = 0;
    *((_QWORD *)v27 + 3) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v27 = *(_OWORD *)a1;
    *((_DWORD *)v27 + 35) = 0;
    *((_DWORD *)v27 + 32) = 0;
    *((_DWORD *)v27 + 33) = v24;
    *((_QWORD *)v27 + 4) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v27 + 48) = *(_DWORD *)(a1 + 192);
    *((_DWORD *)v27 + 49) = *(_DWORD *)(a1 + 196);
    *((_QWORD *)v27 + 5) = *(_QWORD *)(a1 + 40);
    *((_QWORD *)v27 + 28) = *(_QWORD *)(a1 + 224);
    *((_QWORD *)v27 + 140) = 0LL;
    *((_QWORD *)v27 + 141) = 0LL;
    *((_QWORD *)v27 + 137) = 0LL;
    *((_QWORD *)v27 + 143) = v12;
    *((_DWORD *)v27 + 30) = 0;
    *((_QWORD *)v27 + 145) = 0LL;
    if ( SeTokenLeakTracking )
    {
      v28 = RtlWalkFrameChain(v12 + 5, 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*((_QWORD *)v27 + 143) + 40LL + 8LL * v28), 30 - v28, 1u);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    *((_DWORD *)v27 + 34) = *(_DWORD *)(a1 + 136);
    *((_DWORD *)v27 + 36) = *(_DWORD *)(a1 + 144);
    SepSetTokenSessionById((_DWORD)v27, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
    *((_DWORD *)v27 + 30) = *(_DWORD *)(a1 + 120);
    IsEnabledDeviceUsageNoInline = Feature_295645497__private_IsEnabledDeviceUsageNoInline();
    v31 = *(_DWORD *)(a1 + 200);
    if ( IsEnabledDeviceUsageNoInline )
      v32 = v31 & 0xEFFFFBD7;
    else
      v32 = v31 & 0xFFFFFBD7;
    *((_DWORD *)v27 + 50) = v32;
    if ( (v32 & 0x1000000) != 0 )
      _InterlockedIncrement(&SepLearningModeTokenCount);
    *(_OWORD *)(v27 + 88) = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(v27 + 104) = *(_OWORD *)(a1 + 104);
    *((_DWORD *)v27 + 52) = *(_DWORD *)(a1 + 208);
    *((_DWORD *)v27 + 53) = *(_DWORD *)(a1 + 212);
    *((_OWORD *)v27 + 4) = *(_OWORD *)(a1 + 64);
    *((_QWORD *)v27 + 10) = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v27 + 97) = v16;
    if ( v27[119] == 2 )
      SepModifyTokenPolicyCounter((__int64)(v27 + 88), 1);
    *((_QWORD *)v27 + 135) = 0LL;
    *((_QWORD *)v27 + 136) = 0LL;
    *((_QWORD *)v27 + 144) = 0LL;
    *((_QWORD *)v27 + 99) = 0LL;
    *((_QWORD *)v27 + 98) = 0LL;
    *((_DWORD *)v27 + 200) = 0;
    memset_0(v27 + 808, 0, 0x110uLL);
    *((_QWORD *)v27 + 22) = 0LL;
    *((_QWORD *)v27 + 138) = 0LL;
    *((_QWORD *)v27 + 139) = 0LL;
    *((_QWORD *)v27 + 142) = 0LL;
    v33 = SepDuplicateLogonSessionReference((__int64)v27, a1);
    if ( v33 < 0 )
      goto LABEL_38;
    if ( (unsigned int)Feature_295645497__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(a1 + 200) & 0x10000000) != 0 )
    {
      v35 = *((_QWORD *)v27 + 27) + 16LL;
      v81 = 0LL;
      v33 = SepReferenceLogonSession(v35, &v81);
      if ( v33 < 0 )
        goto LABEL_38;
      *((_DWORD *)v27 + 50) |= 0x10000000u;
    }
    SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
    *((_QWORD *)v27 + 142) = *(_QWORD *)(a1 + 1136);
    v38 = *(_DWORD **)(a1 + 776);
    if ( *v38 )
    {
      v33 = AuthzBasepDuplicateSecurityAttributes((__int64)v38, *((_QWORD *)v27 + 97), 0);
      if ( v33 < 0 )
        goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v33 = SepDuplicateTokenClaims(a1, v27);
      if ( v33 < 0 )
        goto LABEL_38;
    }
    if ( SeTokenLeakTracking )
    {
      **((_QWORD **)v27 + 143) = KeGetCurrentThread()[1].CycleTime;
      *(_QWORD *)(*((_QWORD *)v27 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(*((_QWORD *)v27 + 143) + 32LL) = 15;
      *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL) = 0;
      *(_DWORD *)(*((_QWORD *)v27 + 143) + 284LL) = 0;
      v39 = *((_QWORD *)v27 + 143);
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v39 + 16) = Process[1].SecureState.EntireField;
      *(_DWORD *)(v39 + 24) = Process[1].KernelWaitTime;
      *(_WORD *)(v39 + 28) = WORD2(Process[1].KernelWaitTime);
      *(_BYTE *)(v39 + 30) = BYTE6(Process[1].KernelWaitTime);
      SepAddTokenLogonSession((__int64)v27);
    }
    if ( (a3 & 2) != 0 )
    {
      v41 = (void *)PsReferencePrimaryTokenWithTag(
                      (__int64)KeGetCurrentThread()->ApcState.Process,
                      0x746C6644u,
                      v36,
                      v37);
      if ( (int)SeIsSystemContext(v41, &v77) >= 0 && (_BYTE)v77 )
        *((_DWORD *)v27 + 50) |= 0x40u;
      ObfDereferenceObject(v41);
    }
    v42 = (__int64)(v27 + 1168);
    v43 = ((_BYTE)v27 - 112) & 7;
    if ( (((_BYTE)v27 - 112) & 7) != 0 )
    {
      v42 += (unsigned int)(8 - v43);
      v24 -= 8 - v43;
      LODWORD(v79) = v24;
    }
    v44 = *(_DWORD *)(a1 + 128);
    v45 = a8;
    v46 = *(_DWORD *)(a1 + 124);
    *((_QWORD *)v27 + 19) = v42;
    if ( v44 > a8 )
      v45 = v44;
    v47 = (PVOID)(v42 + 16LL * (v45 + v46));
    Object = v47;
    if ( RtlpBootStatHandleLock.WaitBlockFill7[128] )
    {
      v33 = SepDuplicateTokenUserAndGroups(a1, v27);
      if ( v33 < 0 )
      {
        *((_QWORD *)v27 + 19) = 0LL;
        goto LABEL_38;
      }
    }
    else
    {
      *((_DWORD *)v27 + 31) = *(_DWORD *)(a1 + 124);
      v49 = RtlCopySidAndAttributesArray(
              *(_DWORD *)(a1 + 124),
              *(_QWORD *)(a1 + 152),
              v24,
              v42,
              (char *)v47,
              &Object,
              (unsigned int *)&v79);
      v47 = Object;
      v33 = v49;
      v24 = v79;
    }
    v50 = 0;
    v51 = (unsigned int)(16 * *(_DWORD *)(a1 + 124)) + v42;
    *((_QWORD *)v27 + 20) = v51;
    if ( a8 )
    {
      v52 = a9;
      v81 = (__int64)a9;
      do
      {
        v53 = *(unsigned int *)(a1 + 128);
        if ( !(_DWORD)v53 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v53, v48, *v52) )
        {
          v33 = RtlCopySidAndAttributesArray(
                  1u,
                  (__int64)&a9[2 * v50],
                  v24,
                  v51,
                  (char *)v47,
                  &Object,
                  (unsigned int *)&v79);
          v47 = Object;
          v51 += 16LL;
          v24 = v79;
          *(_DWORD *)(*((_QWORD *)v27 + 20) + 16LL * (unsigned int)(*((_DWORD *)v27 + 32))++ + 8) = 7;
        }
        ++v50;
        v52 = (_QWORD *)(v81 + 16);
        v81 += 16LL;
      }
      while ( v50 < a8 );
    }
    v54 = *(_QWORD *)(a1 + 184);
    v55 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
    if ( v54 )
      v55 += *(unsigned __int16 *)(v54 + 2);
    v56 = ExAllocatePool2(0x100uLL);
    *((_QWORD *)v27 + 22) = v56;
    v57 = (char *)v56;
    if ( !v56 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v33 = -1073741670;
      goto LABEL_40;
    }
    if ( *(_DWORD *)(a1 + 128) && !*((_DWORD *)v27 + 32) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v33 = -1073741811;
      goto LABEL_40;
    }
    v58 = 0;
    if ( *((_DWORD *)v27 + 32) )
    {
      *((_DWORD *)v27 + 50) |= 0x810u;
      v58 = 1;
    }
    else
    {
      *((_QWORD *)v27 + 20) = 0LL;
    }
    if ( (a3 & 8) != 0 )
    {
      *((_DWORD *)v27 + 50) |= 0x18u;
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
        if ( (int)SepDuplicateToken(a1, (__int64)&v82, 0, 1, 0, 0, 0, (char **)&v79) >= 0 )
        {
          v60 = SepStopReferencingLogonSession(v79);
          v61 = (void *)v79;
          if ( v60 >= 0 )
          {
            if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 56LL), v79, 0LL) )
              goto LABEL_91;
            v61 = (void *)v79;
          }
          ObfDereferenceObject(v61);
        }
      }
    }
LABEL_91:
    memmove(v57, *(const void **)(a1 + 176), v55);
    if ( *(_QWORD *)(a1 + 184) )
      *((_QWORD *)v27 + 23) = &v57[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
    else
      *((_QWORD *)v27 + 23) = 0LL;
    v62 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
    v63 = *(_DWORD *)(a1 + 800);
    if ( v63 )
      v33 = SepSetTokenCapabilities((__int64)v27, *(void **)(a1 + 784), *(_QWORD *)(a1 + 792), v63);
    if ( v33 >= 0 )
    {
      v64 = *(_QWORD *)(a1 + 784);
      if ( !v64 || (v33 = SepSetTokenPackage(v27, v64), v33 >= 0) )
      {
        v65 = *(_QWORD *)(a1 + 1080);
        if ( v65 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v65 + 24)) <= 1 )
            __fastfail(0xEu);
          *((_QWORD *)v27 + 135) = *(_QWORD *)(a1 + 1080);
        }
        v66 = *(_QWORD *)(a1 + 1088);
        if ( v66 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
            __fastfail(0xEu);
          *((_QWORD *)v27 + 136) = *(_QWORD *)(a1 + 1088);
        }
        v67 = *(_QWORD *)(a1 + 1152);
        if ( v67 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v67 + 24)) <= 1 )
            __fastfail(0xEu);
          *((_QWORD *)v27 + 144) = *(_QWORD *)(a1 + 1152);
        }
        v68 = SepSetTokenTrust(v27, *(_QWORD *)(a1 + 1104));
        v34 = *(struct _ERESOURCE **)(a1 + 48);
        v33 = v68;
        if ( v68 >= 0 )
        {
          ExReleaseResourceLite(v34);
          KeLeaveCriticalRegion();
          *((_QWORD *)v27 + 21) = &v57[v62];
          SepRemoveDisabledGroupsAndPrivileges((_DWORD)v27, a3, a4, a5, a6, a7);
          RtlSidHashInitialize(*((__int64 **)v27 + 19), *((_DWORD *)v27 + 31), (_QWORD *)v27 + 29);
          RtlSidHashInitialize(*((__int64 **)v27 + 20), *((_DWORD *)v27 + 32), (_QWORD *)v27 + 63);
          SeCaptureSubjectContext(&SubjectContext);
          v69 = PreviousMode;
          v86.PrimaryToken = SubjectContext.PrimaryToken;
          if ( RtlIsSandboxedToken(&SubjectContext, PreviousMode)
            && RtlIsSandboxedToken(&v86, v69)
            && ((v70 = KeGetCurrentThread(),
                 PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken,
                 --v70->KernelApcDisable,
                 ExAcquireResourceSharedLite(PrimaryToken[6], 1u),
                 v33 = SepNewTokenAsRestrictedAsProcessToken(v27, PrimaryToken),
                 ExReleaseResourceLite(PrimaryToken[6]),
                 KeLeaveCriticalRegion(),
                 v33 < 0)
             || !HIBYTE(v77)) )
          {
            ObfDereferenceObject(v27);
            SeReleaseSubjectContext(&SubjectContext);
          }
          else
          {
            SeReleaseSubjectContext(&SubjectContext);
            v72 = (__int64 *)*((_QWORD *)v27 + 99);
            if ( v72 )
              RtlSidHashInitialize(v72, *((_DWORD *)v27 + 200), (_QWORD *)v27 + 101);
            if ( SeTokenLeakTracking )
            {
              if ( HIDWORD(RtlpBootStatHandleLock.FirstArgument) == 15
                && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == *(struct _LIST_ENTRY **)&RtlpBootStatHandleLock.SystemCallNumber )
              {
                v73 = *((_QWORD *)v27 + 143);
                *(_DWORD *)(v73 + 280) = _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.ApcStateFill[4]);
                v74 = *(_DWORD *)(*((_QWORD *)v27 + 143) + 280LL);
                if ( v74 >= *(int *)&RtlpBootStatHandleLock.ApcStateFill[8] )
                {
                  DbgPrint("\nToken number 0x%x = 0x%p\n", v74, v27);
                  __debugbreak();
                }
              }
            }
            *a11 = v27;
          }
          return (unsigned int)v33;
        }
        goto LABEL_39;
      }
    }
LABEL_38:
    v34 = *(struct _ERESOURCE **)(a1 + 48);
LABEL_39:
    ExReleaseResourceLite(v34);
LABEL_40:
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v27);
    return (unsigned int)v33;
  }
  ExFreePoolWithTag(v19, 0);
  ExFreePoolWithTag(v16, 0);
  v26 = SeTokenLeakTracking == 0;
LABEL_127:
  if ( !v26 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)v25;
}

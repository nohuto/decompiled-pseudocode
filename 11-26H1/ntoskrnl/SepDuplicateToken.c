/*
 * XREFs of SepDuplicateToken @ 0x1409060B0
 * Callers:
 *     SepGetAnonymousToken @ 0x1403B321C (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1404DA5DC (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063E288 (SepOneWayLinkLogonSessionsEx.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x14081AACC (SeDuplicateTokenWithPredictedClaims.c)
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x1409025C0 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     NtImpersonateAnonymousToken @ 0x140AB3DD0 (NtImpersonateAnonymousToken.c)
 *     SeGetLinkedToken @ 0x140AB84D0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x140AED040 (SeGetLogonSessionToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140B2A218 (SeDuplicateTokenAndAddOriginClaim.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     PsGetSessionObjectById @ 0x140216024 (PsGetSessionObjectById.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x140406710 (RtlSidHashInitialize.c)
 *     SepDuplicateLogonSessionReference @ 0x140469C40 (SepDuplicateLogonSessionReference.c)
 *     SepReferenceLuidToIndexEntry @ 0x14047CE00 (SepReferenceLuidToIndexEntry.c)
 *     Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063DEF8 (Feature_295645497__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x14063DF54 (Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAddTokenLogonSession @ 0x140777EB0 (SepAddTokenLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x140777FAC (SepModifyTokenPolicyCounter.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     SepSetTokenCapabilities @ 0x1409E2C54 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1409E47AC (SepSetTokenPackage.c)
 *     SepSetTokenTrust @ 0x140A518F0 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140A86468 (SepDuplicateTokenUserAndGroups.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB8628 (SepReferenceLogonSessionSilo.c)
 *     SepDuplicateTokenClaims @ 0x140AFDAB8 (SepDuplicateTokenClaims.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        char **a8)
{
  PVOID *v12; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v15; // rbx
  _QWORD *v16; // rax
  PVOID *v17; // rcx
  struct _ERESOURCE *v18; // r14
  int v19; // edi
  char *v20; // rdi
  ULONG v21; // eax
  struct _KTHREAD *CurrentThread; // rax
  bool v23; // zf
  int v24; // eax
  unsigned int v25; // eax
  int v26; // ebp
  void *v27; // rcx
  int v28; // ebx
  __int64 v29; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  char *v33; // r14
  struct _ERESOURCE *v34; // rcx
  __int64 v35; // rdx
  char *v36; // rcx
  int i; // eax
  __int64 v38; // rax
  char *v39; // rax
  int j; // ecx
  __int64 v41; // rax
  unsigned int v42; // ecx
  size_t v43; // rbp
  char *v44; // rax
  char *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rax
  char *v48; // r14
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rdx
  _KPROCESS *Process; // rcx
  __int64 v58; // rcx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // r11
  int v62; // r10d
  int v63; // r9d
  int v64; // eax
  _SID_AND_ATTRIBUTES *v65; // rcx
  __int64 v66; // rax
  int v67; // edx
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF

  Object[0] = 0LL;
  v12 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v15 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
  v16 = Pool2 + 2;
  v15[6] = 0;
  v16[1] = v16;
  *v16 = v16;
  *((_QWORD *)v15 + 5) = v15 + 8;
  *((_QWORD *)v15 + 4) = v15 + 8;
  if ( SeTokenLeakTracking )
  {
    v12 = (PVOID *)ExAllocatePool2(0x100uLL);
    if ( !v12 )
    {
      v17 = (PVOID *)v15;
      goto LABEL_8;
    }
  }
  v18 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
  if ( !v18 )
  {
    ExFreePoolWithTag(v15, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v17 = v12;
LABEL_8:
    ExFreePoolWithTag(v17, 0);
    return 3221225626LL;
  }
  if ( *(_DWORD *)(a1 + 132) >= 0xFFFFFB68 )
  {
    ExFreePoolWithTag(v15, 0);
    ExFreePoolWithTag(v18, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v12, 0);
    return 3221225621LL;
  }
  else
  {
    v19 = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6);
    if ( v19 < 0 )
    {
      ExFreePoolWithTag(v15, 0);
      ExFreePoolWithTag(v18, 0);
      if ( SeTokenLeakTracking )
        ExFreePoolWithTag(v12, 0);
      return (unsigned int)v19;
    }
    v20 = (char *)Object[0];
    *((_QWORD *)Object[0] + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v20[204] = 0;
    *((_DWORD *)v20 + 48) = a4;
    *((_DWORD *)v20 + 49) = a5;
    *((_QWORD *)v20 + 6) = v18;
    ExInitializeResourceLite(v18);
    *((_QWORD *)v20 + 3) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)v20 = *(_OWORD *)a1;
    *((_DWORD *)v20 + 35) = 0;
    *((_QWORD *)v20 + 4) = *(_QWORD *)(a1 + 32);
    *((_QWORD *)v20 + 5) = *(_QWORD *)(a1 + 40);
    *((_QWORD *)v20 + 28) = *(_QWORD *)(a1 + 224);
    *((_QWORD *)v20 + 140) = 0LL;
    *((_QWORD *)v20 + 141) = 0LL;
    *((_QWORD *)v20 + 137) = 0LL;
    *((_QWORD *)v20 + 143) = v12;
    *((_DWORD *)v20 + 30) = 0;
    *((_QWORD *)v20 + 145) = 0LL;
    if ( SeTokenLeakTracking )
    {
      v21 = RtlWalkFrameChain(v12 + 5, 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*((_QWORD *)v20 + 143) + 40LL + 8LL * v21), 30 - v21, 1u);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    *((_QWORD *)v20 + 7) = *(_QWORD *)(a1 + 56);
    *((_DWORD *)v20 + 34) = *(_DWORD *)(a1 + 136);
    *((_DWORD *)v20 + 36) = *(_DWORD *)(a1 + 144);
    *((_DWORD *)v20 + 32) = *(_DWORD *)(a1 + 128);
    *((_DWORD *)v20 + 33) = *(_DWORD *)(a1 + 132);
    v23 = (unsigned int)Feature_295645497__private_IsEnabledDeviceUsageNoInline() == 0;
    v24 = *(_DWORD *)(a1 + 200);
    if ( v23 )
      v25 = v24 & 0xFFFFFBDF;
    else
      v25 = v24 & 0xEFFFFBDF;
    *((_DWORD *)v20 + 50) = v25;
    if ( (v25 & 0x1000000) != 0 )
      _InterlockedIncrement(&SepLearningModeTokenCount);
    v26 = *(_DWORD *)(a1 + 120);
    if ( *((_DWORD *)v20 + 30) != v26 )
    {
      *((_DWORD *)v20 + 30) = v26;
      if ( !LODWORD(ExpPlatformBinaryLock.QuantumTarget) )
      {
        v27 = (void *)*((_QWORD *)v20 + 145);
        if ( v27 )
          ObfDereferenceObject(v27);
        *((_QWORD *)v20 + 145) = PsGetSessionObjectById();
      }
    }
    *((_DWORD *)v20 + 30) = *(_DWORD *)(a1 + 120);
    *(_OWORD *)(v20 + 88) = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(v20 + 104) = *(_OWORD *)(a1 + 104);
    *((_DWORD *)v20 + 52) = *(_DWORD *)(a1 + 208);
    *((_DWORD *)v20 + 53) = *(_DWORD *)(a1 + 212);
    *((_OWORD *)v20 + 4) = *(_OWORD *)(a1 + 64);
    *((_QWORD *)v20 + 10) = *(_QWORD *)(a1 + 80);
    if ( (unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
      *((_QWORD *)v20 + 146) = *(_QWORD *)(a1 + 1168);
    *((_QWORD *)v20 + 97) = v15;
    *((_QWORD *)v20 + 135) = 0LL;
    *((_QWORD *)v20 + 136) = 0LL;
    *((_QWORD *)v20 + 144) = 0LL;
    *((_QWORD *)v20 + 99) = 0LL;
    *((_QWORD *)v20 + 98) = 0LL;
    *((_DWORD *)v20 + 200) = 0;
    memset_0(v20 + 808, 0, 0x110uLL);
    *((_QWORD *)v20 + 22) = 0LL;
    *((_QWORD *)v20 + 138) = 0LL;
    *((_QWORD *)v20 + 139) = 0LL;
    *((_QWORD *)v20 + 142) = 0LL;
    if ( v20[119] == 2 )
      SepModifyTokenPolicyCounter((__int64)(v20 + 88), 1);
    v28 = SepDuplicateLogonSessionReference((__int64)v20, a1);
    if ( v28 < 0 )
      goto LABEL_48;
    if ( (unsigned int)Feature_295645497__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(a1 + 200) & 0x10000000) != 0 )
    {
      v29 = *((_QWORD *)v20 + 27);
      CurrentServerSilo = PsGetCurrentServerSilo();
      v28 = SepReferenceLogonSessionSilo(v29 + 16, CurrentServerSilo, Object);
      if ( v28 < 0 )
      {
LABEL_48:
        v34 = *(struct _ERESOURCE **)(a1 + 48);
LABEL_49:
        ExReleaseResourceLite(v34);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v35);
        ObfDereferenceObject(v20);
        return (unsigned int)v28;
      }
      *((_DWORD *)v20 + 50) |= 0x10000000u;
    }
    v31 = *(_QWORD *)(a1 + 1136);
    if ( v31 )
      SepReferenceLuidToIndexEntry(v31);
    *((_QWORD *)v20 + 142) = *(_QWORD *)(a1 + 1136);
    v32 = *(_DWORD **)(a1 + 776);
    if ( *v32 )
    {
      v28 = AuthzBasepDuplicateSecurityAttributes((__int64)v32, *((_QWORD *)v20 + 97), a7);
      if ( v28 < 0 )
        goto LABEL_48;
    }
    memmove(v20 + 1176, (const void *)(a1 + 1176), *(unsigned int *)(a1 + 132));
    v33 = &v20[-a1];
    if ( LOBYTE(RtlpBootStatHandleLock.Queue) )
    {
      *((_QWORD *)v20 + 19) = &v33[*(_QWORD *)(a1 + 152)];
      v28 = SepDuplicateTokenUserAndGroups(a1, v20);
      if ( v28 < 0 )
      {
        *((_QWORD *)v20 + 19) = 0LL;
        goto LABEL_48;
      }
    }
    else
    {
      *((_DWORD *)v20 + 31) = *(_DWORD *)(a1 + 124);
      v36 = &v33[*(_QWORD *)(a1 + 152)];
      *((_QWORD *)v20 + 19) = v36;
      for ( i = *((_DWORD *)v20 + 31); i; --i )
      {
        *(_QWORD *)v36 += v33;
        v36 += 16;
      }
    }
    v38 = *(_QWORD *)(a1 + 160);
    *((_QWORD *)v20 + 20) = v38;
    if ( v38 )
    {
      v39 = &v33[v38];
      *((_QWORD *)v20 + 20) = v39;
      for ( j = *((_DWORD *)v20 + 32); j; --j )
      {
        *(_QWORD *)v39 += v33;
        v39 += 16;
      }
    }
    v41 = *(_QWORD *)(a1 + 184);
    v42 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
    if ( v41 )
      v42 += *(unsigned __int16 *)(v41 + 2);
    v43 = v42;
    v44 = (char *)ExAllocatePool2(0x100uLL);
    *((_QWORD *)v20 + 22) = v44;
    v45 = v44;
    if ( !v44 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v46);
      ObfDereferenceObject(v20);
      return 3221225626LL;
    }
    memmove(v44, *(const void **)(a1 + 176), v43);
    v47 = *(_QWORD *)(a1 + 184);
    v48 = &v45[-*(_QWORD *)(a1 + 176)];
    *((_QWORD *)v20 + 23) = v47;
    if ( v47 )
      *((_QWORD *)v20 + 23) = &v48[v47];
    *((_QWORD *)v20 + 21) = &v48[*(_QWORD *)(a1 + 168)];
    v49 = *(unsigned int *)(a1 + 800);
    if ( (_DWORD)v49 )
      v28 = SepSetTokenCapabilities(v20, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v49);
    if ( v28 < 0 )
      goto LABEL_48;
    v50 = *(_QWORD *)(a1 + 784);
    if ( v50 )
    {
      v28 = SepSetTokenPackage(v20, v50);
      if ( v28 < 0 )
        goto LABEL_48;
    }
    v51 = *(_QWORD *)(a1 + 1080);
    if ( v51 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v51 + 24)) <= 1 )
        __fastfail(0xEu);
      *((_QWORD *)v20 + 135) = *(_QWORD *)(a1 + 1080);
    }
    v52 = *(_QWORD *)(a1 + 1088);
    if ( v52 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v52 + 24)) <= 1 )
        __fastfail(0xEu);
      *((_QWORD *)v20 + 136) = *(_QWORD *)(a1 + 1088);
    }
    v53 = *(_QWORD *)(a1 + 1152);
    if ( v53 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v53 + 24)) <= 1 )
        __fastfail(0xEu);
      *((_QWORD *)v20 + 144) = *(_QWORD *)(a1 + 1152);
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v28 = SepDuplicateTokenClaims(a1, v20);
      if ( v28 < 0 )
        goto LABEL_48;
    }
    v54 = SepSetTokenTrust(v20, *(_QWORD *)(a1 + 1104));
    v34 = *(struct _ERESOURCE **)(a1 + 48);
    v28 = v54;
    if ( v54 < 0 )
      goto LABEL_49;
    ExReleaseResourceLite(v34);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v55);
    if ( SeTokenLeakTracking )
    {
      **((_QWORD **)v20 + 143) = KeGetCurrentThread()[1].CycleTime;
      *(_QWORD *)(*((_QWORD *)v20 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(*((_QWORD *)v20 + 143) + 32LL) = 13;
      *(_DWORD *)(*((_QWORD *)v20 + 143) + 280LL) = 0;
      *(_DWORD *)(*((_QWORD *)v20 + 143) + 284LL) = 0;
      v56 = *((_QWORD *)v20 + 143);
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v56 + 16) = Process[1].SecureState.EntireField;
      *(_DWORD *)(v56 + 24) = Process[1].KernelWaitTime;
      *(_WORD *)(v56 + 28) = WORD2(Process[1].KernelWaitTime);
      *(_BYTE *)(v56 + 30) = BYTE6(Process[1].KernelWaitTime);
      SepAddTokenLogonSession((__int64)v20);
    }
    if ( a3 )
    {
      v58 = *((_QWORD *)v20 + 9);
      *((_QWORD *)v20 + 8) &= v58;
      *((_QWORD *)v20 + 10) &= v58;
      v59 = 1;
      LODWORD(v60) = *((_DWORD *)v20 + 31);
      while ( v59 < (unsigned int)v60 )
      {
        v61 = *((_QWORD *)v20 + 19);
        if ( (*(_DWORD *)(v61 + 16LL * v59 + 8) & 0x34) != 0 )
        {
          ++v59;
        }
        else
        {
          v62 = *((_DWORD *)v20 + 36);
          if ( v59 == v62 )
          {
            *((_DWORD *)v20 + 36) = 0;
            v62 = 0;
          }
          v63 = *((_DWORD *)v20 + 52);
          if ( v59 == v63 )
          {
            *((_DWORD *)v20 + 52) = -1;
            v63 = -1;
          }
          v64 = v60 - 1;
          v60 = (unsigned int)(v60 - 1);
          if ( v64 == v63 )
            *((_DWORD *)v20 + 52) = v59;
          if ( (_DWORD)v60 == v62 )
            *((_DWORD *)v20 + 36) = v59;
          *(_OWORD *)(v61 + 16LL * v59) = *(_OWORD *)(v61 + 16 * v60);
        }
      }
      *((_DWORD *)v20 + 31) = v60;
    }
    RtlSidHashInitialize(
      *((PSID_AND_ATTRIBUTES *)v20 + 19),
      *((_DWORD *)v20 + 31),
      (PSID_AND_ATTRIBUTES_HASH)(v20 + 232));
    RtlSidHashInitialize(
      *((PSID_AND_ATTRIBUTES *)v20 + 20),
      *((_DWORD *)v20 + 32),
      (PSID_AND_ATTRIBUTES_HASH)(v20 + 504));
    v65 = (_SID_AND_ATTRIBUTES *)*((_QWORD *)v20 + 99);
    if ( v65 )
      RtlSidHashInitialize(v65, *((_DWORD *)v20 + 200), (PSID_AND_ATTRIBUTES_HASH)(v20 + 808));
    if ( SeTokenLeakTracking )
    {
      if ( *(_DWORD *)&RtlpBootStatHandleLock.ApcStateFill[8] == 13
        && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Blink )
      {
        v66 = *((_QWORD *)v20 + 143);
        *(_DWORD *)(v66 + 280) = _InterlockedIncrement((volatile signed __int32 *)&RtlpBootStatHandleLock.152);
        v67 = *(_DWORD *)(*((_QWORD *)v20 + 143) + 280LL);
        if ( v67 >= *(int *)&RtlpBootStatHandleLock.ApcStateFill[4] )
        {
          DbgPrint("\nToken number 0x%x = 0x%p\n", v67, v20);
          __debugbreak();
        }
      }
    }
    *a8 = v20;
    return (unsigned int)v28;
  }
}

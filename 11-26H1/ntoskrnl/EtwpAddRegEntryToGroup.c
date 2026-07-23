/*
 * XREFs of EtwpAddRegEntryToGroup @ 0x1409172C0
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpAccessCheckFromState @ 0x1408FC6F0 (EtwpAccessCheckFromState.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1409115F0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpApplyScopeFilters @ 0x140912900 (EtwpApplyScopeFilters.c)
 *     EtwpCopySchematizedFilters @ 0x140912C88 (EtwpCopySchematizedFilters.c)
 *     EtwpGetSchematizedFilterSize @ 0x140915E60 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140916200 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpIsGuidAllowed @ 0x140916CEC (EtwpIsGuidAllowed.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEventWriteGroupJoin @ 0x140AE5C40 (EtwpEventWriteGroupJoin.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddRegEntryToGroup(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int *a5)
{
  unsigned int v5; // r14d
  unsigned __int8 v6; // r12
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  ULONG_PTR v13; // r13
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v16; // rax
  void *v17; // rdx
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rdi
  struct _KTHREAD *v20; // rax
  unsigned __int64 *v21; // rsi
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rdi
  unsigned int SchematizedFilterSize; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned __int16 *v29; // r15
  __int16 v30; // r13
  __int16 v31; // ax
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned __int8 v34; // r14
  __int64 v35; // r15
  int v36; // eax
  __int64 v37; // rdi
  int v38; // eax
  _DWORD *v39; // r10
  unsigned int *v40; // rdi
  signed __int64 *v41; // rdi
  __int64 v42; // r8
  struct _KLOCK_ENTRIES *v43; // r9
  struct _KLOCK_ENTRIES *v44; // r9
  __int64 *v45; // rdi
  signed __int64 v46; // rax
  signed __int64 v47; // rdx
  __int64 v48; // rtt
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  __int64 v51; // rtt
  LegacyAutoBoost *v53; // rsi
  __int64 v54; // rdx
  _TOKEN_ACCESS_INFORMATION *v55; // r8
  int v56; // r14d
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int8 v59; // di
  __int64 v60; // r15
  struct _KPROCESS *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int16 v64; // r13
  unsigned __int8 v65; // r15
  unsigned __int16 *v66; // r12
  __int64 v67; // rdi
  __int64 v68; // r8
  struct _KLOCK_ENTRIES *v69; // r9
  struct _KLOCK_ENTRIES *v70; // r9
  LegacyAutoBoost *v71; // rsi
  __int64 v72; // rdx
  _TOKEN_ACCESS_INFORMATION *v73; // r8
  int v74; // r14d
  __int16 v75; // ax
  int v76; // eax
  __int64 v77; // r14
  struct _KPROCESS *v78; // rcx
  __int64 v79; // rdx
  char *Pool2; // rdi
  unsigned int v81; // r15d
  unsigned __int16 v82; // r8
  __int64 v83; // rdx
  __int16 v84; // [rsp+40h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-59h] BYREF
  int v86; // [rsp+50h] [rbp-51h]
  unsigned int v87; // [rsp+58h] [rbp-49h]
  __int64 v88; // [rsp+60h] [rbp-41h]
  __int128 *v89; // [rsp+68h] [rbp-39h]
  unsigned int *v90; // [rsp+70h] [rbp-31h]
  __int128 v91; // [rsp+78h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-19h] BYREF

  v5 = (unsigned int)a4;
  v6 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 648LL);
  LOBYTE(a4) = (*(_BYTE *)(a1 + 98) & 2) != 0;
  *(_QWORD *)&v91 = a3;
  v90 = a5;
  BugCheckParameter2 = 0LL;
  v89 = 0LL;
  v88 = v8;
  v9 = EtwpFindOrCreateGuidEntry(v8, a2, 2u, a4, &BugCheckParameter2);
  v13 = BugCheckParameter2;
  v14 = v9;
  if ( v9 )
    goto LABEL_51;
  *a5 = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = (AutoBoost *)KeAbPreAcquire(v13 + 664, 0LL, 0LL, v12);
  v19 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 664), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 + 664), v16, v13 + 664);
  if ( v19 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v19, v17);
    else
      *((_BYTE *)v19 + 10) = 1;
  }
  *(_QWORD *)(v13 + 672) = KeGetCurrentThread();
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v21 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  v22 = (AutoBoost *)KeAbPreAcquire((__int64)v21, 0LL, 0LL, v18);
  v24 = v22;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
    ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
  if ( v24 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v24, v23);
    else
      *((_BYTE *)v24 + 10) = 1;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 40) )
    goto LABEL_78;
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_WORD *)(a1 + 100));
  v87 = SchematizedFilterSize;
  if ( SchematizedFilterSize )
    *a5 += SchematizedFilterSize + 16;
  if ( (*(_BYTE *)(a1 + 98) & 2) != 0 && *a5 > v5 )
  {
    v14 = -1073741789;
    goto LABEL_42;
  }
  EtwpReferenceGuidEntry(v13);
  v26 = (_QWORD *)(v13 + 56);
  *(_QWORD *)(a1 + 40) = v13;
  v27 = *(_QWORD *)(v13 + 56);
  v28 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v27 + 8) != v13 + 56 )
    __fastfail(3u);
  *v28 = v27;
  *(_QWORD *)(a1 + 24) = v26;
  *(_QWORD *)(v27 + 8) = v28;
  *v26 = v28;
  if ( !*(_DWORD *)(v13 + 96) )
  {
    v63 = *(_QWORD *)(v13 + 656);
    if ( !v63 || !*(_DWORD *)(v63 + 96) )
    {
      *a5 = 0;
      goto LABEL_78;
    }
  }
  v29 = (unsigned __int16 *)(v13 + 134);
  v30 = 0;
  do
  {
    if ( !*(_DWORD *)(v29 - 3) )
      goto LABEL_24;
    v41 = (signed __int64 *)EtwpAcquireLoggerContextByLoggerId(v88, *v29, 0LL);
    if ( !EtwpIsGuidAllowed((__int64)v41, (const void *)(*(_QWORD *)(a1 + 32) + 40LL), v42, v43) )
      goto LABEL_40;
    v53 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v41 + 86), 0LL, 0LL, v44);
    if ( _InterlockedCompareExchange64(v41 + 86, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v41 + 86, 0, v53, (struct _KTHREAD *)(v41 + 86));
    v54 = 0LL;
    if ( v53 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v53, 0LL);
      else
        *((_BYTE *)v53 + 10) = 1;
    }
    v55 = (_TOKEN_ACCESS_INFORMATION *)v41[97];
    if ( v55 )
    {
      v56 = EtwpAccessCheckFromState((unsigned int *)(*(_QWORD *)(a1 + 32) + 40LL), v54, v55);
      v54 = 0LL;
    }
    else
    {
      v56 = -1073741790;
    }
    if ( _InterlockedCompareExchange64(v41 + 86, v54, 17LL) != 17 )
      ExfReleasePushLockShared(v41 + 86);
    KeAbPostRelease((unsigned __int64)(v41 + 86));
    if ( v56 >= 0 )
    {
      v30 += 1 << v6;
LABEL_40:
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v41[170] + 704) + 8LL * *(unsigned int *)v41),
        1u);
      goto LABEL_24;
    }
    EtwpReleaseLoggerContext(v41, 0LL);
LABEL_24:
    ++v6;
    v29 += 16;
  }
  while ( v6 < 0x10u );
  v84 = v30;
  v86 = 0;
  v14 = 0;
  EtwpApplyScopeFilters(a1, 0, 2, 0, &v84);
  v31 = v30 & v84;
  v13 = BugCheckParameter2;
  *(_WORD *)(a1 + 102) = v31;
  v32 = *(_QWORD *)(v13 + 656);
  if ( v32 )
  {
    v64 = 0;
    v65 = 0;
    v66 = (unsigned __int16 *)(v32 + 134);
    do
    {
      if ( *(_DWORD *)(v66 - 3) )
      {
        v67 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, *v66, 0LL);
        if ( EtwpIsGuidAllowed(v67, (const void *)(*(_QWORD *)(a1 + 32) + 40LL), v68, v69) )
        {
          v71 = (LegacyAutoBoost *)KeAbPreAcquire(v67 + 688, 0LL, 0LL, v70);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 688), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v67 + 688), 0, v71, (struct _KTHREAD *)(v67 + 688));
          v72 = 0LL;
          if ( v71 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v71, 0LL);
            else
              *((_BYTE *)v71 + 10) = 1;
          }
          v73 = *(_TOKEN_ACCESS_INFORMATION **)(v67 + 776);
          if ( v73 )
          {
            v74 = EtwpAccessCheckFromState((unsigned int *)(*(_QWORD *)(a1 + 32) + 40LL), v72, v73);
            v72 = 0LL;
          }
          else
          {
            v74 = -1073741790;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 688), v72, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v67 + 688));
          KeAbPostRelease(v67 + 688);
          if ( v74 >= 0 )
            v64 += 1 << v65;
        }
        EtwpReleaseLoggerContext(v67, 0LL);
      }
      ++v65;
      v66 += 16;
    }
    while ( v65 < 0x10u );
    v84 = v64;
    v86 = 0;
    v14 = 0;
    EtwpApplyScopeFilters(a1, 0, 2, 1, &v84);
    v75 = v64 & v84;
    v13 = BugCheckParameter2;
    *(_WORD *)(a1 + 106) = v75;
  }
  if ( !*(_WORD *)(a1 + 102) )
  {
    if ( *(_WORD *)(a1 + 106) )
    {
LABEL_69:
      v59 = 0;
      v60 = 0LL;
      do
      {
        v76 = *(unsigned __int16 *)(a1 + 106);
        if ( _bittest(&v76, v59) )
        {
          v77 = EtwpAcquireLoggerContextByLoggerId(
                  EtwpHostSiloState,
                  *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 656LL) + v60 + 134),
                  0LL);
          if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
            || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
            && _bittest16((const signed __int16 *)(a1 + 98), 0xAu)
            || (*(_DWORD *)(v77 + 816) & 0x2000000) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
            {
              EtwpProviderArrivalCallback(v77, 0LL, a1);
            }
            else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL)) )
            {
              v78 = *(struct _KPROCESS **)(a1 + 80);
              memset(&ApcState, 0, sizeof(ApcState));
              KeStackAttachProcess(v78, &ApcState);
              LOBYTE(v79) = 1;
              EtwpProviderArrivalCallback(v77, v79, a1);
              KiUnstackDetachProcess((__int64)&ApcState, 0);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL));
            }
          }
          EtwpReleaseLoggerContext(v77, 0LL);
        }
        ++v59;
        v60 += 32LL;
      }
      while ( v59 < 0x10u );
      v13 = BugCheckParameter2;
      goto LABEL_31;
    }
    *v90 = 0;
LABEL_78:
    v14 = 0;
    goto LABEL_42;
  }
  v33 = v88;
  v34 = 0;
  v35 = 0LL;
  do
  {
    v36 = *(unsigned __int16 *)(a1 + 102);
    if ( _bittest(&v36, v34) )
    {
      v40 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(
                              v33,
                              *(unsigned __int16 *)(v35 + *(_QWORD *)(a1 + 40) + 134),
                              0LL);
      if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0
        || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
        && _bittest16((const signed __int16 *)(a1 + 98), 0xAu)
        || (v40[204] & 0x2000000) != 0 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
        {
          EtwpProviderArrivalCallback(v40, 0LL, a1);
        }
        else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL)) )
        {
          v61 = *(struct _KPROCESS **)(a1 + 80);
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(v61, &ApcState);
          LOBYTE(v62) = 1;
          EtwpProviderArrivalCallback(v40, v62, a1);
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a1 + 80) + 488LL));
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v40 + 170) + 704LL) + 8LL * *v40),
        1u);
    }
    ++v34;
    v35 += 32LL;
  }
  while ( v34 < 0x10u );
  v14 = v86;
  v13 = BugCheckParameter2;
  if ( *(_WORD *)(a1 + 106) )
    goto LABEL_69;
LABEL_31:
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 88) )
    {
      v91 = 0LL;
      Pool2 = 0LL;
      memset(&ApcState, 0, 32);
      EtwpComputeRegEntryEnableInfo(a1, (__int64)&ApcState);
      v81 = v87;
      if ( v87 )
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v82 = *(_WORD *)(a1 + 100);
          v83 = *(_QWORD *)(a1 + 32);
          v89 = &v91;
          *(_QWORD *)&v91 = Pool2;
          *((_QWORD *)&v91 + 1) = v81 | 0x8000000000000000uLL;
          EtwpCopySchematizedFilters(Pool2, v83, v82);
        }
      }
      guard_dispatch_icall_no_overrides((__int64)&NullGuid, 1LL);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    v37 = v91;
    EtwpComputeRegEntryEnableInfo(a1, v91 + 72);
    *v90 = 120;
    v38 = EtwpGetSchematizedFilterSize(*(_QWORD *)(a1 + 32), *(_WORD *)(a1 + 100));
    if ( v38 )
    {
      *v39 = v38 + 136;
      *(_DWORD *)(v37 + 132) = 0x80000000;
      *(_DWORD *)(v37 + 128) = v38;
      *(_QWORD *)(v37 + 120) = 136LL;
      EtwpCopySchematizedFilters((char *)(v37 + 136), *(_QWORD *)(a1 + 32), *(_WORD *)(a1 + 100));
      *(_DWORD *)(v37 + 116) = 1;
    }
    else
    {
      *(_DWORD *)(v37 + 116) = 0;
    }
  }
LABEL_42:
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 672LL) = 0LL;
  v45 = (__int64 *)(*(_QWORD *)(a1 + 32) + 664LL);
  _m_prefetchw(v45);
  v46 = *v45;
  v47 = *v45 - 16;
  if ( (*v45 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v47 = 0LL;
  if ( (v46 & 2) != 0 || (v48 = *v45, v48 != _InterlockedCompareExchange64(v45, v47, v46)) )
    ExfReleasePushLock(v45);
  KeAbPostRelease((unsigned __int64)v45);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v13 + 672) = 0LL;
  _m_prefetchw((const void *)(v13 + 664));
  v49 = *(_QWORD *)(v13 + 664);
  v50 = v49 - 16;
  if ( (v49 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v50 = 0LL;
  if ( (v49 & 2) != 0
    || (v51 = *(_QWORD *)(v13 + 664),
        v51 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 664), v50, v49)) )
  {
    ExfReleasePushLock((_QWORD *)(v13 + 664));
  }
  KeAbPostRelease(v13 + 664);
  KeLeaveCriticalRegion();
LABEL_51:
  if ( v13 )
    EtwpUnreferenceGuidEntry((__int64 *)v13, v10, v11, v12);
  if ( v14 >= 0 && EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_GROUP_JOIN) )
    EtwpEventWriteGroupJoin(v58, v57, a1);
  return (unsigned int)v14;
}

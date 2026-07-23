/*
 * XREFs of EtwpRegisterKMProvider @ 0x140916E38
 * Callers:
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     EtwRegisterClassicProvider @ 0x1409179D0 (EtwRegisterClassicProvider.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140910460 (EtwpFindOrCreateGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x140912B20 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x140912C88 (EtwpCopySchematizedFilters.c)
 *     EtwpGetSchematizedFilterSize @ 0x140915E60 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140916200 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddKmRegEntry @ 0x14091722C (EtwpAddKmRegEntry.c)
 *     EtwpUpdateEnableMask @ 0x14097A288 (EtwpUpdateEnableMask.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterKMProvider(
        __int64 a1,
        ULONGLONG a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  ULONGLONG v7; // r15
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  ULONG_PTR v16; // rbx
  int v17; // r13d
  struct _KTHREAD *v18; // rax
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rdi
  int v22; // esi
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rdi
  __int64 v26; // rcx
  ULONG v27; // r9d
  signed __int64 v28; // rax
  signed __int64 v29; // rdx
  __int64 v30; // rtt
  __int64 v31; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v34; // rsi
  AutoBoost *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // rdi
  unsigned __int8 v38; // cl
  __int64 v39; // rdx
  unsigned int v40; // r8d
  __int64 *v41; // rdi
  signed __int64 v42; // rax
  signed __int64 v43; // rdx
  __int64 v44; // rtt
  char *v45; // rsi
  unsigned int SchematizedFilterSize; // r14d
  char *Pool2; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-61h] BYREF
  __int64 v49; // [rsp+48h] [rbp-59h] BYREF
  __int64 v50; // [rsp+50h] [rbp-51h]
  ULONGLONG v51; // [rsp+58h] [rbp-49h]
  __int128 v52; // [rsp+60h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-31h] BYREF
  __int128 v54; // [rsp+80h] [rbp-21h]

  v7 = a2;
  *(_QWORD *)&v52 = a7;
  v51 = a2;
  *a7 = 0LL;
  v11 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v50 = a5;
  BugCheckParameter2 = 0LL;
  v49 = 0LL;
  UserData = 0LL;
  v54 = 0LL;
  if ( v10 )
    v11 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  v12 = EtwpFindOrCreateGuidEntry(a1, (_DWORD *)a2, 0, 0LL, &BugCheckParameter2);
  v16 = BugCheckParameter2;
  v17 = v12;
  if ( !v12 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 656) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v34 = (unsigned __int64 *)(*(_QWORD *)(v16 + 656) + 664LL);
      v35 = (AutoBoost *)KeAbPreAcquire((__int64)v34, 0LL, 0LL, v15);
      v37 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
        ExfAcquirePushLockExclusiveEx(v34, v35, (__int64)v34);
      if ( v37 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v37, v36);
        else
          *((_BYTE *)v37 + 10) = 1;
      }
      *(_QWORD *)(*(_QWORD *)(v16 + 656) + 672LL) = KeGetCurrentThread();
    }
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = (AutoBoost *)KeAbPreAcquire(v16 + 664, 0LL, 0LL, v15);
    v21 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 664), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 664), v19, v16 + 664);
    if ( v21 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v21, v20);
      else
        *((_BYTE *)v21 + 10) = 1;
    }
    v22 = v50;
    *(_QWORD *)(v16 + 672) = KeGetCurrentThread();
    v17 = EtwpAddKmRegEntry(v16, a3, a4, v22, (__int64)&v49);
    if ( v17 >= 0 )
    {
      v25 = v49;
      *(_QWORD *)(v49 + 48) = a6;
      *(_QWORD *)v52 = v25;
      if ( *(_DWORD *)(v16 + 96) )
      {
        LOBYTE(v23) = (*(_BYTE *)(v25 + 98) & 8) != 0;
        EtwpUpdateEnableMask(v16, v23, 0, 0, v25 + 100);
      }
      v26 = *(_QWORD *)(v16 + 656);
      if ( v26 && *(_DWORD *)(v26 + 96) )
      {
        LOBYTE(v23) = (*(_BYTE *)(v25 + 98) & 8) != 0;
        LOBYTE(v24) = 1;
        EtwpUpdateEnableMask(v26, v23, v24, 0, v25 + 104);
      }
      EtwpComputeRegEntryEnableInfo(v25, (__int64)&UserData);
      EtwpTrackProviderRegistration(v25);
      if ( a4 )
      {
        if ( (*(_BYTE *)(v25 + 98) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v16 + 91) & 1) != 0 )
          {
            v38 = *(_BYTE *)(v16 + 90);
            v39 = *(unsigned int *)(v16 + 80);
            v40 = *(_DWORD *)(v16 + 84);
            LOWORD(v52) = *(_WORD *)(v16 + 88);
            WORD1(v52) = v38;
            DWORD1(v52) = v39;
            LOBYTE(v39) = 1;
            *((_QWORD *)&v52 + 1) = v40;
            guard_dispatch_icall_no_overrides(v16 + 40, v39);
          }
        }
        else if ( LODWORD(UserData.Ptr) )
        {
          v52 = 0LL;
          v45 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(v16, *(_WORD *)(v25 + 100));
          if ( SchematizedFilterSize )
          {
            Pool2 = (char *)ExAllocatePool2(0x100uLL);
            v45 = Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)&v52 = Pool2;
              *((_QWORD *)&v52 + 1) = SchematizedFilterSize | 0x8000000000000000uLL;
              EtwpCopySchematizedFilters(Pool2, v16, *(_WORD *)(v25 + 100));
            }
          }
          guard_dispatch_icall_no_overrides((__int64)&NullGuid, 1LL);
          if ( v45 )
            ExFreePoolWithTag(v45, 0);
          v7 = v51;
        }
      }
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_PROVIDER_REGISTER) )
      {
        v27 = 0;
        if ( v7 )
        {
          UserData.Ptr = v7;
          v27 = 1;
          *(_QWORD *)&UserData.Size = 16LL;
        }
        EtwWrite(
          (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
          &ETW_EVENT_PROVIDER_REGISTER,
          0LL,
          v27,
          &UserData);
      }
    }
    *(_QWORD *)(v16 + 672) = 0LL;
    _m_prefetchw((const void *)(v16 + 664));
    v28 = *(_QWORD *)(v16 + 664);
    v29 = v28 - 16;
    if ( (v28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v29 = 0LL;
    if ( (v28 & 2) != 0
      || (v30 = *(_QWORD *)(v16 + 664),
          v30 != _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 664), v29, v28)) )
    {
      ExfReleasePushLock((_QWORD *)(v16 + 664));
    }
    KeAbPostRelease(v16 + 664);
    KeLeaveCriticalRegion();
    v31 = *(_QWORD *)(v16 + 656);
    if ( v31 )
    {
      *(_QWORD *)(v31 + 672) = 0LL;
      v41 = (__int64 *)(*(_QWORD *)(v16 + 656) + 664LL);
      _m_prefetchw(v41);
      v42 = *v41;
      v43 = *v41 - 16;
      if ( (*v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v43 = 0LL;
      if ( (v42 & 2) != 0 || (v44 = *v41, v44 != _InterlockedCompareExchange64(v41, v43, v42)) )
        ExfReleasePushLock(v41);
      KeAbPostRelease((unsigned __int64)v41);
      KeLeaveCriticalRegion();
    }
  }
  if ( v16 )
    EtwpUnreferenceGuidEntry((__int64 *)v16, v13, v14, v15);
  return (unsigned int)v17;
}

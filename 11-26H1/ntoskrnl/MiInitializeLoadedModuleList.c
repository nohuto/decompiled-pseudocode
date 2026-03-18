/*
 * XREFs of MiInitializeLoadedModuleList @ 0x140D00470
 * Callers:
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     RtlpxLookupFunctionTable @ 0x1402E9A40 (RtlpxLookupFunctionTable.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403F3B30 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiUpdateDriverLoadInProgress @ 0x14040BD98 (MiUpdateDriverLoadInProgress.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14040D21C (RtlRemoveInvertedFunctionTable.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     MiEnumerateSystemImages @ 0x1404E5184 (MiEnumerateSystemImages.c)
 *     KasanDriverLoadImageInternal @ 0x140523630 (KasanDriverLoadImageInternal.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MxInstallMoreMemory @ 0x1406E73E8 (MxInstallMoreMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14086D520 (MiCaptureBootDriverRetpolineInfo.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     VslReserveProtectedPages @ 0x140B1C3CC (VslReserveProtectedPages.c)
 *     VslReapplyBootIndirectPatches @ 0x140CB9974 (VslReapplyBootIndirectPatches.c)
 *     RtlInitializeHistoryTable @ 0x140CDA0E8 (RtlInitializeHistoryTable.c)
 *     VfInitBootDriversLoaded @ 0x140CDE91C (VfInitBootDriversLoaded.c)
 *     MiCreateBootDriverHotPatchLinkage @ 0x140CFB5EC (MiCreateBootDriverHotPatchLinkage.c)
 *     MiUpdateBootDriverHotPatchImports @ 0x140CFB77C (MiUpdateBootDriverHotPatchImports.c)
 *     MiInitializeKernelCfg @ 0x140CFE970 (MiInitializeKernelCfg.c)
 *     MiBuildImportsForBootDrivers @ 0x140CFFA0C (MiBuildImportsForBootDrivers.c)
 *     MiLocateKernelSections @ 0x140D00B90 (MiLocateKernelSections.c)
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 */

void __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  ULONG_PTR v2; // rax
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v4; // rax
  __int64 *v5; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v7; // bx
  bool v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // rbx
  struct _KTHREAD *Lock; // rsi
  ULONG_PTR v12; // rdi
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  int v14; // esi
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int ImageInternal; // eax
  struct _LIST_ENTRY *Blink; // rbx
  __int64 *i; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  int v26; // eax
  PVOID *j; // rbx
  int v28; // [rsp+38h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-71h] BYREF
  __int128 v30; // [rsp+48h] [rbp-69h] BYREF
  __int64 v31; // [rsp+58h] [rbp-59h]
  _BYTE v32[112]; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 retaddr; // [rsp+110h] [rbp+5Fh]

  v28 = 0;
  BugCheckParameter3 = 0LL;
  if ( (unsigned __int64)&PsLoadedModuleResource < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PsLoadedModuleResource) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PsLoadedModuleResource, retaddr);
  }
  memset_0(&PsLoadedModuleResource.OwnerTable, 0, 0x50uLL);
  v2 = 0LL;
  PsLoadedModuleResource.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PsLoadedModuleResource;
  PsLoadedModuleResource.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PsLoadedModuleResource;
  PsLoadedModuleResource.SharedWaiters = 0LL;
  PsLoadedModuleResource.ExclusiveWaiters = 0LL;
  PsLoadedModuleResource.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v4 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
          (v5 = (__int64 *)v4) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v4);
      v7 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)p_Policy, v5);
    }
    else
    {
      v7 = 0;
    }
    v2 = v7;
  }
  PsLoadedModuleResource.CreatorBackTraceIndex = v2;
  HIDWORD(PsLoadedModuleResource.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&PsLoadedModuleResource);
  __incgsdword(0x9098u);
  if ( _bittest((_DWORD *)PerfGlobalGroupMask + 1, 0x11u) )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PsLoadedModuleResource, 0, 0);
  MiReloadBootLoadedDrivers(a1);
  stru_140E2D150.SavedApcState.Process = (_KPROCESS *)&stru_140E2D150.SavedApcStateFill[24];
  stru_140E2D150.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)&stru_140E2D150.SavedApcState.ApcListHead[1].Blink;
  stru_140E2D150.SchedulerApc.ApcListEntry.Blink = &stru_140E2D150.SchedulerApc.ApcListEntry;
  stru_140E2D150.SchedulerApc.ApcListEntry.Flink = &stru_140E2D150.SchedulerApc.ApcListEntry;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  v8 = (KiSpeculationFeatures & 0x20000000000LL) != 0 || !_bittest(&KiFeatureSettings, 0x11u);
  v9 = *(_QWORD **)(a1 + 16);
  MiLocateKernelSections(v9);
  while ( v9 != (_QWORD *)(a1 + 16) )
  {
    v10 = (__int64)v9;
    v9 = (_QWORD *)*v9;
    Lock = MmAcquireLoadLock();
    if ( (int)MiConstructLoaderEntry(
                v10,
                (const void **)(v10 + 88),
                (const void **)(v10 + 72),
                0x10000000,
                (__int64 *)&BugCheckParameter3) < 0 )
      goto LABEL_43;
    v12 = BugCheckParameter3;
    MiUpdateDriverLoadInProgress(BugCheckParameter3, (struct _LIST_ENTRY ***)v10, 0x10000000, 2);
    MmReleaseLoadLock(Lock);
    *(_QWORD *)(v10 + 144) = v12;
    *(_DWORD *)(v12 + 184) |= 2u;
    if ( stru_140E2D150.SchedulerApc.Reserved[0] == (PVOID)v10 )
      stru_140E2D150.SchedulerApc.Reserved[0] = (PVOID)v12;
    if ( *(_QWORD *)(v12 + 48) == PsNtosImageBase && (MiFlags & 0x100000) == 0 )
    {
      LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(v12, &v28);
      if ( LoadedModuleImageAdditionalTablesAddress )
        v14 = v28 + LoadedModuleImageAdditionalTablesAddress - *(_DWORD *)(v12 + 48);
      else
        v14 = *(_DWORD *)(v12 + 64);
      v15 = *(_QWORD *)(v12 + 48);
      v31 = 0LL;
      v30 = 0LL;
      RtlpxLookupFunctionTable(v15, (__int64)&v30);
      qword_141200040 = v31;
      xmmword_141200030 = v30;
      LODWORD(qword_141200040) = v14;
      RtlRemoveInvertedFunctionTable(v15, v16, v17);
    }
    if ( v8 && (*(_DWORD *)(v12 + 104) & 0x800000) == 0 )
    {
      v18 = MiCaptureBootDriverRetpolineInfo(*(_QWORD *)(v12 + 48), *(_DWORD *)(v12 + 64), v12 + 280);
      if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741637 )
        goto LABEL_43;
    }
    ImageInternal = KasanDriverLoadImageInternal(v12, 0);
    if ( ImageInternal < 0 )
    {
      if ( ImageInternal != -1073741670 )
        KeBugCheckEx(0x1F1u, 5uLL, 7uLL, v12, ImageInternal);
      goto LABEL_43;
    }
    *(_DWORD *)(v12 + 184) |= 0x10000u;
  }
  Blink = stru_140E2D150.ThreadListEntry.Blink;
  VfInitBootDriversLoaded();
  if ( Blink != stru_140E2D150.ThreadListEntry.Blink )
  {
    for ( i = *(__int64 **)(*(_QWORD *)(a1 + 240) + 3784LL);
          i != (__int64 *)(*(_QWORD *)(a1 + 240) + 3784LL);
          i = (__int64 *)*i )
    {
      if ( (i[5] & 3) == 1 && (int)VslReapplyBootIndirectPatches(*(_QWORD *)(i[10] + 48)) < 0 )
        goto LABEL_43;
    }
  }
  MiCreateBootDriverHotPatchLinkage(a1);
  MiBuildImportsForBootDrivers();
  if ( (int)MiUpdateBootDriverHotPatchImports() < 0 )
LABEL_43:
    MxInstallMoreMemory(32);
  MiInitializeKernelCfg(v23, v22, v24, v25);
  MiEnumerateSystemImages((__int64)MiConfigureDriverProxyState, 0LL, 0);
  if ( (MiFlags & 0x100000) != 0 )
  {
LABEL_47:
    memset_0(v32, 0, 0x68uLL);
    v26 = VslpEnterIumSecureMode(2u, 0xD8u, 0, (__int64)v32);
    if ( v26 < 0 )
      KeBugCheckEx(0x422u, v26, 0LL, 2uLL, 0LL);
    goto LABEL_49;
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    if ( (MiFlags & 0x10000) == 0 )
      goto LABEL_53;
    goto LABEL_47;
  }
LABEL_49:
  if ( (MiFlags & 0x10000) != 0 )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
      VslReserveProtectedPages(0LL, (__int64)j[6], 0, 2u);
  }
LABEL_53:
  MiFlags |= 0x200000000uLL;
  RtlInitializeHistoryTable();
}

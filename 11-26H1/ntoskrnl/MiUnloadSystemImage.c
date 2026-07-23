/*
 * XREFs of MiUnloadSystemImage @ 0x140AC92D8
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140AC9260 (MmUnloadSystemImage.c)
 *     MiDereferenceImports @ 0x140B3D3D0 (MiDereferenceImports.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiManageSubsectionView @ 0x14027D1E0 (MiManageSubsectionView.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiUpdateDriverLoadInProgress @ 0x1404294E0 (MiUpdateDriverLoadInProgress.c)
 *     MiRemoveLoaderEntry @ 0x140429F78 (MiRemoveLoaderEntry.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiIsRetpolineEnabled @ 0x1404793CC (MiIsRetpolineEnabled.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     MmGetMinWsPagePriority @ 0x1404AACF0 (MmGetMinWsPagePriority.c)
 *     LdrUnloadAlternateResourceModule @ 0x1404ABC3C (LdrUnloadAlternateResourceModule.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404D8C9C (DbgUnLoadImageSymbolsUnicode.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404FAD0C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1404FF760 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KasanDriverUnloadImage @ 0x1405DFDF0 (KasanDriverUnloadImage.c)
 *     KeFlushRsb @ 0x1405F4288 (KeFlushRsb.c)
 *     MiUnloadSystemImageSoftWsles @ 0x140714A74 (MiUnloadSystemImageSoftWsles.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KseDriverUnloadImage @ 0x140A380BC (KseDriverUnloadImage.c)
 *     MiReturnSystemImageAddress @ 0x140A85E84 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140AA7B04 (MiFreeRetpolineRelocationInformation.c)
 *     PerfLogImageUnload @ 0x140ABB148 (PerfLogImageUnload.c)
 *     KeCheckCallbackRegistrationsOnDriverUnload @ 0x140AC9820 (KeCheckCallbackRegistrationsOnDriverUnload.c)
 *     VslUnloadSecureDriver @ 0x140AC9970 (VslUnloadSecureDriver.c)
 *     MiBytesToMapSystemImage @ 0x140AC99D8 (MiBytesToMapSystemImage.c)
 *     MmHasImageBeenImportOptimized @ 0x140AC9A20 (MmHasImageBeenImportOptimized.c)
 *     MiRememberUnloadedDriver @ 0x140AC9A48 (MiRememberUnloadedDriver.c)
 *     MiReturnSystemImageCommitment @ 0x140AC9B70 (MiReturnSystemImageCommitment.c)
 *     MiUnlockDriverCode @ 0x140AC9BC8 (MiUnlockDriverCode.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC9D6C (MiFreeRetpolineImportInfo.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140B2137C (MiMarkKernelImageRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x140B214B0 (MiIsImageFullyRetpolined.c)
 *     KeCleanupImageTracepoints @ 0x140B3AFB4 (KeCleanupImageTracepoints.c)
 *     MiDereferenceImports @ 0x140B3D3D0 (MiDereferenceImports.c)
 *     MiFreeLoadedImportList @ 0x140B3F774 (MiFreeLoadedImportList.c)
 *     MiReleasePrivilegedPtes @ 0x140B62200 (MiReleasePrivilegedPtes.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfDriverUnloadImage @ 0x140C4CD98 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rdx
  __int64 BaseLoaderPortion; // rdi
  __int64 v4; // r8
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // r14
  bool v7; // zf
  void *v8; // r12
  struct _LIST_ENTRY *v9; // rsi
  int v10; // eax
  _QWORD *v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // r13
  __int64 v21; // rdx
  __int128 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  _QWORD v26[28]; // [rsp+90h] [rbp-70h] BYREF
  char v27; // [rsp+180h] [rbp+80h]
  __int64 BugCheckParameter2; // [rsp+188h] [rbp+88h]
  unsigned __int64 v29; // [rsp+190h] [rbp+90h]
  unsigned __int64 v30; // [rsp+198h] [rbp+98h]

  memset_0(v26, 0, 0xA0uLL);
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  BaseLoaderPortion = MiGetBaseLoaderPortion(BugCheckParameter3);
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x100) != 0 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    MiAcquireLoadLock(1u);
  }
  v6 = *(_QWORD *)(BugCheckParameter3 + 136);
  if ( v6 == 1 || (v7 = *(_WORD *)(BugCheckParameter3 + 108) == 1, --*(_WORD *)(BugCheckParameter3 + 108), !v7) )
  {
    if ( CurrentThread )
      MmReleaseLoadLock(CurrentThread);
  }
  else
  {
    *(_DWORD *)(BaseLoaderPortion + 184) |= 0x200u;
    v8 = *(void **)(BugCheckParameter3 + 112);
    if ( v8 )
      v29 = MiSectionControlArea(*(_QWORD *)(BugCheckParameter3 + 112));
    else
      v29 = 0LL;
    v9 = *(struct _LIST_ENTRY **)(BugCheckParameter3 + 48);
    if ( v9 )
      BugCheckParameter2 = MiGetPteAddress(*(_QWORD *)(BugCheckParameter3 + 48));
    else
      BugCheckParameter2 = 0LL;
    v30 = (unsigned __int64)*(unsigned int *)(BugCheckParameter3 + 64) >> 12;
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x400) != 0 )
      KeCleanupImageTracepoints(BugCheckParameter3);
    if ( ((*(_DWORD *)(BaseLoaderPortion + 184) & 0x40000) != 0 || !v8) && (MiFlags & 0x10000) != 0 )
    {
      v10 = VslUnloadSecureDriver(*(_QWORD *)(BugCheckParameter3 + 48));
      if ( v10 < 0 )
        KeBugCheckEx(0x1Au, 0x1015uLL, (ULONG_PTR)v9, BugCheckParameter3, v10);
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x20000) != 0 )
    {
      if ( HIDWORD(stru_140E366D8.SListFaultAddress) + LODWORD(stru_140E366D8.QuantumTarget) )
        MiClearDriverTablePtes(BugCheckParameter3, v2, v4);
      MiUnmapKernelScp(BugCheckParameter3);
      if ( MiIsRetpolineEnabled() )
      {
        MiMarkKernelImageRetpolineBits(BugCheckParameter3, 0LL);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter3) )
          KeFlushRsb();
        _mm_lfence();
      }
    }
    v11 = *(_QWORD **)(BaseLoaderPortion + 280);
    if ( v11 )
    {
      MiFreeRetpolineRelocationInformation(v11);
      *(_QWORD *)(BaseLoaderPortion + 280) = 0LL;
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x4000) != 0 )
    {
      VfDriverUnloadImage(BugCheckParameter3);
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x8000) != 0 )
        KseDriverUnloadImage(BugCheckParameter3);
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x10000) != 0 )
      KasanDriverUnloadImage(BugCheckParameter3);
    KeCheckCallbackRegistrationsOnDriverUnload(BugCheckParameter3);
    if ( v6 )
    {
      MiDereferenceImports(v6);
      MiFreeLoadedImportList(v6, v21);
    }
    if ( v9 )
      LdrUnloadAlternateResourceModule(v9);
    if ( (*(_DWORD *)(BugCheckParameter3 + 104) & 0x100000) != 0 )
      DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter3 + 88), (__int64)v9, 0xFFFFFFFFLL);
    v12 = *(_DWORD *)(BugCheckParameter3 + 64);
    if ( v12 )
      v13 = MiBytesToMapSystemImage(v12);
    else
      v13 = 0LL;
    v14 = v13 >> 12;
    v27 = 0;
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x2000) != 0 )
    {
      MiRememberUnloadedDriver(BugCheckParameter3 + 88, v9, v14 << 12);
      if ( v8 && (*(_DWORD *)(BaseLoaderPortion + 184) & 0x400) != 0 )
      {
        v26[0] = v29;
        MiManageSubsectionView(v26, (_QWORD *)(BaseLoaderPortion + 160), 4, v19);
      }
      MiUnlockDriverCode(BugCheckParameter3);
      MiDecommitPages(BugCheckParameter2, v30, v29, 0LL, 0LL, 32, 0LL, (__int64)&v22);
      v20 = *((_QWORD *)&v23 + 1);
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.UserTime, v22 - DWORD2(v23));
      if ( (unsigned int)MmHasImageBeenImportOptimized(BugCheckParameter3) )
        MiFreeRetpolineImportInfo();
      if ( !v8 )
      {
        if ( !(unsigned int)MmGetMinWsPagePriority() )
          MiUnloadSystemImageSoftWsles();
        v27 = 1;
      }
      *(_QWORD *)&v22 = v20;
      MiReturnSystemImageCommitment(BugCheckParameter3, &v22);
    }
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x400) != 0 )
    {
      MiRemoveLoaderEntry((_QWORD *)BugCheckParameter3);
      if ( (PerfGlobalGroupMask[0] & 4) != 0 )
        PerfLogImageUnload(
          (unsigned __int16 *)(BugCheckParameter3 + 72),
          0LL,
          0LL,
          v9,
          *(unsigned int *)(BugCheckParameter3 + 64),
          *(_DWORD *)(BugCheckParameter3 + 120),
          *(_WORD *)(BugCheckParameter3 + 110) & 0xF,
          (*(unsigned __int16 *)(BugCheckParameter3 + 110) >> 4) & 7,
          0);
    }
    else
    {
      MiUpdateDriverLoadInProgress(
        BugCheckParameter3,
        (struct _LIST_ENTRY ***)v9,
        *(_DWORD *)(BugCheckParameter3 + 64),
        3);
    }
    if ( !v8 || (*(_DWORD *)(BaseLoaderPortion + 184) & 0x40000) != 0 )
    {
      v17 = BugCheckParameter2;
      if ( v14 )
        MiReleasePrivilegedPtes(BugCheckParameter2, (unsigned int)v14);
    }
    else
    {
      v17 = BugCheckParameter2;
    }
    if ( v27 )
      MiReleaseDriverPtes(v17, (unsigned int)v14, v15, v16);
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 1) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter3 + 80), 0);
    if ( v8 )
    {
      v18 = *(_QWORD *)(BaseLoaderPortion + 192);
      if ( v18 )
        MiReturnResident((__int64)&MiSystemPartition, v18);
      if ( v9 && v9 != *(struct _LIST_ENTRY **)(*(_QWORD *)v29 + 32LL) )
      {
        MiFreePrivateFixupEntryForSystemImage(v9);
        MiReturnSystemImageAddress((unsigned __int64)v9);
      }
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x800) != 0 )
        MiReturnCrossPartitionControlAreaCharges(v29);
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x40000) != 0 )
        MiDereferenceControlArea(v29);
      ObDereferenceObjectDeferDeleteWithTag(v8, 0x63536D4Du);
    }
    if ( CurrentThread )
      MmReleaseLoadLock(CurrentThread);
    ExFreePoolWithTag((PVOID)BugCheckParameter3, 0);
  }
}

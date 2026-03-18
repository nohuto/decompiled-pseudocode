/*
 * XREFs of MmLoadSystemImageEx @ 0x140A269D4
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14050F1D4 (IopLoadCrashdumpDriver.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     IopLoadCrashdmpImage @ 0x140A24F90 (IopLoadCrashdmpImage.c)
 *     MmLoadSystemImage @ 0x140A26990 (MmLoadSystemImage.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14038B930 (MiSetImageProtection.c)
 *     MiUpdateDriverLoadInProgress @ 0x14040BD98 (MiUpdateDriverLoadInProgress.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140442A20 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceActiveSubsection @ 0x14045AE40 (MiReferenceActiveSubsection.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MiControlAreaRequiresCharge @ 0x1404A9D84 (MiControlAreaRequiresCharge.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     KasanDriverLoadImage @ 0x1404FC030 (KasanDriverLoadImage.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140772CFC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiConfigureDriverProxyState @ 0x1408649B0 (MiConfigureDriverProxyState.c)
 *     MiResolveImageImports @ 0x1408753A8 (MiResolveImageImports.c)
 *     MmCallDllInitialize @ 0x1408754D8 (MmCallDllInitialize.c)
 *     MiCompactServiceTable @ 0x14087AC6C (MiCompactServiceTable.c)
 *     KseDriverLoadImage @ 0x140A25978 (KseDriverLoadImage.c)
 *     MiDriverLoadSucceeded @ 0x140A78E84 (MiDriverLoadSucceeded.c)
 *     MiConstructLoaderEntry @ 0x140AA8F54 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MiFinalizeDriverCfgState @ 0x140AC7330 (MiFinalizeDriverCfgState.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x140AC8ED0 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x140AC90AC (MiFreeDriverInitialization.c)
 *     MiObtainSectionForDriver @ 0x140AEB960 (MiObtainSectionForDriver.c)
 *     MiProcessLoadConfigForDriver @ 0x140B0594C (MiProcessLoadConfigForDriver.c)
 *     MiFinalizeKernelScpForSystemImage @ 0x140B1F2AC (MiFinalizeKernelScpForSystemImage.c)
 *     MiValidateStrongCodeDriverImage @ 0x140B1FD78 (MiValidateStrongCodeDriverImage.c)
 *     MiMapSystemImage @ 0x140B20834 (MiMapSystemImage.c)
 *     MiGenerateSystemImageNames @ 0x140B25868 (MiGenerateSystemImageNames.c)
 *     MiRelocateAmount @ 0x140B26E3C (MiRelocateAmount.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3C35C (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiLogFailedDriverLoad @ 0x140B518F0 (MiLogFailedDriverLoad.c)
 *     MiApplyRequiredDriverHotPatches @ 0x140B57160 (MiApplyRequiredDriverHotPatches.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfDriverLoadImage @ 0x140C46AD0 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 *a6,
        _QWORD *a7)
{
  __int64 *v7; // r12
  _QWORD *v8; // r13
  unsigned int v9; // r14d
  int v13; // ebx
  struct _LIST_ENTRY *v15; // rax
  int active; // edi
  int v17; // eax
  int v18; // eax
  char *v19; // rsi
  __int64 BaseLoaderPortion; // rbx
  __int64 v21; // r15
  __int64 *v22; // r13
  int v23; // edi
  struct _LIST_ENTRY ***v24; // r12
  int v25; // eax
  _DWORD *v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // rcx
  int v30; // r12d
  __int64 v31; // rdx
  _QWORD *v32; // rdi
  __int64 v33; // rax
  PVOID *v34; // rcx
  char v35; // [rsp+38h] [rbp-51h]
  PVOID SystemAddressForImage; // [rsp+40h] [rbp-49h] BYREF
  int v37; // [rsp+48h] [rbp-41h]
  __int64 v38; // [rsp+50h] [rbp-39h] BYREF
  struct _LIST_ENTRY *v39; // [rsp+58h] [rbp-31h]
  __int128 v40; // [rsp+60h] [rbp-29h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-19h] BYREF
  struct _KTHREAD *Lock; // [rsp+80h] [rbp-9h]
  _OWORD v43[4]; // [rsp+88h] [rbp-1h] BYREF
  int v45; // [rsp+E0h] [rbp+57h]

  v45 = a2;
  v7 = a6;
  v8 = a7;
  v9 = a5;
  v38 = 0LL;
  *a6 = 0LL;
  *v8 = 0LL;
  v39 = 0LL;
  v13 = 0;
  SystemAddressForImage = 0LL;
  v35 = 1;
  *(_OWORD *)P = 0LL;
  v40 = 0LL;
  v43[0] = 0LL;
  if ( (v9 & 1) != 0 )
    return 3221226581LL;
  if ( LODWORD(PsGetCurrentServerSiloGlobals()[83].Blink) < (unsigned __int16)NtBuildNumber )
  {
    v15 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v39 = PsAttachSiloToCurrentThread(v15);
    v13 = 1;
  }
  active = MiGenerateSystemImageNames(a1, a2, a3, &v40, v43, P);
  if ( active >= 0 )
  {
    v17 = v13 | 2;
    if ( !a2 )
      v17 = v13;
    v37 = v17;
    Lock = MmAcquireLoadLock();
    v18 = MiObtainSectionForDriver((unsigned int)P, a1, a4, v9, (__int64)&SystemAddressForImage);
    v19 = (char *)SystemAddressForImage;
    active = v18;
    if ( !SystemAddressForImage )
    {
LABEL_11:
      if ( active < 0 )
        goto LABEL_12;
LABEL_14:
      if ( Lock )
        MmReleaseLoadLock(Lock);
      LOBYTE(v13) = v37;
      if ( active < 0 && !v35 )
        MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)active);
      goto LABEL_19;
    }
    BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)SystemAddressForImage);
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x100) == 0 )
    {
      *v7 = (__int64)v19;
      *v8 = *((_QWORD *)v19 + 6);
      active = (*((_DWORD *)v19 + 26) & 0x4000000) != 0 ? -1073741411 : -1073741554;
      v19 = 0LL;
      goto LABEL_11;
    }
    v21 = *((_QWORD *)v19 + 14);
    v22 = (__int64 *)MiSectionControlArea(v21);
    v23 = *(_DWORD *)(*v22 + 8);
    SystemAddressForImage = (PVOID)MiGetSystemAddressForImage(v19, v9);
    v24 = (struct _LIST_ENTRY ***)SystemAddressForImage;
    if ( !SystemAddressForImage )
    {
      active = -1073741670;
      goto LABEL_12;
    }
    MiCheckPurgeAndUpMapCount((__int64)v22);
    *(_DWORD *)(BaseLoaderPortion + 184) |= 0x40000u;
    MiUpdateDriverLoadInProgress((__int64)v19, v24, v23 << 12, 1);
    v25 = MiControlAreaRequiresCharge((__int64)v22);
    if ( !v25 )
    {
      active = -1073740277;
      goto LABEL_12;
    }
    if ( v25 == 2 )
    {
      active = MiReferenceActiveSubsection(v22 + 16, 0x44u, 0x11u);
      if ( active < 0 )
        goto LABEL_12;
      *(_DWORD *)(BaseLoaderPortion + 184) |= 0x800u;
    }
    active = MiMapSystemImage(v21, v24);
    if ( active >= 0 )
    {
      v35 = 0;
      *(_DWORD *)(BaseLoaderPortion + 184) |= 0x2000u;
      LOBYTE(a5) = 0;
      v26 = RtlImageNtHeader((unsigned __int64)v24);
      if ( !v26 )
      {
        active = -1073741279;
        goto LABEL_12;
      }
      if ( *((_WORD *)v26 + 2) != 0x8664 || *((_WORD *)v26 + 12) != 523 )
      {
        active = -1073741520;
        goto LABEL_12;
      }
      if ( (MiFlags & 0x20000) != 0 && (v9 & 0x40000000) == 0 )
      {
        active = MiValidateStrongCodeDriverImage(v26);
        if ( active < 0 )
        {
          *(_OWORD *)(v19 + 88) = v40;
          *((_DWORD *)v19 + 30) = v26[22];
          *((_DWORD *)v19 + 39) = v26[2];
          MiLogStrongCodeDriverLoadFailure("SectionWXable", (__int64)v19);
          goto LABEL_12;
        }
      }
      active = MiConstructLoaderEntry((_DWORD)v19, (unsigned int)&v40, (unsigned int)P, v9, (__int64)&v38);
      if ( active < 0 )
        goto LABEL_12;
      v27 = v38;
      MiUpdateDriverLoadInProgress(v38, (struct _LIST_ENTRY ***)v19, v9, 2);
      ExFreePoolWithTag(v19, 0);
      v19 = (char *)v27;
      v28 = MiGetBaseLoaderPortion(v27);
      active = KasanDriverLoadImage(v29);
      if ( active < 0 )
        goto LABEL_12;
      v30 = v9 & 0x40000000;
      *(_DWORD *)(v28 + 184) |= 0x10000u;
      if ( (v9 & 0x20000000) == 0 )
      {
        active = MiResolveImageImports(v27, v45, (int)v43, (int)&v40, v30 != 0, &a5);
        v35 = a5;
        if ( active < 0 )
          goto LABEL_12;
      }
      if ( !v30 )
      {
        active = MiProcessLoadConfigForDriver(v27, v22 + 16);
        if ( active < 0 )
          goto LABEL_12;
      }
      active = MiFinalizeKernelScpForSystemImage(v27);
      if ( active < 0 )
        goto LABEL_12;
      *(_DWORD *)(v28 + 184) |= 0x20000u;
      if ( (*(_BYTE *)(*(_QWORD *)(*v22 + 56) + 46LL) & 0x40) == 0 )
      {
        v32 = (char *)SystemAddressForImage
            + *(unsigned int *)(*(_QWORD *)((v22[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32) + 60LL);
        MiSetImageProtection(v27, (unsigned __int64)v32, 8);
        v33 = MiRelocateAmount(v22);
        *v32 = (char *)SystemAddressForImage - v33;
        if ( v22[18] )
          MiSetImageProtection(v27, (unsigned __int64)v32, 8);
      }
      if ( !v30 )
      {
        a5 = 0;
        VfDriverLoadImage(v27, v31, 0LL);
        *(_DWORD *)(v28 + 184) |= 0x4000u;
        active = KseDriverLoadImage(v27, &a5);
        if ( active < 0 )
          goto LABEL_12;
        *(_DWORD *)(v28 + 184) |= 0x8000u;
        active = MiApplyImportOptimizationToRuntimeDriver(v27, v22);
        if ( active < 0 )
          goto LABEL_12;
      }
      if ( (v9 & 4) != 0 )
      {
        active = MiCompactServiceTable(v27);
        if ( active < 0 )
          goto LABEL_12;
      }
      active = MiHandleDriverNonPagedSections(v27, v9);
      if ( active < 0 )
        goto LABEL_12;
      if ( !v30 )
      {
        active = MiFinalizeDriverCfgState(v27, v9, v22 + 16);
        if ( active < 0 )
          goto LABEL_12;
        active = MiConfigureDriverProxyState(v27);
        if ( active < 0 )
          goto LABEL_12;
        active = MiApplyRequiredDriverHotPatches(v27);
        if ( active < 0 )
          goto LABEL_12;
        MiDriverLoadSucceeded(v27, a1, P, &v40);
      }
      if ( (v9 & 8) == 0 )
      {
LABEL_64:
        v34 = (PVOID *)a7;
        *(_DWORD *)(v28 + 184) &= ~0x100u;
        active = 0;
        *a6 = v27;
        *v34 = SystemAddressForImage;
        goto LABEL_14;
      }
      active = MmCallDllInitialize(v27);
      if ( active >= 0 )
      {
        MiFreeDriverInitialization(v27);
        goto LABEL_64;
      }
    }
LABEL_12:
    if ( v19 )
      MiUnloadSystemImage((ULONG_PTR)v19);
    goto LABEL_14;
  }
LABEL_19:
  if ( (v13 & 2) != 0 )
    ExFreePoolWithTag(P[1], 0);
  if ( (v13 & 1) != 0 )
    PsDetachSiloFromCurrentThread(v39);
  return (unsigned int)active;
}

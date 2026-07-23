/*
 * XREFs of PsDispatchIumService @ 0x140518438
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     KeAlertThreadByThreadIdEx @ 0x140383010 (KeAlertThreadByThreadIdEx.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     PspIumFreePhysicalPages @ 0x1403CCB2C (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x14040B478 (PspIumReplenishPartitionPages.c)
 *     VslAllocatePool @ 0x14040E164 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x14040E44C (VslFreePoolTransferObject.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042A1AC (MmUnlockLoadedModuleListExclusive.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     DbgkPostModuleMessage @ 0x1404C083C (DbgkPostModuleMessage.c)
 *     PspMapView @ 0x1404F533C (PspMapView.c)
 *     HvlpDepositPages @ 0x1405107E8 (HvlpDepositPages.c)
 *     MmLockLoadedModuleListExclusive @ 0x14052F5A4 (MmLockLoadedModuleListExclusive.c)
 *     VslHandleKsrCall @ 0x1405C5B8C (VslHandleKsrCall.c)
 *     PspIumAlertMultipleThreadByThreadId @ 0x1406191A8 (PspIumAlertMultipleThreadByThreadId.c)
 *     PspIumAllocatePartitionState @ 0x14061920C (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1406193C0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1406194E4 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x140619720 (PspIumFreePartitionState.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140619A30 (PsAdjustBasicEnclaveThreadList.c)
 *     MmFreeSecurePoolMemory @ 0x140700AB8 (MmFreeSecurePoolMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x140728540 (ZwTerminateProcess.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspIumGetSystemData @ 0x140802DC4 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x140802E00 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x1408047F8 (PsTerminateVsmEnclave.c)
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     MmCommitHotPatchTable @ 0x14087AD88 (MmCommitHotPatchTable.c)
 *     MmCreateSectionForHotpatch @ 0x14087AE7C (MmCreateSectionForHotpatch.c)
 *     MmInsertSecureImageActivePatch @ 0x14087AF00 (MmInsertSecureImageActivePatch.c)
 *     MmPrepareImagePagesForHotPatch @ 0x14087B034 (MmPrepareImagePagesForHotPatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x14087B164 (MmRemoveSecureImageActivePatch.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 *     DbgkMapViewOfSection @ 0x1409947C4 (DbgkMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x140994870 (MmUnmapViewOfSection.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     DbgkpResumeProcess @ 0x1409CEF0C (DbgkpResumeProcess.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x1409CF678 (DbgkpSuspendProcess.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 *     PspIumResolveVirtualFault @ 0x140AD33B4 (PspIumResolveVirtualFault.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B3A4F8 (MmUnmapProtectedKernelPageRange.c)
 *     MmMapProtectedKernelPage @ 0x140B48118 (MmMapProtectedKernelPage.c)
 *     MmGetSectionStrongImageReference @ 0x140B569E8 (MmGetSectionStrongImageReference.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     MmUpdateSlabRangeType @ 0x140D04B0C (MmUpdateSlabRangeType.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  GUID *RelatedActivityId; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rax
  int PartitionState; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  _KPROCESS *v19; // r14
  _KPROCESS *v20; // rcx
  int VirtualMemory; // eax
  _KPROCESS *v22; // rcx
  int v23; // ecx
  __int128 *v24; // r9
  __int64 v25; // rax
  int v26; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v28; // rbx
  _KPROCESS *v29; // rcx
  int v30; // esi
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  void *v36; // r8
  __int64 v37; // rcx
  const GUID *ActivityId; // rcx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  void *v43; // rcx
  int SecurePool; // eax
  int v45; // eax
  char v46; // r9
  __int64 Pool2; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  __int64 v53; // rcx
  int v54; // ecx
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  struct _MDL *v57; // rbx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  _KPROCESS *v62; // rbx
  _KPROCESS *Process; // rsi
  int v64; // eax
  __int64 v65; // r14
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  char v75; // r14
  __int64 v76; // rdx
  int SectionForHotpatch; // ebx
  ULONGLONG RegHandle; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v79; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v80; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v81; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v82; // [rsp+90h] [rbp-1C8h]
  _OWORD v83[3]; // [rsp+98h] [rbp-1C0h] BYREF
  _BYTE v84[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v85[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v86; // [rsp+230h] [rbp-28h]
  int v87; // [rsp+238h] [rbp-20h]
  __int16 v88; // [rsp+23Ch] [rbp-1Ch]
  char v89; // [rsp+23Eh] [rbp-1Ah]

  v79 = a1;
  memset(v83, 0, sizeof(v83));
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  RelatedActivityId = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v6 = *(unsigned __int16 *)(a1 + 2);
  if ( v6 > 0x1B )
  {
    if ( v6 > 0x28 )
    {
      if ( v6 > 0x2F )
      {
        v71 = v6 - 48;
        if ( !v71 )
        {
          PartitionState = MmCommitHotPatchTable(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
          goto LABEL_174;
        }
        v72 = v71 - 1;
        if ( !v72 )
        {
          MmInsertSecureImageActivePatch(
            *(_DWORD *)(a1 + 8),
            *(_DWORD *)(a1 + 16),
            *(_DWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 32),
            *(_DWORD *)(a1 + 40));
          return;
        }
        v73 = v72 - 1;
        if ( !v73 )
        {
          MmRemoveSecureImageActivePatch(*(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 16));
          return;
        }
        v74 = v73 - 1;
        if ( !v74 )
        {
          PartitionState = PspIumAlertMultipleThreadByThreadId(a1);
          goto LABEL_174;
        }
        if ( v74 != 1 )
          goto LABEL_164;
        v75 = *(_BYTE *)(a1 + 28);
        RegHandle = 0LL;
        v79 = 0LL;
        SectionForHotpatch = MmCreateSectionForHotpatch(
                               *(_QWORD *)(a1 + 8),
                               *(_DWORD *)(a1 + 16),
                               *(_DWORD *)(a1 + 20),
                               *(_DWORD *)(a1 + 24),
                               v75,
                               (unsigned int)&RegHandle);
        if ( SectionForHotpatch >= 0 )
        {
          LOBYTE(v76) = v75;
          SectionForHotpatch = MmGetSectionStrongImageReference(RegHandle, v76, 0LL, &v79);
          if ( SectionForHotpatch < 0 )
          {
            ObCloseHandle((HANDLE)RegHandle, v75);
            RegHandle = 0LL;
          }
        }
        *(_DWORD *)(a1 + 8) = SectionForHotpatch;
        *(_QWORD *)(a1 + 16) = RegHandle;
        v49 = v79;
        goto LABEL_169;
      }
      if ( v6 == 47 )
      {
        MmUnlockPages(*(PMDL *)(a1 + 8));
        IoFreeMdl(*(PMDL *)(a1 + 8));
        return;
      }
      v66 = v6 - 41;
      if ( !v66 )
      {
        MmUpdateSlabRangeType(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        return;
      }
      v67 = v66 - 1;
      if ( !v67 )
      {
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&NormalizationListLock.MutantListHead, DelayedWorkQueue);
        return;
      }
      v68 = v67 - 1;
      if ( !v68 )
      {
        PartitionState = PsAdjustBasicEnclaveThreadList(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 16),
                           *(unsigned int *)(a1 + 24));
        goto LABEL_174;
      }
      v69 = v68 - 1;
      if ( !v69 )
      {
        SecurePool = PspIumAllocateSecurePool(a1);
        goto LABEL_86;
      }
      v70 = v69 - 1;
      if ( !v70 )
      {
        MmFreeSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
        return;
      }
      if ( v70 != 1 )
        goto LABEL_164;
      v62 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v62 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v83);
      v64 = MmPrepareImagePagesForHotPatch(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a1 + 16);
    }
    else
    {
      if ( v6 == 40 )
      {
        PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
        return;
      }
      if ( v6 <= 0x22 )
      {
        if ( v6 == 34 )
        {
          PartitionState = PspMapView(a1);
          goto LABEL_174;
        }
        v50 = v6 - 28;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( v51 )
          {
            v52 = v51 - 1;
            if ( !v52 )
            {
              MmUnmapProtectedKernelPageRange(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
              return;
            }
            v53 = v52 - 1;
            if ( (_DWORD)v53 )
            {
              v54 = v53 - 1;
              if ( !v54 )
              {
                DbgkPostModuleMessage(
                  *(PVOID *)(a1 + 8),
                  *(PVOID *)(a1 + 16),
                  *(void **)(a1 + 24),
                  *(_DWORD *)(a1 + 32),
                  *(_DWORD *)(a1 + 40),
                  *(PRKEVENT *)(a1 + 48));
                return;
              }
              if ( v54 == 1 )
              {
                DbgkMapViewOfSection(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
                return;
              }
              goto LABEL_164;
            }
            if ( *(_QWORD *)(a1 + 8) )
              MmLockLoadedModuleListExclusive(v53, a2, a3);
            else
              MmUnlockLoadedModuleListExclusive(*(_BYTE *)(a1 + 16));
          }
          else
          {
            v55 = *(_QWORD *)(a1 + 16);
            v56 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) )
              MmMapDriverTablePage(v56, v55, (__int64)a3, *(_DWORD *)(a1 + 32));
            else
              MmMapProtectedKernelPage(v56, v55);
          }
          return;
        }
        v57 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v57->MappedSystemVa, v57);
        v43 = v57;
        goto LABEL_121;
      }
      v58 = v6 - 35;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( !v59 )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
          return;
        }
        v60 = v59 - 1;
        if ( !v60 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        v61 = v60 - 1;
        if ( !v61 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
          {
            PspIumFreePartitionState(*(PVOID *)(a1 + 16));
            return;
          }
          PartitionState = PspIumAllocatePartitionState(a1);
          goto LABEL_174;
        }
        if ( v61 == 1 )
        {
          *(_QWORD *)(a1 + 24) = 0LL;
          if ( PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16)) )
            *(_QWORD *)(a1 + 24) = 1LL;
          return;
        }
        goto LABEL_164;
      }
      v62 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v62 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v83);
      v64 = MmUnmapViewOfSection(v62, *(_QWORD *)(a1 + 16));
    }
    v65 = v64;
    if ( Process != v62 )
      KiUnstackDetachProcess((__int64)v83, 0);
    *(_QWORD *)(a1 + 8) = v65;
    return;
  }
  if ( v6 == 27 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v48 = Pool2;
    if ( !Pool2 )
    {
LABEL_97:
      v12 = 3221225626LL;
      goto LABEL_18;
    }
    *(_QWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 8) = 56;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 4096LL;
    *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a1 + 8);
    *(_WORD *)(Pool2 + 10) = 2;
    MmMapLockedPagesSpecifyCache((PMDL)Pool2, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (*(_BYTE *)(v48 + 10) & 1) == 0 )
    {
      ExFreePoolWithTag((PVOID)v48, 0);
      goto LABEL_97;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = v48;
    v49 = *(_QWORD *)(v48 + 24);
LABEL_169:
    *(_QWORD *)(a1 + 24) = v49;
    return;
  }
  if ( v6 > 0xE )
  {
    if ( v6 <= 0x15 )
    {
      if ( v6 == 21 )
      {
        ActivityId = (const GUID *)(a1 + 32);
        if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
          ActivityId = 0LL;
        if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
          RelatedActivityId = (GUID *)(a1 + 48);
        PartitionState = EtwWriteEx(
                           *(_QWORD *)(a1 + 8),
                           (PCEVENT_DESCRIPTOR)(a1 + 16),
                           0LL,
                           0,
                           ActivityId,
                           RelatedActivityId,
                           *(_DWORD *)(a1 + 64),
                           *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
        goto LABEL_174;
      }
      v31 = v6 - 15;
      if ( !v31 )
      {
        LOBYTE(v12) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_17;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
        DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
        return;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
        memset_0(v84, 0, sizeof(v84));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v84);
        goto LABEL_174;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
        RegHandle = 0LL;
        v36 = *(void **)(a1 + 24);
        if ( v36 )
          RelatedActivityId = (GUID *)VslIumEtwEnableCallback;
        v37 = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)RelatedActivityId, v36, &RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle;
        goto LABEL_175;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
        PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
        goto LABEL_174;
      }
      if ( v35 == 1 )
      {
        PartitionState = EtwSetInformation(
                           *(_QWORD *)(a1 + 8),
                           *(EVENT_INFO_CLASS *)(a1 + 16),
                           *(PVOID *)(a1 + 24),
                           *(_DWORD *)(a1 + 32));
        goto LABEL_174;
      }
      goto LABEL_164;
    }
    v39 = v6 - 22;
    if ( !v39 )
    {
      PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
      goto LABEL_174;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      VslHandleKsrCall(a1);
      return;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      v45 = *(_DWORD *)(a1 + 8);
      if ( v45 == -1070268287 || (v46 = 0, v45 == -1070268286) )
        v46 = 1;
      if ( v45 == -1070268299 || v45 == -1070268286 )
        LOBYTE(RelatedActivityId) = 1;
      PartitionState = HvlpDepositPages(0, a2, (char)RelatedActivityId, v46);
      goto LABEL_174;
    }
    v42 = v41 - 1;
    if ( v42 )
    {
      if ( v42 != 1 )
        goto LABEL_164;
      v43 = (void *)VslFreePoolTransferObject(*(__int64 **)(a1 + 8), 0LL);
LABEL_121:
      ExFreePoolWithTag(v43, 0);
      return;
    }
    SecurePool = VslAllocatePool(
                   *(_QWORD *)(a1 + 8),
                   *(unsigned int *)(a1 + 16),
                   (_QWORD *)(a1 + 16),
                   (_QWORD *)(a1 + 24),
                   (_QWORD *)(a1 + 32));
LABEL_86:
    *(_DWORD *)(a1 + 8) = SecurePool;
    return;
  }
  if ( v6 == 14 )
  {
    v28 = KeGetCurrentThread()->ApcState.Process;
    v29 = *(_KPROCESS **)(a1 + 8);
    if ( v28 != v29 )
      KiStackAttachProcess(v29, 0, (__int64)v83);
    v30 = MmProtectVirtualMemory(
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 8),
            (int)a1 + 24,
            (int)a1 + 32,
            *(_DWORD *)(a1 + 40),
            a1 + 40);
    if ( v28 != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess((__int64)v83, 0);
    *(_DWORD *)(a1 + 8) = v30;
    return;
  }
  if ( v6 > 7 )
  {
    v14 = v6 - 8;
    if ( !v14 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        RelatedActivityId = (GUID *)(a1 + 24);
      PartitionState = KeWaitForAlertByThreadId(*(_BYTE *)(a1 + 8), (__int64)RelatedActivityId, 0LL);
      goto LABEL_174;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      KeLeaveCriticalRegion();
      return;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
      *(_QWORD *)(a1 + 8) = 0LL;
      return;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      LOBYTE(a2) = *(_BYTE *)(a1 + 24);
      PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, *(_QWORD *)(a1 + 16), a1 + 16);
      goto LABEL_174;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v19 = KeGetCurrentThread()->ApcState.Process;
      v22 = *(_KPROCESS **)(a1 + 8);
      if ( v19 != v22 )
        KiStackAttachProcess(v22, 0, (__int64)v83);
      v23 = 0;
      v24 = 0LL;
      v25 = *(_QWORD *)(a1 + 48);
      if ( v25 || *(_QWORD *)(a1 + 56) )
      {
        *(_QWORD *)&v80 = 1LL;
        *((_QWORD *)&v80 + 1) = &v81;
        *(_QWORD *)&v81 = v25;
        v82 = *(_QWORD *)(a1 + 56);
        v23 = 1;
        v24 = &v80;
      }
      VirtualMemory = MmAllocateVirtualMemory(
                        -1,
                        (int)a1 + 24,
                        (int)a1 + 32,
                        *(_DWORD *)(a1 + 40),
                        4,
                        v24,
                        v23,
                        0,
                        0x10000000,
                        0,
                        0LL);
      goto LABEL_42;
    }
    if ( v18 == 1 )
    {
      v19 = KeGetCurrentThread()->ApcState.Process;
      v20 = *(_KPROCESS **)(a1 + 8);
      if ( v19 != v20 )
        KiStackAttachProcess(v20, 0, (__int64)v83);
      VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
LABEL_42:
      v26 = VirtualMemory;
      if ( v19 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((__int64)v83, 0);
      *(_DWORD *)(a1 + 8) = v26;
      return;
    }
LABEL_164:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v6 == 7 )
  {
    LOBYTE(v12) = KeAlertThreadByThreadIdEx(*(_QWORD *)(a1 + 8), 0LL, a3, a4);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PartitionState = PspIumAllocatePhysicalPages(
                       *(unsigned int *)(a1 + 8),
                       *(_QWORD *)(a1 + 16),
                       *(unsigned int *)(a1 + 24),
                       a1 + 16,
                       a1 + 24);
LABEL_174:
    v37 = PartitionState;
LABEL_175:
    *(_QWORD *)(a1 + 8) = v37;
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 24), *(_QWORD *)(a1 + 8));
    return;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      PspIumResolveVirtualFault(a1);
      return;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    if ( v11 == 1 )
    {
      LOBYTE(a3) = *(_BYTE *)(a1 + 24);
      LOBYTE(a2) = *(_BYTE *)(a1 + 16);
      LOBYTE(v12) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
LABEL_17:
      v12 = (unsigned __int8)v12;
LABEL_18:
      *(_QWORD *)(a1 + 8) = v12;
      return;
    }
    goto LABEL_164;
  }
  v85[0] = *(_OWORD *)(a1 + 10);
  v85[1] = *(_OWORD *)(a1 + 26);
  v85[2] = *(_OWORD *)(a1 + 42);
  v85[3] = *(_OWORD *)(a1 + 58);
  v85[4] = *(_OWORD *)(a1 + 74);
  v86 = *(_QWORD *)(a1 + 90);
  v87 = *(_DWORD *)(a1 + 98);
  v88 = *(_WORD *)(a1 + 102);
  v89 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v85);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}

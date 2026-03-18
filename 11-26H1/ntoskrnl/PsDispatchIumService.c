/*
 * XREFs of PsDispatchIumService @ 0x14040C830
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KeWaitForAlertByThreadId @ 0x140222460 (KeWaitForAlertByThreadId.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MmUnmapLockedPages @ 0x140281690 (MmUnmapLockedPages.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     KeAlertThreadByThreadIdEx @ 0x140381260 (KeAlertThreadByThreadIdEx.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     PspIumFreePhysicalPages @ 0x1403C2C2C (PspIumFreePhysicalPages.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14040D280 (MmUnlockLoadedModuleListExclusive.c)
 *     VslAllocatePool @ 0x14040E558 (VslAllocatePool.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     PspMapView @ 0x14040EA20 (PspMapView.c)
 *     VslFreePoolTransferObject @ 0x14040ED2C (VslFreePoolTransferObject.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     PspIumReplenishPartitionPages @ 0x140416E68 (PspIumReplenishPartitionPages.c)
 *     DbgkPostModuleMessage @ 0x1404C6E8C (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x140516D78 (HvlpDepositPages.c)
 *     MmLockLoadedModuleListExclusive @ 0x14052D084 (MmLockLoadedModuleListExclusive.c)
 *     VslHandleKsrCall @ 0x1405C331C (VslHandleKsrCall.c)
 *     PspIumAlertMultipleThreadByThreadId @ 0x1406161B8 (PspIumAlertMultipleThreadByThreadId.c)
 *     PspIumAllocatePartitionState @ 0x14061621C (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1406163D0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1406164F4 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x140616730 (PspIumFreePartitionState.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140616A40 (PsAdjustBasicEnclaveThreadList.c)
 *     MmFreeSecurePoolMemory @ 0x1406FBDE8 (MmFreeSecurePoolMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x140723970 (ZwTerminateProcess.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspIumGetSystemData @ 0x1407FD394 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x1407FD3D0 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x1407FEDC8 (PsTerminateVsmEnclave.c)
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 *     MmCommitHotPatchTable @ 0x140874A28 (MmCommitHotPatchTable.c)
 *     MmInsertSecureImageActivePatch @ 0x140874B1C (MmInsertSecureImageActivePatch.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140874C50 (MmPrepareImagePagesForHotPatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x140874D80 (MmRemoveSecureImageActivePatch.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     DbgkpResumeProcess @ 0x1409535CC (DbgkpResumeProcess.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     DbgkpSuspendProcess @ 0x140953D38 (DbgkpSuspendProcess.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 *     MmProtectVirtualMemory @ 0x14095E5D8 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14095F3F0 (MmFreeVirtualMemory.c)
 *     DbgkMapViewOfSection @ 0x1409C37E4 (DbgkMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x1409C3890 (MmUnmapViewOfSection.c)
 *     MmAllocateVirtualMemory @ 0x1409F22A0 (MmAllocateVirtualMemory.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 *     PspIumResolveVirtualFault @ 0x140AD66A8 (PspIumResolveVirtualFault.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B382E8 (MmUnmapProtectedKernelPageRange.c)
 *     MmMapProtectedKernelPage @ 0x140B460E8 (MmMapProtectedKernelPage.c)
 *     MmGetSectionStrongImageReference @ 0x140B54148 (MmGetSectionStrongImageReference.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     MmUpdateSlabRangeType @ 0x140CFE76C (MmUpdateSlabRangeType.c)
 */

void __fastcall PsDispatchIumService(ULONGLONG a1, __int64 a2, void *a3, __int64 a4)
{
  GUID *RelatedActivityId; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  _KPROCESS *v18; // r14
  _KPROCESS *v19; // rcx
  int v20; // ecx
  __int128 *v21; // r9
  __int64 v22; // rax
  int VirtualMemory; // eax
  int v24; // ebx
  _KPROCESS *v25; // rcx
  int PartitionState; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  int SecurePool; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *ActivityId; // rcx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  _KPROCESS *v44; // rbx
  _KPROCESS *v45; // rcx
  int v46; // esi
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  int v52; // eax
  struct _MDL *v53; // rcx
  struct _MDL *v54; // rbx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  _KPROCESS *v60; // rbx
  _KPROCESS *Process; // rsi
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  void *v66; // r8
  __int64 Pool2; // rax
  __int64 v68; // rbx
  int v69; // eax
  __int64 v70; // r14
  ULONGLONG RegHandle; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v72; // [rsp+68h] [rbp-1E0h] BYREF
  __int128 v73; // [rsp+78h] [rbp-1D0h] BYREF
  __int64 v74; // [rsp+88h] [rbp-1C0h]
  _OWORD v75[3]; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v76[272]; // [rsp+C0h] [rbp-188h] BYREF
  _OWORD v77[5]; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v78; // [rsp+220h] [rbp-28h]
  int v79; // [rsp+228h] [rbp-20h]
  __int16 v80; // [rsp+22Ch] [rbp-1Ch]
  char v81; // [rsp+22Eh] [rbp-1Ah]

  RegHandle = a1;
  memset(v75, 0, sizeof(v75));
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
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
  if ( v6 > 0x1A )
  {
    if ( v6 <= 0x27 )
    {
      if ( v6 == 39 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
          *(_QWORD *)(a1 + 24) = 1LL;
        return;
      }
      if ( v6 <= 0x21 )
      {
        if ( v6 == 33 )
        {
          DbgkMapViewOfSection(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a4);
          return;
        }
        v27 = v6 - 27;
        if ( !v27 )
        {
          Pool2 = ExAllocatePool2(0x40uLL);
          v68 = Pool2;
          if ( Pool2 )
          {
            *(_QWORD *)Pool2 = 0LL;
            *(_DWORD *)(Pool2 + 8) = 56;
            *(_QWORD *)(Pool2 + 32) = 0LL;
            *(_QWORD *)(Pool2 + 40) = 4096LL;
            *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a1 + 8);
            *(_WORD *)(Pool2 + 10) = 2;
            MmMapLockedPagesSpecifyCache((PMDL)Pool2, 0, MmCached, 0LL, 0, 0x40000010u);
            if ( (*(_BYTE *)(v68 + 10) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 8) = 0LL;
              *(_QWORD *)(a1 + 16) = v68;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(v68 + 24);
              return;
            }
            ExFreePoolWithTag((PVOID)v68, 0);
          }
          v32 = 3221225626LL;
LABEL_53:
          *(_QWORD *)(a1 + 8) = v32;
          return;
        }
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( !v30 )
            {
              MmUnmapProtectedKernelPageRange(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
              return;
            }
            v31 = v30 - 1;
            if ( (_DWORD)v31 )
            {
              if ( (_DWORD)v31 == 1 )
              {
                DbgkPostModuleMessage(
                  *(PVOID *)(a1 + 8),
                  *(PVOID *)(a1 + 16),
                  *(_DWORD *)(a1 + 40),
                  *(PRKEVENT *)(a1 + 48));
                return;
              }
              goto LABEL_135;
            }
            if ( *(_QWORD *)(a1 + 8) )
            {
              MmLockLoadedModuleListExclusive();
            }
            else
            {
              LOBYTE(v31) = *(_BYTE *)(a1 + 16);
              MmUnlockLoadedModuleListExclusive(v31);
            }
          }
          else
          {
            v39 = *(_QWORD *)(a1 + 16);
            v40 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(a1 + 24) )
              MmMapDriverTablePage(v40, v39, a3, *(unsigned int *)(a1 + 32));
            else
              MmMapProtectedKernelPage(v40, v39);
          }
          return;
        }
        v54 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v54->MappedSystemVa, v54);
        v53 = v54;
LABEL_150:
        ExFreePoolWithTag(v53, 0);
        return;
      }
      v42 = v6 - 34;
      if ( !v42 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_40;
      }
      v55 = v42 - 1;
      if ( v55 )
      {
        v56 = v55 - 1;
        if ( !v56 )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
          return;
        }
        v57 = v56 - 1;
        if ( !v57 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        if ( v57 != 1 )
          goto LABEL_135;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          PspIumFreePartitionState(*(PVOID *)(a1 + 16));
          return;
        }
        PartitionState = PspIumAllocatePartitionState(a1);
        goto LABEL_40;
      }
      v60 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v60 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v75);
      v69 = MmUnmapViewOfSection(v60, *(_QWORD *)(a1 + 16));
    }
    else
    {
      if ( v6 > 0x2E )
      {
        v62 = v6 - 47;
        if ( !v62 )
        {
          MmUnlockPages(*(PMDL *)(a1 + 8));
          IoFreeMdl(*(PMDL *)(a1 + 8));
          return;
        }
        v63 = v62 - 1;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( !v64 )
          {
            MmInsertSecureImageActivePatch(
              *(_DWORD *)(a1 + 8),
              *(_DWORD *)(a1 + 16),
              *(_DWORD *)(a1 + 24),
              *(_DWORD *)(a1 + 32),
              *(_DWORD *)(a1 + 40));
            return;
          }
          v65 = v64 - 1;
          if ( !v65 )
          {
            MmRemoveSecureImageActivePatch(*(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 16));
            return;
          }
          if ( v65 != 1 )
            goto LABEL_135;
          PartitionState = PspIumAlertMultipleThreadByThreadId(a1);
        }
        else
        {
          PartitionState = MmCommitHotPatchTable(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        }
        goto LABEL_40;
      }
      if ( v6 != 46 )
      {
        v11 = v6 - 40;
        if ( !v11 )
        {
          PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
          return;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          MmUpdateSlabRangeType(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
          return;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          ExQueueWorkItem((PWORK_QUEUE_ITEM)&NormalizationListLock.SchedulerApcFill5[64], DelayedWorkQueue);
          return;
        }
        v58 = v13 - 1;
        if ( !v58 )
        {
          PartitionState = PsAdjustBasicEnclaveThreadList(
                             *(_QWORD *)(a1 + 8),
                             *(_QWORD *)(a1 + 16),
                             *(unsigned int *)(a1 + 24));
          goto LABEL_40;
        }
        v59 = v58 - 1;
        if ( v59 )
        {
          if ( v59 == 1 )
          {
            MmFreeSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
            return;
          }
          goto LABEL_135;
        }
        SecurePool = PspIumAllocateSecurePool(a1);
        goto LABEL_62;
      }
      v60 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v60 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)v75);
      v69 = MmPrepareImagePagesForHotPatch(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a1 + 16);
    }
    v70 = v69;
    if ( Process != v60 )
      KiUnstackDetachProcess((__int64)v75, 0);
    *(_QWORD *)(a1 + 8) = v70;
    return;
  }
  if ( v6 == 26 )
  {
    v53 = (struct _MDL *)VslFreePoolTransferObject(*(PVOID *)(a1 + 8));
    goto LABEL_150;
  }
  if ( v6 == 13 )
  {
    v18 = KeGetCurrentThread()->ApcState.Process;
    v25 = *(_KPROCESS **)(a1 + 8);
    if ( v18 != v25 )
      KiStackAttachProcess(v25, 0, (__int64)v75);
    VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
    goto LABEL_31;
  }
  if ( v6 > 0xD )
  {
    if ( v6 > 0x14 )
    {
      v34 = v6 - 21;
      if ( !v34 )
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
        goto LABEL_40;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
        PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
        goto LABEL_40;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        VslHandleKsrCall(a1);
        return;
      }
      v37 = v36 - 1;
      if ( !v37 )
      {
        v52 = *(_DWORD *)(a1 + 8);
        if ( v52 == -1070268287 || (LOBYTE(a4) = 0, v52 == -1070268286) )
          LOBYTE(a4) = 1;
        if ( v52 == -1070268299 || v52 == -1070268286 )
          LOBYTE(RelatedActivityId) = 1;
        LOBYTE(a3) = (_BYTE)RelatedActivityId;
        PartitionState = HvlpDepositPages(0LL, a2, a3, a4);
        goto LABEL_40;
      }
      if ( v37 != 1 )
        goto LABEL_135;
      SecurePool = VslAllocatePool(*(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), (int)a1 + 16, (int)a1 + 24, a1 + 32);
LABEL_62:
      *(_DWORD *)(a1 + 8) = SecurePool;
      return;
    }
    if ( v6 == 20 )
    {
      PartitionState = EtwSetInformation(
                         *(_QWORD *)(a1 + 8),
                         *(EVENT_INFO_CLASS *)(a1 + 16),
                         *(PVOID *)(a1 + 24),
                         *(_DWORD *)(a1 + 32));
    }
    else
    {
      v43 = v6 - 14;
      if ( !v43 )
      {
        v44 = KeGetCurrentThread()->ApcState.Process;
        v45 = *(_KPROCESS **)(a1 + 8);
        if ( v44 != v45 )
          KiStackAttachProcess(v45, 0, (__int64)v75);
        v46 = MmProtectVirtualMemory(
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 8),
                (int)a1 + 24,
                (int)a1 + 32,
                *(_DWORD *)(a1 + 40),
                a1 + 40);
        if ( v44 != *(_KPROCESS **)(a1 + 8) )
          KiUnstackDetachProcess((__int64)v75, 0);
        *(_DWORD *)(a1 + 8) = v46;
        return;
      }
      v48 = v43 - 1;
      if ( !v48 )
      {
        LOBYTE(v32) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_52;
      }
      v49 = v48 - 1;
      if ( !v49 )
      {
        DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
        return;
      }
      v50 = v49 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( !v51 )
        {
          RegHandle = 0LL;
          v66 = *(void **)(a1 + 24);
          if ( v66 )
            RelatedActivityId = (GUID *)VslIumEtwEnableCallback;
          *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)RelatedActivityId, v66, &RegHandle);
          *(_QWORD *)(a1 + 16) = RegHandle;
          return;
        }
        if ( v51 != 1 )
          goto LABEL_135;
        PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      }
      else
      {
        memset_0(v76, 0, sizeof(v76));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v76);
      }
    }
LABEL_40:
    *(_QWORD *)(a1 + 8) = PartitionState;
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
      goto LABEL_40;
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
      goto LABEL_40;
    }
    if ( v17 != 1 )
      goto LABEL_135;
    v18 = KeGetCurrentThread()->ApcState.Process;
    v19 = *(_KPROCESS **)(a1 + 8);
    if ( v18 != v19 )
      KiStackAttachProcess(v19, 0, (__int64)v75);
    v20 = 0;
    v21 = 0LL;
    v22 = *(_QWORD *)(a1 + 48);
    if ( v22 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v72 = 1LL;
      *((_QWORD *)&v72 + 1) = &v73;
      *(_QWORD *)&v73 = v22;
      v74 = *(_QWORD *)(a1 + 56);
      v20 = 1;
      v21 = &v72;
    }
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (int)a1 + 24,
                      (int)a1 + 32,
                      *(_DWORD *)(a1 + 40),
                      4,
                      v21,
                      v20,
                      0,
                      0x10000000,
                      0,
                      0LL);
LABEL_31:
    v24 = VirtualMemory;
    if ( v18 != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess((__int64)v75, 0);
    *(_DWORD *)(a1 + 8) = v24;
    return;
  }
  if ( v6 == 7 )
  {
    LOBYTE(v32) = KeAlertThreadByThreadIdEx(*(_QWORD *)(a1 + 8), 0LL, a3, a4);
LABEL_52:
    v32 = (unsigned __int8)v32;
    goto LABEL_53;
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
    goto LABEL_40;
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
    v47 = v10 - 1;
    if ( !v47 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    if ( v47 == 1 )
    {
      LOBYTE(a3) = *(_BYTE *)(a1 + 24);
      LOBYTE(a2) = *(_BYTE *)(a1 + 16);
      LOBYTE(v32) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
      goto LABEL_52;
    }
LABEL_135:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  v77[0] = *(_OWORD *)(a1 + 10);
  v77[1] = *(_OWORD *)(a1 + 26);
  v77[2] = *(_OWORD *)(a1 + 42);
  v77[3] = *(_OWORD *)(a1 + 58);
  v77[4] = *(_OWORD *)(a1 + 74);
  v78 = *(_QWORD *)(a1 + 90);
  v79 = *(_DWORD *)(a1 + 98);
  v80 = *(_WORD *)(a1 + 102);
  v81 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v77);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}

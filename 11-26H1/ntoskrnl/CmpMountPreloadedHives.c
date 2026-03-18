/*
 * XREFs of CmpMountPreloadedHives @ 0x14084C298
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     RtlNumberOfSetBits @ 0x140356570 (RtlNumberOfSetBits.c)
 *     RtlSetBits @ 0x140358D10 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1403F4780 (RtlSetAllBits.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAreBitsClear @ 0x140478820 (RtlAreBitsClear.c)
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     ExIsSoftBoot @ 0x14052A6C0 (ExIsSoftBoot.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     TmEnableCallbacks @ 0x140534530 (TmEnableCallbacks.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpDiskFullWarning @ 0x140854AE8 (CmpDiskFullWarning.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140856CB8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x14085C268 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     SyspartGetSystemPartition @ 0x140894628 (SyspartGetSystemPartition.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 *     CmpDoFileSetSizeEx @ 0x140AAA978 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x140ACDEC4 (CmpGetFileSize.c)
 *     CmpLogFailureToGetFileSize @ 0x140ACDF34 (CmpLogFailureToGetFileSize.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140AE1E78 (CmpQueryHiveRedirectionFileList.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEB73C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     ExRaiseHardError @ 0x140B06D30 (ExRaiseHardError.c)
 *     CmRmFinalizeRecovery @ 0x140B3A6E8 (CmRmFinalizeRecovery.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // esi
  wchar_t *v1; // rbx
  void **i; // rax
  struct _KTHREAD *StackBase; // rax
  int v4; // r14d
  ULONG_PTR p_PropagateBoostsEntry; // rdi
  int SchedulerAssist; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  const WCHAR *v10; // rdx
  int SystemPartition; // ebx
  int v12; // r12d
  int FileSize; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  __int128 v20; // xmm0
  ULONG v21; // eax
  unsigned int v22; // ebx
  int v23; // ebx
  ULONG v24; // ebx
  ULONG j; // r12d
  int v26; // r12d
  int v27; // ebx
  __int64 v28; // rdx
  PKRESOURCEMANAGER *v29; // rcx
  _QWORD *v30; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+68h] [rbp-A0h]
  int v33; // [rsp+6Ch] [rbp-9Ch]
  WCHAR Source[4]; // [rsp+70h] [rbp-98h] BYREF
  struct _KTHREAD **p_Destination_8; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v36[3]; // [rsp+80h] [rbp-88h] BYREF
  int v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  ULONG Length[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h] BYREF
  __int64 Pool2; // [rsp+B8h] [rbp-50h]
  __int128 v44; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v45[54]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v46[3]; // [rsp+288h] [rbp+180h] BYREF

  v0 = 0;
  v36[0] = 0;
  v37 = 0;
  v42 = 0LL;
  Destination_8 = 0LL;
  memset_0(v45, 0, sizeof(v45));
  v36[1] = 0;
  v39 = 0LL;
  v36[2] = 0;
  v41 = 0LL;
  v32 = 0;
  memset(v46, 0, sizeof(v46));
  v38 = 0LL;
  *(_DWORD *)Source = 0;
  *(_QWORD *)Length = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v1 = (wchar_t *)Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  CmpLockRegistryExclusive();
  for ( i = (void **)CmpCallbackListLock.StackBase; i != &CmpCallbackListLock.StackBase; i = (void **)*i )
    *((_DWORD *)i + 624) |= 4u;
  CmpUnlockRegistry();
  StackBase = (struct _KTHREAD *)CmpCallbackListLock.StackBase;
  v4 = 22;
  while ( 1 )
  {
    p_Destination_8 = (struct _KTHREAD **)StackBase;
    if ( StackBase == (struct _KTHREAD *)&CmpCallbackListLock.StackBase )
      break;
    p_PropagateBoostsEntry = (ULONG_PTR)&StackBase[-2].PropagateBoostsEntry;
    SchedulerAssist = (int)StackBase[-2].SchedulerAssist;
    v33 = SchedulerAssist & 0x1000000;
    if ( (SchedulerAssist & 1) != 0 )
      goto LABEL_58;
    *(_QWORD *)&Destination_8.Length = 0x10000000LL;
    Destination_8.Buffer = v1;
    if ( !(unsigned __int8)CmpQueryHiveRedirectionFileList(
                             (PUNICODE_STRING)(p_PropagateBoostsEntry + 1864),
                             &Destination_8)
      || Destination_8.Length == 2 )
    {
      *(_QWORD *)&Destination_8.Length = 0x10000000LL;
      Destination_8.Buffer = v1;
      v8 = *(_DWORD *)(p_PropagateBoostsEntry + 160);
      if ( (v8 & 0x1000) != 0 )
      {
        v9 = HalSystemVectorDispatchEntry();
        Source[0] = **((_WORD **)PsGetServerSiloGlobals(v9) + 155);
        RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
        RtlAppendUnicodeToString(&Destination_8, Source);
        v10 = L":";
        goto LABEL_18;
      }
      if ( (v8 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1, v7, v36);
        if ( SystemPartition < 0 )
          goto LABEL_65;
      }
      else if ( (v8 & 0x200000) != 0 )
      {
        v10 = L"\\OSDataRoot";
LABEL_18:
        RtlAppendUnicodeToString(&Destination_8, v10);
      }
      RtlAppendUnicodeToString(&Destination_8, *(PCWSTR *)(p_PropagateBoostsEntry + 1840));
    }
    ExFreePoolWithTag(*(PVOID *)(p_PropagateBoostsEntry + 1840), 0);
    *(_OWORD *)(p_PropagateBoostsEntry + 1832) = 0LL;
    SystemPartition = CmpOpenHiveFile(&Destination_8, 7, 0LL, (__int64)Length, 0LL, 0LL, (__int64)v45);
    if ( SystemPartition < 0 )
    {
      v0 = 16;
      goto LABEL_65;
    }
    v12 = 2;
    if ( v32 == 2 )
      v12 = 18;
    SystemPartition = CmpOpenHiveFile(&Destination_8, v12, 0LL, 0LL, 0LL, 0LL, (__int64)v45);
    if ( SystemPartition < 0 )
    {
      v0 = 32;
LABEL_65:
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v45;
      v4 = 21;
      v45[0] = p_PropagateBoostsEntry;
      v30 = *(_QWORD **)(p_PropagateBoostsEntry + 56);
LABEL_66:
      SetFailureLocation((__int64)v30, 0, v4, SystemPartition, v0);
      BYTE4(NlsMbOemCodePageTag) = 1;
      p_Destination_8 = (struct _KTHREAD **)&Destination_8;
      ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination_8, 1, &v37);
      KeBugCheckEx(0x74u, 2uLL, 1uLL, p_PropagateBoostsEntry, SystemPartition);
    }
    SystemPartition = CmpOpenHiveFile(&Destination_8, v12, 0LL, 0LL, 0LL, 0LL, (__int64)v45);
    if ( SystemPartition < 0 )
    {
      v0 = 48;
      goto LABEL_65;
    }
    SystemPartition = CmpGetFileSize(v38, &v42);
    if ( SystemPartition < 0 )
    {
      v0 = 40;
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v45;
      v30 = v45;
      v45[0] = p_PropagateBoostsEntry;
      goto LABEL_66;
    }
    FileSize = CmpGetFileSize(v39, &v44);
    v15 = FileSize;
    if ( FileSize < 0 )
    {
      CmpLogFailureToGetFileSize(v14, 4LL, (unsigned int)FileSize);
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v45;
      v45[0] = p_PropagateBoostsEntry;
      SetFailureLocation((__int64)v45, 1, 22, v15, 43);
      *(_QWORD *)&v44 = 0LL;
    }
    v16 = v41;
    v17 = CmpGetFileSize(v41, (char *)&v44 + 8);
    v19 = v17;
    if ( v17 < 0 )
    {
      CmpLogFailureToGetFileSize(v18, 5LL, (unsigned int)v17);
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v45;
      v45[0] = p_PropagateBoostsEntry;
      SetFailureLocation((__int64)v45, 1, 22, v19, 45);
      *((_QWORD *)&v44 + 1) = 0LL;
    }
    CmpBecomeActiveFlusherAndReconciler(p_PropagateBoostsEntry);
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(p_PropagateBoostsEntry);
    v20 = v44;
    *(_QWORD *)(p_PropagateBoostsEntry + 1544) = v38;
    *(_QWORD *)(p_PropagateBoostsEntry + 1576) = v39;
    *(_QWORD *)(p_PropagateBoostsEntry + 1808) = v42;
    v21 = Length[1];
    *(_QWORD *)(p_PropagateBoostsEntry + 1584) = v16;
    *(_OWORD *)(p_PropagateBoostsEntry + 1816) = v20;
    *(_DWORD *)(p_PropagateBoostsEntry + 160) &= ~2u;
    v22 = *(_DWORD *)(p_PropagateBoostsEntry + 280) + 4096;
    *(_DWORD *)(p_PropagateBoostsEntry + 188) = v21;
    HvLockHiveWriter(p_PropagateBoostsEntry);
    v23 = CmpDoFileSetSizeEx(p_PropagateBoostsEntry, 0LL, v22, 1LL);
    HvUnlockHiveWriter(p_PropagateBoostsEntry);
    if ( v23 < 0 )
      CmpCannotWriteConfiguration = 1;
    if ( (*(_DWORD *)(p_PropagateBoostsEntry + 4120) & 0x8000) != 0 )
    {
LABEL_36:
      HvUnlockHiveFlusherExclusive(p_PropagateBoostsEntry);
      CmpUnlockRegistry();
      SystemPartition = CmpRecoverFlushProtocolStateFromFiles(p_PropagateBoostsEntry);
      if ( SystemPartition < 0 )
      {
        v0 = 72;
        *(_QWORD *)(p_PropagateBoostsEntry + 56) = v45;
        v30 = v45;
        v45[0] = p_PropagateBoostsEntry;
        goto LABEL_66;
      }
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(p_PropagateBoostsEntry);
      goto LABEL_38;
    }
    if ( v33 )
    {
      if ( v32 != 2 )
        goto LABEL_36;
      *(_QWORD *)(*(_QWORD *)(p_PropagateBoostsEntry + 64) + 12LL) = MEMORY[0xFFFFF78000000014];
      HvLockHiveWriter(p_PropagateBoostsEntry);
      HvCheckAndUpdateHiveBackupTimeStamp(p_PropagateBoostsEntry);
      HvUnlockHiveWriter(p_PropagateBoostsEntry);
    }
LABEL_38:
    v24 = Length[0];
    if ( *(_DWORD *)(p_PropagateBoostsEntry + 136) != Length[0] )
    {
      for ( j = 0; j < *(_DWORD *)(p_PropagateBoostsEntry + 88); j += v24 )
      {
        if ( !RtlAreBitsClear((PRTL_BITMAP)(p_PropagateBoostsEntry + 88), j, v24) )
          RtlSetBits((PRTL_BITMAP)(p_PropagateBoostsEntry + 88), j, v24);
      }
      *(_DWORD *)(p_PropagateBoostsEntry + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(p_PropagateBoostsEntry + 88));
      *(_DWORD *)(p_PropagateBoostsEntry + 136) = v24;
    }
    v26 = v33;
    if ( *(_DWORD *)(*(_QWORD *)(p_PropagateBoostsEntry + 64) + 4092LL) || v33 )
    {
      RtlSetAllBits((PRTL_BITMAP)(p_PropagateBoostsEntry + 88));
      *(_DWORD *)(p_PropagateBoostsEntry + 104) = *(_DWORD *)(p_PropagateBoostsEntry + 88);
    }
    HvUnlockHiveFlusherExclusive(p_PropagateBoostsEntry);
    CmpUnlockRegistry();
    CmpLockRegistryExclusive();
    SystemPartition = HvpDropPagedBins(p_PropagateBoostsEntry);
    CmpUnlockRegistry();
    if ( SystemPartition < 0 )
    {
      v0 = 96;
      goto LABEL_65;
    }
    CmpFinishBeingActiveFlusherAndReconciler(p_PropagateBoostsEntry);
    if ( *(_DWORD *)(*(_QWORD *)(p_PropagateBoostsEntry + 64) + 4092LL) || v26 )
    {
      if ( !ExIsSoftBoot() )
        CmpFlushHive(p_PropagateBoostsEntry, 12LL);
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(p_PropagateBoostsEntry);
      *(_DWORD *)(*(_QWORD *)(p_PropagateBoostsEntry + 64) + 4092LL) = 0;
      HvUnlockHiveFlusherExclusive(p_PropagateBoostsEntry);
      CmpUnlockRegistry();
    }
    if ( CmpCannotWriteConfiguration )
      CmpDiskFullWarning();
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(p_PropagateBoostsEntry);
    v27 = *(_DWORD *)(p_PropagateBoostsEntry + 160);
    *(_DWORD *)(p_PropagateBoostsEntry + 160) = v27 & 0xFFFFF7FF;
    HvUnlockHiveFlusherExclusive(p_PropagateBoostsEntry);
    CmpUnlockRegistry();
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v46);
    LOBYTE(v28) = (v27 & 0x800) != 0;
    CmpInitCmRM(p_PropagateBoostsEntry, v28);
    KiUnstackDetachProcess((__int64)v46, 0);
    v29 = *(PKRESOURCEMANAGER **)(p_PropagateBoostsEntry + 4160);
    *(_DWORD *)(p_PropagateBoostsEntry + 4120) |= 8u;
    if ( v29 )
    {
      TmEnableCallbacks(v29[7], CmKtmNotification, v29);
      CmRmFinalizeRecovery(*(_QWORD *)(p_PropagateBoostsEntry + 4160));
    }
    v1 = (wchar_t *)Pool2;
LABEL_58:
    StackBase = *p_Destination_8;
  }
  ExFreePoolWithTag(v1, 0);
}

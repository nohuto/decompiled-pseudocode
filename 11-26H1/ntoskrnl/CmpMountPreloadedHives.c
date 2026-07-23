/*
 * XREFs of CmpMountPreloadedHives @ 0x1408525A8
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAreBitsClear @ 0x140471FA0 (RtlAreBitsClear.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     ExIsSoftBoot @ 0x14052CBE0 (ExIsSoftBoot.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     TmEnableCallbacks @ 0x1405369B0 (TmEnableCallbacks.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpDiskFullWarning @ 0x14085ADF8 (CmpDiskFullWarning.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140862558 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     SyspartGetSystemPartition @ 0x14089AA28 (SyspartGetSystemPartition.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x140AD0104 (CmpGetFileSize.c)
 *     CmpLogFailureToGetFileSize @ 0x140AD0174 (CmpLogFailureToGetFileSize.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140ADF368 (CmpQueryHiveRedirectionFileList.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEE648 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     CmRmFinalizeRecovery @ 0x140B3CA88 (CmRmFinalizeRecovery.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // esi
  wchar_t *v1; // rbx
  void *volatile *i; // rax
  struct _KTHREAD *StackLimit; // rax
  int v4; // r14d
  ULONG_PTR p_PropagateBoostsEntry; // rdi
  int SchedulerAssist; // eax
  int v7; // eax
  __int64 v8; // rax
  const WCHAR *v9; // rdx
  int SystemPartition; // ebx
  int v11; // r12d
  int FileSize; // eax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  __int128 v19; // xmm0
  ULONG v20; // eax
  unsigned int v21; // ebx
  int v22; // ebx
  ULONG v23; // ebx
  ULONG j; // r12d
  int v25; // r12d
  int v26; // ebx
  __int64 v27; // rdx
  PKRESOURCEMANAGER *v28; // rcx
  _QWORD *v29; // rcx
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+68h] [rbp-A0h]
  int v32; // [rsp+6Ch] [rbp-9Ch]
  WCHAR Source[4]; // [rsp+70h] [rbp-98h] BYREF
  struct _KTHREAD **p_Destination_8; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-88h]
  int v36; // [rsp+84h] [rbp-84h]
  int v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  ULONG Length[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  __int64 Pool2; // [rsp+B8h] [rbp-50h]
  __int128 v45; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v46[54]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v47[3]; // [rsp+288h] [rbp+180h] BYREF

  v0 = 0;
  v35 = 0;
  v38 = 0;
  v43 = 0LL;
  Destination_8 = 0LL;
  memset_0(v46, 0, sizeof(v46));
  v36 = 0;
  v40 = 0LL;
  v37 = 0;
  v42 = 0LL;
  v31 = 0;
  memset(v47, 0, sizeof(v47));
  v39 = 0LL;
  *(_DWORD *)Source = 0;
  *(_QWORD *)Length = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  v1 = (wchar_t *)Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  CmpLockRegistryExclusive();
  for ( i = (void *volatile *)CmpContextListLock.StackLimit; i != &CmpContextListLock.StackLimit; i = (void *volatile *)*i )
    *((_DWORD *)i + 624) |= 4u;
  CmpUnlockRegistry();
  StackLimit = (struct _KTHREAD *)CmpContextListLock.StackLimit;
  v4 = 22;
  while ( 1 )
  {
    p_Destination_8 = (struct _KTHREAD **)StackLimit;
    if ( StackLimit == (struct _KTHREAD *)&CmpContextListLock.StackLimit )
      break;
    p_PropagateBoostsEntry = (ULONG_PTR)&StackLimit[-2].PropagateBoostsEntry;
    SchedulerAssist = (int)StackLimit[-2].SchedulerAssist;
    v32 = SchedulerAssist & 0x1000000;
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
      v7 = *(_DWORD *)(p_PropagateBoostsEntry + 160);
      if ( (v7 & 0x1000) != 0 )
      {
        v8 = HalSystemVectorDispatchEntry();
        Source[0] = **((_WORD **)PsGetServerSiloGlobals(v8) + 155);
        RtlAppendUnicodeToString(&Destination_8, L"\\??\\");
        RtlAppendUnicodeToString(&Destination_8, Source);
        v9 = L":";
        goto LABEL_18;
      }
      if ( (v7 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1);
        if ( SystemPartition < 0 )
          goto LABEL_65;
      }
      else if ( (v7 & 0x200000) != 0 )
      {
        v9 = L"\\OSDataRoot";
LABEL_18:
        RtlAppendUnicodeToString(&Destination_8, v9);
      }
      RtlAppendUnicodeToString(&Destination_8, *(PCWSTR *)(p_PropagateBoostsEntry + 1840));
    }
    ExFreePoolWithTag(*(PVOID *)(p_PropagateBoostsEntry + 1840), 0);
    *(_OWORD *)(p_PropagateBoostsEntry + 1832) = 0LL;
    SystemPartition = CmpOpenHiveFile(&Destination_8, 7, 0LL, (__int64)Length, 0LL, 0LL, (__int64)v46);
    if ( SystemPartition < 0 )
    {
      v0 = 16;
      goto LABEL_65;
    }
    v11 = 2;
    if ( v31 == 2 )
      v11 = 18;
    SystemPartition = CmpOpenHiveFile(&Destination_8, v11, 0LL, 0LL, 0LL, 0LL, (__int64)v46);
    if ( SystemPartition < 0 )
    {
      v0 = 32;
LABEL_65:
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v46;
      v4 = 21;
      v46[0] = p_PropagateBoostsEntry;
      v29 = *(_QWORD **)(p_PropagateBoostsEntry + 56);
LABEL_66:
      SetFailureLocation((__int64)v29, 0, v4, SystemPartition, v0);
      BYTE5(NlsMbOemCodePageTag) = 1;
      p_Destination_8 = (struct _KTHREAD **)&Destination_8;
      ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination_8, 1, &v38);
      KeBugCheckEx(0x74u, 2uLL, 1uLL, p_PropagateBoostsEntry, SystemPartition);
    }
    SystemPartition = CmpOpenHiveFile(&Destination_8, v11, 0LL, 0LL, 0LL, 0LL, (__int64)v46);
    if ( SystemPartition < 0 )
    {
      v0 = 48;
      goto LABEL_65;
    }
    SystemPartition = CmpGetFileSize(v39, &v43);
    if ( SystemPartition < 0 )
    {
      v0 = 40;
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v46;
      v29 = v46;
      v46[0] = p_PropagateBoostsEntry;
      goto LABEL_66;
    }
    FileSize = CmpGetFileSize(v40, &v45);
    v14 = FileSize;
    if ( FileSize < 0 )
    {
      CmpLogFailureToGetFileSize(v13, 4LL, (unsigned int)FileSize);
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v46;
      v46[0] = p_PropagateBoostsEntry;
      SetFailureLocation((__int64)v46, 1, 22, v14, 43);
      *(_QWORD *)&v45 = 0LL;
    }
    v15 = v42;
    v16 = CmpGetFileSize(v42, (char *)&v45 + 8);
    v18 = v16;
    if ( v16 < 0 )
    {
      CmpLogFailureToGetFileSize(v17, 5LL, (unsigned int)v16);
      *(_QWORD *)(p_PropagateBoostsEntry + 56) = v46;
      v46[0] = p_PropagateBoostsEntry;
      SetFailureLocation((__int64)v46, 1, 22, v18, 45);
      *((_QWORD *)&v45 + 1) = 0LL;
    }
    CmpBecomeActiveFlusherAndReconciler(p_PropagateBoostsEntry);
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(p_PropagateBoostsEntry);
    v19 = v45;
    *(_QWORD *)(p_PropagateBoostsEntry + 1544) = v39;
    *(_QWORD *)(p_PropagateBoostsEntry + 1576) = v40;
    *(_QWORD *)(p_PropagateBoostsEntry + 1808) = v43;
    v20 = Length[1];
    *(_QWORD *)(p_PropagateBoostsEntry + 1584) = v15;
    *(_OWORD *)(p_PropagateBoostsEntry + 1816) = v19;
    *(_DWORD *)(p_PropagateBoostsEntry + 160) &= ~2u;
    v21 = *(_DWORD *)(p_PropagateBoostsEntry + 280) + 4096;
    *(_DWORD *)(p_PropagateBoostsEntry + 188) = v20;
    HvLockHiveWriter(p_PropagateBoostsEntry);
    v22 = CmpDoFileSetSizeEx(p_PropagateBoostsEntry, 0LL, v21, 1LL);
    HvUnlockHiveWriter(p_PropagateBoostsEntry);
    if ( v22 < 0 )
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
        *(_QWORD *)(p_PropagateBoostsEntry + 56) = v46;
        v29 = v46;
        v46[0] = p_PropagateBoostsEntry;
        goto LABEL_66;
      }
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(p_PropagateBoostsEntry);
      goto LABEL_38;
    }
    if ( v32 )
    {
      if ( v31 != 2 )
        goto LABEL_36;
      *(_QWORD *)(*(_QWORD *)(p_PropagateBoostsEntry + 64) + 12LL) = MEMORY[0xFFFFF78000000014];
      HvLockHiveWriter(p_PropagateBoostsEntry);
      HvCheckAndUpdateHiveBackupTimeStamp(p_PropagateBoostsEntry);
      HvUnlockHiveWriter(p_PropagateBoostsEntry);
    }
LABEL_38:
    v23 = Length[0];
    if ( *(_DWORD *)(p_PropagateBoostsEntry + 136) != Length[0] )
    {
      for ( j = 0; j < *(_DWORD *)(p_PropagateBoostsEntry + 88); j += v23 )
      {
        if ( !RtlAreBitsClear((PRTL_BITMAP)(p_PropagateBoostsEntry + 88), j, v23) )
          RtlSetBits((PRTL_BITMAP)(p_PropagateBoostsEntry + 88), j, v23);
      }
      *(_DWORD *)(p_PropagateBoostsEntry + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(p_PropagateBoostsEntry + 88));
      *(_DWORD *)(p_PropagateBoostsEntry + 136) = v23;
    }
    v25 = v32;
    if ( *(_DWORD *)(*(_QWORD *)(p_PropagateBoostsEntry + 64) + 4092LL) || v32 )
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
    if ( *(_DWORD *)(*(_QWORD *)(p_PropagateBoostsEntry + 64) + 4092LL) || v25 )
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
    v26 = *(_DWORD *)(p_PropagateBoostsEntry + 160);
    *(_DWORD *)(p_PropagateBoostsEntry + 160) = v26 & 0xFFFFF7FF;
    HvUnlockHiveFlusherExclusive(p_PropagateBoostsEntry);
    CmpUnlockRegistry();
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v47);
    LOBYTE(v27) = (v26 & 0x800) != 0;
    CmpInitCmRM(p_PropagateBoostsEntry, v27);
    KiUnstackDetachProcess((__int64)v47, 0);
    v28 = *(PKRESOURCEMANAGER **)(p_PropagateBoostsEntry + 4160);
    *(_DWORD *)(p_PropagateBoostsEntry + 4120) |= 8u;
    if ( v28 )
    {
      TmEnableCallbacks(v28[7], CmKtmNotification, v28);
      CmRmFinalizeRecovery(*(_QWORD *)(p_PropagateBoostsEntry + 4160));
    }
    v1 = (wchar_t *)Pool2;
LABEL_58:
    StackLimit = *p_Destination_8;
  }
  ExFreePoolWithTag(v1, 0);
}

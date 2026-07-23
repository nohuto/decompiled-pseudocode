/*
 * XREFs of CmpLoadHiveThread @ 0x140851860
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     RtlAreBitsClear @ 0x140471FA0 (RtlAreBitsClear.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     ExIsSoftBoot @ 0x14052CBE0 (ExIsSoftBoot.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1406E62A8 (CmpApplyAdminSdOnHiveFiles.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpMarkCurrentValueDirty @ 0x1408524A8 (CmpMarkCurrentValueDirty.c)
 *     CmpDiskFullWarning @ 0x14085ADF8 (CmpDiskFullWarning.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14085D050 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x14085DC80 (CmpMachineHiveCacheClaimEntry.c)
 *     CmpInitBackupHive @ 0x140860B28 (CmpInitBackupHive.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140862558 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpHiveCacheEntryCleanup @ 0x14086815C (CmpHiveCacheEntryCleanup.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     PsTerminateSystemThread @ 0x140949E90 (PsTerminateSystemThread.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x140AD0104 (CmpGetFileSize.c)
 *     CmpLogFailureToGetFileSize @ 0x140AD0174 (CmpLogFailureToGetFileSize.c)
 *     ExRaiseHardError @ 0x140B08E60 (ExRaiseHardError.c)
 *     RtlAppendStringToString @ 0x140B22640 (RtlAppendStringToString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140C5EFB8 (CmpIsHiveLoadUnloadRundownActive.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  int v1; // edi
  unsigned int v2; // r12d
  ULONG_PTR v3; // r14
  __int64 v4; // r15
  int FileSize; // ebx
  STRING *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  wchar_t *v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  int inited; // eax
  struct _KEVENT *v14; // r15
  __int64 v15; // r12
  int v16; // eax
  STRING *v17; // r12
  int v18; // r15d
  char *v19; // r13
  char *v20; // r12
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // rcx
  int v27; // ebx
  STRING *v28; // rax
  __int128 v29; // xmm0
  int v30; // r13d
  unsigned int v31; // ebx
  int v32; // ebx
  ULONG v33; // ebx
  ULONG i; // r15d
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  wchar_t *v38; // rcx
  int v40; // [rsp+38h] [rbp-D0h]
  int v41; // [rsp+40h] [rbp-C8h]
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Length[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  STRING *Source; // [rsp+70h] [rbp-98h] BYREF
  STRING *v46; // [rsp+78h] [rbp-90h] BYREF
  int v47; // [rsp+80h] [rbp-88h]
  __int128 v48; // [rsp+88h] [rbp-80h] BYREF
  int v49; // [rsp+98h] [rbp-70h]
  int v50; // [rsp+9Ch] [rbp-6Ch]
  char *v51; // [rsp+A0h] [rbp-68h]
  char *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  _KAFFINITY_EX v54; // [rsp+B8h] [rbp-50h] BYREF

  v1 = 0;
  v2 = BugCheckParameter3;
  LODWORD(v44) = 0;
  v46 = 0LL;
  v49 = 0;
  v50 = 0;
  memset(&v54, 0, 24);
  v47 = 0;
  memset_0(&v54.StaticBitmap[3], 0, 0x1B0uLL);
  *(_QWORD *)Length = 0LL;
  CmpInitializeThreadInfo(&v54);
  v3 = v2;
  v4 = 23LL * v2;
  v48 = 0LL;
  Source = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  LOBYTE(v42) = 0;
  FileSize = 0;
  v6 = 0LL;
  KeWaitForSingleObject(&CmpMachineHiveList[v4 + 8], Executive, 0, 0, 0LL);
  if ( v2 == LODWORD(ExpPlatformBinaryLock.WaitBlockList) )
  {
    KeWaitForSingleObject(&CmpContextListLock.StateSaveArea, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v9 = 1LL;
  BYTE2(CmpMachineHiveList[v4 + 7]) = 1;
  v10 = CmpMachineHiveList[v4 + 3];
  if ( v10 )
  {
    v16 = *((_DWORD *)v10 + 40);
    v6 = (STRING *)CmpMachineHiveList[v4 + 3];
    if ( (v16 & 0x8001) != 0 )
    {
      if ( BYTE6(NlsMbOemCodePageTag) || HIDWORD(WheapPfaLock.ThreadLock) )
      {
        if ( (v16 & 2) != 0 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherExclusive(v10);
          *((_DWORD *)v10 + 40) &= ~2u;
          HvUnlockHiveFlusherExclusive(v10);
          CmpUnlockRegistry();
        }
        LODWORD(PspSiloMonitorLock.InGlobalForegroundList) = 0x800000;
        PspSiloMonitorLock.ReadOperationCount = (__int64)&unk_140FD8880;
        RtlAppendStringToString(
          (PSTRING)&PspSiloMonitorLock.InGlobalForegroundList,
          (const STRING *)(&stru_140E098B8.QuantumTarget + 23 * v2));
      }
    }
    else
    {
      v17 = (STRING *)&CmpMachineHiveList[v4 + 21];
      Source = v17;
      FileSize = CmpOpenHiveFile(
                   (PCUNICODE_STRING)v17,
                   7,
                   0LL,
                   (__int64)Length,
                   0LL,
                   0LL,
                   (__int64)&v54.StaticBitmap[3]);
      if ( FileSize < 0 )
      {
        *((_QWORD *)v10 + 7) = &v54.StaticBitmap[3];
        goto LABEL_71;
      }
      v18 = (16 * (v47 == 2)) | 2;
      FileSize = CmpOpenHiveFile((PCUNICODE_STRING)v17, v18, 0LL, 0LL, 0LL, 0LL, (__int64)&v54.StaticBitmap[3]);
      if ( FileSize < 0 )
      {
        *((_QWORD *)v10 + 7) = &v54.StaticBitmap[3];
        v1 = 16;
        goto LABEL_71;
      }
      FileSize = CmpOpenHiveFile((PCUNICODE_STRING)v17, v18, 0LL, 0LL, 0LL, 0LL, (__int64)&v54.StaticBitmap[3]);
      if ( FileSize < 0 )
      {
        v1 = 32;
        *((_QWORD *)v10 + 7) = &v54.StaticBitmap[3];
        goto LABEL_71;
      }
      v19 = v51;
      FileSize = CmpGetFileSize(v51, &v46);
      if ( FileSize < 0 )
      {
        v1 = 40;
LABEL_70:
        v6[3].Buffer = (char *)&v54.StaticBitmap[3];
LABEL_71:
        v54.StaticBitmap[3] = (unsigned __int64)v6;
        SetFailureLocation((__int64)&v54.StaticBitmap[3], 0, 22, FileSize, v1);
        v46 = v17;
        BYTE5(NlsMbOemCodePageTag) = 1;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &v46, 1, &v44);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v3, FileSize);
      }
      v20 = v52;
      v21 = CmpGetFileSize(v52, &v48);
      v23 = v21;
      if ( v21 < 0 )
      {
        CmpLogFailureToGetFileSize(v22, 4LL, (unsigned int)v21);
        v6[3].Buffer = (char *)&v54.StaticBitmap[3];
        v54.StaticBitmap[3] = (unsigned __int64)v6;
        SetFailureLocation((__int64)&v54.StaticBitmap[3], 1, 22, v23, 43);
        *(_QWORD *)&v48 = 0LL;
      }
      v24 = v53;
      v25 = CmpGetFileSize(v53, (char *)&v48 + 8);
      v27 = v25;
      if ( v25 < 0 )
      {
        CmpLogFailureToGetFileSize(v26, 5LL, (unsigned int)v25);
        v6[3].Buffer = (char *)&v54.StaticBitmap[3];
        v54.StaticBitmap[3] = (unsigned __int64)v6;
        SetFailureLocation((__int64)&v54.StaticBitmap[3], 1, 22, v27, 45);
        *((_QWORD *)&v48 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler(v6);
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(v6);
      v28 = v46;
      v29 = v48;
      v6[96].Buffer = v19;
      v6[98].Buffer = v20;
      *(_QWORD *)&v6[99].Length = v24;
      *(_QWORD *)&v6[113].Length = v28;
      *(_OWORD *)&v6[113].Buffer = v29;
      *(_DWORD *)&v6[10].Length &= ~2u;
      v30 = (__int64)v6[257].Buffer & 0x8000;
      LODWORD(v6[257].Buffer) = HIDWORD(CmpMachineHiveList[23 * v3 + 4]);
      HIDWORD(v6[11].Buffer) = Length[1];
      v31 = LODWORD(v6[17].Buffer) + 4096;
      HvLockHiveWriter(v6);
      v32 = CmpDoFileSetSizeEx(v6, 0LL, v31, 1LL);
      HvUnlockHiveWriter(v6);
      if ( v32 < 0 )
        CmpCannotWriteConfiguration = 1;
      HvUnlockHiveFlusherExclusive(v6);
      CmpUnlockRegistry();
      if ( v30 )
      {
        FileSize = CmpRecoverFlushProtocolStateFromFiles((ULONG_PTR)v6);
        if ( FileSize < 0 )
        {
          v1 = 72;
LABEL_69:
          v17 = Source;
          goto LABEL_70;
        }
      }
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(v6);
      v33 = Length[0];
      if ( LODWORD(v6[8].Buffer) != Length[0] )
      {
        for ( i = 0; i < LODWORD(v6[5].Buffer); i += v33 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)&v6[5].Buffer, i, v33) )
            RtlSetBits((PRTL_BITMAP)&v6[5].Buffer, i, v33);
        }
        LODWORD(v6[6].Buffer) = RtlNumberOfSetBits((PRTL_BITMAP)&v6[5].Buffer);
        LODWORD(v6[8].Buffer) = v33;
      }
      v35 = *(_QWORD *)&v6[4].Length;
      if ( *(_DWORD *)(v35 + 4092) || (*(_DWORD *)(v35 + 4088) & 4) != 0 || v30 )
      {
        RtlSetAllBits((PRTL_BITMAP)&v6[5].Buffer);
        LODWORD(v6[6].Buffer) = v6[5].Buffer;
      }
      HvUnlockHiveFlusherExclusive(v6);
      CmpUnlockRegistry();
      CmpLockRegistryExclusive();
      if ( (_DWORD)v3 == 3 )
      {
        HvLockHiveFlusherShared(v6);
        CmpMarkCurrentValueDirty((ULONG_PTR)v6);
        HvUnlockHiveFlusherShared(v6);
      }
      CmpMachineHiveList[23 * v3 + 6] = &v6->Length;
      FileSize = HvpDropPagedBins((ULONG_PTR)v6);
      CmpUnlockRegistry();
      if ( FileSize < 0 )
      {
        v1 = 80;
        goto LABEL_69;
      }
      CmpFinishBeingActiveFlusherAndReconciler(v6);
      v36 = *(_QWORD *)&v6[4].Length;
      if ( *(_DWORD *)(v36 + 4092) || (*(_DWORD *)(v36 + 4088) & 4) != 0 )
      {
        if ( !ExIsSoftBoot() )
          CmpFlushHive(v6, 12LL);
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(v6);
        *(_DWORD *)(*(_QWORD *)&v6[4].Length + 4092LL) = 0;
        *(_DWORD *)(*(_QWORD *)&v6[4].Length + 4088LL) &= ~4u;
        HvUnlockHiveFlusherExclusive(v6);
        CmpUnlockRegistry();
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      PspSiloMonitorLock.ReadOperationCount = (__int64)&unk_140FD8880;
      LODWORD(PspSiloMonitorLock.InGlobalForegroundList) = 0x800000;
      RtlAppendStringToString((PSTRING)&PspSiloMonitorLock.InGlobalForegroundList, Source);
      if ( HIDWORD(WheapPfaLock.RelativeTimerBias) && (int)CmpInitBackupHive(v6, CmpMachineHiveList[23 * v3]) < 0 )
        HIDWORD(WheapPfaLock.RelativeTimerBias) = 0;
    }
    LODWORD(v6[257].Buffer) |= 4u;
    if ( (_DWORD)v3 == 3 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherShared(v6);
      HvUnlockHiveFlusherShared(v6);
      CmpUnlockRegistry();
    }
LABEL_89:
    if ( (unsigned __int8)CmpAcquireShutdownRundown(v7 * 8, v9) )
    {
      if ( (*(_DWORD *)&v6[10].Length & 0x8001) == 0 )
      {
        if ( v6[96].Buffer )
        {
          v37 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v6, (ULONG_PTR)CmpMachineHiveList[23 * v3]);
          FileSize = v37;
          if ( v37 < 0 )
            KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v6, (ULONG_PTR)CmpMachineHiveList[23 * v3], v37);
        }
      }
      CmpReleaseShutdownRundown();
    }
    else
    {
      FileSize = -1073741431;
    }
    goto LABEL_96;
  }
  Length[1] = 0;
  Length[0] = Feature_MachineHiveCache__private_featureState;
  if ( (Feature_MachineHiveCache__private_featureState & 0x10) == 0 )
  {
    v44 = __PAIR64__(Length[1], Feature_MachineHiveCache__private_featureState | 1u);
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MachineHiveCache__private_descriptor,
      Feature_MachineHiveCache__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v44,
      3,
      (__int64)&Feature_MachineHiveCache__private_descriptor);
  }
  v11 = CmpMachineHiveCacheClaimEntry((char *)&CmpKeyLockTracker.320 + 832 * v2, v9, v8, &v48);
  FileSize = v11;
  if ( v11 >= 0 )
  {
    v6 = (STRING *)v48;
    BYTE3(CmpMachineHiveList[v4 + 7]) = BYTE9(v48);
    LOBYTE(v42) = BYTE8(v48);
    Source = v6;
  }
  else
  {
    SetFailureLocation((__int64)&v54.StaticBitmap[3], 1, 22, v11, 8);
  }
  v12 = (unsigned int)Feature_MachineHiveCache__private_featureState;
  Length[1] = 0;
  Length[0] = Feature_MachineHiveCache__private_featureState;
  if ( (Feature_MachineHiveCache__private_featureState & 0x10) == 0 )
  {
    v44 = __PAIR64__(Length[1], Feature_MachineHiveCache__private_featureState | 1u);
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MachineHiveCache__private_descriptor,
      Feature_MachineHiveCache__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v44,
      3,
      (__int64)&Feature_MachineHiveCache__private_descriptor);
  }
  if ( FileSize < 0 )
  {
    inited = CmpInitHiveFromFile(
               (int)&CmpMachineHiveList[v4 + 21],
               (int)CmpMachineHiveList[v4 + 4],
               (int)&Source,
               (int)&CmpMachineHiveList[v4 + 7] + 3,
               22609921,
               0LL,
               v40,
               v41,
               (__int64)&v42,
               &v54.StaticBitmap[3]);
    v6 = Source;
    FileSize = inited;
  }
  v9 = 3221225524LL;
  if ( v2 == 6 && !BYTE4(CmpMachineHiveList[v4 + 7]) && (FileSize == -1073741772 || FileSize == -1073741765)
    || _bittest((const signed __int32 *)&CmpMachineHiveList[v4 + 4], 0xFu)
    && !BYTE4(CmpMachineHiveList[23 * v2 + 7])
    && FileSize == -1073741772 )
  {
    FileSize = 0;
    goto LABEL_96;
  }
  if ( FileSize != -1073741431 )
  {
    if ( FileSize < 0
      || !_bittest((const signed __int32 *)&CmpMachineHiveList[v4 + 4], 0xFu)
      && (!v6[98].Buffer || !*(_QWORD *)&v6[99].Length) )
    {
LABEL_25:
      BYTE5(NlsMbOemCodePageTag) = 1;
      KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)&v54.StaticBitmap[3], v2, FileSize);
    }
    LODWORD(v6[257].Buffer) = HIDWORD(CmpMachineHiveList[23 * v2 + 4]) | 4;
    v7 = 23LL * v2;
    CmpMachineHiveList[v7 + 6] = &v6->Length;
    if ( (_BYTE)v42 )
    {
      LOBYTE(WheapPfaLock.CurrentRunTime) = 1;
      v14 = &stru_140E09870;
      v15 = 7LL;
      do
      {
        KeSetEvent(v14, 0, 0);
        v14 = (struct _KEVENT *)((char *)v14 + 184);
        --v15;
      }
      while ( v15 );
    }
    if ( (*(_DWORD *)&v6[10].Length & 0x8001) == 0
      && HIDWORD(WheapPfaLock.RelativeTimerBias)
      && (int)CmpInitBackupHive(v6, CmpMachineHiveList[23 * v3]) < 0 )
    {
      HIDWORD(WheapPfaLock.RelativeTimerBias) = 0;
    }
    goto LABEL_89;
  }
  if ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v12, 3221225524LL) )
    goto LABEL_25;
LABEL_96:
  BYTE1(CmpMachineHiveList[23 * v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[23 * v3 + 11], 0, 0);
  if ( _InterlockedIncrement((_DWORD *)&WheapPfaLock.StackLimit + 1) == 6
    && LODWORD(ExpPlatformBinaryLock.WaitBlockList) < 7 )
  {
    KeSetEvent((PRKEVENT)&CmpContextListLock.StateSaveArea, 0, 0);
  }
  v38 = CmpMachineHiveList[23 * v3 + 22];
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_OWORD *)&CmpMachineHiveList[23 * v3 + 21] = 0LL;
  }
  v46 = (STRING *)(unsigned int)Feature_MachineHiveCache__private_featureState;
  if ( (Feature_MachineHiveCache__private_featureState & 0x10) == 0 )
  {
    *(_QWORD *)Length = __PAIR64__(HIDWORD(v46), Feature_MachineHiveCache__private_featureState | 1u);
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MachineHiveCache__private_descriptor,
      Feature_MachineHiveCache__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      Length[0],
      3,
      (__int64)&Feature_MachineHiveCache__private_descriptor);
  }
  CmpHiveCacheEntryCleanup((char *)&CmpKeyLockTracker.320 + 832 * v3, 6LL);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v54);
  return PsTerminateSystemThread(FileSize);
}

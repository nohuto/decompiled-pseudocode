/*
 * XREFs of CmpFlushHive @ 0x1408B321C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x1404A2354 (CmpDoFlushAll.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmReplaceKey @ 0x140858C90 (CmReplaceKey.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408AF3A0 (CmpTransMgrSyncHive.c)
 *     CmpDoFlushNextHive @ 0x1408B1C20 (CmpDoFlushNextHive.c)
 *     CmpInitHiveFromFile @ 0x1408B48B4 (CmpInitHiveFromFile.c)
 *     CmpCompleteUnloadKey @ 0x1408B9ACC (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x140AAB490 (CmpDoReconcileNextHive.c)
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140212F30 (EtwWriteTransfer.c)
 *     RtlNumberOfSetBits @ 0x140356570 (RtlNumberOfSetBits.c)
 *     HvUnCOWReconciledPages @ 0x140465CE8 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x140465FF0 (RtlMergeBitMaps.c)
 *     CmpArmLazyWriter @ 0x14046ECD0 (CmpArmLazyWriter.c)
 *     HvMarkDirtyForFlush @ 0x1404BBB40 (HvMarkDirtyForFlush.c)
 *     CmpIsWriteQueueActive @ 0x1404BCEB0 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x1404CBF1C (CmpAcquireWriteQueue.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpTraceHiveFlushStop @ 0x1408B3DE0 (CmpTraceHiveFlushStop.c)
 *     CmpTraceHiveFlushStart @ 0x1408B3E6C (CmpTraceHiveFlushStart.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     CmpGenerateFlushControlData @ 0x1408B4088 (CmpGenerateFlushControlData.c)
 *     CmpLogFlushPhaseStart @ 0x1408B4408 (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x1408B44E4 (CmpLogFlushPhaseEnd.c)
 *     CmpReleaseWriteQueue @ 0x1408B45D0 (CmpReleaseWriteQueue.c)
 *     HvStoreModifiedData @ 0x1408B7270 (HvStoreModifiedData.c)
 *     HvFreeDirtyData @ 0x1408C8574 (HvFreeDirtyData.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 *     HvWriteLogFile @ 0x140AAA7F4 (HvWriteLogFile.c)
 *     HvWriteHivePrimaryFile @ 0x140AAAADC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140AAADE0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpFileFlushAndPurge @ 0x140AAAF1C (CmpFileFlushAndPurge.c)
 *     HvSwapLogFiles @ 0x140AAB1BC (HvSwapLogFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140AAB370 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140AAB3EC (HvTruncateAllLogFilesIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140AAB46C (HvpLogTypeToLogArrayIndex.c)
 *     HvFoldBackDirtyData @ 0x140AB20F0 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140AE563C (HvFoldBackUnreconciledData.c)
 *     HvFreeUnreconciledData @ 0x140AE5694 (HvFreeUnreconciledData.c)
 *     CmpWakeWriteQueueWaiters @ 0x140AEAA50 (CmpWakeWriteQueueWaiters.c)
 *     HvIsCurrentLogSwappable @ 0x140B10494 (HvIsCurrentLogSwappable.c)
 *     HvResetLogFileStatusAll @ 0x140B282A8 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B332E8 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140B5A5FC (HvExtendHivePrimaryFileValidDataLength.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR a1, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  __int64 valid; // r15
  unsigned __int16 *v4; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r12d
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  struct _KEVENT *v25; // r13
  bool v26; // r12
  __int64 v27; // rcx
  __int64 v29; // rcx
  int v30; // r8d
  struct _KLOCK_ENTRIES *v31; // r9
  char Size; // r13
  unsigned int Ptr; // esi
  bool v34; // r14
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // r8
  struct _KLOCK_ENTRIES *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // esi
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  struct _KEVENT *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ebx
  unsigned int v58; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v59; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG v60; // [rsp+40h] [rbp-C8h] BYREF
  int v61; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v63; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+68h] [rbp-A0h] BYREF
  int *v65; // [rsp+78h] [rbp-90h]
  int v66; // [rsp+80h] [rbp-88h]
  int v67; // [rsp+84h] [rbp-84h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+88h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  char *v71; // [rsp+A8h] [rbp-60h]
  int v72; // [rsp+B0h] [rbp-58h]
  int v73; // [rsp+B4h] [rbp-54h]
  unsigned int *v74; // [rsp+B8h] [rbp-50h]
  __int64 v75; // [rsp+C0h] [rbp-48h]
  ULONG *v76; // [rsp+C8h] [rbp-40h]
  _QWORD v77[4]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v78[2]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int *v79; // [rsp+F8h] [rbp-10h]
  __int64 v80; // [rsp+100h] [rbp-8h]

  v2 = (unsigned __int16 *)(a1 + 1864);
  LODWORD(valid) = 0;
  v65 = 0LL;
  v4 = (unsigned __int16 *)(a1 + 1848);
  v66 = 0;
  v61 = 0;
  v64 = 0LL;
  if ( (unsigned int)dword_140E09EE8 > 4 )
  {
    v58 = a2;
    v74 = (unsigned int *)v77;
    v76 = *(ULONG **)(a1 + 1872);
    v77[0] = *v2;
    v77[1] = v78;
    v77[3] = *(_QWORD *)(a1 + 1856);
    v78[0] = *v4;
    v79 = &v58;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_140E09EF0;
    v75 = 2LL;
    v77[2] = 2LL;
    v78[1] = 0;
    v80 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_140E09EF0;
    v71 = byte_140055E11;
    UserData.Reserved = 2;
    v72 = 43;
    v73 = 1;
    v59 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F08, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  CmpTraceHiveFlushStart(v4, v2, a2);
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1544) )
    {
      v7 = a2 | 0xC;
      if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
        v7 = a2;
      v58 = (v7 >> 4) & 1;
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= 2 )
          goto LABEL_59;
        if ( (v7 & 1) != 0 )
          CmpLockRegistry();
        else
          CmpLockRegistryFreezeAware(0LL);
        HvLockHiveFlusherExclusive(a1);
        if ( (*(_BYTE *)(a1 + 164) & 4) != 0 && (v7 & 0x40) == 0 )
        {
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v9);
          LODWORD(valid) = -1073741431;
          goto LABEL_59;
        }
        if ( (v7 & 2) != 0
          && (CmpIsWriteQueueActive((_QWORD *)(a1 + 4216))
           || CmpIsWriteQueueActive((_QWORD *)(a1 + 4200)) && (v7 & 4) == 0) )
        {
LABEL_110:
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v50);
          LODWORD(valid) = 0;
          goto LABEL_59;
        }
        if ( (v7 & 4) != 0 && CmpIsWriteQueueActive((_QWORD *)(a1 + 4216)) )
          goto LABEL_89;
        if ( CmpIsWriteQueueActive((_QWORD *)(a1 + 4200)) )
        {
          if ( v30 )
          {
            v51 = 0;
          }
          else if ( *(_DWORD *)(a1 + 104) || (v51 = 2, *(_BYTE *)(a1 + 195)) )
          {
            v51 = 1;
          }
          LODWORD(valid) = CmpWaitOnHiveWriteQueue(a1, v29);
          if ( (int)valid >= 0 )
            v8 += v51;
        }
        else
        {
          CmpGenerateFlushControlData(a1, v7, &v64);
          Size = v64.Size;
          v10 = 4LL;
          Ptr = v64.Ptr;
          if ( (unsigned int)dword_140E09EE8 > 4 )
          {
            v75 = 4LL;
            v63.Keyword = 0LL;
            v74 = &v59;
            v77[0] = 4LL;
            v76 = &v60;
            *(_DWORD *)&v63.Level = 4;
            UserData.Ptr = (ULONGLONG)off_140E09EF0;
            v59 = v64.Ptr;
            v60 = v64.Size;
            *(_DWORD *)&v63.Id = 184549376;
            UserData.Size = *(unsigned __int16 *)off_140E09EF0;
            v71 = &byte_140055D97;
            UserData.Reserved = 2;
            v72 = 63;
            v73 = 1;
            *(_DWORD *)&EventDescriptor.Id = (unsigned int)&TraceLoggingMetadataEnd
                                           - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E09F08, &v63, 0LL, 0LL, 4u, &UserData);
          }
          if ( (Ptr & 8) == 0 && (Ptr & 0x40) == 0 && (Ptr & 0x200) == 0 && (Ptr & 0x10) == 0 && (Ptr & 0x100) == 0 )
            goto LABEL_110;
          if ( (Ptr & 2) == 0 )
            goto LABEL_69;
          if ( !CmpIsWriteQueueActive((_QWORD *)(a1 + 4216)) )
          {
            CmpAcquireWriteQueue(v36, v35, v37, v38);
LABEL_69:
            if ( (Ptr & 1) != 0 )
              CmpAcquireWriteQueue((_QWORD *)(a1 + 4200), v10, v11, v31);
            v34 = (Ptr & 0x10) != 0 || (Ptr & 0x100) != 0;
            if ( (Ptr & 8) == 0 )
            {
LABEL_74:
              if ( ((Ptr >> 6) & 1) != 0 || (Ptr & 0x10) != 0 || (Ptr & 0x100) != 0 )
                goto LABEL_15;
              goto LABEL_16;
            }
            HvLockHiveWriter(a1);
            LODWORD(valid) = HvMarkDirtyForFlush(a1);
            if ( (int)valid < 0 )
            {
              HvUnlockHiveWriter(a1);
              LODWORD(valid) = -1073741823;
            }
            else
            {
              HvUnlockHiveWriter(a1);
              if ( (Ptr & 8) == 0 )
                goto LABEL_74;
LABEL_15:
              LOBYTE(v11) = (Ptr & 0x40) != 0;
              LOBYTE(v10) = v34;
              v12 = HvStoreModifiedData(a1, v10, v11);
              if ( !v12 )
              {
LABEL_16:
                if ( (Ptr & 0x80u) == 0 )
                  goto LABEL_17;
                v14 = *(_DWORD *)(a1 + 4236);
                v57 = *(_DWORD *)(a1 + 280);
                if ( v57 > v14 )
                {
                  v15 = v57 + 4096;
                  *(_DWORD *)(a1 + 4236) = 0;
                }
                else
                {
                  Ptr &= ~0x80u;
LABEL_17:
                  v14 = (unsigned int)v65;
                  v15 = HIDWORD(v65);
                }
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v16);
                if ( (Ptr & 0x80u) == 0 )
                {
                  v18 = BYTE4(v64.Ptr);
                  goto LABEL_20;
                }
                CmpLogFlushPhaseStart(v17, 1LL);
                valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(a1, v15, v58);
                CmpLogFlushPhaseEnd(v47, 1LL, valid);
                v18 = BYTE4(v64.Ptr);
                if ( (int)valid < 0 )
                  goto LABEL_33;
                v18 = BYTE4(v64.Ptr) | 0x21;
LABEL_20:
                if ( ((Ptr >> 3) & 1) != 0 )
                {
                  CmpLogFlushPhaseStart(v17, 2LL);
                  valid = (unsigned int)HvWriteLogFile(a1, v19, &v61);
                  CmpLogFlushPhaseEnd(v20, 2LL, valid);
                  if ( (int)valid >= 0 )
                  {
                    HvTruncateCurrentLogFileIfRequired(a1);
                    v18 |= 2u;
                    goto LABEL_23;
                  }
                  goto LABEL_33;
                }
LABEL_23:
                if ( (Ptr & 0x10) != 0 )
                {
                  CmpLogFlushPhaseStart(v17, 3LL);
                  LOBYTE(v45) = 1;
                  valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(a1, 0LL, v45, v58);
                  CmpLogFlushPhaseEnd(v46, 3LL, valid);
                  if ( (int)valid < 0 )
                  {
                    LOWORD(Ptr) = Ptr | 0x400;
                    goto LABEL_33;
                  }
                  v18 |= 0x20u;
                }
                CmpLogFlushPhaseStart(v17, 4LL);
                if ( ((Ptr >> 3) & 1) != 0 && (Ptr & 0x40) != 0 && (Ptr & 0x400) == 0 )
                {
                  RtlMergeBitMaps(a1 + 1744, (unsigned int *)(a1 + 1688));
                  HvFreeDirtyData(a1);
                  v18 |= 4u;
                }
                CmpLogFlushPhaseEnd(v21, 4LL, (unsigned int)valid);
                if ( (Ptr & 0x20) != 0 )
                {
                  LOBYTE(v22) = (Size & 4) != 0;
                  HvSwapLogFiles(a1, v22);
                  v18 |= 8u;
                }
                if ( (Ptr & 1) != 0 )
                {
                  if ( (Ptr & 0x40) != 0 )
                  {
                    if ( (Ptr & 4) == 0 )
                    {
                      CmpLockRegistry();
                      HvLockHiveFlusherExclusive(a1);
                      v55 = (struct _KEVENT *)CmpReleaseWriteQueue(v54, a1 + 4200);
                      CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4200), v55);
                      v18 |= 0x10u;
                      HvUnlockHiveFlusherExclusive(a1);
                      CmpUnlockRegistry(v56);
                    }
                    goto LABEL_28;
                  }
LABEL_29:
                  v24 = v58;
                }
                else
                {
LABEL_28:
                  if ( (Ptr & 0x40) == 0 )
                    goto LABEL_29;
                  CmpLogFlushPhaseStart(v23, 5LL);
                  v24 = v58;
                  LOBYTE(v39) = 1;
                  valid = (unsigned int)HvWriteHivePrimaryFile(a1, v39, v58);
                  CmpLogFlushPhaseEnd(v40, 5LL, valid);
                  if ( (int)valid < 0 )
                    goto LABEL_33;
                  v18 |= 0x20u;
                }
                if ( (Ptr & 0x100) != 0 )
                {
                  CmpLogFlushPhaseStart(v23, 6LL);
                  LOBYTE(v41) = 1;
                  LOBYTE(v42) = 1;
                  valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(a1, v42, v41, v24);
                  CmpLogFlushPhaseEnd(v43, 6LL, valid);
                  if ( (int)valid < 0 )
                    goto LABEL_33;
                  v18 |= 0x20u;
                  HvTruncateAllLogFilesIfRequired(a1);
                }
                if ( (Ptr & 0x200) != 0 && (v18 & 0x20) == 0 )
                {
                  CmpLogFlushPhaseStart(v23, 7LL);
                  if ( (int)CmpFileFlushAndPurge(a1, 0LL) >= 0 )
                    v18 |= 0x20u;
                  CmpLogFlushPhaseEnd(v44, 7LL, (v18 & 0x20) == 0 ? 0xC0000001 : 0);
                }
                LODWORD(valid) = 0;
LABEL_33:
                CmpLockRegistry();
                HvLockHiveFlusherExclusive(a1);
                if ( (int)valid < 0 && (Ptr & 0x80u) != 0 && (v18 & 1) == 0 )
                  *(_DWORD *)(a1 + 4236) = v14;
                if ( (v18 & 0x20) != 0 )
                {
                  *(_DWORD *)(a1 + 4232) |= 1u;
                  *(_DWORD *)(a1 + 4236) = 0;
                }
                if ( (int)valid < 0 )
                {
                  if ( (v18 & 2) != 0 && (Ptr & 0x400) != 0 )
                  {
                    *(_DWORD *)(a1 + 180) -= v61;
                    --*(_DWORD *)(a1 + 172);
                    v18 &= ~2u;
                  }
                }
                else
                {
                  if ( (Ptr & 0x800) == 0 )
                    goto LABEL_38;
                  *(_QWORD *)(a1 + 4152) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
                  if ( (Ptr & 0x1000) != 0 )
                    goto LABEL_39;
                  CmpArmLazyWriter(1, 0LL, 0);
LABEL_38:
                  if ( (Ptr & 0x1000) != 0 )
LABEL_39:
                    CmpArmLazyWriter(1, 0LL, 1);
                }
                if ( (Ptr & 0x40) != 0 )
                {
                  if ( (int)valid >= 0 )
                  {
                    HvUnCOWReconciledPages(a1);
                    HvFreeUnreconciledData(a1);
                    if ( (Ptr & 1) == 0 || (v18 & 0x10) != 0 )
                    {
                      v53 = *(_DWORD *)(a1 + 168);
                      if ( v53 == 4 || v53 == 5 )
                      {
                        v13 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v53 != 4), v48, v49);
                        *(_BYTE *)(v13 + a1 + 192) = 0;
                      }
                    }
                    else
                    {
                      HvResetLogFileStatusAll(a1);
                      *(_DWORD *)(a1 + 180) = 0;
                      if ( (unsigned __int8)HvIsCurrentLogSwappable() )
                        HvSwapLogFiles(v13, 0LL);
                    }
                  }
                  else
                  {
                    HvFoldBackUnreconciledData(a1);
                  }
                }
                if ( (Ptr & 0x10) != 0 || (Ptr & 0x100) != 0 )
                  HvFreeUnreconciledData(a1);
                if ( (Ptr & 8) != 0 && (v18 & 4) == 0 )
                {
                  if ( (v18 & 2) != 0 )
                  {
                    if ( (Ptr & 0x40) == 0 )
                    {
                      RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1688));
                      *(_DWORD *)(a1 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
                    }
                    HvFreeDirtyData(a1);
                  }
                  else
                  {
                    HvFoldBackDirtyData(a1);
                  }
                }
LABEL_49:
                v25 = 0LL;
                *(_QWORD *)&EventDescriptor.Id = 0LL;
                v26 = (Ptr & 1) != 0 && (v18 & 0x10) == 0;
                if ( v26 )
                  *(_QWORD *)&EventDescriptor.Id = CmpReleaseWriteQueue(v13, a1 + 4200);
                if ( (Ptr & 2) != 0 )
                  v25 = (struct _KEVENT *)CmpReleaseWriteQueue(v13, a1 + 4216);
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v27);
                if ( v26 )
                  CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4200), *(PRKEVENT *)&EventDescriptor.Id);
                if ( (Ptr & 2) != 0 )
                  CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4216), v25);
                goto LABEL_59;
              }
              v52 = v12 - 1;
              if ( !v52 )
              {
                LODWORD(valid) = 0;
                v18 = BYTE4(v64.Ptr) | 2;
                goto LABEL_49;
              }
              LODWORD(valid) = -1073741823;
              if ( v52 != 1 )
                goto LABEL_16;
            }
            v18 = BYTE4(v64.Ptr);
            goto LABEL_49;
          }
LABEL_89:
          CmpWaitOnHiveWriteQueue(a1, v36);
        }
      }
    }
    LODWORD(valid) = -1073741811;
  }
LABEL_59:
  CmpTraceHiveFlushStop((unsigned int)valid);
  if ( (unsigned int)dword_140E09EE8 > 4 )
  {
    *(_DWORD *)&EventDescriptor.Id = valid;
    p_EventDescriptor = &EventDescriptor;
    *(_DWORD *)&v63.Level = 516;
    v64.Ptr = (ULONGLONG)off_140E09EF0;
    v69 = 4LL;
    *(_DWORD *)&v63.Id = 184549376;
    v63.Keyword = 0LL;
    v64.Size = *(unsigned __int16 *)off_140E09EF0;
    v65 = &dword_140055D74;
    v64.Reserved = 2;
    v66 = 23;
    v67 = 1;
    v60 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F08, &v63, 0LL, 0LL, 3u, &v64);
  }
  return (unsigned int)valid;
}

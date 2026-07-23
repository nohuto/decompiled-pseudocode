/*
 * XREFs of CmpFlushHive @ 0x1408B97F0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpDoFlushAll @ 0x14049BE84 (CmpDoFlushAll.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1408B57AC (CmpTransMgrSyncHive.c)
 *     CmpDoFlushNextHive @ 0x1408B8230 (CmpDoFlushNextHive.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmpCompleteUnloadKey @ 0x1408C009C (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x140AA8A70 (CmpDoReconcileNextHive.c)
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     HvUnCOWReconciledPages @ 0x14045EE58 (HvUnCOWReconciledPages.c)
 *     RtlMergeBitMaps @ 0x14045F150 (RtlMergeBitMaps.c)
 *     CmpArmLazyWriter @ 0x140468450 (CmpArmLazyWriter.c)
 *     HvMarkDirtyForFlush @ 0x1404B5320 (HvMarkDirtyForFlush.c)
 *     CmpIsWriteQueueActive @ 0x1404B6690 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x1404C594C (CmpAcquireWriteQueue.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpTraceHiveFlushStop @ 0x1408BA3B4 (CmpTraceHiveFlushStop.c)
 *     CmpTraceHiveFlushStart @ 0x1408BA440 (CmpTraceHiveFlushStart.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpGenerateFlushControlData @ 0x1408BA65C (CmpGenerateFlushControlData.c)
 *     CmpLogFlushPhaseStart @ 0x1408BA9DC (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x1408BAAB8 (CmpLogFlushPhaseEnd.c)
 *     CmpReleaseWriteQueue @ 0x1408BABA4 (CmpReleaseWriteQueue.c)
 *     HvStoreModifiedData @ 0x1408BD840 (HvStoreModifiedData.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvWriteLogFile @ 0x140AA7DD4 (HvWriteLogFile.c)
 *     HvWriteHivePrimaryFile @ 0x140AA80BC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140AA83C0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpFileFlushAndPurge @ 0x140AA84FC (CmpFileFlushAndPurge.c)
 *     HvSwapLogFiles @ 0x140AA879C (HvSwapLogFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140AA8950 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x140AA89CC (HvTruncateAllLogFilesIfRequired.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140AA8A4C (HvpLogTypeToLogArrayIndex.c)
 *     HvFoldBackDirtyData @ 0x140AAFDC4 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140AE33FC (HvFoldBackUnreconciledData.c)
 *     HvFreeUnreconciledData @ 0x140AE3454 (HvFreeUnreconciledData.c)
 *     CmpWakeWriteQueueWaiters @ 0x140AED540 (CmpWakeWriteQueueWaiters.c)
 *     HvIsCurrentLogSwappable @ 0x140B11ED4 (HvIsCurrentLogSwappable.c)
 *     HvResetLogFileStatusAll @ 0x140B2A5D8 (HvResetLogFileStatusAll.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140B35738 (CmpWaitOnHiveWriteQueue.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140B5D918 (HvExtendHivePrimaryFileValidDataLength.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpFlushHive(ULONG_PTR a1, unsigned int a2)
{
  unsigned __int16 *v2; // rbx
  __int64 valid; // r15
  unsigned __int16 *v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r12d
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // ebx
  struct _KEVENT *v30; // r13
  bool v31; // r12
  __int64 v32; // rcx
  __int64 v34; // rcx
  int v35; // r8d
  struct _KLOCK_ENTRIES *v36; // r9
  char Size; // r13
  unsigned int Ptr; // esi
  bool v39; // r14
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // r8
  struct _KLOCK_ENTRIES *v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  int v56; // esi
  int v57; // eax
  int v58; // eax
  __int64 v59; // rcx
  struct _KEVENT *v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // ebx
  ULONG UserDataCount[2]; // [rsp+28h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D8h]
  __int64 v65; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v66; // [rsp+40h] [rbp-C8h] BYREF
  int v67; // [rsp+44h] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v69; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+68h] [rbp-A0h] BYREF
  char *v71; // [rsp+78h] [rbp-90h]
  int v72; // [rsp+80h] [rbp-88h]
  int v73; // [rsp+84h] [rbp-84h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+88h] [rbp-80h]
  __int64 v75; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+98h] [rbp-70h] BYREF
  __int16 *v77; // [rsp+A8h] [rbp-60h]
  int v78; // [rsp+B0h] [rbp-58h]
  int v79; // [rsp+B4h] [rbp-54h]
  char *v80; // [rsp+B8h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-48h]
  ULONG *v82; // [rsp+C8h] [rbp-40h]
  _QWORD v83[4]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v84[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 *v85; // [rsp+F8h] [rbp-10h]
  __int64 v86; // [rsp+100h] [rbp-8h]

  v2 = (unsigned __int16 *)(a1 + 1864);
  LODWORD(valid) = 0;
  v71 = 0LL;
  v4 = (unsigned __int16 *)(a1 + 1848);
  v72 = 0;
  v67 = 0;
  v70 = 0LL;
  if ( (unsigned int)dword_140E09EE8 > 4 )
  {
    LODWORD(v65) = a2;
    v80 = (char *)v83;
    v82 = *(ULONG **)(a1 + 1872);
    v83[0] = *v2;
    v83[1] = v84;
    v83[3] = *(_QWORD *)(a1 + 1856);
    v84[0] = *v4;
    v85 = &v65;
    *(_DWORD *)&EventDescriptor.Level = 260;
    v76.Ptr = (ULONGLONG)off_140E09EF0;
    v81 = 2LL;
    v83[2] = 2LL;
    v84[1] = 0;
    v86 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    v76.Size = *(unsigned __int16 *)off_140E09EF0;
    v77 = word_140056D8A;
    v76.Reserved = 2;
    v78 = 43;
    v79 = 1;
    HIDWORD(v65) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F08, &EventDescriptor, 0LL, 0LL, 7u, &v76);
  }
  CmpTraceHiveFlushStart(v4, v2, a2);
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1544) )
    {
      v11 = a2 | 0xC;
      if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
        v11 = a2;
      LODWORD(v65) = (v11 >> 4) & 1;
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= 2 )
          goto LABEL_59;
        if ( (v11 & 1) != 0 )
          CmpLockRegistry(v8, v7, v9, v10, *(_QWORD *)UserDataCount, UserData, v65);
        else
          CmpLockRegistryFreezeAware(0LL);
        HvLockHiveFlusherExclusive(a1);
        if ( (*(_BYTE *)(a1 + 164) & 4) != 0 && (v11 & 0x40) == 0 )
        {
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v13);
          LODWORD(valid) = -1073741431;
          goto LABEL_59;
        }
        if ( (v11 & 2) != 0
          && (CmpIsWriteQueueActive((_QWORD *)(a1 + 4216))
           || CmpIsWriteQueueActive((_QWORD *)(a1 + 4200)) && (v11 & 4) == 0) )
        {
LABEL_110:
          HvUnlockHiveFlusherExclusive(a1);
          CmpUnlockRegistry(v55);
          LODWORD(valid) = 0;
          goto LABEL_59;
        }
        if ( (v11 & 4) != 0 && CmpIsWriteQueueActive((_QWORD *)(a1 + 4216)) )
          goto LABEL_89;
        if ( CmpIsWriteQueueActive((_QWORD *)(a1 + 4200)) )
        {
          if ( v35 )
          {
            v56 = 0;
          }
          else if ( *(_DWORD *)(a1 + 104) || (v56 = 2, *(_BYTE *)(a1 + 195)) )
          {
            v56 = 1;
          }
          LODWORD(valid) = CmpWaitOnHiveWriteQueue(a1, v34);
          if ( (int)valid >= 0 )
            v12 += v56;
        }
        else
        {
          CmpGenerateFlushControlData(a1, v11, &v70);
          Size = v70.Size;
          v14 = 4LL;
          Ptr = v70.Ptr;
          if ( (unsigned int)dword_140E09EE8 > 4 )
          {
            v81 = 4LL;
            v69.Keyword = 0LL;
            v80 = (char *)&v65 + 4;
            v83[0] = 4LL;
            v82 = &v66;
            *(_DWORD *)&v69.Level = 4;
            v76.Ptr = (ULONGLONG)off_140E09EF0;
            HIDWORD(v65) = v70.Ptr;
            v66 = v70.Size;
            *(_DWORD *)&v69.Id = 184549376;
            v76.Size = *(unsigned __int16 *)off_140E09EF0;
            v77 = (__int16 *)byte_140056DC1;
            v76.Reserved = 2;
            v78 = 63;
            v79 = 1;
            *(_DWORD *)&EventDescriptor.Id = (unsigned int)&TraceLoggingMetadataEnd
                                           - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_140E09F08, &v69, 0LL, 0LL, 4u, &v76);
          }
          if ( (Ptr & 8) == 0 && (Ptr & 0x40) == 0 && (Ptr & 0x200) == 0 && (Ptr & 0x10) == 0 && (Ptr & 0x100) == 0 )
            goto LABEL_110;
          if ( (Ptr & 2) == 0 )
            goto LABEL_69;
          if ( !CmpIsWriteQueueActive((_QWORD *)(a1 + 4216)) )
          {
            CmpAcquireWriteQueue(v41, v40, v42, v43);
LABEL_69:
            if ( (Ptr & 1) != 0 )
              CmpAcquireWriteQueue((_QWORD *)(a1 + 4200), v14, v15, v36);
            v39 = (Ptr & 0x10) != 0 || (Ptr & 0x100) != 0;
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
              LOBYTE(v15) = (Ptr & 0x40) != 0;
              LOBYTE(v14) = v39;
              v16 = HvStoreModifiedData(a1, v14, v15);
              if ( !v16 )
              {
LABEL_16:
                if ( (Ptr & 0x80u) == 0 )
                  goto LABEL_17;
                v18 = *(_DWORD *)(a1 + 4236);
                v62 = *(_DWORD *)(a1 + 280);
                if ( v62 > v18 )
                {
                  v19 = v62 + 4096;
                  *(_DWORD *)(a1 + 4236) = 0;
                }
                else
                {
                  Ptr &= ~0x80u;
LABEL_17:
                  v18 = (unsigned int)v71;
                  v19 = HIDWORD(v71);
                }
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v20);
                if ( (Ptr & 0x80u) == 0 )
                {
                  v22 = BYTE4(v70.Ptr);
                  goto LABEL_20;
                }
                CmpLogFlushPhaseStart(v21, 1LL);
                valid = (unsigned int)HvExtendHivePrimaryFileValidDataLength(a1, v19, (unsigned int)v65);
                CmpLogFlushPhaseEnd(v52, 1LL, valid);
                v22 = BYTE4(v70.Ptr);
                if ( (int)valid < 0 )
                  goto LABEL_33;
                v22 = BYTE4(v70.Ptr) | 0x21;
LABEL_20:
                if ( ((Ptr >> 3) & 1) != 0 )
                {
                  CmpLogFlushPhaseStart(v21, 2LL);
                  valid = (unsigned int)HvWriteLogFile(a1, v23, &v67);
                  CmpLogFlushPhaseEnd(v24, 2LL, valid);
                  if ( (int)valid >= 0 )
                  {
                    HvTruncateCurrentLogFileIfRequired(a1);
                    v22 |= 2u;
                    goto LABEL_23;
                  }
                  goto LABEL_33;
                }
LABEL_23:
                if ( (Ptr & 0x10) != 0 )
                {
                  CmpLogFlushPhaseStart(v21, 3LL);
                  LOBYTE(v50) = 1;
                  valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(a1, 0LL, v50, (unsigned int)v65);
                  CmpLogFlushPhaseEnd(v51, 3LL, valid);
                  if ( (int)valid < 0 )
                  {
                    LOWORD(Ptr) = Ptr | 0x400;
                    goto LABEL_33;
                  }
                  v22 |= 0x20u;
                }
                CmpLogFlushPhaseStart(v21, 4LL);
                if ( ((Ptr >> 3) & 1) != 0 && (Ptr & 0x40) != 0 && (Ptr & 0x400) == 0 )
                {
                  RtlMergeBitMaps(a1 + 1744, (unsigned int *)(a1 + 1688));
                  HvFreeDirtyData(a1);
                  v22 |= 4u;
                }
                CmpLogFlushPhaseEnd(v28, 4LL, (unsigned int)valid);
                if ( (Ptr & 0x20) != 0 )
                {
                  LOBYTE(v25) = (Size & 4) != 0;
                  HvSwapLogFiles(a1, v25);
                  v22 |= 8u;
                }
                if ( (Ptr & 1) != 0 )
                {
                  if ( (Ptr & 0x40) != 0 )
                  {
                    if ( (Ptr & 4) == 0 )
                    {
                      CmpLockRegistry(v21, v25, v26, v27, *(_QWORD *)UserDataCount, UserData, v65);
                      HvLockHiveFlusherExclusive(a1);
                      v60 = (struct _KEVENT *)CmpReleaseWriteQueue(v59, a1 + 4200);
                      CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4200), v60);
                      v22 |= 0x10u;
                      HvUnlockHiveFlusherExclusive(a1);
                      CmpUnlockRegistry(v61);
                    }
                    goto LABEL_28;
                  }
LABEL_29:
                  v29 = v65;
                }
                else
                {
LABEL_28:
                  if ( (Ptr & 0x40) == 0 )
                    goto LABEL_29;
                  CmpLogFlushPhaseStart(v21, 5LL);
                  v29 = v65;
                  LOBYTE(v44) = 1;
                  valid = (unsigned int)HvWriteHivePrimaryFile(a1, v44, (unsigned int)v65);
                  CmpLogFlushPhaseEnd(v45, 5LL, valid);
                  if ( (int)valid < 0 )
                    goto LABEL_33;
                  v22 |= 0x20u;
                }
                if ( (Ptr & 0x100) != 0 )
                {
                  CmpLogFlushPhaseStart(v21, 6LL);
                  LOBYTE(v46) = 1;
                  LOBYTE(v47) = 1;
                  valid = (unsigned int)HvValidateOrInvalidatePrimaryFileHeader(a1, v47, v46, v29);
                  CmpLogFlushPhaseEnd(v48, 6LL, valid);
                  if ( (int)valid < 0 )
                    goto LABEL_33;
                  v22 |= 0x20u;
                  HvTruncateAllLogFilesIfRequired(a1);
                }
                if ( (Ptr & 0x200) != 0 && (v22 & 0x20) == 0 )
                {
                  CmpLogFlushPhaseStart(v21, 7LL);
                  if ( (int)CmpFileFlushAndPurge(a1, 0LL) >= 0 )
                    v22 |= 0x20u;
                  CmpLogFlushPhaseEnd(v49, 7LL, (v22 & 0x20) == 0 ? 0xC0000001 : 0);
                }
                LODWORD(valid) = 0;
LABEL_33:
                CmpLockRegistry(v21, v25, v26, v27, *(_QWORD *)UserDataCount, UserData, v65);
                HvLockHiveFlusherExclusive(a1);
                if ( (int)valid < 0 && (Ptr & 0x80u) != 0 && (v22 & 1) == 0 )
                  *(_DWORD *)(a1 + 4236) = v18;
                if ( (v22 & 0x20) != 0 )
                {
                  *(_DWORD *)(a1 + 4232) |= 1u;
                  *(_DWORD *)(a1 + 4236) = 0;
                }
                if ( (int)valid < 0 )
                {
                  if ( (v22 & 2) != 0 && (Ptr & 0x400) != 0 )
                  {
                    *(_DWORD *)(a1 + 180) -= v67;
                    --*(_DWORD *)(a1 + 172);
                    v22 &= ~2u;
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
                    if ( (Ptr & 1) == 0 || (v22 & 0x10) != 0 )
                    {
                      v58 = *(_DWORD *)(a1 + 168);
                      if ( v58 == 4 || v58 == 5 )
                      {
                        v17 = (unsigned int)HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v58 != 4), v53, v54);
                        *(_BYTE *)(v17 + a1 + 192) = 0;
                      }
                    }
                    else
                    {
                      HvResetLogFileStatusAll(a1);
                      *(_DWORD *)(a1 + 180) = 0;
                      if ( (unsigned __int8)HvIsCurrentLogSwappable() )
                        HvSwapLogFiles(v17, 0LL);
                    }
                  }
                  else
                  {
                    HvFoldBackUnreconciledData(a1);
                  }
                }
                if ( (Ptr & 0x10) != 0 || (Ptr & 0x100) != 0 )
                  HvFreeUnreconciledData(a1);
                if ( (Ptr & 8) != 0 && (v22 & 4) == 0 )
                {
                  if ( (v22 & 2) != 0 )
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
                v30 = 0LL;
                *(_QWORD *)&EventDescriptor.Id = 0LL;
                v31 = (Ptr & 1) != 0 && (v22 & 0x10) == 0;
                if ( v31 )
                  *(_QWORD *)&EventDescriptor.Id = CmpReleaseWriteQueue(v17, a1 + 4200);
                if ( (Ptr & 2) != 0 )
                  v30 = (struct _KEVENT *)CmpReleaseWriteQueue(v17, a1 + 4216);
                HvUnlockHiveFlusherExclusive(a1);
                CmpUnlockRegistry(v32);
                if ( v31 )
                  CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4200), *(PRKEVENT *)&EventDescriptor.Id);
                if ( (Ptr & 2) != 0 )
                  CmpWakeWriteQueueWaiters((struct _KTHREAD *)(a1 + 4216), v30);
                goto LABEL_59;
              }
              v57 = v16 - 1;
              if ( !v57 )
              {
                LODWORD(valid) = 0;
                v22 = BYTE4(v70.Ptr) | 2;
                goto LABEL_49;
              }
              LODWORD(valid) = -1073741823;
              if ( v57 != 1 )
                goto LABEL_16;
            }
            v22 = BYTE4(v70.Ptr);
            goto LABEL_49;
          }
LABEL_89:
          CmpWaitOnHiveWriteQueue(a1, v41);
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
    *(_DWORD *)&v69.Level = 516;
    v70.Ptr = (ULONGLONG)off_140E09EF0;
    v75 = 4LL;
    *(_DWORD *)&v69.Id = 184549376;
    v69.Keyword = 0LL;
    v70.Size = *(unsigned __int16 *)off_140E09EF0;
    v71 = &byte_140056D67;
    v70.Reserved = 2;
    v72 = 23;
    v73 = 1;
    v66 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F08, &v69, 0LL, 0LL, 3u, &v70);
  }
  return (unsigned int)valid;
}

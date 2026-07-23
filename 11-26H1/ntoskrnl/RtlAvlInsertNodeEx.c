/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1402EEAE0
 * Callers:
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiActivateCombineBlock @ 0x1402EDA68 (MiActivateCombineBlock.c)
 *     MiRemoveEntryNotifySentinel @ 0x1402EE30C (MiRemoveEntryNotifySentinel.c)
 *     MiRemoveListSentinel @ 0x1402EE518 (MiRemoveListSentinel.c)
 *     IopMcAddMdlPagesToTable @ 0x1402EF218 (IopMcAddMdlPagesToTable.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 *     MiUpdateDriverLoadInProgress @ 0x1404294E0 (MiUpdateDriverLoadInProgress.c)
 *     MiInsertSubsectionNode @ 0x140482AB0 (MiInsertSubsectionNode.c)
 *     MiInsertMappingNode @ 0x1404D2228 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x1404D97AC (MiUpdatePerSessionProto.c)
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiAddMdlTracker @ 0x1404ED400 (MiAddMdlTracker.c)
 *     MiInsertClone @ 0x1404F0180 (MiInsertClone.c)
 *     MiCreateKernelStackNode @ 0x14050DB4C (MiCreateKernelStackNode.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140619A30 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x140619BC8 (PsLoadVsmEnclaveData.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1406EF760 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406F144C (MiMarkHugePfnBad.c)
 *     MiAddPendingBadPageNode @ 0x1406F5830 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x1406F5980 (MiCheckLostBadPageNode.c)
 *     MiCreateIoPageExclusion @ 0x1406F8618 (MiCreateIoPageExclusion.c)
 *     MiMakeIoRangePermanent @ 0x1406F93D0 (MiMakeIoRangePermanent.c)
 *     MiUpdatePageFileList @ 0x1406FDC54 (MiUpdatePageFileList.c)
 *     MiInsertExtentList @ 0x1406FF328 (MiInsertExtentList.c)
 *     MmManageFaultRange @ 0x140704668 (MmManageFaultRange.c)
 *     MiAweViewInserter @ 0x140705814 (MiAweViewInserter.c)
 *     MiCombiningInProgress @ 0x1407094C0 (MiCombiningInProgress.c)
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14070DA30 (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x14070DDA8 (MiMergePageNodes.c)
 *     MiRemovePartitionPages @ 0x14070E330 (MiRemovePartitionPages.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140714D44 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertBasedSection @ 0x140777714 (MiInsertBasedSection.c)
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14080F038 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x14080F0E4 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertHotPatchRecord @ 0x140876C5C (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140876E0C (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140876F28 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 *     MiInsertSharedCommitNode @ 0x140997340 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 *     PspMakeSessionVisible @ 0x140B57978 (PspMakeSessionVisible.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 *     MiInitializeDriverPtes @ 0x140CFAA44 (MiInitializeDriverPtes.c)
 *     MiCreateEnclaveRegions @ 0x140D032F4 (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x14061CC2C (RtlpRbReportFatalError.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  char v8; // cl
  unsigned __int8 v9; // si
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _BOOL8 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rbp
  _QWORD *v21; // r12
  __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  char v24; // dl
  _BOOL8 v25; // rbp
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  _QWORD *v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rax

  LOBYTE(v4) = 0;
  a4[2] = a2;
  *a4 = 0LL;
  v5 = (unsigned __int64)a4;
  a4[1] = 0LL;
  v6 = a2;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  while ( 1 )
  {
    v8 = *(_BYTE *)(v6 + 16);
    LOBYTE(v4) = 2 * a3 - 1;
    v9 = v8 & 3;
    if ( (v8 & 3) != 0 )
      break;
    v5 = v6;
    LOBYTE(v4) = v8 ^ (v8 ^ v4) & 3;
    *(_BYTE *)(v6 + 16) = v4;
    v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v6 )
      return v4;
    a3 = *(_QWORD *)v6 != v5;
  }
  if ( v9 != (v4 & 3) )
  {
    *(_BYTE *)(v6 + 16) = v8 & 0xFC;
    return v4;
  }
  if ( (*(_BYTE *)(v5 + 16) & 3) != v9 )
  {
    v10 = *(_QWORD *)v5;
    if ( !a3 )
      v10 = *(_QWORD *)(v5 + 8);
    v11 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v11 != v5 )
      RtlpRbReportFatalError(v11, v5, v10);
    v12 = *(_QWORD *)(v5 + 8 * !a3);
    if ( v12 != v10 )
      RtlpRbReportFatalError(v12, v10, v5);
    v13 = *(_QWORD **)(v6 + 8LL * a3);
    if ( v13 != (_QWORD *)v5 )
      RtlpRbReportFatalError(v13, v5, v6);
    v14 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v14 != v6 )
      RtlpRbReportFatalError(v14, v6, v5);
    *(_QWORD *)(v6 + 8LL * a3) = v10;
    *(_QWORD *)(v10 + 16) = v6 | *(_DWORD *)(v10 + 16) & 3;
    v15 = *(_QWORD *)(v10 + 8LL * a3);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v16 != v10 )
        RtlpRbReportFatalError(v16, v10, *(_QWORD *)(v10 + 8LL * a3));
      *(_QWORD *)(v15 + 16) = v5 | *(_DWORD *)(v15 + 16) & 3;
    }
    *(_QWORD *)(v5 + 8 * !a3) = v15;
    *(_QWORD *)(v10 + 8LL * a3) = v5;
    *(_QWORD *)(v5 + 16) = v10 | *(_DWORD *)(v5 + 16) & 3;
    v17 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v17 != v6 )
      RtlpRbReportFatalError(v17, v6, v10);
    v18 = !a3;
    v19 = *(_QWORD *)(v6 + 8LL * a3);
    if ( v19 != v10 )
      RtlpRbReportFatalError(v19, v10, v6);
    v20 = *(_QWORD *)(v6 + 16);
    v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (v20 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      if ( v21[1] == v6 )
      {
        v21[1] = v10;
LABEL_31:
        *(_QWORD *)(v10 + 16) ^= (*(_QWORD *)(v10 + 16) ^ v20) & 0xFFFFFFFFFFFFFFFCuLL;
        v22 = *(_QWORD *)(v10 + 8 * v18);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v23 != v10 )
            RtlpRbReportFatalError(v23, v10, *(_QWORD *)(v10 + 8 * v18));
          *(_QWORD *)(v22 + 16) = v6 | *(_DWORD *)(v22 + 16) & 3;
        }
        *(_QWORD *)(v6 + 8LL * a3) = v22;
        *(_QWORD *)(v10 + 8 * v18) = v6;
        v4 = v10 | *(_DWORD *)(v6 + 16) & 3;
        *(_QWORD *)(v6 + 16) = v4;
        *(_BYTE *)(v6 + 16) = v4 & 0xFC;
        v24 = *(_BYTE *)(v5 + 16);
        *(_BYTE *)(v5 + 16) = v24 & 0xFC;
        LODWORD(v4) = *(_BYTE *)(v10 + 16) & 3;
        if ( v9 == (_DWORD)v4 )
        {
          LOBYTE(v4) = *(_BYTE *)(v6 + 16);
          *(_BYTE *)(v6 + 16) = v4 ^ (v9 ^ v4 ^ 0xFE) & 3;
        }
        else if ( v9 == ((*(_BYTE *)(v10 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v24 ^ (v9 ^ v24) & 3;
          *(_BYTE *)(v5 + 16) = v4;
        }
        *(_BYTE *)(v10 + 16) &= 0xFCu;
        return v4;
      }
    }
    else
    {
      v21 = a1;
    }
    if ( *v21 != v6 )
      RtlpRbReportFatalError(*v21, v6, v21);
    *v21 = v10;
    goto LABEL_31;
  }
  v25 = !a3;
  v26 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v26 != v6 )
    RtlpRbReportFatalError(v26, v6, v5);
  v27 = *(_QWORD **)(v6 + 8LL * a3);
  if ( v27 != (_QWORD *)v5 )
    RtlpRbReportFatalError(v27, v5, v6);
  v28 = *(_QWORD *)(v6 + 16);
  v29 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (v28 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( v29[1] == v6 )
    {
      v29[1] = v5;
    }
    else
    {
      if ( *v29 != v6 )
        RtlpRbReportFatalError(*v29, v6, *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
      *v29 = v5;
    }
  }
  else
  {
    if ( *a1 != v6 )
      RtlpRbReportFatalError(*a1, v6, a1);
    *a1 = v5;
  }
  *(_QWORD *)(v5 + 16) ^= (*(_QWORD *)(v5 + 16) ^ v28) & 0xFFFFFFFFFFFFFFFCuLL;
  v30 = *(_QWORD *)(v5 + 8 * v25);
  if ( v30 )
  {
    v31 = *(_QWORD *)(v30 + 16);
    if ( (v31 & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
      RtlpRbReportFatalError(v31 & 0xFFFFFFFFFFFFFFFCuLL, v5, *(_QWORD *)(v5 + 8 * v25));
    *(_QWORD *)(v30 + 16) = v6 | v31 & 3;
  }
  *(_QWORD *)(v6 + 8LL * a3) = v30;
  *(_QWORD *)(v5 + 8 * v25) = v6;
  v4 = v5 | *(_DWORD *)(v6 + 16) & 3;
  *(_QWORD *)(v6 + 16) = v4;
  *(_BYTE *)(v5 + 16) &= 0xFCu;
  *(_BYTE *)(v6 + 16) &= 0xFCu;
  return v4;
}

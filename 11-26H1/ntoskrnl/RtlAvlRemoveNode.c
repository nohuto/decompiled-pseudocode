/*
 * XREFs of RtlAvlRemoveNode @ 0x14030C5E0
 * Callers:
 *     MiFreeCombineBlock @ 0x1402C67C4 (MiFreeCombineBlock.c)
 *     MiRemoveEntryNotifySentinel @ 0x14030C28C (MiRemoveEntryNotifySentinel.c)
 *     MiRemoveListSentinel @ 0x14030C498 (MiRemoveListSentinel.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14030D88C (IopMcRemoveMdlPagesFromTable.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 *     MiRemoveLoaderEntry @ 0x14040D04C (MiRemoveLoaderEntry.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     MiRemoveVad @ 0x140455D20 (MiRemoveVad.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140458D20 (MiUpdateSystemProtoPtesTree.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiRemoveClone @ 0x1404AFC88 (MiRemoveClone.c)
 *     MiRemoveMappingNode @ 0x1404D7514 (MiRemoveMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x1404E00CC (MiUpdatePerSessionProto.c)
 *     MiRemoveFaultNode @ 0x1404F6A18 (MiRemoveFaultNode.c)
 *     MiDeleteKernelStackNode @ 0x14052D020 (MiDeleteKernelStackNode.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140616A40 (PsAdjustBasicEnclaveThreadList.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1406EAAC0 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x1406EC6B8 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnGood @ 0x1406ECDE4 (MiMarkHugePfnGood.c)
 *     MiRemovePendingBadPageNode @ 0x1406F1970 (MiRemovePendingBadPageNode.c)
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 *     MiRemoveIoPageExclusion @ 0x1406F4DF4 (MiRemoveIoPageExclusion.c)
 *     MiUpdatePageFileList @ 0x1406F8F84 (MiUpdatePageFileList.c)
 *     MiInsertCopyExtents @ 0x1406FA5AC (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x1406FA964 (MiMergeCopyExtents.c)
 *     MmManageFaultRange @ 0x1406FF998 (MmManageFaultRange.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1407028D4 (MiRemoveUserPhysicalPagesView.c)
 *     MiCombiningInProgress @ 0x1407047F0 (MiCombiningInProgress.c)
 *     MiClearRangeInPartitionTree @ 0x140708938 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x140708B00 (MiDeletePartitionPageNodes.c)
 *     MiFreePartitionTree @ 0x140708D7C (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x1407090F4 (MiMergePageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x1407094E0 (MiPartitionDeleteMemoryNode.c)
 *     MiRemovePartitionPages @ 0x14070967C (MiRemovePartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x1407098B8 (MiReturnPartitionPagesToParent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140710048 (MiReplaceSystemProtoPtesNode.c)
 *     MiDeleteFileExtentList @ 0x1407705B4 (MiDeleteFileExtentList.c)
 *     PsCallEnclave @ 0x1407FE1F0 (PsCallEnclave.c)
 *     PspUnlinkSessionId @ 0x1407FF484 (PspUnlinkSessionId.c)
 *     RtlRemoveDynamicEHContinuationTarget @ 0x14080971C (RtlRemoveDynamicEHContinuationTarget.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x140809790 (RtlRemoveDynamicEnforcedAddressRange.c)
 *     MiRemoveBasedSection @ 0x140864E24 (MiRemoveBasedSection.c)
 *     MiInsertHotPatchRecord @ 0x1408708FC (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x140870BC8 (MiInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x140874D80 (MmRemoveSecureImageActivePatch.c)
 *     MiFinishChildPartitionHotAdd @ 0x14087BDA0 (MiFinishChildPartitionHotAdd.c)
 *     MiHotAddPartitionMemory @ 0x14087BE70 (MiHotAddPartitionMemory.c)
 *     MiInsertPartitionPages @ 0x14087C1C4 (MiInsertPartitionPages.c)
 *     ExpWnfDeleteNameInstance @ 0x14094920C (ExpWnfDeleteNameInstance.c)
 *     MiRemoveSharedCommitNode @ 0x1409C7C70 (MiRemoveSharedCommitNode.c)
 *     MiProcessCrcList @ 0x140A5ACD0 (MiProcessCrcList.c)
 *     MiInitializeDriverPtes @ 0x140CF46C4 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14044D5D0 (RtlpTreeDoubleRotateNodes.c)
 *     RtlpRbReportFatalError @ 0x140619BDC (RtlpRbReportFatalError.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  char v9; // bp
  _BYTE *v10; // r14
  char v11; // si
  unsigned __int8 v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // r15
  bool v15; // zf
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned int v18; // r12d
  __int64 v19; // r15
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r12
  _QWORD *v32; // rsi
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rax
  char v36; // cl
  char v37; // dl
  unsigned __int8 v38; // cl
  _QWORD *v39; // rax
  char v41; // [rsp+78h] [rbp+10h]
  __int64 v42; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = v4;
  if ( *(_QWORD *)a2 )
    v5 = *(_QWORD *)a2;
  v6 = -*(_QWORD *)a2;
  if ( (-(__int64)(*(_QWORD *)a2 != 0LL) & v4) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
    {
      v39 = *(_QWORD **)(v2 + 8);
      v18 = 0;
      v17 = *(_QWORD *)a2;
      v7 = *(_QWORD *)a2;
      if ( v39 )
      {
        v18 = 1;
        do
        {
          v7 = v17;
          v17 = (unsigned __int64)v39;
          v39 = (_QWORD *)v39[1];
        }
        while ( v39 );
      }
      v19 = *(_QWORD *)v17;
    }
    else
    {
      v16 = *(_QWORD **)v4;
      v17 = *(_QWORD *)(a2 + 8);
      v7 = v17;
      v18 = 1;
      if ( *(_QWORD *)v4 )
      {
        v18 = 0;
        do
        {
          v7 = v17;
          v17 = (unsigned __int64)v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
      }
      v19 = *(_QWORD *)(v17 + 8);
    }
    *(_QWORD *)v17 = v2;
    *(_QWORD *)(v17 + 8) = v4;
    v20 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v20 != a2 )
      RtlpRbReportFatalError(v20, a2, v2);
    *(_QWORD *)(v2 + 16) = v17 | *(_DWORD *)(v2 + 16) & 3;
    v21 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v21 != a2 )
      RtlpRbReportFatalError(v21, a2, v4);
    *(_QWORD *)(v4 + 16) = v17 | *(_DWORD *)(v4 + 16) & 3;
    v22 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v22 != v7 )
      RtlpRbReportFatalError(v22, v7, v17);
    *(_QWORD *)(v7 + 8LL * v18) = v19;
    if ( v19 )
    {
      v23 = *(_QWORD **)(v19 + 16);
      if ( v23 != (_QWORD *)v17 )
        RtlpRbReportFatalError(v23, v17, v19);
      *(_QWORD *)(v19 + 16) = v7;
    }
    *(_QWORD *)(v17 + 16) = *(_QWORD *)(a2 + 16);
    v9 = v18 != 0 ? 3 : 1;
    v24 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v24 )
    {
      v25 = 0LL;
      if ( *(_QWORD *)(v24 + 8) == a2 )
        v25 = 8LL;
      v26 = *(_QWORD *)(v25 + v24);
      if ( v26 != a2 )
        RtlpRbReportFatalError(v26, a2, *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
      *(_QWORD *)(v25 + v24) = v17;
    }
    else
    {
      if ( *a1 != a2 )
        RtlpRbReportFatalError(*a1, a2, a1);
      *a1 = v17;
    }
    while ( 1 )
    {
LABEL_11:
      v10 = (_BYTE *)(v7 + 16);
      v11 = *(_BYTE *)(v7 + 16);
      LOBYTE(v6) = v9 ^ 2;
      v12 = v11 & 3;
      if ( (v11 & 3) == ((unsigned __int8)v9 ^ 2) )
      {
        *v10 = v11 & 0xFC;
        v13 = *(_QWORD *)v10;
      }
      else
      {
        if ( !v12 )
        {
          LOBYTE(v6) = v11 ^ (v9 ^ v11) & 3;
          *v10 = v6;
          return v6;
        }
        v13 = *(_QWORD *)v10;
        v27 = *(_QWORD *)v7;
        if ( v9 == 1 )
          v27 = *(_QWORD *)(v7 + 8);
        v41 = *(_BYTE *)(v27 + 16) & 3;
        if ( v41 == (_BYTE)v6 )
        {
          v6 = RtlpTreeDoubleRotateNodes(a1, v7, v27, v9 == 1);
          *v10 &= 0xFCu;
          v7 = v6;
          v37 = *(_BYTE *)(v27 + 16);
          *(_BYTE *)(v27 + 16) = v37 & 0xFC;
          v38 = *(_BYTE *)(v6 + 16);
          LODWORD(v6) = v38 & 3;
          if ( v12 == (_DWORD)v6 )
          {
            LOBYTE(v6) = *v10;
            *v10 ^= (v12 ^ *v10 ^ 0xFE) & 3;
          }
          else if ( v12 == ((v38 ^ 0xFE) & 3) )
          {
            *(_BYTE *)(v27 + 16) = v37 ^ (v37 ^ v11) & 3;
          }
          *(_BYTE *)(v7 + 16) &= 0xFCu;
        }
        else
        {
          v28 = *(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v28 != v7 )
            RtlpRbReportFatalError(v28, v7, v27);
          v29 = 0LL;
          if ( v9 == 1 )
            v29 = 8LL;
          v42 = v29;
          v30 = *(_QWORD *)(v29 + v7);
          if ( v30 != v27 )
            RtlpRbReportFatalError(v30, v27, v7);
          v31 = *(_QWORD *)v10;
          v32 = (_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v32 )
          {
            if ( v32[1] == v7 )
            {
              v32[1] = v27;
            }
            else
            {
              if ( *v32 != v7 )
                RtlpRbReportFatalError(*v32, v7, *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL);
              *v32 = v27;
            }
          }
          else
          {
            if ( *a1 != v7 )
              RtlpRbReportFatalError(*a1, v7, a1);
            *a1 = v27;
          }
          *(_QWORD *)(v27 + 16) ^= (*(_QWORD *)(v27 + 16) ^ v31) & 0xFFFFFFFFFFFFFFFCuLL;
          v33 = -(__int64)(v9 != 1) & 8;
          v34 = *(_QWORD *)(v33 + v27);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v34 + 16);
            if ( (v35 & 0xFFFFFFFFFFFFFFFCuLL) != v27 )
              RtlpRbReportFatalError(v35 & 0xFFFFFFFFFFFFFFFCuLL, v27, *(_QWORD *)(v33 + v27));
            *(_QWORD *)(v34 + 16) = v7 | v35 & 3;
          }
          *(_QWORD *)(v42 + v7) = v34;
          *(_QWORD *)(v33 + v27) = v7;
          v6 = v27 | *(_DWORD *)v10 & 3;
          *(_QWORD *)v10 = v6;
          v36 = *(_BYTE *)(v27 + 16);
          if ( !v41 )
          {
            LOBYTE(v6) = v36 ^ (v9 ^ v36 ^ 0xFE) & 3;
            *(_BYTE *)(v27 + 16) = v6;
            return v6;
          }
          v7 = v27;
          *(_BYTE *)(v27 + 16) = v36 & 0xFC;
          *v10 &= 0xFCu;
        }
      }
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        return v6;
      v15 = *(_QWORD *)(v14 + 8) == v7;
      v9 = 3;
      v7 = v14;
      if ( !v15 )
        v9 = 1;
    }
  }
  v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 16);
    if ( v8 != a2 )
      RtlpRbReportFatalError(v8, a2, v5);
    *(_QWORD *)(v5 + 16) = v7;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) == a2 )
    {
      v9 = 3;
      *(_QWORD *)(v7 + 8) = v5;
    }
    else
    {
      if ( *(_QWORD *)v7 != a2 )
        RtlpRbReportFatalError(*(_QWORD *)v7, a2, v7);
      v9 = 1;
      *(_QWORD *)v7 = v5;
    }
    goto LABEL_11;
  }
  if ( *a1 != a2 )
    RtlpRbReportFatalError(*a1, a2, a1);
  *a1 = v5;
  return v6;
}

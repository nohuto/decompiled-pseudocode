/*
 * XREFs of MiGetProtoPteAddress @ 0x1402D2540
 * Callers:
 *     MiSectionProtectZeroPte @ 0x1402CFA48 (MiSectionProtectZeroPte.c)
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiCheckUserVirtualAddress @ 0x1402D1920 (MiCheckUserVirtualAddress.c)
 *     MiResolveSharedZeroFault @ 0x1402D1B90 (MiResolveSharedZeroFault.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiSectionProtectValidPte @ 0x140304460 (MiSectionProtectValidPte.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiGetPageProtection @ 0x1403061E4 (MiGetPageProtection.c)
 *     MiMakePerSessionProtoPte @ 0x14030B710 (MiMakePerSessionProtoPte.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140317EC0 (MiIsCfgBitMapPageShared.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiComputePageFileReadPteCluster @ 0x140370C34 (MiComputePageFileReadPteCluster.c)
 *     MiExpandSharedZeroCluster @ 0x1403D9910 (MiExpandSharedZeroCluster.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 *     MiPteNeedsCommitCharge @ 0x1404886AC (MiPteNeedsCommitCharge.c)
 *     MiUpControlAreaRefs @ 0x1404DE558 (MiUpControlAreaRefs.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E72E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiQueryPteAddResidentAttributes @ 0x1404E9984 (MiQueryPteAddResidentAttributes.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x1405085E0 (MiSoftFaultClusterTradeInitialize.c)
 *     MiGetClusterPage @ 0x14050E5D0 (MiGetClusterPage.c)
 *     MiFaultRedirectToProto @ 0x140511920 (MiFaultRedirectToProto.c)
 *     MiGetLargeVadMappingIndex @ 0x1405299BC (MiGetLargeVadMappingIndex.c)
 *     MiComputeImageVadCommitCharge @ 0x1406E4344 (MiComputeImageVadCommitCharge.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneLargeFileOnlyVad @ 0x14086CE70 (MiCloneLargeFileOnlyVad.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiIsRangeFullyCommitted @ 0x14095DDE4 (MiIsRangeFullyCommitted.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiCommitPagefileBackedSection @ 0x1409C9560 (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x140A5CF70 (MmFlushVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x140AA0D20 (MiCfgMarkValidEntries.c)
 *     MiResetVirtualMemory @ 0x140AB1600 (MiResetVirtualMemory.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x1402E48B0 (MiLocateSubsectionNode.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x140372BD8 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, unsigned int a3, unsigned int **a4)
{
  unsigned __int64 v6; // r11
  __int64 v8; // r8
  unsigned int *v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 SubsectionNode; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rdx
  unsigned int SessionId; // eax

  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 80) + 56LL) & 8) == 0 || (*(_DWORD *)(**(_QWORD **)(a1 + 80) + 56LL) & 0x20) == 0)
    && (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 3 >= a2 - v6
    && (a3 & 4) == 0 )
  {
    *a4 = *(unsigned int **)(a1 + 80);
    return *(_QWORD *)(a1 + 88) + 8 * (a2 - v6);
  }
  v8 = 0LL;
  *a4 = 0LL;
  v9 = *(unsigned int **)(a1 + 80);
  v10 = *(_QWORD *)v9;
  v11 = a2 + ((__int64)(*(_QWORD *)(a1 + 88) - *((_QWORD *)v9 + 1)) >> 3) - v6;
  if ( *(_QWORD *)(*(_QWORD *)v9 + 64LL) )
  {
    v12 = a2 + ((__int64)(*(_QWORD *)(a1 + 88) - *((_QWORD *)v9 + 1)) >> 3) - v6;
    v13 = *(_QWORD *)(a1 + 80);
    do
    {
      v14 = *(unsigned int *)(v13 + 44);
      if ( v12 < v14 )
      {
        v11 = v12;
        v9 = (unsigned int *)v13;
        goto LABEL_15;
      }
      v13 = *(_QWORD *)(v13 + 16);
      v12 -= v14;
      ++v8;
    }
    while ( (v8 != 3 || (*(_DWORD *)(v10 + 56) & 0x20) != 0) && v13 );
    if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 )
      return 0LL;
    v15 = ((v9[9] | ((unsigned __int64)(v9[8] & 0xFFC0) << 26)) + v11) << 12;
    SubsectionNode = MiLocateSubsectionNode(*(_QWORD *)v9, v15, a3);
    v9 = (unsigned int *)SubsectionNode;
    if ( !SubsectionNode )
      return 0LL;
    v11 = (v15 >> 12)
        - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_DWORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
LABEL_15:
    if ( v11 >= v9[11] - v9[13] )
      return 0LL;
    v17 = *((_QWORD *)v9 + 1);
    *a4 = v9;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v9 + 56LL) & 0x1000) != 0 || v9[12] >= 0x40000000 )
  {
    v19 = 0x40000LL;
    if ( v9[12] < 0x40000000 )
      v19 = 0x20000LL;
    v20 = (unsigned int)(v11 / v19);
    v21 = v11 / v19;
    v11 %= v19;
    v22 = v20 + 1;
    if ( !v11 )
      v22 = v20;
    if ( v22 > *(unsigned int *)(*(_QWORD *)v9 + 96LL) )
      return 0LL;
    v9 += 22 * v21;
    v18 = v9[11];
  }
  else
  {
    v18 = v9[11];
  }
  if ( v11 >= v18 )
    return 0LL;
  if ( !v9 )
    return 0LL;
  *a4 = v9;
  v17 = *((_QWORD *)v9 + 1);
  if ( !v17 )
    return 0LL;
LABEL_17:
  if ( (v9[8] & 0x20000) != 0
    && (*(_DWORD *)(v10 + 56) & 8) != 0
    && (*(_DWORD *)(v10 + 56) & 0x20) != 0
    && (a3 & 2) == 0 )
  {
    SessionId = PsGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v17 = *(_QWORD *)(MiGetSharedProtos(v10, SessionId, v9) + 72);
  }
  return v17 + 8 * v11;
}

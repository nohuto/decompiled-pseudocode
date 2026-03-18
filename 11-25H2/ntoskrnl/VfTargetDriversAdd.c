/*
 * XREFs of VfTargetDriversAdd @ 0x1403EA6B8
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140B8AB5C (VfSuspectDriversLoadCallback.c)
 *     VfDriverLoadImage @ 0x140B97E14 (VfDriverLoadImage.c)
 * Callees:
 *     VfAvlInsertReservedTreeNode @ 0x1403EA7E8 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403EB8EC (VfAvlCleanupLockContext.c)
 *     VfUpdateWhitelist @ 0x1403EB9A8 (VfUpdateWhitelist.c)
 *     VfAssignRuleClassIdToClassDriver @ 0x1403EBA34 (VfAssignRuleClassIdToClassDriver.c)
 *     VfAvlReserveNode @ 0x1403EBAE0 (VfAvlReserveNode.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140605384 (ViTargetDriversFreeVerifiedData.c)
 *     DifAddPerDriverDataForPlugins @ 0x14060B8FC (DifAddPerDriverDataForPlugins.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140B7B9B4 (ViTargetDriversAllocateVerifiedData.c)
 *     VfThunkAddTargetNotify @ 0x140B96514 (VfThunkAddTargetNotify.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 VerifiedData; // rax
  int v10; // eax
  unsigned int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  v3 = 0LL;
  v6 = 1;
  if ( VfSafeMode || !ViTargetInitialized )
    return 0;
  if ( !a3 )
    goto LABEL_4;
  VerifiedData = ViTargetDriversAllocateVerifiedData(a3);
  v3 = VerifiedData;
  if ( !VerifiedData )
    return 0;
  v10 = *(_DWORD *)(VerifiedData + 32);
  if ( (_DWORD)InitializationPhase )
    v11 = v10 & 0xFFFFFFFD;
  else
    v11 = v10 | 2;
  *(_DWORD *)(v3 + 32) = v11;
  if ( (int)DifAddPerDriverDataForPlugins(v3 + 96) < 0 )
  {
    v6 = 0;
    goto LABEL_18;
  }
LABEL_4:
  v7 = VfAvlReserveNode(&ViTargetDriversAvl, *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
  if ( !v7 )
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
    v6 = 0;
    if ( !v3 )
      return v6;
LABEL_18:
    ViTargetDriversFreeVerifiedData(v3);
    return v6;
  }
  VfAssignRuleClassIdToClassDriver(*(wchar_t **)(a1 + 96));
  VfUpdateWhitelist(*(wchar_t **)(a1 + 96));
  *(_QWORD *)(v7 + 64) = v3;
  VfThunkAddTargetNotify(v7);
  v12 = 0LL;
  BYTE12(v12) = 4;
  v13 = 0LL;
  VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, &v12, v7);
  if ( v3 )
  {
    ++dword_140F04180;
    *(_BYTE *)(v3 + 48) = a2;
  }
  VfAvlCleanupLockContext(&v12);
  return v6;
}

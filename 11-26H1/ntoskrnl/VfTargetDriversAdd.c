/*
 * XREFs of VfTargetDriversAdd @ 0x1403C1A18
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 *     VfDriverLoadImage @ 0x140C4CAE0 (VfDriverLoadImage.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403C23FC (VfAvlCleanupLockContext.c)
 *     VfUpdateWhitelist @ 0x1403C24C0 (VfUpdateWhitelist.c)
 *     VfAssignRuleClassIdToClassDriver @ 0x1403C2548 (VfAssignRuleClassIdToClassDriver.c)
 *     VfAvlInsertReservedTreeNode @ 0x1403C25F4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1403C2690 (VfAvlReserveNode.c)
 *     ViTargetDriversFreeVerifiedData @ 0x140645370 (ViTargetDriversFreeVerifiedData.c)
 *     DifAddPerDriverDataForPlugins @ 0x14064E688 (DifAddPerDriverDataForPlugins.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140C2F64C (ViTargetDriversAllocateVerifiedData.c)
 *     VfThunkAddTargetNotify @ 0x140C49FB0 (VfThunkAddTargetNotify.c)
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
    ++dword_140F09120;
    *(_BYTE *)(v3 + 48) = a2;
  }
  VfAvlCleanupLockContext(&v12);
  return v6;
}

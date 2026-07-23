/*
 * XREFs of VfAvlLookupTreeNode @ 0x1403EB534
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403EA5A4 (VfTargetDriversGetNode.c)
 *     VfTargetDriversRemove @ 0x1403EB31C (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x140605220 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x140605290 (VfTargetReplaceIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140B7B2FC (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140B7B384 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140B7B4CC (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140B7B5C0 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140B7B6EC (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140B7B77C (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140B7B910 (ViTargetAddToCounter.c)
 *     ViTargetWMIDeregister @ 0x140B7BC58 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140B7FC00 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjRemove @ 0x140B824BC (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B82924 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140B829C4 (ViRemLockFindSurrogate.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140B84F50 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140B85008 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140B85130 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140B851F0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140B852F0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140B853E0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140B859D0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140B85AB0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140B85BB0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140B85CB0 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B85EB0 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B860E0 (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140B86C0C (ViFaultsInjectionNotification.c)
 *     VfLookasideAdd @ 0x140B8FE64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140B8FF88 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140B915C0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140B918AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140B919D0 (VfTrackResource.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140B96230 (VfWmiVerifyIrpStackUpward.c)
 *     VfCheckForResource @ 0x140B971F8 (VfCheckForResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140B97B1C (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x140B97CB0 (VfCheckForLookaside.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     ViAvlTableIndex @ 0x1403EB6F8 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403EB720 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403EB784 (ViAvlRaiseIrqlSafe.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403EB7E0 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403EB950 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // r12
  unsigned __int64 v5; // r13
  __int64 v7; // rsi
  __int64 *v9; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  _RTL_AVL_TABLE *v17; // r12
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  _RTL_AVL_TABLE *v21; // rbx
  _RTL_AVL_TABLE *v22; // [rsp+20h] [rbp-20h]
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v24; // [rsp+30h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  PVOID NodeOrParent; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v7 = a4;
  v9 = a1;
  if ( !a4 )
    v7 = *a1;
  v10 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v11 = (v7 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v14 = v7;
  if ( v11 > 1 )
    v14 = 4096LL;
  v24 = v14;
  v15 = ViAvlTableIndex(a1, a3);
  v17 = (_RTL_AVL_TABLE *)(*(_QWORD *)(v16 + 16) + 192 * v15);
  v22 = v17;
  ViAvlRaiseIrqlSafe(a2);
  ViAvlAcquireTableLockAtDpcLevelSafe(v17, a2);
  NodeOrParent = 0LL;
  SearchResult = TableEmptyTree;
  v4 = RtlLookupElementGenericTableFullAvl(v17, &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v22, a2);
    v9 = a1;
    --v11;
    v10 += 4096LL;
LABEL_4:
    v12 = v7 + a3;
    if ( v11 )
    {
      do
      {
        v18 = v10 + 4096;
        Buffer = v10;
        if ( v10 + 4096 <= v12 )
          v24 = 4096LL;
        else
          v24 = v12 - v10;
        v19 = ViAvlTableIndex(v9, v10);
        v21 = (_RTL_AVL_TABLE *)(*(_QWORD *)(v20 + 16) + 192 * v19);
        ViAvlRaiseIrqlSafe(a2);
        ViAvlAcquireTableLockAtDpcLevelSafe(v21, a2);
        NodeOrParent = 0LL;
        SearchResult = TableEmptyTree;
        v4 = RtlLookupElementGenericTableFullAvl(v21, &Buffer, &NodeOrParent, &SearchResult);
        if ( v4 )
          break;
        ViAvlReleaseTableLockFromDpcLevel(v21, a2);
        v9 = a1;
        ++v5;
        v10 = v18;
      }
      while ( v5 < v11 );
    }
  }
  return v4;
}

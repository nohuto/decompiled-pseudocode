/*
 * XREFs of VfAvlLookupTreeNode @ 0x1403B7E8C
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403B7A04 (VfTargetDriversGetNode.c)
 *     VfTargetDriversRemove @ 0x1403B7C48 (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x140641628 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x14064169C (VfTargetReplaceIoCallbacks.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C20324 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfTargetDriversDisableVerifier @ 0x140C28F0C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C28F98 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140C29154 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140C29248 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140C29374 (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140C29404 (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140C29598 (ViTargetAddToCounter.c)
 *     ViTargetIncrementCounter @ 0x140C29768 (ViTargetIncrementCounter.c)
 *     ViTargetWMIDeregister @ 0x140C29968 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C2E290 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjRemove @ 0x140C3092C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C30D98 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140C30E38 (ViRemLockFindSurrogate.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140C33310 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140C333F0 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140C334B0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140C335B0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140C336A0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140C33C90 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140C33D70 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140C33E70 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140C33F70 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C34040 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C342FC (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140C34E94 (ViFaultsInjectionNotification.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140C3B500 (VfWmiVerifyIrpStackUpward.c)
 *     VfLookasideAdd @ 0x140C3EC54 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C3ED78 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140C403C0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140C406AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C407D0 (VfTrackResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140C453C8 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForResource @ 0x140C461BC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C46340 (VfCheckForLookaside.c)
 * Callees:
 *     FindNodeOrParent @ 0x1403B82F0 (FindNodeOrParent.c)
 *     ViAvlTableIndex @ 0x1403B83A8 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403B83D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403B8438 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403B8560 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

__int64 __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r13
  __int64 v7; // r14
  __int64 *v9; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rbx
  unsigned __int64 v22; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+28h] [rbp-8h]
  __int64 v25; // [rsp+80h] [rbp+50h] BYREF
  __int64 v26; // [rsp+88h] [rbp+58h]

  v4 = 0LL;
  v5 = 0LL;
  v7 = a4;
  v9 = a1;
  if ( !a4 )
    v7 = *a1;
  v10 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v11 = (v7 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) != a3 )
  {
    v22 = a3;
    v14 = v7;
    if ( v11 > 1 )
      v14 = 4096LL;
    v23 = v14;
    v15 = ViAvlTableIndex(a1, a3);
    v26 = *(_QWORD *)(v16 + 16) + 192 * v15;
    v17 = v26;
    ViAvlRaiseIrqlSafe(a2);
    ViAvlAcquireTableLockAtDpcLevelSafe(v17, a2);
    v25 = 0LL;
    if ( (unsigned int)FindNodeOrParent(v17, &v22, &v25) == 1 )
    {
      v4 = v25 + 32;
      if ( v25 != -32 )
        return v4;
    }
    else
    {
      v4 = 0LL;
    }
    ViAvlReleaseTableLockFromDpcLevel(v26, a2);
    v9 = a1;
    --v11;
    v10 += 4096LL;
  }
  v12 = v7 + a3;
  if ( v11 )
  {
    do
    {
      v18 = v10 + 4096;
      v22 = v10;
      if ( v10 + 4096 <= v12 )
        v23 = 4096LL;
      else
        v23 = v12 - v10;
      v19 = ViAvlTableIndex(v9, v10);
      v21 = *(_QWORD *)(v20 + 16) + 192 * v19;
      ViAvlRaiseIrqlSafe(a2);
      ViAvlAcquireTableLockAtDpcLevelSafe(v21, a2);
      v25 = 0LL;
      if ( (unsigned int)FindNodeOrParent(v21, &v22, &v25) == 1 )
      {
        v4 = v25 + 32;
        if ( v25 != -32 )
          return v4;
      }
      else
      {
        v4 = 0LL;
      }
      ViAvlReleaseTableLockFromDpcLevel(v21, a2);
      v9 = a1;
      ++v5;
      v10 = v18;
    }
    while ( v5 < v11 );
  }
  return v4;
}

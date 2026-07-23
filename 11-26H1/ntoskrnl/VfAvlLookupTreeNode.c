/*
 * XREFs of VfAvlLookupTreeNode @ 0x1403C1D8C
 * Callers:
 *     VfTargetDriversGetNode @ 0x1403C1904 (VfTargetDriversGetNode.c)
 *     VfTargetDriversRemove @ 0x1403C1B48 (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x140645208 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x14064527C (VfTargetReplaceIoCallbacks.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140C26330 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfTargetDriversDisableVerifier @ 0x140C2EF1C (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140C2EFA8 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140C2F164 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140C2F258 (VfTargetEtwUnregister.c)
 *     VfTargetFreeContiguousMemory @ 0x140C2F384 (VfTargetFreeContiguousMemory.c)
 *     VfTargetWMIRegistrationControl @ 0x140C2F414 (VfTargetWMIRegistrationControl.c)
 *     ViTargetAddToCounter @ 0x140C2F5A8 (ViTargetAddToCounter.c)
 *     ViTargetIncrementCounter @ 0x140C2F778 (ViTargetIncrementCounter.c)
 *     ViTargetWMIDeregister @ 0x140C2F978 (ViTargetWMIDeregister.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140C342A0 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViDevObjRemove @ 0x140C3693C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140C36DA8 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140C36E48 (ViRemLockFindSurrogate.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140C39320 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140C39400 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140C394C0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140C395C0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140C396B0 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140C39CA0 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140C39D80 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140C39E80 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140C39F80 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140C3A050 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140C3A30C (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140C3AEA4 (ViFaultsInjectionNotification.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140C41510 (VfWmiVerifyIrpStackUpward.c)
 *     VfLookasideAdd @ 0x140C44C64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140C44D88 (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140C463D0 (VerifierIoWMIRegistrationControl.c)
 *     VfDeleteResource @ 0x140C466BC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140C467E0 (VfTrackResource.c)
 *     VfRemLockDeleteMemoryRange @ 0x140C4B3D8 (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForResource @ 0x140C4C1CC (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140C4C350 (VfCheckForLookaside.c)
 * Callees:
 *     FindNodeOrParent @ 0x1403C21F0 (FindNodeOrParent.c)
 *     ViAvlTableIndex @ 0x1403C22A8 (ViAvlTableIndex.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403C22D0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403C2338 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403C2460 (ViAvlReleaseTableLockFromDpcLevel.c)
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

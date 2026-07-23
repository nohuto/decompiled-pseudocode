/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180018AF0
 * Callers:
 *     RtlpHpExtrasGet @ 0x1800043C0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x1800051D0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasAppend @ 0x180005470 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180016B50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18003A200 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003ACE8 (RtlpWnfCalculateAndSetNextTimer.c)
 *     EtwpGetNextRegistration @ 0x18003ADA0 (EtwpGetNextRegistration.c)
 *     EtwDeliverDataBlock @ 0x18003CB30 (EtwDeliverDataBlock.c)
 *     LdrpFindLoadedDllByName @ 0x18003D4C0 (LdrpFindLoadedDllByName.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180041FE0 (EtwpCheckForPrivatePreEnable.c)
 *     RtlpFcCallChangeCallbacks @ 0x18005FAA4 (RtlpFcCallChangeCallbacks.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180063920 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180064078 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18006E0B8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18006E788 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpCSparseBitmapUnlock @ 0x18006FE30 (RtlpCSparseBitmapUnlock.c)
 *     RtlpFlsFree @ 0x180073484 (RtlpFlsFree.c)
 *     RtlQueryProcessLockInformation @ 0x180074010 (RtlQueryProcessLockInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800758F0 (RtlQueryCriticalSectionOwner.c)
 *     LdrpAllocateTls @ 0x180076CB0 (LdrpAllocateTls.c)
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800781F0 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFindLoadedDllByMapping @ 0x18007D91C (LdrpFindLoadedDllByMapping.c)
 *     RtlpFlsDataCleanup @ 0x18007F010 (RtlpFlsDataCleanup.c)
 *     RtlpHpTagReAllocateHeap @ 0x180080F40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x1800814B0 (RtlpHpLargeAllocSize.c)
 *     SbpUpdateCache @ 0x180084310 (SbpUpdateCache.c)
 *     TpAllocPoolInternal @ 0x180085A1C (TpAllocPoolInternal.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800878AC (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpCreateWnfNameSubscription @ 0x18008E8D0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18008F730 (RtlpCreateSerializationGroup.c)
 *     RtlpComputeExePath @ 0x1800996B0 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x180099D90 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18009AE10 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18009B0E0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C3930 (LdrpFindLoadedDllByAddress.c)
 *     _LdrpInitialize @ 0x1800CC6B8 (_LdrpInitialize.c)
 *     LdrpFreeTls @ 0x1800D4260 (LdrpFreeTls.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800D4C10 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E2BE0 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800E4590 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800E6750 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800E78E0 (TpTrimPools.c)
 *     RtlpHpTagQueryTags @ 0x1800EA838 (RtlpHpTagQueryTags.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FF554 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010FA00 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfRetryTimerCallback @ 0x180111120 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011FA2C (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x180122180 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x180141768 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180145B40 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180145C00 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x180147870 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadUnlock @ 0x180149890 (RtlRcuReadUnlock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FAD0 (RtlpHpStackTraceHeapSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x180158AA0 (EtwEnumerateProcessRegGuids.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CC5C (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v2; // rax
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdi
  char *v6; // rbx
  signed __int64 v7; // r8
  signed __int64 v8; // rtt
  _QWORD *v9; // rcx
  __int64 i; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int64 v13; // r8
  signed __int64 v14; // rcx
  signed __int64 v15; // rtt
  PRTL_SRWLOCK v16; // rsi
  _QWORD *v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  signed __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  signed __int64 v25; // rax
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  if ( v2 == 17 )
    goto LABEL_2;
  if ( (v2 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  while ( (v2 & 2) == 0 )
  {
    v7 = 0LL;
    if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v7 = v2 - 16;
    v8 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v7, v2);
    if ( v8 == v2 )
      goto LABEL_2;
  }
  if ( (v2 & 8) != 0 )
  {
    v9 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    for ( i = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v9[1] )
      v9 = (_QWORD *)*v9;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
      goto LABEL_2;
    v11 = -9LL;
  }
  else
  {
    v11 = -1LL;
  }
  do
  {
    v12 = v11 + 4;
    v13 = v2 & 6;
    if ( v13 != 2 )
      v12 = v11;
    v14 = v2 + v12;
    v15 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v14, v2);
  }
  while ( v15 != v2 );
  if ( v13 == 2 )
  {
    v16 = SRWLock;
    while ( 1 )
    {
      while ( (v14 & 1) != 0 )
      {
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v14 - 4, v14);
        v21 = v14 == v25;
        v14 = v25;
        if ( v21 )
          goto LABEL_2;
      }
      v17 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      if ( !v18 )
      {
        do
        {
          v19 = v17;
          v17 = (_QWORD *)*v17;
          v17[2] = v19;
          v18 = v17[1];
        }
        while ( !v18 );
        if ( v17 != (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL) )
          *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
      }
      if ( (*(_DWORD *)(v18 + 36) & 1) != 0 )
      {
        v20 = *(_QWORD *)(v18 + 16);
        if ( v20 )
          break;
      }
      v16 = 0LL;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, v14);
      v21 = v14 == v22;
      v14 = v22;
      if ( v21 )
        goto LABEL_40;
    }
    *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v20;
    *(_QWORD *)(v18 + 16) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)SRWLock, 0xFFFFFFFFFFFFFFFBuLL);
    do
    {
LABEL_40:
      v23 = *(_QWORD *)(v18 + 16);
      v24 = *(_QWORD *)(v18 + 24);
      _interlockedbittestandset((volatile signed __int32 *)(v18 + 36), 2u);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v18 + 36), 1u) )
        ZwAlertThreadByThreadIdEx(v24, v16, v17);
      v18 = v23;
    }
    while ( v23 );
  }
LABEL_2:
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v4 = 0;
    v5 = (unsigned __int64)SRWLock & 0x7FFFFFFFFFFFFFFCLL;
    while ( v4 < 8 )
    {
      v6 = &SchedulerSharedDataSlot[8 * v4];
      if ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) == v5 )
      {
        if ( v6 )
        {
          *v6 |= 2u;
          if ( v6[7] < 0 )
          {
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (v6 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
          }
          *(_QWORD *)v6 = 0LL;
        }
        return;
      }
      ++v4;
    }
  }
}

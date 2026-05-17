/*
 * XREFs of RtlReleaseSRWLockShared @ 0x18002D9F0
 * Callers:
 *     RtlpFcCallChangeCallbacks @ 0x180014374 (RtlpFcCallChangeCallbacks.c)
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpExtrasGet @ 0x1800192E0 (RtlpHpExtrasGet.c)
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x18001A0F0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasAppend @ 0x18001A390 (RtlpHpExtrasAppend.c)
 *     RtlpHpExtrasSetPresent @ 0x18001A610 (RtlpHpExtrasSetPresent.c)
 *     RtlSizeHeap @ 0x18001A7D0 (RtlSizeHeap.c)
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlSleepConditionVariableSRW @ 0x18002CAF0 (RtlSleepConditionVariableSRW.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004FC80 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180050768 (RtlpWnfCalculateAndSetNextTimer.c)
 *     EtwpGetNextRegistration @ 0x180050820 (EtwpGetNextRegistration.c)
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     LdrpFindLoadedDllByName @ 0x180052F40 (LdrpFindLoadedDllByName.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180057A60 (EtwpCheckForPrivatePreEnable.c)
 *     SbpUpdateCache @ 0x180063EC0 (SbpUpdateCache.c)
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18006745C (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpCreateWnfNameSubscription @ 0x18006E480 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18006F2E0 (RtlpCreateSerializationGroup.c)
 *     LdrpAllocateTls @ 0x18007F910 (LdrpAllocateTls.c)
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180080E50 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFindLoadedDllByMapping @ 0x18008657C (LdrpFindLoadedDllByMapping.c)
 *     RtlpFlsDataCleanup @ 0x180087C90 (RtlpFlsDataCleanup.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18008AC80 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x18008B350 (RtlSparseArrayElementAllocate.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpCSparseBitmapUnlock @ 0x18008C9F4 (RtlpCSparseBitmapUnlock.c)
 *     RtlQueryCriticalSectionOwner @ 0x180090B90 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessLockInformation @ 0x180091A70 (RtlQueryProcessLockInformation.c)
 *     RtlpFlsFree @ 0x1800942B4 (RtlpFlsFree.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x180095F80 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800966D8 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpComputeExePath @ 0x18009A580 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18009AC60 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18009BCE0 (RtlpComputeDllPath.c)
 *     RtlpComputeDllPathWithOptions @ 0x18009BFB0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800B13D0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpLargeAllocSize @ 0x1800B1940 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     LdrpFindLoadedDllByAddress @ 0x1800C6170 (LdrpFindLoadedDllByAddress.c)
 *     _LdrpInitialize @ 0x1800CEF48 (_LdrpInitialize.c)
 *     LdrpFreeTls @ 0x1800D72A0 (LdrpFreeTls.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x1800D7C50 (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800E4D30 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlCheckHeldCriticalSections @ 0x1800E6380 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800E7CF0 (RtlQueryProtectedPolicy.c)
 *     TpTrimPools @ 0x1800E86D0 (TpTrimPools.c)
 *     RtlpHpTagQueryTags @ 0x1800EB628 (RtlpHpTagQueryTags.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FFE04 (RtlpStackDbSegmentFindOrCreate.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010FE70 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlpWnfRetryTimerCallback @ 0x1801115A0 (RtlpWnfRetryTimerCallback.c)
 *     RtlStackDbStackAdd @ 0x18011FC7C (RtlStackDbStackAdd.c)
 *     RtlpHpStackTraceSerialize @ 0x1801223E0 (RtlpHpStackTraceSerialize.c)
 *     RtlPosixBarrier @ 0x180141868 (RtlPosixBarrier.c)
 *     RtlQueryPointerMapping @ 0x180145C90 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x180145D50 (RtlQueryPropertyStore.c)
 *     RtlGetFeatureToggleConfiguration @ 0x1801479C0 (RtlGetFeatureToggleConfiguration.c)
 *     RtlRcuReadUnlock @ 0x1801499E0 (RtlRcuReadUnlock.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FC20 (RtlpHpStackTraceHeapSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x180158BD0 (EtwEnumerateProcessRegGuids.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015CD9C (LdrpUnlockTlsDelayedReclaimTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 */

struct _TEB *__fastcall RtlReleaseSRWLockShared(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  struct _TEB *result; // rax
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rdi
  char *v7; // rbx
  signed __int64 v8; // r8
  signed __int64 v9; // rtt
  _QWORD *v10; // rcx
  __int64 i; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int64 v14; // r8
  signed __int64 v15; // rcx
  signed __int64 v16; // rtt
  volatile signed __int64 *v17; // rsi
  _QWORD *v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  signed __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  signed __int64 v26; // rax
  _QWORD v27[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = _InterlockedCompareExchange64(a1, 0LL, 17LL);
  if ( v2 == 17 )
    goto LABEL_2;
  if ( (v2 & 1) == 0 )
    RtlRaiseStatus(3221226084LL);
  while ( (v2 & 2) == 0 )
  {
    v8 = 0LL;
    if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v8 = v2 - 16;
    v9 = v2;
    v2 = _InterlockedCompareExchange64(a1, v8, v2);
    if ( v9 == v2 )
      goto LABEL_2;
  }
  if ( (v2 & 8) != 0 )
  {
    v10 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    for ( i = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v10[1] )
      v10 = (_QWORD *)*v10;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
      goto LABEL_2;
    v12 = -9LL;
  }
  else
  {
    v12 = -1LL;
  }
  do
  {
    v13 = v12 + 4;
    v14 = v2 & 6;
    if ( v14 != 2 )
      v13 = v12;
    v15 = v2 + v13;
    v16 = v2;
    v2 = _InterlockedCompareExchange64(a1, v15, v2);
  }
  while ( v16 != v2 );
  if ( v14 == 2 )
  {
    v17 = a1;
    while ( 1 )
    {
      while ( (v15 & 1) != 0 )
      {
        v26 = _InterlockedCompareExchange64(a1, v15 - 4, v15);
        v22 = v15 == v26;
        v15 = v26;
        if ( v22 )
          goto LABEL_2;
      }
      v18 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      v19 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      if ( !v19 )
      {
        do
        {
          v20 = v18;
          v18 = (_QWORD *)*v18;
          v18[2] = v20;
          v19 = v18[1];
        }
        while ( !v19 );
        if ( v18 != (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0uLL) )
          *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v19;
      }
      if ( (*(_DWORD *)(v19 + 36) & 1) != 0 )
      {
        v21 = *(_QWORD *)(v19 + 16);
        if ( v21 )
          break;
      }
      v17 = 0LL;
      v23 = _InterlockedCompareExchange64(a1, 0LL, v15);
      v22 = v15 == v23;
      v15 = v23;
      if ( v22 )
        goto LABEL_40;
    }
    *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v21;
    *(_QWORD *)(v19 + 16) = 0LL;
    _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
    do
    {
LABEL_40:
      v24 = *(_QWORD *)(v19 + 16);
      v25 = *(_QWORD *)(v19 + 24);
      _interlockedbittestandset((volatile signed __int32 *)(v19 + 36), 2u);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v19 + 36), 1u) )
        ZwAlertThreadByThreadIdEx(v25, v17, v18);
      v19 = v24;
    }
    while ( v24 );
  }
LABEL_2:
  result = NtCurrentTeb();
  SchedulerSharedDataSlot = (char *)result->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    v5 = 0;
    v6 = (unsigned __int64)a1 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v5 < 8 )
    {
      v7 = &SchedulerSharedDataSlot[8 * v5];
      result = (struct _TEB *)(*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL);
      if ( result == (struct _TEB *)v6 )
      {
        if ( v7 )
        {
          *v7 |= 2u;
          if ( v7[7] < 0 )
          {
            v27[1] = 0LL;
            v27[0] = (v7 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            result = (struct _TEB *)((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))NtSetInformationThread)(
                                      -2LL,
                                      56LL,
                                      v27,
                                      16LL);
          }
          *(_QWORD *)v7 = 0LL;
        }
        return result;
      }
      ++v5;
    }
  }
  return result;
}

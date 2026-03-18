/*
 * XREFs of PopFxIdleWorkerTail @ 0x140395604
 * Callers:
 *     PopFxIdleWorker @ 0x140395300 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140489250 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x14037AE70 (PopFxActivateComponentWorker.c)
 *     PopFxReferenceDevice @ 0x1403948D4 (PopFxReferenceDevice.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1403955A8 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1403955D8 (PopFxDeviceCriticalRegionLeave.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140395C74 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140395DB8 (PopFxUpdateAccountingActiveTime.c)
 *     PopFxDeactivateComponentDependencies @ 0x140395E1C (PopFxDeactivateComponentDependencies.c)
 *     PopFxCompleteComponentActivation @ 0x1403AECF4 (PopFxCompleteComponentActivation.c)
 *     PopPluginComponentActive @ 0x1403AED90 (PopPluginComponentActive.c)
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxIdleWorkerTail(_QWORD *BugCheckParameter2, unsigned int a2, void *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  KIRQL v11; // dl
  __int64 v12; // r8
  __int64 v13; // r8

  v6 = *(_QWORD *)(BugCheckParameter2[109] + 8LL * a2);
  PopFxDeviceCriticalRegionEnter((__int64)BugCheckParameter2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(_DWORD *)(v6 + 216) == 1 )
  {
    PopFxUpdateAccountingActiveTime(v6 + 200, v7, 0LL);
    *(_BYTE *)(v6 + 208) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, 0LL);
  v9 = BugCheckParameter2[68];
  while ( v9 < v7 )
  {
    v10 = v9;
    v9 = _InterlockedCompareExchange64(BugCheckParameter2 + 68, v7, v9);
    if ( v10 == v9 )
      break;
    _mm_pause();
  }
  _m_prefetchw((const void *)(v6 + 88));
  if ( _InterlockedOr((volatile signed __int32 *)(v6 + 88), 0) == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, 0LL, a3) == 1 )
      PopFxProcessWork(0LL, a3);
    PopFxDeactivateComponentDependencies(v6);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000) != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxReferenceDevice((ULONG_PTR)BugCheckParameter2, 8);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(_DWORD *)(v6 + 216) == 1 )
    {
      *(_QWORD *)(v6 + 224) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v6 + 208) = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 200), v11);
    LOBYTE(v12) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[6], a2, v12);
    if ( BugCheckParameter2[14] )
      guard_dispatch_icall_no_overrides(BugCheckParameter2[24], a2, v13);
    PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  PopFxDeviceCriticalRegionLeave((__int64)BugCheckParameter2);
}

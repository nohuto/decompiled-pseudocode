/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140268B10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402F84A0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1402F9DF0 (IoReleaseCancelSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402F9EB0 (IopVerifyDeviceObjectOnStack.c)
 *     IopDecrementVpbRefCount @ 0x1402FB760 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 * Callees:
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1404F8178 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(
        volatile signed __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx

  v6 = __rdtsc();
  _m_prefetchw(a1);
  v7 = (__int64)*a1;
  if ( !*a1 )
  {
    if ( a1 == (volatile signed __int64 **)_InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1) )
      return PerfLogSpinLockRelease(a1[1], a2, v6);
    v7 = KxWaitForLockChainValid(a1);
  }
  *a1 = 0LL;
  v8 = (__int64)a1[1];
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v7 + 8), v8)) & 4) != 0 )
    KeWakeAddressAll(v7 + 8, v8, a3, a4);
  return PerfLogSpinLockRelease(a1[1], a2, v6);
}

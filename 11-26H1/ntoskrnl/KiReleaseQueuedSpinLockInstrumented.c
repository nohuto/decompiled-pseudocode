/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402695A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetVirtualAddress @ 0x1402E0F50 (CcGetVirtualAddress.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1403EAEB0 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1403EB1E0 (IoReleaseCancelSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1403EB2A0 (IopVerifyDeviceObjectOnStack.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402BA1F0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1403ED4B8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  volatile signed __int64 *v8; // r8
  __int64 v9; // rdx

  v4 = __rdtsc();
  v5 = (unsigned __int64)HIDWORD(v4) << 32;
  v6 = v4;
  _m_prefetchw(a1);
  v7 = *a1;
  if ( !*a1 )
  {
    v8 = (volatile signed __int64 *)a1[1];
    if ( a1 == (_QWORD *)_InterlockedCompareExchange64(v8, 0LL, (signed __int64)a1) )
      return PerfLogSpinLockRelease(a1[1], a2, v6);
    v7 = KxWaitForLockChainValid(a1, v5, (__int64)v8);
  }
  *a1 = 0LL;
  v9 = a1[1];
  if ( (((unsigned __int8)v9 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v7 + 8), v9)) & 4) != 0 )
    KeWakeAddressAll();
  return PerfLogSpinLockRelease(a1[1], a2, v6);
}

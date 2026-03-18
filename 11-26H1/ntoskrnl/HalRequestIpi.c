/*
 * XREFs of HalRequestIpi @ 0x1403EC520
 * Callers:
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402759D0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028FBF0 (PpmIdleUpdateSystemLatencyLimit.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x1402BA1F0 (KeWakeAddressAll.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KiIpiSendRequest @ 0x140329ED0 (KiIpiSendRequest.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1403EACD0 (PpmWakeClockOwnerIfNeeded.c)
 *     IopDecrementVpbRefCount @ 0x1403EB430 (IopDecrementVpbRefCount.c)
 *     PpmUnlockProcessors @ 0x1403EC22C (PpmUnlockProcessors.c)
 *     PoExecuteIdleCheck @ 0x1404F04E4 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x1406014A0 (PoInitiateProcessorWake.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x1403EC570 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(unsigned int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = (int)a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 225LL);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}

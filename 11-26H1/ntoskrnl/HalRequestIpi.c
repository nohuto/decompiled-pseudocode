/*
 * XREFs of HalRequestIpi @ 0x1402F9560
 * Callers:
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140274F40 (ExpAcquireFastResourceExclusiveSlow.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x14028F150 (PpmIdleUpdateSystemLatencyLimit.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1402F7BB0 (PpmWakeClockOwnerIfNeeded.c)
 *     PpmUnlockProcessors @ 0x1402F9270 (PpmUnlockProcessors.c)
 *     IopDecrementVpbRefCount @ 0x1402FB760 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     PoExecuteIdleCheck @ 0x1404E9AC4 (PoExecuteIdleCheck.c)
 *     PoInitiateProcessorWake @ 0x140603F50 (PoInitiateProcessorWake.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x1402F95B0 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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

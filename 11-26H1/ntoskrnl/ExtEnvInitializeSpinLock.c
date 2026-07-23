/*
 * XREFs of ExtEnvInitializeSpinLock @ 0x14059A684
 * Callers:
 *     HalpVpptTimerRegister @ 0x1405858FC (HalpVpptTimerRegister.c)
 *     IvtAllocateDomain @ 0x1405A8130 (IvtAllocateDomain.c)
 *     HsaInitializeInterruptRemapping @ 0x140BF6A38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExtEnvInitializeSpinLock(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *Object; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr);
  Object = IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].Object;
  if ( *(struct _KTHREAD **)IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].Object != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[72] )
    __fastfail(3u);
  *a1 = &IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].Thread;
  a1[1] = Object;
  *Object = a1;
  IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].Object = a1;
  KeReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr, v2);
  a1[2] = 0LL;
}

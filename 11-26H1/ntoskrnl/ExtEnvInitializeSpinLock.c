/*
 * XREFs of ExtEnvInitializeSpinLock @ 0x140597F04
 * Callers:
 *     HalpVpptTimerRegister @ 0x1405833DC (HalpVpptTimerRegister.c)
 *     IvtAllocateDomain @ 0x1405A5920 (IvtAllocateDomain.c)
 *     HsaInitializeInterruptRemapping @ 0x140BF0A38 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
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

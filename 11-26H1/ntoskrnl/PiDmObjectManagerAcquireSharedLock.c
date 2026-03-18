/*
 * XREFs of PiDmObjectManagerAcquireSharedLock @ 0x1409D911C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1409A718C (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1409A8588 (PiDqQueryAppendActionEntry.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409D8860 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B350F8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireSharedLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(a1, 1u);
}

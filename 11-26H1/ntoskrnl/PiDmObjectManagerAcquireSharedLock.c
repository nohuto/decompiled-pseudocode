/*
 * XREFs of PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x140967BEC (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x140968F98 (PiDqQueryAppendActionEntry.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1409A9750 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireSharedLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(a1, 1u);
}

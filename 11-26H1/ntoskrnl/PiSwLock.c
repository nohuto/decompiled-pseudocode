/*
 * XREFs of PiSwLock @ 0x14090DC3C
 * Callers:
 *     PiSwIrpCancelStartCreate @ 0x1405DCA90 (PiSwIrpCancelStartCreate.c)
 *     PiSwIrpGetAttributes @ 0x1407B02D0 (PiSwIrpGetAttributes.c)
 *     PiSwIrpSetAttributes @ 0x1407B0370 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B04AC (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwPdoPnPDispatch @ 0x14090C0D0 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpInterfacePropertySet @ 0x14090C58C (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x14090D2B4 (PipEnumerateCompleted.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 *     PiSwStopDestroy @ 0x14090FEE8 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140910204 (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpCleanup @ 0x140A7AF04 (PiSwIrpCleanup.c)
 *     PiSwFreePdoAssociationsList @ 0x140A7B7D8 (PiSwFreePdoAssociationsList.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceSetState @ 0x140AF9430 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x140B055EC (PiSwIrpPropertySet.c)
 *     PiSwProcessParentStartIrp @ 0x140B249AC (PiSwProcessParentStartIrp.c)
 *     PiSwIrpGetLifetime @ 0x140B3927C (PiSwIrpGetLifetime.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}

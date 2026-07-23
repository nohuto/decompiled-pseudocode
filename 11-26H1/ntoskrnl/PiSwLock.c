/*
 * XREFs of PiSwLock @ 0x1409AFD6C
 * Callers:
 *     PiSwIrpCancelStartCreate @ 0x1405DF340 (PiSwIrpCancelStartCreate.c)
 *     PiSwIrpGetAttributes @ 0x1407B3330 (PiSwIrpGetAttributes.c)
 *     PiSwIrpSetAttributes @ 0x1407B33D0 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B350C (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwPdoPnPDispatch @ 0x1409AE200 (PiSwPdoPnPDispatch.c)
 *     PiSwIrpInterfacePropertySet @ 0x1409AE6BC (PiSwIrpInterfacePropertySet.c)
 *     PipEnumerateCompleted @ 0x1409AF3E4 (PipEnumerateCompleted.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     PiSwStopDestroy @ 0x1409B2018 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409B2334 (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 *     PiSwFreePdoAssociationsList @ 0x140A8C918 (PiSwFreePdoAssociationsList.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140B071FC (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140B12678 (PiSwIrpInterfaceSetState.c)
 *     PiSwProcessParentStartIrp @ 0x140B26E4C (PiSwProcessParentStartIrp.c)
 *     PiSwIrpGetLifetime @ 0x140B3B48C (PiSwIrpGetLifetime.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}

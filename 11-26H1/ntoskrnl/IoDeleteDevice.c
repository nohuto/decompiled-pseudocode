/*
 * XREFs of IoDeleteDevice @ 0x140426AC0
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x14065F200 (DifIoDeleteDeviceWrapper.c)
 *     HalpAddDevice @ 0x1407846F0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407A89B4 (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B06DC (IopCreateRootEnumeratedDeviceObject.c)
 *     PiInitializeDevice @ 0x1407B6748 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1408058B0 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x1408AB8D0 (VrpRegistryUnload.c)
 *     RawMountVolume @ 0x14091B1FC (RawMountVolume.c)
 *     IopFindLegacyDeviceNode @ 0x1409B8598 (IopFindLegacyDeviceNode.c)
 *     PiSwGetChildPdo @ 0x140A8BC18 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x140A8C420 (PiSwDestroyDeviceObject.c)
 *     IopPnPDispatch @ 0x140AA13D0 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA1A08 (IopInitializeDeviceInstanceKey.c)
 *     IoCreateDeviceSecure @ 0x140AFAA30 (IoCreateDeviceSecure.c)
 *     RawDeleteVcb @ 0x140B0BD54 (RawDeleteVcb.c)
 *     VfFilterAttach @ 0x140C41D90 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140C420B0 (ViFilterDispatchPnp.c)
 *     ViDdiDriverEntry @ 0x140C49070 (ViDdiDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140CDFDC0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x140426C2C (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x1405CDFBC (IopRemoveTimerFromTimerList.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x14091C1B8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     ObQueryNameString @ 0x140922620 (ObQueryNameString.c)
 *     PnpFreeInterruptInformation @ 0x140AF4020 (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x140C0FA50 (IoUnregisterShutdownNotification.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x140C26E44 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  _OBJECT_NAME_INFORMATION *v2; // rsi
  _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  v3 = 0LL;
  ReturnLength = 0;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( ObQueryNameString(DeviceObject, Pool2, ReturnLength, &ReturnLength) >= 0 )
        v2 = v3;
    }
  }
  EtwTiLogDeviceObjectLoadUnload(0LL, &DeviceObject->DriverObject->DriverName, v2);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v6);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}

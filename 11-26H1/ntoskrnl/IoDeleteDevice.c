/*
 * XREFs of IoDeleteDevice @ 0x140437BA0
 * Callers:
 *     DifIoDeleteDeviceWrapper @ 0x14065B620 (DifIoDeleteDeviceWrapper.c)
 *     HalpAddDevice @ 0x140781BF0 (HalpAddDevice.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407A5E04 (IopRemoveLegacyDeviceNode.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407AD67C (IopCreateRootEnumeratedDeviceObject.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1407FFE80 (RawShutdown.c)
 *     VrpRegistryUnload @ 0x1408A5460 (VrpRegistryUnload.c)
 *     RawMountVolume @ 0x140A35E6C (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x140A7AAD4 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x140A7B2DC (PiSwDestroyDeviceObject.c)
 *     IopFindLegacyDeviceNode @ 0x140A8B778 (IopFindLegacyDeviceNode.c)
 *     IopPnPDispatch @ 0x140A9FA40 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x140AA0078 (IopInitializeDeviceInstanceKey.c)
 *     IoCreateDeviceSecure @ 0x140AF8350 (IoCreateDeviceSecure.c)
 *     RawDeleteVcb @ 0x140B09F94 (RawDeleteVcb.c)
 *     VfFilterAttach @ 0x140C3BD80 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140C3C0A0 (ViFilterDispatchPnp.c)
 *     ViDdiDriverEntry @ 0x140C43060 (ViDdiDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x140CD9A40 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140CE01C0 (WmipDriverEntry.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x140437D0C (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x1405CB6EC (IopRemoveTimerFromTimerList.c)
 *     ObQueryNameString @ 0x1409FDA20 (ObQueryNameString.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1409FF3B8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     PnpFreeInterruptInformation @ 0x140AF13E0 (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x140B01A40 (ObMakeTemporaryObject.c)
 *     IoUnregisterShutdownNotification @ 0x140C09840 (IoUnregisterShutdownNotification.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     IovDeleteDevice @ 0x140C20E34 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  ULONG Flags; // eax
  struct _OBJECT_NAME_INFORMATION *v2; // rsi
  struct _OBJECT_NAME_INFORMATION *v3; // rdi
  PIO_TIMER Timer; // rdi
  KIRQL v6; // al
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  Flags = DeviceObject->Flags;
  v2 = 0LL;
  v3 = 0LL;
  ReturnLength = 0;
  if ( (Flags & 0x40) != 0 && ObQueryNameString(DeviceObject, 0LL, 0, &ReturnLength) == -1073741820 )
  {
    Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
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

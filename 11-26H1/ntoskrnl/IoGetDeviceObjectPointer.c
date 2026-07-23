/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140A30960
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x140660000 (DifIoGetDeviceObjectPointerWrapper.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140784AB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterTargetDeviceProtection @ 0x1407CE484 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1407CEF78 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407DAE34 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x1407DFE00 (PopEtDeferredInitDxgContext.c)
 *     ExpAcquirePrmInterface @ 0x140844FF0 (ExpAcquirePrmInterface.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140A30100 (IoVolumeDeviceNameToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x140A30618 (IopOpenSystemVariableDevice.c)
 *     NtApphelpCacheControl @ 0x140A30790 (NtApphelpCacheControl.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140CC2C1C (IopCreateArcNamesDisk.c)
 *     IopFormatBootDevice @ 0x140CC3180 (IopFormatBootDevice.c)
 *     IopStoreBootDriveLetter @ 0x140CC4270 (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140CC4748 (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140D098DC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140D09AC8 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  ULONG v5; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  struct _FILE_OBJECT *v9; // rcx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v12; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES v13; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)&v13.Length = 48LL;
  *(&v13.Attributes + 1) = 0;
  v13.RootDirectory = 0LL;
  v5 = 512;
  Handle = 0LL;
  if ( IopCaseInsensitive )
    v5 = 576;
  v13.Attributes = v5;
  v13.ObjectName = ObjectName;
  *(_OWORD *)&v13.SecurityDescriptor = 0LL;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ZwOpenFile(&Handle, DesiredAccess, &v13, &v12, 3u, 0x40u);
  if ( v8 >= 0 )
  {
    Object = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v9);
    }
    ZwClose(Handle);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}

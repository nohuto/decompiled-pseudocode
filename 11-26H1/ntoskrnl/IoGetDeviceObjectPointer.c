/*
 * XREFs of IoGetDeviceObjectPointer @ 0x140908800
 * Callers:
 *     DifIoGetDeviceObjectPointerWrapper @ 0x14065C420 (DifIoGetDeviceObjectPointerWrapper.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140781FB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     PopRegisterTargetDeviceProtection @ 0x1407CB3E4 (PopRegisterTargetDeviceProtection.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1407CBED8 (PopRegisterCoolingExtensionProtection.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407D7814 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEtDeferredInitDxgContext @ 0x1407DBBE0 (PopEtDeferredInitDxgContext.c)
 *     ExpAcquirePrmInterface @ 0x14083EDB0 (ExpAcquirePrmInterface.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140907FA0 (IoVolumeDeviceNameToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x1409084B8 (IopOpenSystemVariableDevice.c)
 *     NtApphelpCacheControl @ 0x140908630 (NtApphelpCacheControl.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140CBCBA4 (IopCreateArcNamesDisk.c)
 *     IopFormatBootDevice @ 0x140CBD110 (IopFormatBootDevice.c)
 *     IopStoreBootDriveLetter @ 0x140CBE1A0 (IopStoreBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140D0360C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140D037F8 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  ULONG v5; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  struct _FILE_OBJECT *v11; // rcx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v14; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES v15; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)&v15.Length = 48LL;
  *(&v15.Attributes + 1) = 0;
  v15.RootDirectory = 0LL;
  v5 = 512;
  Handle = 0LL;
  if ( IopCaseInsensitive )
    v5 = 576;
  v15.Attributes = v5;
  v15.ObjectName = ObjectName;
  *(_OWORD *)&v15.SecurityDescriptor = 0LL;
  v14 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ZwOpenFile(&Handle, DesiredAccess, &v15, &v14, 3u, 0x40u);
  if ( v9 >= 0 )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v11 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v11);
    }
    ZwClose(Handle);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v10);
  return v9;
}

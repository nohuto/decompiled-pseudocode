/*
 * XREFs of IoGetDevicePropertyData @ 0x140A98450
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404D4110 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1404D6C7C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopFxQueryBiosDeviceName @ 0x1404E2CAC (PopFxQueryBiosDeviceName.c)
 *     HalpAreDriversDmarCompatible @ 0x140579AA0 (HalpAreDriversDmarCompatible.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x140587CE0 (HalpIommuDeviceGetDomainTypes.c)
 *     PnprIsMemoryDevice @ 0x1407AF644 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x1407AF6FC (PnprIsProcessorDevice.c)
 *     IopGetSessionIdFromPDO @ 0x140A97EE8 (IopGetSessionIdFromPDO.c)
 *     IopGetInterruptConnectionData @ 0x140A98340 (IopGetInterruptConnectionData.c)
 *     VfGetDmaAdapter @ 0x140C248E0 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PnpGetDevicePropertyData @ 0x140A98540 (PnpGetDevicePropertyData.c)
 */

NTSTATUS __stdcall IoGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        ULONG Size,
        PVOID Data,
        PULONG RequiredSize,
        PDEVPROPTYPE Type)
{
  _DWORD *DeviceNode; // rax
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rdi
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx

  if ( !Pdo )
    goto LABEL_5;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Pdo, (PVOID)Pdo->Size);
    DriverObject = Pdo->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &Pdo->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)Pdo->DriverObject->DriverName.Buffer,
          (PVOID)Pdo->DriverObject->DriverName.Length);
      }
    }
    v13 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)0x388);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      v15 = (char *)Pdo->DeviceObjectExtension->DeviceNode + 56;
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
      }
      v16 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
      if ( v16 && *(_WORD *)(v16 + 56) )
      {
        IoAddTriageDumpDataBlock(v16 + 56, (PVOID)2);
        v17 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
      }
    }
LABEL_5:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return PnpGetDevicePropertyData(
           (int)Pdo,
           (int)PropertyKey,
           Lcid,
           Flags,
           Size,
           Data,
           (__int64)RequiredSize,
           (__int64)Type);
}

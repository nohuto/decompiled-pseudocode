/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1400B1080
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x140026DF0 (ACPIDispatchForwardIrp.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     AcpiSdevIdentifierInterface @ 0x1400BA6AC (AcpiSdevIdentifierInterface.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1400C2C7C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1400CF900 (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1400D2004 (ACPIFilterIrpQueryIommuInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v6; // r14
  GUID *SecurityContext; // rbx
  int v9; // ebx
  unsigned int v10; // ebx
  _QWORD *v11; // rbp
  unsigned int v12; // ebx
  _QWORD *v13; // rbp
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rbp
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, Size);
    if ( Size > 0x10 )
      QuadPart[1] = DeviceObject;
    goto LABEL_33;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v12 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v12 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v13 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v13, &ACPIInterfaceTable2, v12);
    if ( v12 > 0x10 )
      v13[1] = v6;
LABEL_33:
    v9 = 0;
    goto LABEL_34;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v10 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v10 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v11 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v11, &D3Interface, v10);
    if ( v10 > 0x10 )
      v11[1] = v6;
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface(DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    AcpiGetDriverProxyWrappedEndpoint(&v16, (__int64)AcpiDeviceResetInterface);
    return ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, 1, 1, 1);
  }
  if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) != 16 )
  {
    if ( SecurityContext == &GUID_IOMMU_BUS_INTERFACE
      || RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) == 16 )
    {
      return ACPIFilterIrpQueryIommuInterface(DeviceObject, Irp);
    }
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  v9 = AcpiSdevIdentifierInterface(DeviceObject, CurrentStackLocation);
  if ( v9 == -1073741637 )
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
LABEL_34:
  Irp->IoStatus.Status = v9;
  if ( v9 >= 0 )
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}

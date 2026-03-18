/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x14005A800
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDeviceResetInterface @ 0x140049BF0 (AcpiDeviceResetInterface.c)
 *     AcpiPccEjectInterface @ 0x1400500C8 (AcpiPccEjectInterface.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     ACPIBusIommuBusInterface @ 0x1400A8774 (ACPIBusIommuBusInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1400A8DD8 (ACPIEjectPnpLocationInterface.c)
 *     AcpiArblibEjectInterface @ 0x1400AD42C (AcpiArblibEjectInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1400AE448 (ACPIBusReenumerateSelfInterface.c)
 *     ACPICacheCoherencyInterface @ 0x1400AE4B8 (ACPICacheCoherencyInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1400B1DE8 (ACPIEjectPartitionUnitInterface.c)
 *     PciBusEjectInterface @ 0x1400B3DE8 (PciBusEjectInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1400BA6AC (AcpiSdevIdentifierInterface.c)
 *     AcpiEjectBusNumberTranslator @ 0x1400BB12C (AcpiEjectBusNumberTranslator.c)
 *     TranslateEjectInterface @ 0x1400BB8B8 (TranslateEjectInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1400C27F8 (ACPIInternalSendSynchronousIrp.c)
 *     IsPciBus @ 0x1400C827C (IsPciBus.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(_NAMED_PIPE_CREATE_PARAMETERS *BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // ebx
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rdi
  unsigned int EaLength; // r13d
  __int64 v9; // r15
  GUID *v10; // rdx
  GUID *v11; // rdx
  int v12; // eax
  _IO_STACK_LOCATION *v13; // rbx
  __int64 v14; // rcx
  _LARGE_INTEGER ByteOffset; // rax
  unsigned int v16; // ebx
  const void *v17; // rdx
  _QWORD *v18; // rdi
  __int64 v19; // rax
  struct _DEVICE_OBJECT *v20; // rcx
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rdi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)BugCheckParameter3);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v9 = DeviceExtension;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, Size);
    if ( Size > 0x10 )
      QuadPart[1] = BugCheckParameter3;
    goto LABEL_84;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v16 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v16 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v17 = &ACPIInterfaceTable2;
    goto LABEL_51;
  }
  v10 = &GUID_TRANSLATOR_INTERFACE_STANDARD;
  if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( ((EaLength - 1) & 0xFFFFFFF9) == 0 && EaLength != 5 )
    {
      if ( !(unsigned __int8)IsPciBus(BugCheckParameter3, v10) )
        goto LABEL_75;
      v12 = TranslateEjectInterface(BugCheckParameter3, Irp);
      goto LABEL_74;
    }
    if ( EaLength == 6 && (unsigned __int8)IsPciBus(BugCheckParameter3, v10) && (AcpiOverrideAttributes & 0x1000) == 0 )
    {
      v12 = AcpiEjectBusNumberTranslator(BugCheckParameter3, Irp);
      goto LABEL_74;
    }
    goto LABEL_75;
  }
  v11 = &GUID_PCI_BUS_INTERFACE_STANDARD;
  if ( SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16
    || (v11 = &GUID_PCI_BUS_INTERFACE_STANDARD2, SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD2)
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    if ( !(unsigned __int8)IsPciBus(BugCheckParameter3, v11) )
      goto LABEL_75;
    v12 = PciBusEjectInterface(BugCheckParameter3, Irp);
    goto LABEL_74;
  }
  if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Irp->IoStatus.Status = -1073741127;
    v19 = *(_QWORD *)(v9 + 792);
    if ( v19 )
    {
      v20 = *(struct _DEVICE_OBJECT **)(v19 + 768);
      if ( v20 )
      {
        if ( v19 == RootDeviceExtension )
          CurrentStackLocation->Parameters.CreatePipe.Parameters = BugCheckParameter3;
        Irp->IoStatus.Status = ACPIInternalSendSynchronousIrp(v20);
      }
    }
    goto LABEL_76;
  }
  if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( !_bittest64((const signed __int64 *)(v9 + 8), 0x25u) || !*(_BYTE *)(v9 + 184) )
      goto LABEL_75;
    v12 = AcpiArblibEjectInterface(BugCheckParameter3, Irp);
LABEL_37:
    Irp->IoStatus.Status = v12;
LABEL_74:
    Status = v12;
    goto LABEL_75;
  }
  if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( !_bittest64((const signed __int64 *)(v9 + 8), 0x25u) )
      goto LABEL_75;
    v12 = ACPIEjectPartitionUnitInterface(BugCheckParameter3, Irp);
    goto LABEL_37;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v12 = AcpiPccEjectInterface((ULONG_PTR)BugCheckParameter3, (__int64)Irp);
    goto LABEL_37;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v16 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v16 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v17 = &D3Interface;
LABEL_51:
    v18 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v18, v17, v16);
    if ( v16 > 0x10 )
      v18[1] = v9;
LABEL_84:
    Status = 0;
    goto LABEL_85;
  }
  if ( SecurityContext != &GUID_THERMAL_COOLING_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) != 16 )
  {
    if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
      || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
    {
      v12 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
    }
    else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
           || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
    {
      v12 = ACPICacheCoherencyInterface(v9, CurrentStackLocation);
    }
    else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      v12 = AcpiDeviceResetInterface((__int64)BugCheckParameter3, (__int64)Irp);
    }
    else if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      v12 = ACPIBusReenumerateSelfInterface(v9, CurrentStackLocation);
    }
    else
    {
      if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
        && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
      {
        if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE
          && RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) != 16 )
        {
          goto LABEL_76;
        }
        v12 = AcpiSdevIdentifierInterface(BugCheckParameter3, CurrentStackLocation);
        goto LABEL_74;
      }
      v12 = ACPIBusIommuBusInterface(BugCheckParameter3, Irp);
    }
    goto LABEL_37;
  }
  if ( _bittest64((const signed __int64 *)(v9 + 1008), 0x21u) )
  {
    v13 = Irp->Tail.Overlay.CurrentStackLocation;
    v14 = ACPIInternalGetDeviceExtension((ULONG_PTR)BugCheckParameter3);
    if ( v13->Parameters.QueryInterface.Size >= 0x38u && v13->Parameters.QueryInterface.Version )
    {
      ByteOffset = v13->Parameters.Read.ByteOffset;
      Status = 0;
      *(_QWORD *)(ByteOffset.QuadPart + 8) = v14;
      *(_QWORD *)(ByteOffset.QuadPart + 16) = AcpiNullReference;
      *(_QWORD *)(ByteOffset.QuadPart + 24) = AcpiNullReference;
      *(_QWORD *)(ByteOffset.QuadPart + 40) = ACPIFanControl;
      *(_DWORD *)ByteOffset.QuadPart = 65592;
      *(_QWORD *)(ByteOffset.QuadPart + 48) = 0LL;
    }
    else
    {
      Status = -1073741811;
    }
    Irp->IoStatus.Status = Status;
  }
LABEL_75:
  if ( Status != -1073741637 )
  {
LABEL_85:
    Irp->IoStatus.Status = Status;
    goto LABEL_86;
  }
LABEL_76:
  Status = Irp->IoStatus.Status;
LABEL_86:
  IofCompleteRequest(Irp, 0);
  return Status;
}

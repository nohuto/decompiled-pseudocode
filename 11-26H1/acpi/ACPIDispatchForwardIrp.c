/*
 * XREFs of ACPIDispatchForwardIrp @ 0x140026DF0
 * Callers:
 *     ACPIDispatchForwardIrpWithExceptions @ 0x140043BC0 (ACPIDispatchForwardIrpWithExceptions.c)
 *     ACPIDispatchWmiLog @ 0x14006BA80 (ACPIDispatchWmiLog.c)
 *     ACPIEcOtherIrpDispatch @ 0x1400AECA0 (ACPIEcOtherIrpDispatch.c)
 *     ACPIFilterIrpQueryInterface @ 0x1400B1080 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400C0080 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1400CA430 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIRootIrpQueryInterface @ 0x1400CC6A0 (ACPIRootIrpQueryInterface.c)
 *     ACPIThermalWmi @ 0x1400CDAA0 (ACPIThermalWmi.c)
 *     ACPIFilterIrpQueryId @ 0x1400CFE10 (ACPIFilterIrpQueryId.c)
 * Callees:
 *     _ACPIInternalErrorEx @ 0x1400254AC (_ACPIInternalErrorEx.c)
 */

__int64 __fastcall ACPIDispatchForwardIrp(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned int Status; // edi

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v5 && *(_DWORD *)(v5 + 16) != 1599293264 )
    ACPIInternalErrorEx(0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  if ( *(_QWORD *)(v5 + 776) )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 776), Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}

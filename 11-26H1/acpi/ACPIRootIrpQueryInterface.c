/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1400CC6A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x140026DF0 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     AcpiPccEjectInterface @ 0x1400500C8 (AcpiPccEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1400A8DD8 (ACPIEjectPnpLocationInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1400A98F8 (IrqTranslatorEjectInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1400AAFD8 (AcpiIrqLibEjectArbiterInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  bool v5; // si
  __int64 v6; // rcx
  unsigned __int8 MinorFunction; // r12
  unsigned int EaLength; // r14d
  GUID *SecurityContext; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int Status; // ebx
  int v14; // eax
  char *IrpText; // rax
  const char *v16; // r8
  const char *v17; // r10
  char v18; // r11

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  ACPIInternalGetDeviceExtension(BugCheckParameter3);
  MinorFunction = CurrentStackLocation->MinorFunction;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v10 = AcpiIrqLibEjectArbiterInterface(v6, (__int64)Irp);
LABEL_4:
    Irp->IoStatus.Status = v10;
    goto LABEL_5;
  }
  if ( (SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v10 = IrqTranslatorEjectInterface(*(_QWORD *)(RootDeviceExtension + 784));
    goto LABEL_4;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v14 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v14;
    v11 = v14 + 0x80000000;
    if ( (int)v11 >= 0 )
      v5 = v14 == -1073741637;
  }
  else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
         || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v10 = ACPIEjectPnpLocationInterface(BugCheckParameter3, (__int64)Irp);
    goto LABEL_4;
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
      (char)Irp,
      IrpText,
      Irp->IoStatus.Status,
      v18,
      v16,
      v17);
  }
  if ( v5 )
  {
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}

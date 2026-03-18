/*
 * XREFs of ACPIDockIrpQueryInterface @ 0x1400AC120
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x14003D6E4 (ACPIDebugGetIrpText.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ACPIDockIrpQueryInterface(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rcx
  unsigned __int8 MinorFunction; // r13
  char v8; // si
  unsigned int Status; // edi
  __int64 v10; // rbx
  unsigned __int16 Size; // ax
  unsigned __int16 v12; // di
  __int64 v13; // rcx
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10
  __int128 Src; // [rsp+68h] [rbp+7h] BYREF
  __int128 v19; // [rsp+78h] [rbp+17h] BYREF
  __int128 v20; // [rsp+88h] [rbp+27h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v8 = 0;
  Status = a2->IoStatus.Status;
  v10 = DeviceExtension;
  if ( SecurityContext == &GUID_DOCK_INTERFACE || RtlCompareMemory(SecurityContext, &GUID_DOCK_INTERFACE, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v12 = 48;
    Src = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    if ( Size <= 0x30u )
      v12 = Size;
    LOWORD(Src) = v12;
    WORD1(Src) = 1;
    *((_QWORD *)&Src + 1) = a1;
    AcpiGetDriverProxyWrappedEndpoint(&v19, (__int64)ACPIDockIntfReference);
    AcpiGetDriverProxyWrappedEndpoint((_QWORD *)&v19 + 1, (__int64)ACPIDockIntfDereference);
    AcpiGetDriverProxyWrappedEndpoint(&v20, (__int64)ACPIDockIntfSetMode);
    AcpiGetDriverProxyWrappedEndpoint((_QWORD *)&v20 + 1, (__int64)ACPIDockIntfUpdateDeparture);
    ((void (__fastcall *)(_QWORD))v19)(*((_QWORD *)&Src + 1));
    memmove(CurrentStackLocation->Parameters.SetFile.FileObject, &Src, v12);
    Status = 0;
    a2->IoStatus.Status = 0;
  }
  IofCompleteRequest(a2, 0);
  if ( v10 )
    v8 = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v13, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x17u,
      (__int64)&WPP_6a0c72af8ad13ec042225ebd05f61004_Traceguids,
      (char)a2,
      IrpText,
      Status,
      v8,
      v15,
      v16);
  }
  return Status;
}

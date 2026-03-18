/*
 * XREFs of IoSynchronousCallDriver @ 0x1404B2910
 * Callers:
 *     FsRtlGetFileExtents @ 0x1405B5170 (FsRtlGetFileExtents.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790C90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790D30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CA744 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x1407CB760 (PopAcquireCoolingInterface.c)
 *     PopBatteryAdd @ 0x1407D7CF0 (PopBatteryAdd.c)
 *     PopBatteryWorker @ 0x1407D7EF0 (PopBatteryWorker.c)
 *     PopPowerAdapterAdd @ 0x1407D94D0 (PopPowerAdapterAdd.c)
 *     IoForwardIrpSynchronously @ 0x140ABC340 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140AFE0E0 (FsRtlPrepareMdlWriteEx.c)
 *     PopBatteryQueryStatus @ 0x140AFEBC0 (PopBatteryQueryStatus.c)
 *     FsRtlMdlReadEx @ 0x140B05420 (FsRtlMdlReadEx.c)
 *     PopBatteryInitialize @ 0x140B0831C (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140B22040 (PopBatteryQueryEstimatedTime.c)
 *     WmipGetFilePDO @ 0x140B2E4D8 (WmipGetFilePDO.c)
 *     PopBatteryReadTag @ 0x140B3D420 (PopBatteryReadTag.c)
 *     PopPowerAdapterQueryStatus @ 0x140B71E04 (PopPowerAdapterQueryStatus.c)
 * Callees:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int64 Object; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  Object = 393216LL;
  v6[1] = v6;
  v6[0] = v6;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&CmpCompleteFlushAndPurgeIrp;
  CurrentStackLocation[-1].Context = &Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}

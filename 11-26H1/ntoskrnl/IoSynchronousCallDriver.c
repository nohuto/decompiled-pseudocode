/*
 * XREFs of IoSynchronousCallDriver @ 0x1404ABE20
 * Callers:
 *     FsRtlGetFileExtents @ 0x1405B7980 (FsRtlGetFileExtents.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1407937C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140793860 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CD7E4 (PopAcquirePowerLimitInterface.c)
 *     PopAcquireCoolingInterface @ 0x1407CE800 (PopAcquireCoolingInterface.c)
 *     PopBatteryAdd @ 0x1407DB310 (PopBatteryAdd.c)
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopPowerAdapterAdd @ 0x1407DCEF0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterReinitialize @ 0x1407DD830 (PopPowerAdapterReinitialize.c)
 *     IoForwardIrpSynchronously @ 0x140ABE140 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140B00150 (FsRtlPrepareMdlWriteEx.c)
 *     PopBatteryQueryStatus @ 0x140B00C30 (PopBatteryQueryStatus.c)
 *     FsRtlMdlReadEx @ 0x140B07030 (FsRtlMdlReadEx.c)
 *     PopBatteryQueryEstimatedTime @ 0x140B24440 (PopBatteryQueryEstimatedTime.c)
 *     WmipGetFilePDO @ 0x140B30428 (WmipGetFilePDO.c)
 *     PopBatteryReadTag @ 0x140B3F4F0 (PopBatteryReadTag.c)
 *     PopBatteryInitialize @ 0x140B76BD0 (PopBatteryInitialize.c)
 *     PopPowerAdapterQueryStatus @ 0x140B76DFC (PopPowerAdapterQueryStatus.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
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

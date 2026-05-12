/*
 * XREFs of NvmeAdapterStopDeviceIrp @ 0x14019F188
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaForwardIrp @ 0x140037074 (RaForwardIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     NvmeAdapterDeleteAsyncCallbacks @ 0x1400D47B0 (NvmeAdapterDeleteAsyncCallbacks.c)
 *     NvmeAdapterLock @ 0x1400D9540 (NvmeAdapterLock.c)
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400FB564 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400FB8F0 (NvmeControllerWaitForOutstandingIoComplete.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall NvmeAdapterStopDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 84), 8);
  v2 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)v2 == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 8) + 20LL) |= 2u;
    PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL), 0LL, 1LL);
  }
  NvmeAdapterLock(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    result = NvmeControllerSubmissionQueueQuiesce(*(_QWORD *)(a1 + 1152));
    if ( result < 0 )
      return result;
    if ( !NvmeControllerWaitForOutstandingIoComplete(*(_QWORD *)(a1 + 1152), 10) )
      return -1073741643;
  }
  else
  {
    result = RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 4u, 0LL, 0LL, 0);
    if ( result < 0 )
      return result;
  }
  NvmeAdapterDeleteAsyncCallbacks(a1);
  NvmeAdapterStop(a1, 1);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v8);
    if ( (byte_140173442 & 0x20) != 0 )
    {
      LODWORD(v7) = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v6, &EventPnpRequestComplete, &v8, a2, v7);
    }
  }
  a2->IoStatus.Status = 0;
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}

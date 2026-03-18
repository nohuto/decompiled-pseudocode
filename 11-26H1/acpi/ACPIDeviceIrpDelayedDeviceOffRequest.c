/*
 * XREFs of ACPIDeviceIrpDelayedDeviceOffRequest @ 0x140044E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x140024BD8 (ACPIInternalDecrementIrpReferenceCount.c)
 */

LONG __fastcall ACPIDeviceIrpDelayedDeviceOffRequest(__int64 a1, IRP *a2, int a3)
{
  const char *v4; // rax
  char v5; // r8
  const char *v8; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  __int64 v12; // rcx

  v4 = byte_140075A82;
  v5 = 0;
  v8 = byte_140075A82;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v5 = a1;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(a1 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x1Cu,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a2,
      a3,
      v5,
      v4,
      v8);
  if ( a3 < 0 )
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 728));
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v10 = a2->Tail.Overlay.CurrentStackLocation;
    v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
    v10[-1].Context = ACPIDeviceIrpCompleteRequest;
    v10[-1].Control = -32;
    PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 776), a2);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}

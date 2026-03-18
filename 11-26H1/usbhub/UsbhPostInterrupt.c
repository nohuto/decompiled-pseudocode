/*
 * XREFs of UsbhPostInterrupt @ 0x1400133E0
 * Callers:
 *     UsbhBusResume_Action @ 0x140012FB0 (UsbhBusResume_Action.c)
 *     UsbhBusPause_Action @ 0x14001498C (UsbhBusPause_Action.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1400475E0 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

NTSTATUS __fastcall UsbhPostInterrupt(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  IRP *v12; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int64 v15; // r8
  volatile signed __int32 *v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _IO_STACK_LOCATION *v21; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v6 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v7 = *((_DWORD *)DeviceExtension + 221);
        v8 = *((_QWORD *)DeviceExtension + 111);
        a2 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(a2 + v8) = 1047622249;
        *(_QWORD *)(a2 + v8 + 8) = 0LL;
        *(_QWORD *)(a2 + v8 + 16) = 0LL;
        *(_QWORD *)(a2 + v8 + 24) = 0LL;
      }
    }
  }
  v9 = FdoExt(DeviceObject, a2, a3, a4);
  v10 = v9;
  v11 = *(_QWORD *)(v9 + 2672);
  v12 = *(IRP **)(v9 + 2664);
  if ( !v11 || !v12 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)v11 = 589952;
  *(_QWORD *)(v11 + 24) = *(_QWORD *)(v9 + 2640);
  *(_DWORD *)(v11 + 32) = 2;
  *(_DWORD *)(v11 + 36) = *(unsigned __int16 *)(v9 + 2632);
  *(_QWORD *)(v11 + 40) = *(_QWORD *)(v9 + 2680);
  memset(*(void **)(v9 + 2680), 0, *(unsigned __int16 *)(v9 + 2632));
  *(_QWORD *)(v11 + 48) = 0LL;
  IoInitializeIrp(v12, 72 * *(char *)(*(_QWORD *)(v10 + 1208) + 76LL) + 208, *(_BYTE *)(*(_QWORD *)(v10 + 1208) + 76LL));
  CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = v11;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 2712)) )
  {
    if ( IoSetCompletionRoutineEx(DeviceObject, v12, UsbhHubIsr, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v21 = v12->Tail.Overlay.CurrentStackLocation;
      v21[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhHubIsr;
      v21[-1].Context = DeviceObject;
      v21[-1].Control = -32;
    }
    result = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v12);
    v15 = result;
    if ( (UsbhLogMask & 4) != 0 && DeviceObject )
    {
      v16 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( v16 )
      {
        v17 = _InterlockedExchangeAdd(v16 + 220, 0xFFFFFFFF);
        v18 = *((_DWORD *)v16 + 221);
        v19 = *((_QWORD *)v16 + 111);
        v20 = (v17 - 1) & v18;
        result = 1047621993;
        v20 *= 32LL;
        *(_DWORD *)(v20 + v19) = 1047621993;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = v15;
        *(_QWORD *)(v20 + v19 + 24) = 0LL;
      }
    }
  }
  else
  {
    Log((__int64)DeviceObject, 4, 1769042750, 0LL, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 2712));
    return KeSetEvent((PRKEVENT)(v10 + 2688), 0, 0);
  }
  return result;
}

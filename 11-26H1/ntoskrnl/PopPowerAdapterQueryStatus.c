/*
 * XREFs of PopPowerAdapterQueryStatus @ 0x140B76DFC
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 *     PopPowerAdapterAdd @ 0x1407DCEF0 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterReinitialize @ 0x1407DD830 (PopPowerAdapterReinitialize.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     IoSynchronousCallDriver @ 0x1404ABE20 (IoSynchronousCallDriver.c)
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x14060F844 (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPrepareIoctl @ 0x140AFD904 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopPowerAdapterQueryStatus(__int64 a1, char a2)
{
  __int64 v2; // rdi
  IRP *v5; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8

  v2 = a1 + 64;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 180);
    *(_DWORD *)(a1 + 68) = -1;
    *(_DWORD *)(a1 + 76) = PopPowerAdapterPeakPowerThresholdInMW;
  }
  PopPrepareIoctl(*(IRP **)(a1 + 56), 0x29406Cu, 0, (struct _IRP *)v2, 0x10u, 0x28u);
  v5 = *(IRP **)(a1 + 56);
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), v5);
    if ( result < 0 )
      return result;
    v8 = *(_OWORD *)(v2 + 16);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)v2;
    v9 = *(_QWORD *)(v2 + 32);
    *(_OWORD *)(a1 + 192) = v8;
    *(_QWORD *)(a1 + 208) = v9;
  }
  else
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopPowerAdapterIrpComplete;
    CurrentStackLocation[-1].Context = (PVOID)a1;
    CurrentStackLocation[-1].Control = -32;
    if ( (unsigned int)Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline() )
      KeResetEvent((PRKEVENT)(a1 + 104));
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
  }
  return 0;
}

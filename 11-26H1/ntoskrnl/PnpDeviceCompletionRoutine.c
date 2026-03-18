/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x1404937E0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140493910 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1404939D8 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDiagnosticTraceObject @ 0x140493A8C (PnpDiagnosticTraceObject.c)
 *     PnpTraceStartDevice @ 0x140493B60 (PnpTraceStartDevice.c)
 *     IoFindDeviceThatFailedIrp @ 0x1404D3D90 (IoFindDeviceThatFailedIrp.c)
 *     PnpGetDriverNameFromString @ 0x1405DA100 (PnpGetDriverNameFromString.c)
 *     PnpRecordBootDriverFailure @ 0x1405DA300 (PnpRecordBootDriverFailure.c)
 */

__int64 __fastcall PnpDeviceCompletionRoutine(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 DeviceThatFailedIrp; // rax
  __int64 v9; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  v10 = 0;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( a2->PendingReturned )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = a2->IoStatus.Information;
  *(_DWORD *)(a3 + 40) = a2->IoStatus.Status;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2, a2, a3, a4);
    if ( DeviceThatFailedIrp )
    {
      v4 = *(_QWORD *)(DeviceThatFailedIrp + 8);
      if ( !PnPBootDriversInitialized && (int)PnpGetDriverNameFromString(v4 + 56, &v11, &v10) >= 0 )
        PnpRecordBootDriverFailure(v11, v10, v9, *(unsigned int *)(a3 + 40));
    }
  }
  else if ( !PnPBootDriversInitialized && PnpBootDriverTracking )
  {
    _InterlockedIncrement((volatile signed __int32 *)PnpBootDriverTracking + 100);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  if ( *(_DWORD *)(a3 + 32) == 783 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop);
  else
    PnpTraceStartDevice(*(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 40), v4);
  PnpDeviceCompletionRequestDestroy((PVOID)a3);
  IoFreeIrp(a2);
  return 3221225494LL;
}

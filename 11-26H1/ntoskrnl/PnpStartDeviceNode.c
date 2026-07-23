/*
 * XREFs of PnpStartDeviceNode @ 0x1409B2B5C
 * Callers:
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x1407B7D88 (PipProcessRestartPhase1.c)
 *     PipProcessStartPhase1 @ 0x1409B29C0 (PipProcessStartPhase1.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpTraceStartDevice @ 0x14048D6B0 (PnpTraceStartDevice.c)
 *     PnpStartDevice @ 0x14049B068 (PnpStartDevice.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x1404C445C (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1404CC35C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404DCA0C (PpMarkDeviceStackExtensionFlag.c)
 *     PipUpdatePostStartCharacteristics @ 0x1404DCD38 (PipUpdatePostStartCharacteristics.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409AF320 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1409B03D4 (PnpDeviceCompletionRequestCreate.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     IopGetSessionIdFromPDO @ 0x140A9C068 (IopGetSessionIdFromPDO.c)
 *     PiSwProcessParentStartIrp @ 0x140B26E4C (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpStartDeviceNode(__int64 a1, int a2, int a3)
{
  unsigned __int16 *v3; // r14
  int v4; // ebp
  __int64 v8; // rdx
  int v9; // ebp
  int started; // ebx
  __int64 v11; // r8
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  int v18; // [rsp+70h] [rbp-18h]
  int v19; // [rsp+74h] [rbp-14h]

  v3 = (unsigned __int16 *)(a1 + 40);
  v4 = -(a2 != 0);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = v4 & 5;
  memset(&Event, 0, sizeof(Event));
  v19 = 0;
  PnpSetObjectProperty(PiPnpRtlCtx, v8, 1, 0LL, (__int64)&DEVPKEY_Device_DriverProblemDesc, 0, 0LL, 0, 0);
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(_QWORD *)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || InitSafeBootMode
    || (v13 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, v9 + 776, 0LL)) == 0LL )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, v3);
    v18 = -1073741823;
    v16 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDiagnosticCompletionRoutine, (__int64)&v16);
    if ( started == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      started = v18;
    }
    if ( started >= 0 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(a1 + 32));
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v11 = v16;
    *(_DWORD *)(a1 + 392) = started;
    PnpTraceStartDevice(a1, (unsigned int)started, v11);
    PipSetDevNodeState(a1, v9 + 776);
  }
  else
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, v3);
    PipSetDevNodeState(a1, 775);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v14, v13);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDeviceCompletionRoutine, (__int64)v13);
    if ( started == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Pend, v3);
    }
    else
    {
      PnpDeviceCompletionQueueRemoveCompletedRequest(v15, v13);
      return (unsigned int)PnpDeviceCompletionProcessCompletedRequest(v13);
    }
  }
  return (unsigned int)started;
}

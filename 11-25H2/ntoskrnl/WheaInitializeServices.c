/*
 * XREFs of WheaInitializeServices @ 0x140C33394
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     WheapInitializeInUsePageOfflineNotifications @ 0x1407B86F4 (WheapInitializeInUsePageOfflineNotifications.c)
 *     WheapSetDefaultErrorSourceConfiguration @ 0x140C33768 (WheapSetDefaultErrorSourceConfiguration.c)
 */

PVOID *WheaInitializeServices()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  WheapSetDefaultErrorSourceConfiguration();
  WheapPfaLock = 0LL;
  qword_140EEF530 = (__int64)&WheapPfaList;
  WheapPfaList = &WheapPfaList;
  _InterlockedOr(v1, 0);
  WheapPfaInitialized = 1;
  *(_QWORD *)&WheapDispatchPtr.DeviceQueue.Type = &WheapDispatchPtr.AlignmentRequirement;
  *(_QWORD *)&WheapDispatchPtr.AlignmentRequirement = &WheapDispatchPtr.AlignmentRequirement;
  WheapDispatchPtr.Queue.Wcb.DeviceContext = &WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
  WheapDispatchPtr.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)&WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
  WheaDrsDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)WheapDeferredRecoveryServiceDpcRoutine;
  WheaDrsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapDeferredRecoveryServiceWorker;
  WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = 1;
  WheapDispatchPtr.Queue.Wcb.DeviceObject = 0LL;
  LODWORD(WheapDispatchPtr.Queue.Wcb.CurrentIrp) = 0;
  LOWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = 1;
  BYTE2(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = 6;
  HIDWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = 0;
  WheaPassiveDrsListLock = 0LL;
  WheaDrsDpc.TargetInfoAsUlong = 275;
  WheaDrsDpc.DeferredContext = 0LL;
  WheaDrsDpc.DpcData = 0LL;
  WheaDrsDpc.ProcessorHistory = 0LL;
  WheaDrsWorkItem.Parameter = 0LL;
  WheaDrsWorkItem.List.Flink = 0LL;
  _InterlockedOr(v1, 0);
  WheaDrsInitialized = 1;
  return WheapInitializeInUsePageOfflineNotifications();
}

/*
 * XREFs of WheaFlushETWEventsDpcWorkerInit @ 0x140651F44
 * Callers:
 *     WheapEtwEnableCallback @ 0x1407B8B70 (WheapEtwEnableCallback.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 (__fastcall *WheaFlushETWEventsDpcWorkerInit())()
{
  __int64 (__fastcall *result)(); // rax

  memset_0(&WheapDispatchPtr.DeviceLock, 0, 0x70uLL);
  WheapDispatchPtr.DeviceLock.Header.LockNV = 275;
  WheapDispatchPtr.DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)&WheapDispatchPtr.DeviceLock;
  *(_QWORD *)&WheapDispatchPtr.SectorSize = WheaFlushETWEventsDpcRoutine;
  stru_140EF7680.WorkerRoutine = (void (__fastcall *)(void *))WheaFlushETWEventsWorkerRoutine;
  result = WheapProcessWaitingETWEvents;
  qword_140EF76A8 = (__int64)WheapProcessWaitingETWEvents;
  unk_140EF7678 = 0LL;
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink = 0LL;
  stru_140EF7680.Parameter = &WheapDispatchPtr.DeviceLock;
  stru_140EF7680.List.Flink = 0LL;
  dword_140EF76A0 = 0;
  WheaFlushETWEventsInitialized = 1;
  return result;
}

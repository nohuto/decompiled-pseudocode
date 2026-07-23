/*
 * XREFs of WheaFlushETWEventsDpcWorkerInit @ 0x1406DB1A4
 * Callers:
 *     WheapEtwEnableCallback @ 0x14084F4D0 (WheapEtwEnableCallback.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 (__fastcall *WheaFlushETWEventsDpcWorkerInit())()
{
  __int64 (__fastcall *result)(); // rax

  memset_0(&WheaFlushETWEventsDpcWorker, 0, 0x70uLL);
  LODWORD(WheaFlushETWEventsDpcWorker) = 275;
  *(&WheaFlushETWEventsDpcWorker + 4) = (ULONG_PTR)&WheaFlushETWEventsDpcWorker;
  *(&WheaFlushETWEventsDpcWorker + 3) = (ULONG_PTR)WheaFlushETWEventsDpcRoutine;
  stru_140EFE500.WorkerRoutine = (void (__fastcall *)(void *))WheaFlushETWEventsWorkerRoutine;
  result = WheapProcessWaitingETWEvents;
  qword_140EFE528 = (__int64)WheapProcessWaitingETWEvents;
  *(&WheaFlushETWEventsDpcWorker + 7) = 0LL;
  *(&WheaFlushETWEventsDpcWorker + 2) = 0LL;
  stru_140EFE500.Parameter = &WheaFlushETWEventsDpcWorker;
  stru_140EFE500.List.Flink = 0LL;
  dword_140EFE520 = 0;
  WheaFlushETWEventsInitialized = 1;
  return result;
}

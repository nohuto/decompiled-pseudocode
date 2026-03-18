/*
 * XREFs of ExQueueDebuggerWorker @ 0x1406D0A48
 * Callers:
 *     KdExitDebugger @ 0x140C12008 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)ExSaPageGroupDescriptorArrayLock.SchedulerApc.Reserved, 0LL, 0LL, 0LL, 0);
  return result;
}

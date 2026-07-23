/*
 * XREFs of ExQueueDebuggerWorker @ 0x1406D4A78
 * Callers:
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock.SchedulerApc.SystemArgument2, 0LL, 0LL, 0LL, 0);
  return result;
}

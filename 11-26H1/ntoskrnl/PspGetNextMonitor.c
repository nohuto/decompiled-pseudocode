/*
 * XREFs of PspGetNextMonitor @ 0x140801A20
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x140801B0C (PspNotifyServerSiloCreation.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PspGetNextMonitor(struct _KTHREAD **a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)KiSystemServiceTraceCallbackLock.CycleTime;
  if ( a1 )
    result = *a1;
  if ( result == (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.CycleTime )
    return 0LL;
  return result;
}

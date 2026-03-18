/*
 * XREFs of PspGetNextMonitor @ 0x1407FBFF0
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1407EEA70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspNotifyServerSiloCreation @ 0x1407FC0DC (PspNotifyServerSiloCreation.c)
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

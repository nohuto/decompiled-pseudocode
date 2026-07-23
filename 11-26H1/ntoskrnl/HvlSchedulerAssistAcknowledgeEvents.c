/*
 * XREFs of HvlSchedulerAssistAcknowledgeEvents @ 0x1405BE180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall HvlSchedulerAssistAcknowledgeEvents(unsigned __int64 a1)
{
  struct _KPRCB *result; // rax
  volatile signed __int64 *SchedulerAssist; // rdx

  result = KeGetCurrentPrcb();
  SchedulerAssist = (volatile signed __int64 *)result->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedAdd64(SchedulerAssist + 6, a1);
  return result;
}

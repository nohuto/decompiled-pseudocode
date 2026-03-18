/*
 * XREFs of PoGetProcessorIdleAccounting @ 0x14052F9F0
 * Callers:
 *     EmonOverflowHandlerInternalV2 @ 0x1404B710C (EmonOverflowHandlerInternalV2.c)
 *     EmonOverflowHandlerInternalV1 @ 0x1404B75BC (EmonOverflowHandlerInternalV1.c)
 *     Amd64OverflowHandlerInternal @ 0x1405A4530 (Amd64OverflowHandlerInternal.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall PoGetProcessorIdleAccounting(_QWORD *a1)
{
  struct _KPRCB *result; // rax
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // rdx

  result = KeGetCurrentPrcb();
  IdleAccounting = result->PowerState.IdleAccounting;
  if ( a1 )
  {
    if ( IdleAccounting )
    {
      result = (struct _KPRCB *)IdleAccounting->TotalTransitions;
      *a1 = result;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return result;
}

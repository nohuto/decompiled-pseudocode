/*
 * XREFs of TlgAggregateFlush @ 0x140693C6C
 * Callers:
 *     CmFcShutdownSystem @ 0x1407C6490 (CmFcShutdownSystem.c)
 *     CmpFlushTraceLoggingProvider @ 0x1407C6A84 (CmpFlushTraceLoggingProvider.c)
 * Callees:
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404BA1A0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     LookUpTableFlushComplete @ 0x140A4E94C (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateFlush(__int64 a1)
{
  __int64 v1; // rcx
  volatile signed __int16 *v2; // rdx

  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v1 = *(_QWORD *)(a1 + 48);
    if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    {
      v2 = *(volatile signed __int16 **)(v1 + 264);
      *(_BYTE *)(v1 + 372) = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(*(struct _EX_TIMER **)(v1 + 360), v2);
    }
    else
    {
      LookUpTableFlushComplete(v1);
    }
  }
}

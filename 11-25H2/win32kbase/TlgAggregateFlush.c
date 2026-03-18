/*
 * XREFs of TlgAggregateFlush @ 0x14015837C
 * Callers:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140080360 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 * Callees:
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1401A05A0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     LookUpTableFlushComplete @ 0x1402C99EC (LookUpTableFlushComplete.c)
 */

void TlgAggregateFlush()
{
  __int64 v0; // rbx
  void *v1; // rdx
  struct _EX_TIMER *v2; // rcx

  if ( (void (__fastcall *)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))qword_14029EE10 == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    v0 = qword_14029EE18;
    if ( KeGetCurrentIrql() >= 2u || (unsigned int)KeIsExecutingDpc() )
    {
      v1 = *(void **)(v0 + 264);
      v2 = *(struct _EX_TIMER **)(v0 + 360);
      *(_BYTE *)(v0 + 372) = 1;
      TlgAggregateInternalFlushTimerCallbackKernelMode(v2, v1);
    }
    else
    {
      LookUpTableFlushComplete(v0);
    }
  }
}

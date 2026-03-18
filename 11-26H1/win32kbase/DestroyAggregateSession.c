/*
 * XREFs of DestroyAggregateSession @ 0x1402D2008
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1402D3480 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1402D358C (CreateTlgAggregateSession.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1402D2980 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer();
    v2 = (void *)P[33];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    ExFreePoolWithTag(P, 0);
  }
}

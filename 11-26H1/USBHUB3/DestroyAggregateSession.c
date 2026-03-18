/*
 * XREFs of DestroyAggregateSession @ 0x140094524
 * Callers:
 *     CreateTlgAggregateSession @ 0x1400943CC (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProvider @ 0x140094C2C (TlgRegisterAggregateProvider.c)
 *     TlgUnregisterAggregateProvider @ 0x140094DBC (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x140094334 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(_QWORD *P, __int64 a2, __int64 a3)
{
  void *v4; // rcx

  if ( P )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)P, a2, a3);
    v4 = (void *)P[33];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ExFreePoolWithTag(P, 0);
  }
}

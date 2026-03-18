/*
 * XREFs of PfSnPowerBoostInitialize @ 0x140AE082C
 * Callers:
 *     PfSnAsyncContextInitialize @ 0x140AE075C (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x140483D00 (KeInitializeTimer.c)
 */

void __fastcall PfSnPowerBoostInitialize(char *DeferredContext)
{
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 19) = PfSnPowerBoostWorker;
  *((_QWORD *)DeferredContext + 20) = DeferredContext;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  KeInitializeTimer((PKTIMER)(DeferredContext + 8));
  KeInitializeDpc((PRKDPC)(DeferredContext + 72), (PKDEFERRED_ROUTINE)PfSnPowerBoostDpc, DeferredContext);
}

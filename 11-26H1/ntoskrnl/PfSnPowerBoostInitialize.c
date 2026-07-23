/*
 * XREFs of PfSnPowerBoostInitialize @ 0x1409CFE18
 * Callers:
 *     PfSnAsyncContextInitialize @ 0x1409CFE74 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
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

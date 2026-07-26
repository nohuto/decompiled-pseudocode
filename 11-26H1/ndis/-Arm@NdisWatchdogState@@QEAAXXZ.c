/*
 * XREFs of ?Arm@NdisWatchdogState@@QEAAXXZ @ 0x140156400
 * Callers:
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140155860 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisWatchdogState::Arm(PKDPC Dpc)
{
  unsigned int v2; // eax
  __int64 v3; // rbx

  v2 = g_ndisWatchdogSequenceNumber + 1;
  LODWORD(Dpc[2].DeferredContext) = 1;
  HIDWORD(Dpc[2].DeferredContext) = v2;
  g_ndisWatchdogSequenceNumber = v2;
  v3 = -10000LL * HIDWORD(Dpc[3].DpcListEntry.Next);
  KeClearEvent((PRKEVENT)&Dpc[2].SystemArgument1);
  KeSetTimerEx((PKTIMER)&Dpc[1], (LARGE_INTEGER)v3, 0, Dpc);
}

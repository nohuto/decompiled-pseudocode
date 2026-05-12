/*
 * XREFs of RaidAdapterEnableIoResourceAutoReclaim @ 0x140061070
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1400108D0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterEnableIoResourceAutoReclaim(__int64 a1, char a2)
{
  struct _KDPC *Dpc; // rdi
  struct _KTIMER *v4; // rsi

  Dpc = (struct _KDPC *)(a1 + 5920);
  v4 = (struct _KTIMER *)(a1 + 5856);
  if ( !a2 )
  {
    KeInitializeTimer((PKTIMER)(a1 + 5856));
    KeInitializeDpc(Dpc, RaidAdapterReclaimIoResourceTimerDpcRoutine, *(PVOID *)(a1 + 8));
  }
  return KeSetCoalescableTimer(v4, (LARGE_INTEGER)-18000000000LL, 0x1B7740u, 0xEA60u, Dpc);
}

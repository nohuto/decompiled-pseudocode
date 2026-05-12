/*
 * XREFs of RaidSetUnitPauseTimer @ 0x140028BD4
 * Callers:
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaidAdapterPauseUnit @ 0x140028B48 (RaidAdapterPauseUnit.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 */

char __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  int v3; // eax

  LOBYTE(v3) = KeSetCoalescableTimer((PKTIMER)(a1 + 1184), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1248));
  if ( (_BYTE)v3 )
  {
    v3 = RaidResumeUnitQueue(a1);
    if ( v3 )
      LOBYTE(v3) = RaidUnitRestartQueue(a1, 0LL);
  }
  return v3;
}

/*
 * XREFs of RaidAdapterStopAdapter @ 0x14000EE90
 * Callers:
 *     RaidAdapterStop @ 0x1400509C8 (RaidAdapterStop.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStopAdapter(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = RaidAdapterAcquireInterruptLock(a1);
  v3 = RaCallMiniportAdapterControl(a1 + 376, 1LL);
  RaidAdapterReleaseInterruptLock(a1, v2);
  if ( (unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 3LL) )
    RaCallMiniportAdapterControl(a1 + 376, 3LL);
  if ( v3 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v3;
}

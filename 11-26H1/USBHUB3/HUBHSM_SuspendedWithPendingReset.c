/*
 * XREFs of HUBHSM_SuspendedWithPendingReset @ 0x14000A180
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_AcquireWdfPowerReference @ 0x14000C9D4 (HUBFDO_AcquireWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_SuspendedWithPendingReset(__int64 a1)
{
  HUBFDO_AcquireWdfPowerReference(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

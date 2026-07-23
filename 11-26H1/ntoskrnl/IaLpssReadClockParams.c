/*
 * XREFs of IaLpssReadClockParams @ 0x140726444
 * Callers:
 *     IaLpssSetPowerD0 @ 0x140726520 (IaLpssSetPowerD0.c)
 *     IaLpssSetPowerD3 @ 0x1407265D0 (IaLpssSetPowerD3.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadClockParams(_QWORD *a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(*a1 + 128LL, a2);
}

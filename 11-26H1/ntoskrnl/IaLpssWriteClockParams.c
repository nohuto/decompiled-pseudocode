/*
 * XREFs of IaLpssWriteClockParams @ 0x140721A98
 * Callers:
 *     IaLpssSetPowerD0 @ 0x140721950 (IaLpssSetPowerD0.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteClockParams(_QWORD *a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(*a1 + 128LL, a2);
}

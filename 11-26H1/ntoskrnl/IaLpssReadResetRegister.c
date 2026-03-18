/*
 * XREFs of IaLpssReadResetRegister @ 0x140721918
 * Callers:
 *     IaLpssSetPowerD0 @ 0x140721950 (IaLpssSetPowerD0.c)
 *     IaLpssSetPowerD3 @ 0x140721A00 (IaLpssSetPowerD3.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadResetRegister(_QWORD *a1, __int64 a2)
{
  return (unsigned __int8)guard_dispatch_icall_no_overrides(*a1 + 129LL, a2);
}

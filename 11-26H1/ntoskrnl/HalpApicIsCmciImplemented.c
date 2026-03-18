/*
 * XREFs of HalpApicIsCmciImplemented @ 0x1405A1ACC
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x1405A18A0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpApicGetCpuInfo @ 0x1405A1604 (HalpApicGetCpuInfo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicIsCmciImplemented(__int64 a1, _DWORD *a2)
{
  HalpApicGetCpuInfo(0LL, 0LL);
  if ( a2 )
    *a2 = 0;
  return 0;
}

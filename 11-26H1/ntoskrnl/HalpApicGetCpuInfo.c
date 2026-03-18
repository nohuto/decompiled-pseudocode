/*
 * XREFs of HalpApicGetCpuInfo @ 0x1405A1604
 * Callers:
 *     HalpApicIsCmciImplemented @ 0x1405A1ACC (HalpApicIsCmciImplemented.c)
 *     HalpApicRegisterIoUnit @ 0x1405A1C78 (HalpApicRegisterIoUnit.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404EF27C (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicGetCpuInfo(__int64 a1, __int64 a2)
{
  if ( qword_140F87680 || (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &qword_140F87680) >= 0 && qword_140F87680 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}

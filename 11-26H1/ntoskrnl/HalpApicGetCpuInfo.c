/*
 * XREFs of HalpApicGetCpuInfo @ 0x1405A3E14
 * Callers:
 *     HalpApicIsCmciImplemented @ 0x1405A42DC (HalpApicIsCmciImplemented.c)
 *     HalpApicRegisterIoUnit @ 0x1405A4488 (HalpApicRegisterIoUnit.c)
 * Callees:
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpApicGetCpuInfo(__int64 a1, __int64 a2)
{
  if ( qword_140F87A60 || (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &qword_140F87A60) >= 0 && qword_140F87A60 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}

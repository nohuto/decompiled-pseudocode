/*
 * XREFs of HalpHvVpStartEnabled @ 0x140585F74
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057C69C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140BEA190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14058526C (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpHvVpStartEnabled(__int64 a1, __int64 a2)
{
  if ( qword_140FBB0F0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return HalpIsXboxNanovisorPresent() != 0;
}

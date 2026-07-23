/*
 * XREFs of HalpHvVpStartEnabled @ 0x140588494
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057EBCC (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     HalpIsXboxNanovisorPresent @ 0x14058778C (HalpIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpHvVpStartEnabled(__int64 a1, __int64 a2)
{
  if ( qword_140FBB490 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return HalpIsXboxNanovisorPresent() != 0;
}

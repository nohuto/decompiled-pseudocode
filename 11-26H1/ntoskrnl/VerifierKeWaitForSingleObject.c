/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x140C4DBD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140C44524 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfRlrsKeInjectStatusAlerted(a4) )
    return 257LL;
  else
    return guard_dispatch_icall_no_overrides(a1, a2);
}

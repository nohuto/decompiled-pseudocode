/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x140C4D020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140C44524 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6)
{
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfRlrsKeInjectStatusAlerted(a6) )
    return 257LL;
  else
    return guard_dispatch_icall_no_overrides(a1, a2);
}

/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x140B854D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140B8F724 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeDelayExecutionThread(__int64 a1, char a2)
{
  char v2; // si

  v2 = a1;
  if ( (VfRuleClasses & 4) != 0 )
  {
    LOBYTE(a1) = a2;
    if ( (unsigned int)VfRlrsKeInjectStatusAlerted(a1) )
      return 257LL;
  }
  LOBYTE(a1) = v2;
  return guard_dispatch_icall_no_overrides(a1);
}

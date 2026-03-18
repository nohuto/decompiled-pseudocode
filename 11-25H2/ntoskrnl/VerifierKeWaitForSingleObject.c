/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x140B85E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfRlrsKeInjectStatusAlerted @ 0x140B8F724 (VfRlrsKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbp

  v4 = a1;
  if ( (VfRuleClasses & 4) != 0 && (LOBYTE(a1) = a4, (unsigned int)VfRlrsKeInjectStatusAlerted(a1)) )
    return 257LL;
  else
    return guard_dispatch_icall_no_overrides(v4);
}

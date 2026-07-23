/*
 * XREFs of InbvResetDisplay @ 0x1405C7600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvResetDisplay(__int64 a1, __int64 a2)
{
  if ( qword_140E65EE8 && *(_QWORD *)(qword_140E65EE8 + 24) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}

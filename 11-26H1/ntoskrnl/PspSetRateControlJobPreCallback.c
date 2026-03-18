/*
 * XREFs of PspSetRateControlJobPreCallback @ 0x1407F9DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PspSetEffectiveRateControlJob @ 0x1407F92D8 (PspSetEffectiveRateControlJob.c)
 */

void __fastcall PspSetRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8

  PspSetEffectiveRateControlJob(a1, *(_QWORD *)(a2 + 24));
  if ( *v3 )
    guard_dispatch_icall_no_overrides(v2, v3[2]);
}

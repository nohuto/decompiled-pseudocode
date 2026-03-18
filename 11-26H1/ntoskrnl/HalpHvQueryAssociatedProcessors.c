/*
 * XREFs of HalpHvQueryAssociatedProcessors @ 0x140585D88
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x14050944C (HalpHvInitMcaPcrContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvQueryAssociatedProcessors(__int64 a1, __int64 a2)
{
  if ( qword_140FBB090 )
    return guard_dispatch_icall_no_overrides(4294967294LL, a2);
  else
    return 3221225473LL;
}

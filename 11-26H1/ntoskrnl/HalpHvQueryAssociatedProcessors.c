/*
 * XREFs of HalpHvQueryAssociatedProcessors @ 0x1405882A8
 * Callers:
 *     HalpHvInitMcaPcrContext @ 0x140502EFC (HalpHvInitMcaPcrContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvQueryAssociatedProcessors(__int64 a1, __int64 a2)
{
  if ( qword_140FBB430 )
    return guard_dispatch_icall_no_overrides(4294967294LL, a2);
  else
    return 3221225473LL;
}

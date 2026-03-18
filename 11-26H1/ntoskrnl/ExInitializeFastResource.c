/*
 * XREFs of ExInitializeFastResource @ 0x1404569B0
 * Callers:
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 * Callees:
 *     ExInitializeFastResource2 @ 0x1404569D0 (ExInitializeFastResource2.c)
 */

__int64 __fastcall ExInitializeFastResource(ULONG_PTR a1, ULONG_PTR a2)
{
  return ExInitializeFastResource2(a1, a2);
}

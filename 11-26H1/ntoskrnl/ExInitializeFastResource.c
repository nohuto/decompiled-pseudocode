/*
 * XREFs of ExInitializeFastResource @ 0x14025FFC0
 * Callers:
 *     NtCreateJobObject @ 0x140A7F420 (NtCreateJobObject.c)
 * Callees:
 *     ExInitializeFastResource2 @ 0x14025FFE0 (ExInitializeFastResource2.c)
 */

__int64 __fastcall ExInitializeFastResource(ULONG_PTR a1, ULONG_PTR a2)
{
  return ExInitializeFastResource2(a1, a2);
}

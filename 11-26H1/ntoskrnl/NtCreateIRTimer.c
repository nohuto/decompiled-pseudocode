/*
 * XREFs of NtCreateIRTimer @ 0x140ABCFD0
 * Callers:
 *     DifNtCreateIRTimerWrapper @ 0x140670E90 (DifNtCreateIRTimerWrapper.c)
 * Callees:
 *     NtCreateTimer2 @ 0x140ABD000 (NtCreateTimer2.c)
 */

__int64 __fastcall NtCreateIRTimer(__int64 a1, __int64 a2, int a3)
{
  return NtCreateTimer2(a1, a2, 0LL, 2LL, a3);
}

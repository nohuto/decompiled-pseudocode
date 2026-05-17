/*
 * XREFs of RtlIsCurrentThread @ 0x180102D70
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x180160310 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects(-2LL, a1) >= 0;
}

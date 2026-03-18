/*
 * XREFs of NtLoadKey @ 0x14097A0E0
 * Callers:
 *     DifNtLoadKeyWrapper @ 0x14067AB50 (DifNtLoadKeyWrapper.c)
 * Callees:
 *     NtLoadKeyEx @ 0x14097B380 (NtLoadKeyEx.c)
 */

__int64 __fastcall NtLoadKey(int a1, int a2)
{
  return NtLoadKeyEx(a1, a2, 0, 0, 0LL, 0, 0LL, 0LL);
}

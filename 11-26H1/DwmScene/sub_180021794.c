/*
 * XREFs of sub_180021794 @ 0x180021794
 * Callers:
 *     sub_180021AE8 @ 0x180021AE8 (sub_180021AE8.c)
 * Callees:
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

__int64 __fastcall sub_180021794(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  sub_18002470C(a1, v4);
  return a1;
}

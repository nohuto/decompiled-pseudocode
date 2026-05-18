/*
 * XREFs of sub_1800983A0 @ 0x1800983A0
 * Callers:
 *     sub_180098404 @ 0x180098404 (sub_180098404.c)
 *     sub_180098410 @ 0x180098410 (sub_180098410.c)
 * Callees:
 *     sub_180099080 @ 0x180099080 (sub_180099080.c)
 */

__int64 __fastcall sub_1800983A0(void **a1)
{
  void *v2; // rcx

  sub_180099080();
  v2 = *a1;
  *a1 = 0LL;
  return sub_18000E26C(v2, 0x10uLL);
}

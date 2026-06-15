/*
 * XREFs of sub_14004846C @ 0x14004846C
 * Callers:
 *     sub_140050E20 @ 0x140050E20 (sub_140050E20.c)
 *     sub_14005A55C @ 0x14005A55C (sub_14005A55C.c)
 *     sub_140088D3C @ 0x140088D3C (sub_140088D3C.c)
 * Callees:
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 */

void **__fastcall sub_14004846C(void **a1, void **a2)
{
  if ( a1 != a2 )
  {
    sub_1400118C0(a1, *a2);
    *a2 = 0LL;
  }
  return a1;
}

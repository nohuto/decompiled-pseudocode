/*
 * XREFs of sub_18001D430 @ 0x18001D430
 * Callers:
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 * Callees:
 *     sub_18001C9D0 @ 0x18001C9D0 (sub_18001C9D0.c)
 */

__int64 *__fastcall sub_18001D430(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18001C9D0();
  return a1;
}

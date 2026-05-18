/*
 * XREFs of sub_18004CEA4 @ 0x18004CEA4
 * Callers:
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 * Callees:
 *     sub_18004BBF0 @ 0x18004BBF0 (sub_18004BBF0.c)
 */

__int64 *__fastcall sub_18004CEA4(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18004BBF0();
  return a1;
}

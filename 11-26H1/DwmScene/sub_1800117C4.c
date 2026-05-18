/*
 * XREFs of sub_1800117C4 @ 0x1800117C4
 * Callers:
 *     sub_1800142EC @ 0x1800142EC (sub_1800142EC.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_18001CD80 @ 0x18001CD80 (sub_18001CD80.c)
 *     sub_18001CE78 @ 0x18001CE78 (sub_18001CE78.c)
 *     sub_18001D290 @ 0x18001D290 (sub_18001D290.c)
 *     sub_18001E4B0 @ 0x18001E4B0 (sub_18001E4B0.c)
 *     sub_18001EF20 @ 0x18001EF20 (sub_18001EF20.c)
 *     sub_18004F21C @ 0x18004F21C (sub_18004F21C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

__int64 __fastcall sub_1800117C4(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_180011790(++*a2);
  --*a2;
  return result;
}

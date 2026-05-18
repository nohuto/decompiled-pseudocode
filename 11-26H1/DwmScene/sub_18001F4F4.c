/*
 * XREFs of sub_18001F4F4 @ 0x18001F4F4
 * Callers:
 *     sub_18009A280 @ 0x18009A280 (sub_18009A280.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001F524 @ 0x18001F524 (sub_18001F524.c)
 */

__int64 __fastcall sub_18001F4F4(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = sub_1800148EC(a2);
  sub_18001F524(a1, v3, *(_QWORD *)(v4 + 16));
  return a1;
}

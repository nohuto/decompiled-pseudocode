/*
 * XREFs of sub_18005035C @ 0x18005035C
 * Callers:
 *     sub_18004F2B8 @ 0x18004F2B8 (sub_18004F2B8.c)
 *     sub_1800876BC @ 0x1800876BC (sub_1800876BC.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DD44 @ 0x18001DD44 (sub_18001DD44.c)
 */

__int64 __fastcall sub_18005035C(__int64 a1)
{
  sub_18001DD44(a1, 0LL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)sub_1800148EC(a1) = 0;
  return a1;
}

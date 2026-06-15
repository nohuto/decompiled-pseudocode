/*
 * XREFs of sub_140047F4C @ 0x140047F4C
 * Callers:
 *     sub_14002A37C @ 0x14002A37C (sub_14002A37C.c)
 * Callees:
 *     sub_14002A7A4 @ 0x14002A7A4 (sub_14002A7A4.c)
 */

__int64 __fastcall sub_140047F4C(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_14002A7A4(a1, &v3);
  return a1;
}

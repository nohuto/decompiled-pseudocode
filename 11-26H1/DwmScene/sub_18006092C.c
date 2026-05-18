/*
 * XREFs of sub_18006092C @ 0x18006092C
 * Callers:
 *     sub_18006095C @ 0x18006095C (sub_18006095C.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 * Callees:
 *     sub_1800607F0 @ 0x1800607F0 (sub_1800607F0.c)
 */

__int64 __fastcall sub_18006092C(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_1800607F0(a1, &v3);
  return a1;
}

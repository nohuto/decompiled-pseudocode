/*
 * XREFs of sub_18009CC88 @ 0x18009CC88
 * Callers:
 *     sub_18000ACF0 @ 0x18000ACF0 (sub_18000ACF0.c)
 * Callees:
 *     sub_18009CBE4 @ 0x18009CBE4 (sub_18009CBE4.c)
 */

__int64 __fastcall sub_18009CC88(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18009CBE4(a1, &v3);
  return a1;
}

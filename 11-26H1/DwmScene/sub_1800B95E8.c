/*
 * XREFs of sub_1800B95E8 @ 0x1800B95E8
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     sub_18001E908 @ 0x18001E908 (sub_18001E908.c)
 *     sub_18001F348 @ 0x18001F348 (sub_18001F348.c)
 *     sub_18001FA78 @ 0x18001FA78 (sub_18001FA78.c)
 */

__int64 __fastcall sub_1800B95E8(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  void **v4; // r8

  v2 = sub_18001E908((__int64)L"FL_");
  sub_18001FA78(v4, v3, (__int64)v4, v2);
  sub_18001F348(a1);
  return a1;
}

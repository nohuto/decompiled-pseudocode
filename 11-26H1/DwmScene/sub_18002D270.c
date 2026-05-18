/*
 * XREFs of sub_18002D270 @ 0x18002D270
 * Callers:
 *     sub_180036C34 @ 0x180036C34 (sub_180036C34.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     sub_18001E908 @ 0x18001E908 (sub_18001E908.c)
 *     sub_18001F348 @ 0x18001F348 (sub_18001F348.c)
 *     sub_18001F950 @ 0x18001F950 (sub_18001F950.c)
 */

__int64 __fastcall sub_18002D270(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  const void *v5; // rcx
  __int64 v6; // r10

  v4 = sub_18001E908(a3);
  sub_18001F950(v6, v5, v4);
  sub_18001F348(a1);
  return a1;
}

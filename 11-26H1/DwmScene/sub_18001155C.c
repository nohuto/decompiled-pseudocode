/*
 * XREFs of sub_18001155C @ 0x18001155C
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_1800281D0 @ 0x1800281D0 (sub_1800281D0.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800115D8 @ 0x1800115D8 (sub_1800115D8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18001155C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_1800115D8(a1 + 496);
  v4 = *a2;
  v5 = sub_180012BF8(a1 + 8, v7);
  sub_1800291F0(v4, v5);
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}

/*
 * XREFs of sub_18002C530 @ 0x18002C530
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_1800BF920 @ 0x1800BF920 (sub_1800BF920.c)
 *     sub_1800BFBF0 @ 0x1800BFBF0 (sub_1800BFBF0.c)
 *     sub_1800CDFC0 @ 0x1800CDFC0 (sub_1800CDFC0.c)
 *     sub_1800CE050 @ 0x1800CE050 (sub_1800CE050.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_18002C530(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_180013540((__int64 *)(a1 + 240), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_180010EC8(v4);
  return result;
}

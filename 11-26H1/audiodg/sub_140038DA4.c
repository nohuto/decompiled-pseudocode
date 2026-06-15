/*
 * XREFs of sub_140038DA4 @ 0x140038DA4
 * Callers:
 *     sub_14004505C @ 0x14004505C (sub_14004505C.c)
 *     sub_140096888 @ 0x140096888 (sub_140096888.c)
 *     sub_140096938 @ 0x140096938 (sub_140096938.c)
 *     sub_1400A3010 @ 0x1400A3010 (sub_1400A3010.c)
 * Callees:
 *     sub_140038DD8 @ 0x140038DD8 (sub_140038DD8.c)
 */

__int64 (__fastcall **__fastcall sub_140038DA4(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  *a1 = off_1400BA420;
  sub_140038DD8(a1 + 13);
  result = &off_1400BA7E8;
  a1[3] = &off_1400BA7E8;
  return result;
}

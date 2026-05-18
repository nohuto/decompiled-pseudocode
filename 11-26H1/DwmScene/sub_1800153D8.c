/*
 * XREFs of sub_1800153D8 @ 0x1800153D8
 * Callers:
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     sub_180015410 @ 0x180015410 (sub_180015410.c)
 *     sub_18004B410 @ 0x18004B410 (sub_18004B410.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18008FD60 @ 0x18008FD60 (sub_18008FD60.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 */

__int64 *__fastcall sub_1800153D8(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_180013540((__int64 *)(a1 + 88), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_180010EC8(v4);
  return result;
}

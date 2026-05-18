/*
 * XREFs of sub_18004F1EC @ 0x18004F1EC
 * Callers:
 *     sub_180080C94 @ 0x180080C94 (sub_180080C94.c)
 *     sub_1800CD480 @ 0x1800CD480 (sub_1800CD480.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18004F1EC(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  result = a1[1];
  a1[1] = 0LL;
  if ( result )
    return sub_180010EC8(result);
  return result;
}

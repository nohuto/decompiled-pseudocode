/*
 * XREFs of sub_180080C94 @ 0x180080C94
 * Callers:
 *     sub_180080B64 @ 0x180080B64 (sub_180080B64.c)
 *     sub_180080E34 @ 0x180080E34 (sub_180080E34.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180052820 @ 0x180052820 (sub_180052820.c)
 */

__int64 __fastcall sub_180080C94(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx

  v2 = a2;
  if ( a2 == 1 )
  {
    a1[22] = 0LL;
    v4 = a1[23];
    a1[23] = 0LL;
    if ( v4 )
      sub_180010EC8(v4);
  }
  sub_180052820(a1 + 60);
  return sub_18004F1EC(&a1[2 * v2 + 48]);
}

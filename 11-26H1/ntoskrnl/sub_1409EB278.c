/*
 * XREFs of sub_1409EB278 @ 0x1409EB278
 * Callers:
 *     sub_1409E9B88 @ 0x1409E9B88 (sub_1409E9B88.c)
 * Callees:
 *     sub_1409E99A0 @ 0x1409E99A0 (sub_1409E99A0.c)
 *     sub_1409EB2D4 @ 0x1409EB2D4 (sub_1409EB2D4.c)
 */

__int64 __fastcall sub_1409EB278(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v6 = 0LL;
  v4 = sub_1409EB2D4((int)a1 + 8, v2, 8, -1, (__int64)&v6);
  if ( v4 >= 0 )
    sub_1409E99A0(a1, v6);
  return (unsigned int)v4;
}

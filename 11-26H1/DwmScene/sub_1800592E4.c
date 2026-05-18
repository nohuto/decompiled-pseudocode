/*
 * XREFs of sub_1800592E4 @ 0x1800592E4
 * Callers:
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18006D8E8 @ 0x18006D8E8 (sub_18006D8E8.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 *     sub_18008FA84 @ 0x18008FA84 (sub_18008FA84.c)
 *     sub_180093D70 @ 0x180093D70 (sub_180093D70.c)
 *     sub_180094020 @ 0x180094020 (sub_180094020.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 */

_QWORD *__fastcall sub_1800592E4(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 448);
  v7 = *(_DWORD *)(*(_QWORD *)a3 + 244LL);
  v5 = sub_180042544(a1 + 448, (__int64)&v7);
  if ( v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012C40(a2, (_QWORD *)(v5 + 40));
  }
  return a2;
}

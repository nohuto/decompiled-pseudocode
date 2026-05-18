/*
 * XREFs of sub_180054A54 @ 0x180054A54
 * Callers:
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 * Callees:
 *     sub_1800133B8 @ 0x1800133B8 (sub_1800133B8.c)
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 *     sub_180054C14 @ 0x180054C14 (sub_180054C14.c)
 *     sub_180055B84 @ 0x180055B84 (sub_180055B84.c)
 */

_QWORD *__fastcall sub_180054A54(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4 )
  {
    sub_180055B84();
    v5 = *(_QWORD **)(a2 + 8);
    v6 = *(_QWORD **)a2;
    v7 = (_QWORD *)*a1;
    while ( v6 != v5 )
    {
      sub_1800133B8(v4, v7, v6);
      v7 += 2;
      v6 = (_QWORD *)(v8 + 16);
    }
    sub_18002DD68((__int64)v7, (__int64)v7);
    a1[1] = v7;
    v10 = 0LL;
    sub_180054C14(&v10);
  }
  return a1;
}

/*
 * XREFs of sub_18002FAB8 @ 0x18002FAB8
 * Callers:
 *     sub_18002E168 @ 0x18002E168 (sub_18002E168.c)
 *     sub_180039B18 @ 0x180039B18 (sub_180039B18.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 *     sub_18005FF1C @ 0x18005FF1C (sub_18005FF1C.c)
 * Callees:
 *     sub_180011BB8 @ 0x180011BB8 (sub_180011BB8.c)
 *     sub_18002DD68 @ 0x18002DD68 (sub_18002DD68.c)
 */

_QWORD *__fastcall sub_18002FAB8(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // r8
  __int64 v5; // r8
  _QWORD *v6; // r9

  v4 = (_QWORD *)a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_180011BB8(a1, a3, v4);
      a3 += 2;
      v4 = (_QWORD *)(v5 + 16);
    }
    while ( v4 != v6 );
  }
  sub_18002DD68((__int64)a3, (__int64)a3);
  return a3;
}

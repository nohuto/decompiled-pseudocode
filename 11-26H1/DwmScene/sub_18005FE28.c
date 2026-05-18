/*
 * XREFs of sub_18005FE28 @ 0x18005FE28
 * Callers:
 *     sub_180060338 @ 0x180060338 (sub_180060338.c)
 *     sub_180060454 @ 0x180060454 (sub_180060454.c)
 *     sub_18006A7FC @ 0x18006A7FC (sub_18006A7FC.c)
 *     sub_1800D2300 @ 0x1800D2300 (sub_1800D2300.c)
 *     sub_1800D2658 @ 0x1800D2658 (sub_1800D2658.c)
 *     sub_1800D40A8 @ 0x1800D40A8 (sub_1800D40A8.c)
 *     sub_1800D43E8 @ 0x1800D43E8 (sub_1800D43E8.c)
 * Callees:
 *     sub_18005E6D4 @ 0x18005E6D4 (sub_18005E6D4.c)
 */

_QWORD *__fastcall sub_18005FE28(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi

  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *a2 = v6;
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( sub_18005E6D4((__int64)a1, a3, (__int64)(v8 + 2)) )
    {
      if ( v8 == v9 )
      {
        *a2 = v8;
        goto LABEL_3;
      }
      v8 = (_QWORD *)v8[1];
    }
    *a2 = *v8;
    a2[1] = v8;
  }
  return a2;
}

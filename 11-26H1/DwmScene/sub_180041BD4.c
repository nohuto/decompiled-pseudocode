/*
 * XREFs of sub_180041BD4 @ 0x180041BD4
 * Callers:
 *     sub_18003EC38 @ 0x18003EC38 (sub_18003EC38.c)
 *     sub_180060338 @ 0x180060338 (sub_180060338.c)
 *     sub_180060454 @ 0x180060454 (sub_180060454.c)
 *     sub_1800D2300 @ 0x1800D2300 (sub_1800D2300.c)
 *     sub_1800D2658 @ 0x1800D2658 (sub_1800D2658.c)
 *     sub_1800D40A8 @ 0x1800D40A8 (sub_1800D40A8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180041BD4(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r11

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a2 & a1[6];
  v6 = a1[3];
  v7 = 2 * v5;
  v8 = *(_QWORD *)(v6 + 8 * v7);
  if ( v8 == a1[1] )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
LABEL_6:
    *(_QWORD *)(v6 + 8 * v7 + 8) = a4;
    return a4;
  }
  if ( v8 == a3 )
  {
    *(_QWORD *)(v6 + 8 * v7) = a4;
  }
  else if ( *(_QWORD **)(v6 + 8 * v7 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}

/*
 * XREFs of sub_18006C5BC @ 0x18006C5BC
 * Callers:
 *     sub_18006C570 @ 0x18006C570 (sub_18006C570.c)
 *     sub_18006C5BC @ 0x18006C5BC (sub_18006C5BC.c)
 * Callees:
 *     sub_180017A8C @ 0x180017A8C (sub_180017A8C.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18006C5BC @ 0x18006C5BC (sub_18006C5BC.c)
 */

void __fastcall sub_18006C5BC(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *i; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  _QWORD *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = (_QWORD *)a2;
  v7 = (_QWORD *)a2;
  sub_18003D718(a2);
  if ( (v7[56] & a3[66]) == a3[65] )
  {
    sub_18003D718((__int64)v7);
    if ( (v7[56] & a3[64]) == a3[63] )
    {
      v8 = (_QWORD *)a4[1];
      if ( v8 == (_QWORD *)a4[2] )
      {
        sub_180017A8C(a4, (__int64)v8, (__int64 *)&v12);
        v7 = v12;
      }
      else
      {
        *v8 = v7;
        a4[1] += 8LL;
      }
    }
    sub_18003D718((__int64)v7);
    v9 = (_QWORD *)v7[5];
    for ( i = (_QWORD *)v7[4]; i != v9; i += 2 )
      sub_18006C5BC(a1, *i, a3, a4, v11);
  }
}

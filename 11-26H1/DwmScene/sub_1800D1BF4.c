/*
 * XREFs of sub_1800D1BF4 @ 0x1800D1BF4
 * Callers:
 *     sub_1800D1CE8 @ 0x1800D1CE8 (sub_1800D1CE8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_1800D2570 @ 0x1800D2570 (sub_1800D2570.c)
 *     sub_1800D292C @ 0x1800D292C (sub_1800D292C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800D1BF4(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 *v10; // r8
  __int64 *v11; // r8
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  if ( a2 != a3 )
  {
    v4 = a2;
    v12 = *a1;
    v13 = 0LL;
    if ( a1[1] )
      goto LABEL_5;
    v6 = sub_180011790(0xB0uLL);
    v13 = v6;
    sub_1800D2570(v7, v6 + 16, v4 + 2);
    a1[3] = v6;
    a1[2] = v6;
    while ( 1 )
    {
      ++a1[1];
      v4 = (_QWORD *)*v4;
      v13 = 0LL;
LABEL_5:
      if ( v4 == a3 )
        break;
      v13 = 0LL;
      v8 = sub_180011790(0xB0uLL);
      v13 = v8;
      sub_1800D2570(v9, v8 + 16, v4 + 2);
      sub_180013074((__int64 *)a1[2], &v13);
      sub_180013074((__int64 *)(v8 + 8), v10);
      *v11 = v8;
    }
    sub_1800D292C(&v12);
  }
}

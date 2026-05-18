/*
 * XREFs of sub_1800D2658 @ 0x1800D2658
 * Callers:
 *     sub_1800D08C8 @ 0x1800D08C8 (sub_1800D08C8.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180041BD4 @ 0x180041BD4 (sub_180041BD4.c)
 *     sub_18005FE28 @ 0x18005FE28 (sub_18005FE28.c)
 *     sub_180061424 @ 0x180061424 (sub_180061424.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800D2570 @ 0x1800D2570 (sub_1800D2570.c)
 *     sub_1800D29D0 @ 0x1800D29D0 (sub_1800D29D0.c)
 *     sub_1800D3994 @ 0x1800D3994 (sub_1800D3994.c)
 *     sub_1800D3C4C @ 0x1800D3C4C (sub_1800D3C4C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D2658(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-30h]
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = sub_180061424(a3);
  sub_18005FE28(a1, v11, a3, v6);
  if ( v11[1] )
  {
    *(_QWORD *)a2 = v11[1];
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D3994(a1);
    v9 = a1 + 1;
    v7 = (_QWORD *)sub_180011790(0xB0uLL);
    v10 = v7;
    sub_1800D2570((__int64)(a1 + 1), (__int64)(v7 + 2), a3);
    if ( sub_18006A1B0((__int64)a1) )
    {
      sub_1800D3C4C(a1);
      *(_OWORD *)v11 = *(_OWORD *)sub_18005FE28(a1, v11, (__int64)(v7 + 2), v6);
    }
    v10 = 0LL;
    *(_QWORD *)a2 = sub_180041BD4(a1, v6, v11[0], v7);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800D29D0(&v9);
  }
  return a2;
}

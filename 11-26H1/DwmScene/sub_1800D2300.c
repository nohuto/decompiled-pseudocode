/*
 * XREFs of sub_1800D2300 @ 0x1800D2300
 * Callers:
 *     sub_1800D2CCC @ 0x1800D2CCC (sub_1800D2CCC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180041BD4 @ 0x180041BD4 (sub_180041BD4.c)
 *     sub_18005FE28 @ 0x18005FE28 (sub_18005FE28.c)
 *     sub_180061424 @ 0x180061424 (sub_180061424.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800D25EC @ 0x1800D25EC (sub_1800D25EC.c)
 *     sub_1800D29D0 @ 0x1800D29D0 (sub_1800D29D0.c)
 *     sub_1800D3994 @ 0x1800D3994 (sub_1800D3994.c)
 *     sub_1800D3C4C @ 0x1800D3C4C (sub_1800D3C4C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D2300(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v11; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF

  v6 = sub_180061424(a3);
  sub_18005FE28(a1, &v13, a3, v6);
  if ( *((_QWORD *)&v13 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v13 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D3994(a1);
    v14 = a3;
    v11 = a1 + 1;
    v7 = (_QWORD *)sub_180011790(0xB0uLL);
    v12 = v7;
    sub_1800D25EC(v8, v7 + 2, v9, &v14);
    if ( sub_18006A1B0((__int64)a1) )
    {
      sub_1800D3C4C(a1);
      v13 = *(_OWORD *)sub_18005FE28(a1, &v13, (__int64)(v7 + 2), v6);
    }
    v12 = 0LL;
    *(_QWORD *)a2 = sub_180041BD4(a1, v6, v13, v7);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800D29D0(&v11);
  }
  return a2;
}

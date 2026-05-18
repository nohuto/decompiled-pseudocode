/*
 * XREFs of sub_180060338 @ 0x180060338
 * Callers:
 *     sub_180060ED0 @ 0x180060ED0 (sub_180060ED0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_1800251F4 @ 0x1800251F4 (sub_1800251F4.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 *     sub_180041BD4 @ 0x180041BD4 (sub_180041BD4.c)
 *     sub_18005FE28 @ 0x18005FE28 (sub_18005FE28.c)
 *     sub_180060C84 @ 0x180060C84 (sub_180060C84.c)
 *     sub_180061424 @ 0x180061424 (sub_180061424.c)
 *     sub_18006A17C @ 0x18006A17C (sub_18006A17C.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_18006A5C8 @ 0x18006A5C8 (sub_18006A5C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180060338(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v11; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-20h]
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  v6 = sub_180061424(a3);
  sub_18005FE28(a1, &v13, a3, v6);
  if ( *((_QWORD *)&v13 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v13 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_18006A17C(a1);
    v11 = a1 + 1;
    v7 = sub_18002ECC8(1uLL);
    v8 = (_QWORD *)sub_180011790(v7);
    v12 = v8;
    sub_1800251F4(v9, v8 + 2, a3);
    if ( (unsigned __int8)sub_18006A1B0(a1) )
    {
      sub_18006A5C8(a1);
      v13 = *(_OWORD *)sub_18005FE28(a1, &v13, (__int64)(v8 + 2), v6);
    }
    v12 = 0LL;
    *(_QWORD *)a2 = sub_180041BD4(a1, v6, v13, v8);
    *(_BYTE *)(a2 + 8) = 1;
    sub_180060C84(&v11);
  }
  return a2;
}

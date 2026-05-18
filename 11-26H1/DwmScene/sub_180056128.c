/*
 * XREFs of sub_180056128 @ 0x180056128
 * Callers:
 *     sub_180056128 @ 0x180056128 (sub_180056128.c)
 *     sub_1800573EC @ 0x1800573EC (sub_1800573EC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002B2F8 @ 0x18002B2F8 (sub_18002B2F8.c)
 *     sub_180056128 @ 0x180056128 (sub_180056128.c)
 *     sub_180056AB4 @ 0x180056AB4 (sub_180056AB4.c)
 *     sub_180056F84 @ 0x180056F84 (sub_180056F84.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180056128(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 *v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = a1;
    v7 = sub_180011790(0x58uLL);
    v10 = (_QWORD *)v7;
    sub_180056AB4(v7 + 32, a2 + 32);
    *(_OWORD *)(v7 + 72) = *(_OWORD *)(a2 + 72);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v10 = 0LL;
    sub_18002B2F8((__int64)&v9);
    v6 = v7;
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = a1;
    v10 = a1;
    v11 = v7;
    *(_QWORD *)v7 = sub_180056128(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_180056128(a1, *(_QWORD *)(a2 + 16), v7);
    v9 = 0LL;
    sub_180056F84(&v9);
  }
  return v6;
}

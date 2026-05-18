/*
 * XREFs of sub_18005BFE4 @ 0x18005BFE4
 * Callers:
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_18005BFE4 @ 0x18005BFE4 (sub_18005BFE4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180025950 @ 0x180025950 (sub_180025950.c)
 *     sub_18005BFE4 @ 0x18005BFE4 (sub_18005BFE4.c)
 *     sub_18005CC20 @ 0x18005CC20 (sub_18005CC20.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005BFE4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = a1;
    v7 = sub_180011790(0x40uLL);
    sub_1800181BC((_QWORD *)(v7 + 32), a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v10 = 0LL;
    sub_180025950((__int64)&v9);
    v6 = v7;
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = a1;
    v10 = a1;
    v11 = v7;
    *(_QWORD *)v7 = sub_18005BFE4(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_18005BFE4(a1, *(_QWORD *)(a2 + 16), v7);
    v9 = 0LL;
    sub_18005CC20(&v9);
  }
  return v6;
}

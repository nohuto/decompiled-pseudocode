/*
 * XREFs of sub_180098584 @ 0x180098584
 * Callers:
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_180099158 @ 0x180099158 (sub_180099158.c)
 *     sub_180099164 @ 0x180099164 (sub_180099164.c)
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180098584(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180029674(a1);
  sub_180098A18(a1, v11, a3);
  if ( LOBYTE(v11[0]) || !*(_QWORD *)(a1 + 40) )
  {
    sub_1800297F4(a1);
    v10 = a2[1];
    if ( v10 )
      sub_180010EC8(v10);
    return 0;
  }
  else
  {
    sub_180099158();
    v6 = sub_180099164();
    *(_QWORD *)(a1 + 8 * v6 + 144) = a3;
    v7 = *(_QWORD *)(a1 + 16 * (v6 + 4));
    v11[0] = *a2;
    v11[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_18009A08C(v7, a3, v11);
    sub_1800297F4(a1);
    v8 = a2[1];
    if ( v8 )
      sub_180010EC8(v8);
    return 1;
  }
}

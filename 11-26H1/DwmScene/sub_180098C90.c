/*
 * XREFs of sub_180098C90 @ 0x180098C90
 * Callers:
 *     sub_1800263D4 @ 0x1800263D4 (sub_1800263D4.c)
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_18001D1C4 @ 0x18001D1C4 (sub_18001D1C4.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 *     sub_18002B27C @ 0x18002B27C (sub_18002B27C.c)
 *     sub_18002CF74 @ 0x18002CF74 (sub_18002CF74.c)
 *     sub_180098010 @ 0x180098010 (sub_180098010.c)
 *     sub_1800990DC @ 0x1800990DC (sub_1800990DC.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180098C90(__int64 a1)
{
  char v2; // r14
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v12[136]; // [rsp+50h] [rbp-79h] BYREF
  void *v13[9]; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+130h] [rbp+67h] BYREF
  __int64 v15; // [rsp+140h] [rbp+77h] BYREF
  __int64 v16; // [rsp+148h] [rbp+7Fh]

  v16 = a1;
  sub_180029674(a1);
  v15 = 500LL;
  sub_180012B20(&v14);
  sub_18002B27C((__int64)v12);
  v2 = 0;
  v3 = **(_QWORD **)(a1 + 48);
LABEL_2:
  while ( v3 != *(_QWORD *)(a1 + 48) && !v2 )
  {
    while ( 1 )
    {
      sub_180012B20(&v9);
      v4 = sub_18002CF74((__int64)v10, (__int64)&v15);
      if ( *v6 - v14 >= *v4 )
        break;
      LOBYTE(v5) = 1;
      if ( (unsigned int)sub_18009A710(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v3 + 32) + 4LL)), v12, v5) == 3 )
      {
        sub_180098010(a1 + 8, (_QWORD *)(v3 + 32));
        v3 = *(_QWORD *)sub_1800990DC(a1 + 48, v11, v3);
        goto LABEL_2;
      }
      Thrd_yield();
    }
    sub_18001DCFC(&qword_1801BD488, 4);
    v2 = 1;
  }
  v7 = sub_180012B20(&v15);
  v14 = *v7 - v14;
  sub_18001D1C4(&v15, &v14);
  sub_18001DCFC(&qword_1801BD488, 2);
  sub_18002A8A0(v13, (__int64)v13);
  return sub_1800297F4(a1);
}

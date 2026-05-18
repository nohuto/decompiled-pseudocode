/*
 * XREFs of sub_180099A9C @ 0x180099A9C
 * Callers:
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180099B94 @ 0x180099B94 (sub_180099B94.c)
 *     sub_180099C30 @ 0x180099C30 (sub_180099C30.c)
 *     sub_180099F44 @ 0x180099F44 (sub_180099F44.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180099A9C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int128 v8; // xmm6
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF

  v12 = *a1;
  *(_QWORD *)&v10 = a1;
  v6 = sub_180011790(0x58uLL);
  *((_QWORD *)&v10 + 1) = v6;
  sub_180099C30(v7, v6 + 32, a3);
  sub_180013074((__int64 *)v6, &v12);
  sub_180013074((__int64 *)(v6 + 8), &v12);
  sub_180013074((__int64 *)(v6 + 16), &v12);
  *(_WORD *)(v6 + 24) = 0;
  v8 = *(_OWORD *)sub_180099B94(a1, v11, v6 + 32);
  if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
    sub_18001DF68();
  *((_QWORD *)&v10 + 1) = 0LL;
  sub_180099F44(&v10);
  v10 = v8;
  *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v10, v6);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

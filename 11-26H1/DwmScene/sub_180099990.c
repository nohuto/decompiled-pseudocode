/*
 * XREFs of sub_180099990 @ 0x180099990
 * Callers:
 *     sub_18009A280 @ 0x18009A280 (sub_18009A280.c)
 *     sub_18009B084 @ 0x18009B084 (sub_18009B084.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180099B94 @ 0x180099B94 (sub_180099B94.c)
 *     sub_180099C64 @ 0x180099C64 (sub_180099C64.c)
 *     sub_180099F74 @ 0x180099F74 (sub_180099F74.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180099990(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int128 v10; // xmm6
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF

  v14 = *a1;
  *(_QWORD *)&v12 = a1;
  v8 = sub_180011790(0x1D0uLL);
  sub_180099C64(v9, v8 + 32, a3, a4, v12, v8);
  sub_180013074((__int64 *)v8, &v14);
  sub_180013074((__int64 *)(v8 + 8), &v14);
  sub_180013074((__int64 *)(v8 + 16), &v14);
  *(_WORD *)(v8 + 24) = 0;
  v10 = *(_OWORD *)sub_180099B94(a1, v13, v8 + 32);
  if ( a1[1] == 0x8D3DCB08D3DCB0LL )
    sub_18001DF68();
  *((_QWORD *)&v12 + 1) = 0LL;
  sub_180099F74(&v12);
  v12 = v10;
  *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v12, v8);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}

/*
 * XREFs of sub_18002F3F4 @ 0x18002F3F4
 * Callers:
 *     sub_18002D3D4 @ 0x18002D3D4 (sub_18002D3D4.c)
 *     sub_18005ECC0 @ 0x18005ECC0 (sub_18005ECC0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_18002EB58 @ 0x18002EB58 (sub_18002EB58.c)
 *     sub_18002F140 @ 0x18002F140 (sub_18002F140.c)
 *     sub_18002FBD8 @ 0x18002FBD8 (sub_18002FBD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F3F4(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  sub_18002EB58((__int64)a1, &v14, a3);
  v6 = v15;
  if ( sub_18002F140(v7, v15, a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001DF68();
    v12 = a3;
    v16 = *a1;
    v13 = (unsigned __int64)a1;
    v8 = sub_180011790(0x38uLL);
    sub_18002FBD8(v9, v8 + 32, v10, &v12);
    sub_180013074((__int64 *)v8, &v16);
    sub_180013074((__int64 *)(v8 + 8), &v16);
    sub_180013074((__int64 *)(v8 + 16), &v16);
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_180027B50((__int64)&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v13, v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

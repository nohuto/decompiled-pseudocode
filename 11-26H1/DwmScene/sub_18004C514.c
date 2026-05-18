/*
 * XREFs of sub_18004C514 @ 0x18004C514
 * Callers:
 *     sub_18004D9D4 @ 0x18004D9D4 (sub_18004D9D4.c)
 *     sub_18005D05C @ 0x18005D05C (sub_18005D05C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001D674 @ 0x18001D674 (sub_18001D674.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_18004C7C8 @ 0x18004C7C8 (sub_18004C7C8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004C514(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  sub_18001CC6C((__int64)a1, &v14, a3);
  v6 = v15;
  if ( sub_18001CD34(v7, v15) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x38E38E38E38E38ELL )
      sub_18001DF68();
    v12 = a3;
    v16 = *a1;
    *(_QWORD *)&v13 = a1;
    v8 = sub_180011790(0x48uLL);
    *((_QWORD *)&v13 + 1) = v8;
    sub_18004C7C8(v9, v8 + 32, v10, &v12);
    sub_180013074((__int64 *)v8, &v16);
    sub_180013074((__int64 *)(v8 + 8), &v16);
    sub_180013074((__int64 *)(v8 + 16), &v16);
    *(_WORD *)(v8 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_18001D674((__int64)&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v13, v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

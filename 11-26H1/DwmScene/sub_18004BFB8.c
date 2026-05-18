/*
 * XREFs of sub_18004BFB8 @ 0x18004BFB8
 * Callers:
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18001DF68 @ 0x18001DF68 (sub_18001DF68.c)
 *     sub_18004C72C @ 0x18004C72C (sub_18004C72C.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004BFB8(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF

  v8 = sub_18001CC6C((__int64)a1, &v15, a3);
  v9 = *(_OWORD *)v8;
  v16 = v8[2];
  v10 = v16;
  if ( sub_18001CD34(v11, v16) )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x276276276276276LL )
      sub_18001DF68();
    v17 = *a1;
    v15 = (unsigned __int64)a1;
    v12 = sub_180011790(0x68uLL);
    sub_18004C72C(v13, v12 + 32, a3, a4);
    sub_180013074((__int64 *)v12, &v17);
    sub_180013074((__int64 *)(v12 + 8), &v17);
    sub_180013074((__int64 *)(v12 + 16), &v17);
    *(_WORD *)(v12 + 24) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    sub_18004D1D8(&v15);
    v15 = v9;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v15, v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

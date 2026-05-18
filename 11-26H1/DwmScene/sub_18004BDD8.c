/*
 * XREFs of sub_18004BDD8 @ 0x18004BDD8
 * Callers:
 *     sub_18004C840 @ 0x18004C840 (sub_18004C840.c)
 * Callees:
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_1800273E4 @ 0x1800273E4 (sub_1800273E4.c)
 *     sub_18004B768 @ 0x18004B768 (sub_18004B768.c)
 *     sub_18004D238 @ 0x18004D238 (sub_18004D238.c)
 */

__int64 __fastcall sub_18004BDD8(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  _BYTE v13[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  v6 = sub_18001CC6C((__int64)a1, &v14, a3);
  v7 = *(_OWORD *)v6;
  v15 = v6[2];
  v8 = v15;
  if ( sub_18001CD34(v9, v15) )
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800273E4((__int64)a1);
    v10 = sub_18004B768((__int64)v13, (__int64)a1, *a1, a3);
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = 0LL;
    sub_18004D238(v13);
    v14 = v7;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

/*
 * XREFs of sub_18004BEA0 @ 0x18004BEA0
 * Callers:
 *     sub_18004E364 @ 0x18004E364 (sub_18004E364.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_1800253EC @ 0x1800253EC (sub_1800253EC.c)
 *     sub_1800273E4 @ 0x1800273E4 (sub_1800273E4.c)
 *     sub_18004C82C @ 0x18004C82C (sub_18004C82C.c)
 *     sub_18004D238 @ 0x18004D238 (sub_18004D238.c)
 */

__int64 __fastcall sub_18004BEA0(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v6 = sub_18001CC6C((__int64)a1, &v15, a3);
  v7 = *(_OWORD *)v6;
  v16 = v6[2];
  v8 = v16;
  if ( sub_18001CD34(v9, v16) )
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800273E4((__int64)a1);
    v17 = *a1;
    sub_1800253EC(&v13, (__int64)a1);
    sub_18004C82C(v10, v14 + 4, a3);
    sub_180013074(v14, &v17);
    sub_180013074(v14 + 1, &v17);
    sub_180013074(v14 + 2, &v17);
    *((_BYTE *)v14 + 24) = 0;
    *((_BYTE *)v14 + 25) = 0;
    v11 = v14;
    v14 = 0LL;
    sub_18004D238(&v13);
    v15 = v7;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v15, (__int64)v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

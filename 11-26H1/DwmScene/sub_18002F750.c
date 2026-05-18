/*
 * XREFs of sub_18002F750 @ 0x18002F750
 * Callers:
 *     sub_180031FE8 @ 0x180031FE8 (sub_180031FE8.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001D674 @ 0x18001D674 (sub_18001D674.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_180037ACC @ 0x180037ACC (sub_180037ACC.c)
 */

__int64 __fastcall sub_18002F750(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rbx
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF

  sub_18001CC6C((__int64)a1, &v15, a3);
  v6 = v16;
  if ( sub_18001CD34(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180037ACC(a1);
    v17 = *a1;
    *(_QWORD *)&v12 = a3;
    sub_180030724(v13, a1);
    sub_18002FB30(v8, v14 + 4, v9, &v12);
    sub_180013074(v14, &v17);
    sub_180013074(v14 + 1, &v17);
    sub_180013074(v14 + 2, &v17);
    *((_BYTE *)v14 + 24) = 0;
    *((_BYTE *)v14 + 25) = 0;
    v10 = v14;
    v14 = 0LL;
    sub_18001D674((__int64)v13);
    v12 = v15;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v12, (__int64)v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

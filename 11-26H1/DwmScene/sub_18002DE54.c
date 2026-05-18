/*
 * XREFs of sub_18002DE54 @ 0x18002DE54
 * Callers:
 *     sub_180030A38 @ 0x180030A38 (sub_180030A38.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001D674 @ 0x18001D674 (sub_18001D674.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18002E5CC @ 0x18002E5CC (sub_18002E5CC.c)
 *     sub_18002FAFC @ 0x18002FAFC (sub_18002FAFC.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 *     sub_180037ACC @ 0x180037ACC (sub_180037ACC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DE54(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  __int64 v8; // rcx
  __int64 *v9; // rbx
  _BYTE v10[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-38h]
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp+10h] BYREF

  v5 = sub_18002E5CC(a1, &v12, a2, a3);
  v6 = *(_OWORD *)v5;
  v13 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v13 )
    return v6;
  sub_180037ACC(a1);
  v14 = *a1;
  sub_180030724(v10, a1);
  sub_18002FAFC(v8, v11 + 4, a3);
  sub_180013074(v11, &v14);
  sub_180013074(v11 + 1, &v14);
  sub_180013074(v11 + 2, &v14);
  *((_BYTE *)v11 + 24) = 0;
  *((_BYTE *)v11 + 25) = 0;
  v9 = v11;
  v11 = 0LL;
  sub_18001D674((__int64)v10);
  v12 = v6;
  return sub_18001DD70((__int64)a1, (__int64)&v12, (__int64)v9);
}

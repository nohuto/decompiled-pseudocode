/*
 * XREFs of sub_18005FD88 @ 0x18005FD88
 * Callers:
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 * Callees:
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_1800273E4 @ 0x1800273E4 (sub_1800273E4.c)
 *     sub_18002E884 @ 0x18002E884 (sub_18002E884.c)
 *     sub_18004B768 @ 0x18004B768 (sub_18004B768.c)
 *     sub_18004D238 @ 0x18004D238 (sub_18004D238.c)
 */

__int64 __fastcall sub_18005FD88(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v10[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  v5 = sub_18002E884(a1, (__int64)&v11, a2, a3);
  v6 = *(_OWORD *)v5;
  v12 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v12 )
    return v6;
  sub_1800273E4((__int64)a1);
  v8 = sub_18004B768((__int64)v10, (__int64)a1, *a1, a3);
  v9 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  sub_18004D238((__int64)v10);
  v11 = v6;
  return sub_18001DD70((__int64)a1, (__int64)&v11, v9);
}

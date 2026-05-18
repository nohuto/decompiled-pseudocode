/*
 * XREFs of sub_18002DF50 @ 0x18002DF50
 * Callers:
 *     sub_180030AAC @ 0x180030AAC (sub_180030AAC.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18002E884 @ 0x18002E884 (sub_18002E884.c)
 *     sub_18002FB58 @ 0x18002FB58 (sub_18002FB58.c)
 *     sub_18003075C @ 0x18003075C (sub_18003075C.c)
 *     sub_18003157C @ 0x18003157C (sub_18003157C.c)
 *     sub_180037AF4 @ 0x180037AF4 (sub_180037AF4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DF50(__int64 *a1, __int64 a2, __int64 a3)
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

  v5 = sub_18002E884(a1, &v12, a2, a3);
  v6 = *(_OWORD *)v5;
  v13 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v13 )
    return v6;
  sub_180037AF4(a1);
  v14 = *a1;
  sub_18003075C(v10, a1);
  sub_18002FB58(v8, v11 + 4, a3);
  sub_180013074(v11, &v14);
  sub_180013074(v11 + 1, &v14);
  sub_180013074(v11 + 2, &v14);
  *((_BYTE *)v11 + 24) = 0;
  *((_BYTE *)v11 + 25) = 0;
  v9 = v11;
  v11 = 0LL;
  sub_18003157C(v10);
  v12 = v6;
  return sub_18001DD70((__int64)a1, (__int64)&v12, (__int64)v9);
}

/*
 * XREFs of sub_1800D21F4 @ 0x1800D21F4
 * Callers:
 *     sub_1800D0A50 @ 0x1800D0A50 (sub_1800D0A50.c)
 *     sub_1800D0CF0 @ 0x1800D0CF0 (sub_1800D0CF0.c)
 *     sub_1800D0FD4 @ 0x1800D0FD4 (sub_1800D0FD4.c)
 *     sub_1800D1314 @ 0x1800D1314 (sub_1800D1314.c)
 *     sub_1800D2E40 @ 0x1800D2E40 (sub_1800D2E40.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18003E908 @ 0x18003E908 (sub_18003E908.c)
 *     sub_18003EA38 @ 0x18003EA38 (sub_18003EA38.c)
 *     sub_1800D2620 @ 0x1800D2620 (sub_1800D2620.c)
 *     sub_1800D276C @ 0x1800D276C (sub_1800D276C.c)
 *     sub_1800D2AA8 @ 0x1800D2AA8 (sub_1800D2AA8.c)
 *     sub_1800D396C @ 0x1800D396C (sub_1800D396C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D21F4(__int64 *a1, __int64 a2, __int64 a3)
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

  sub_18003E908((__int64)a1, &v15, a3);
  v6 = v16;
  if ( sub_18003EA38(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D396C(a1);
    *(_QWORD *)&v12 = a3;
    v17 = *a1;
    sub_1800D276C(v13, a1);
    sub_1800D2620(v8, v14 + 4, v9, &v12);
    sub_180013074(v14, &v17);
    sub_180013074(v14 + 1, &v17);
    sub_180013074(v14 + 2, &v17);
    *((_BYTE *)v14 + 24) = 0;
    *((_BYTE *)v14 + 25) = 0;
    v10 = v14;
    v14 = 0LL;
    sub_1800D2AA8(v13);
    v12 = v15;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v12, (__int64)v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

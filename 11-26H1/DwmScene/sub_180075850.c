/*
 * XREFs of sub_180075850 @ 0x180075850
 * Callers:
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18003075C @ 0x18003075C (sub_18003075C.c)
 *     sub_180037AF4 @ 0x180037AF4 (sub_180037AF4.c)
 *     sub_18004C794 @ 0x18004C794 (sub_18004C794.c)
 *     sub_180075A5C @ 0x180075A5C (sub_180075A5C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180075850(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rbx
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
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
    sub_180037AF4((__int64)a1);
    *(_QWORD *)&v12 = a3;
    v17 = *a1;
    sub_18003075C(&v13, (__int64)a1);
    sub_18004C794(v8, v14 + 4, v9, (__int64 *)&v12);
    sub_180013074(v14, &v17);
    sub_180013074(v14 + 1, &v17);
    sub_180013074(v14 + 2, &v17);
    *((_BYTE *)v14 + 24) = 0;
    *((_BYTE *)v14 + 25) = 0;
    v10 = v14;
    v14 = 0LL;
    sub_180075A5C(&v13);
    v12 = v15;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v12, (__int64)v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

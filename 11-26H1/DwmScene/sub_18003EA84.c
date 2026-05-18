/*
 * XREFs of sub_18003EA84 @ 0x18003EA84
 * Callers:
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18003E908 @ 0x18003E908 (sub_18003E908.c)
 *     sub_18003EA38 @ 0x18003EA38 (sub_18003EA38.c)
 *     sub_18003EBD4 @ 0x18003EBD4 (sub_18003EBD4.c)
 *     sub_18003EEE4 @ 0x18003EEE4 (sub_18003EEE4.c)
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 *     sub_18004193C @ 0x18004193C (sub_18004193C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003EA84(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rbx
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF
  void *v16; // [rsp+98h] [rbp+38h] BYREF

  v15 = a3;
  sub_18003E908((__int64)a1, &v13, (__int64)&unk_1801C90B8);
  v5 = v14;
  if ( sub_18003EA38(v6, v14) )
  {
    *(_QWORD *)a2 = v5;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_18004193C(a1);
    v16 = &unk_1801C90B8;
    v15 = *a1;
    sub_18003EEE4(v11, a1);
    sub_18003EBD4(v7, v12 + 4, v8, &v16);
    sub_180013074(v12, &v15);
    sub_180013074(v12 + 1, &v15);
    sub_180013074(v12 + 2, &v15);
    *((_BYTE *)v12 + 24) = 0;
    *((_BYTE *)v12 + 25) = 0;
    v9 = v12;
    v12 = 0LL;
    sub_18003F324(v11);
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v13, (__int64)v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

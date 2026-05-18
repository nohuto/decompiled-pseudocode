/*
 * XREFs of sub_18003E5C0 @ 0x18003E5C0
 * Callers:
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 * Callees:
 *     sub_180013074 @ 0x180013074 (sub_180013074.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_18003E908 @ 0x18003E908 (sub_18003E908.c)
 *     sub_18003EA38 @ 0x18003EA38 (sub_18003EA38.c)
 *     sub_18003EB9C @ 0x18003EB9C (sub_18003EB9C.c)
 *     sub_18003EEE4 @ 0x18003EEE4 (sub_18003EEE4.c)
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 *     sub_18004193C @ 0x18004193C (sub_18004193C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E5C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  _BYTE v15[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-38h]
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF

  v8 = sub_18003E908(a1, &v17);
  v9 = *(_OWORD *)v8;
  v18 = *(_QWORD *)(v8 + 16);
  v10 = v18;
  if ( (unsigned __int8)sub_18003EA38(v11, v18, a3) )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_18004193C(a1);
    v19 = *a1;
    sub_18003EEE4(v15, a1);
    sub_18003EB9C(v12, v16 + 4, a3, a4);
    sub_180013074(v16, &v19);
    sub_180013074(v16 + 1, &v19);
    sub_180013074(v16 + 2, &v19);
    *((_BYTE *)v16 + 24) = 0;
    *((_BYTE *)v16 + 25) = 0;
    v13 = v16;
    v16 = 0LL;
    sub_18003F324(v15);
    v17 = v9;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v17, (__int64)v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}

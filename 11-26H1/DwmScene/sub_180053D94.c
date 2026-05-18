/*
 * XREFs of sub_180053D94 @ 0x180053D94
 * Callers:
 *     sub_1800533F0 @ 0x1800533F0 (sub_1800533F0.c)
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_1800536E8 @ 0x1800536E8 (sub_1800536E8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180053D94(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+70h] [rbp+20h] BYREF

  v6 = *(_DWORD *)(a3 + 244);
  v13 = 0LL;
  v16 = v6;
  v7 = sub_180042544(a1 + 112, (__int64)&v16);
  if ( v7 == *(_QWORD *)(a1 + 112) || !*(_QWORD *)(v7 + 40) )
  {
    v8 = sub_180016BD8(a3, &v14);
    sub_180011F5C(&v13, v8);
    if ( v15 )
      sub_180010EC8(v15);
    v9 = sub_180012C40(&v14, &v13);
    sub_1800536E8(a1, v9);
  }
  else
  {
    sub_180013540((__int64 *)&v13, (_QWORD *)(v7 + 40));
  }
  v10 = sub_18002912C(a1, &v14);
  v11 = v13;
  sub_1800292C4(v13, (__int64)v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(v11, *(_QWORD *)(a1 + 128), a2);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_180010EC8(*((__int64 *)&v13 + 1));
  return result;
}

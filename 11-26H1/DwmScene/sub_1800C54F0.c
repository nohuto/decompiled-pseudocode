/*
 * XREFs of sub_1800C54F0 @ 0x1800C54F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800C5D1C @ 0x1800C5D1C (sub_1800C5D1C.c)
 *     sub_1800C5DBC @ 0x1800C5DBC (sub_1800C5DBC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C54F0(__int64 a1, _QWORD *a2, unsigned __int8 a3, char a4)
{
  unsigned int v5; // r15d
  __int64 *v7; // rax
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  _QWORD v18[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+A0h] [rbp+40h]

  v5 = a3;
  v22 = 0;
  if ( *a2 )
  {
    v7 = (__int64 *)sub_1800C5D1C(*a2, &v19, *(unsigned int *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v17 = 0LL;
    v7 = &v16;
    v8 = 2;
    v9 = 0LL;
  }
  v18[0] = v9;
  v10 = v7[1];
  v18[1] = v10;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v17 )
      sub_180010EC8(v17);
  }
  if ( (v8 & 1) != 0 && v20 )
    sub_180010EC8(v20);
  v11 = sub_180012C40(&v19, v18);
  sub_1800160E4(&v16, (__int64)v11, *v11);
  v13 = *(_QWORD *)(v12 + 8);
  if ( v13 )
    sub_180010EC8(v13);
  sub_1800C5DBC(v16, &v21);
  v14 = v5 | 2;
  if ( !a4 )
    v14 = v5;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 424LL))(*(_QWORD *)(a1 + 144), v21, v14);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  result = sub_18000F938(&v21);
  if ( v17 )
    result = sub_180010EC8(v17);
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}

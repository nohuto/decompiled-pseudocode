/*
 * XREFs of sub_1800CAFCC @ 0x1800CAFCC
 * Callers:
 *     sub_1800CB5F4 @ 0x1800CB5F4 (sub_1800CB5F4.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_1800C3038 @ 0x1800C3038 (sub_1800C3038.c)
 *     sub_1800CADDC @ 0x1800CADDC (sub_1800CADDC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800CAFCC(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-79h] BYREF
  __int64 v16; // [rsp+28h] [rbp-71h]
  __int64 v17; // [rsp+30h] [rbp-69h] BYREF
  __int64 v18; // [rsp+38h] [rbp-61h]
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  __int64 v20; // [rsp+48h] [rbp-51h]
  __int64 *v21; // [rsp+50h] [rbp-49h]
  __int64 *v22; // [rsp+58h] [rbp-41h]
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v24[32]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v25[4]; // [rsp+90h] [rbp-9h] BYREF

  v21 = a2;
  v22 = a3;
  sub_180012A94((__int64)(a1 + 9), &v19);
  v6 = v19;
  v7 = sub_180016BD8(v19, &v17);
  sub_180011F5C(a1 + 12, v7);
  if ( v18 )
    sub_180010EC8(v18);
  v8 = sub_180012C40(&v23, a1 + 12);
  sub_18001818C(&v17, v8);
  v15 = *a3;
  sub_180012440(&v15);
  sub_1800C3038(v17, &v15);
  v9 = sub_180016FD4(*(_QWORD *)(v6 + 3984), &v15);
  v10 = a1 + 16;
  sub_180011F5C(a1 + 16, v9);
  if ( v16 )
    sub_180010EC8(v16);
  v11 = *v10;
  v12 = sub_18002912C((__int64)a1, v25);
  v13 = sub_18001C87C((__int64)v24, (__int64)v12, (__int64)"Shared Texture");
  sub_1800292C4(v11, v13);
  sub_1800129D0((__int64)v25);
  sub_1800537DC(*v10, a1 + 12);
  sub_1800CADDC(a1 + 14, a2);
  if ( v18 )
    sub_180010EC8(v18);
  if ( v20 )
    sub_180010EC8(v20);
  sub_18000F938(a2);
  return sub_18000F938(a3);
}

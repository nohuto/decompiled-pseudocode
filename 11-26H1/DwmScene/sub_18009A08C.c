/*
 * XREFs of sub_18009A08C @ 0x18009A08C
 * Callers:
 *     sub_180098584 @ 0x180098584 (sub_180098584.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026804 @ 0x180026804 (sub_180026804.c)
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 *     sub_18002AECC @ 0x18002AECC (sub_18002AECC.c)
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_1800994FC @ 0x1800994FC (sub_1800994FC.c)
 *     sub_180099564 @ 0x180099564 (sub_180099564.c)
 *     sub_180099FFC @ 0x180099FFC (sub_180099FFC.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18009A08C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *result; // rax
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+28h] [rbp-89h] BYREF
  _OWORD v17[2]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v18; // [rsp+58h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-51h]
  __int64 v20; // [rsp+68h] [rbp-49h]
  __int64 v21; // [rsp+70h] [rbp-41h]
  __int64 v22; // [rsp+78h] [rbp-39h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-19h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  char v29; // [rsp+B0h] [rbp-1h]
  int v30; // [rsp+B1h] [rbp+0h]
  __int16 v31; // [rsp+B5h] [rbp+4h]
  char v32; // [rsp+B7h] [rbp+6h]
  __int64 v33; // [rsp+B8h] [rbp+7h]
  void *v34[5]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+E8h] [rbp+37h] BYREF

  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0LL;
  sub_18002AECC((__int64 *)v34);
  sub_180099FFC(a1 + 928, (__int64)v17);
  sub_18002A8A0(v34, (__int64)v34);
  *(_QWORD *)(a1 + 1056) = a2;
  v6 = (__int64 *)sub_180026804(*(_QWORD *)(a1 + 912), (__int64)v17, 0);
  sub_180099374(a1, v6);
  sub_180099318(v17);
  if ( sub_1800994C4(a1) )
  {
    v7 = sub_180012C40(v16, a3);
    sub_1800994FC(a1, v7);
  }
  v8 = (__int64 *)sub_180026804(*(_QWORD *)(a1 + 912), (__int64)v17, 2u);
  sub_180099374(a1 + 704, v8);
  sub_180099318(v17);
  if ( sub_1800994C4(a1 + 704) )
  {
    v9 = sub_180012C40(v16, a3);
    sub_1800994FC(a1 + 704, v9);
  }
  v10 = (__int64 *)sub_180026804(*(_QWORD *)(a1 + 912), (__int64)v17, 1u);
  sub_180099374(a1 + 176, v10);
  sub_180099318(v17);
  if ( sub_1800994C4(a1 + 176) )
  {
    sub_180012C40(v16, a3);
    v12 = sub_180012C40(&v35, v11);
    sub_180099564(a1 + 176, v12, v13);
  }
  *(_DWORD *)(a1 + 920) = 1;
  result = sub_180011F5C((_QWORD *)(a1 + 896), a3);
  v15 = a3[1];
  if ( v15 )
    return (_QWORD *)sub_180010EC8(v15);
  return result;
}

/*
 * XREFs of sub_18002B7A0 @ 0x18002B7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_18006F890 @ 0x18006F890 (sub_18006F890.c)
 *     sub_180098584 @ 0x180098584 (sub_180098584.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002B7A0(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  char v8; // bl
  char v9; // r14
  char v10; // r15
  char v11; // r12
  char v12; // r13
  char v13; // dl
  BOOL v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v30; // [rsp+38h] [rbp-50h]
  _QWORD v31[9]; // [rsp+40h] [rbp-48h] BYREF
  char v32; // [rsp+90h] [rbp+8h]
  char v33; // [rsp+A0h] [rbp+18h]

  v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 376LL))(a1, &v29);
  result = sub_180012A94(v4, &v27);
  if ( v30 )
    result = sub_180010F00(v30);
  v6 = v27;
  if ( v27 )
  {
    v7 = sub_180033D14(*(_QWORD *)(v27 + 3984), a2);
    v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C97F8, 0LL);
    v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9818, 0LL);
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9738, 0LL);
    v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9758, 0LL);
    v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9778, 0LL);
    v32 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9798, 0LL);
    v33 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C97B8, 0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C97D8, 0LL);
    v14 = v8 && !v9;
    v15 = v14 | 2;
    if ( !v10 )
      v15 = v14;
    v16 = v15 | 4;
    if ( !v11 )
      v16 = v15;
    v17 = v16 | 8;
    if ( !v12 )
      v17 = v16;
    v18 = v17 | 0x40;
    if ( !v32 )
      v18 = v17;
    v19 = v18 | 0x10;
    if ( !v33 )
      v19 = v18;
    v20 = v19 | 0x20;
    if ( !v13 )
      v20 = v19;
    sub_18006F890(a1[57], v6, v20);
    v21 = a1[55];
    v22 = a1[60];
    sub_180029EF8(v6 + 24, v23);
    v24 = sub_180012C40(v31, (_QWORD *)(v6 + 272));
    *(_QWORD *)(v21 + 192) = v22;
    result = sub_180041DBC(v21 + 184);
    if ( (_BYTE)result )
    {
      v25 = sub_180012C40(&v29, v24);
      result = sub_180098584(v21, v25);
    }
    v26 = v24[1];
    if ( v26 )
      result = sub_180010EC8(v26);
  }
  if ( v28 )
    return sub_180010EC8(v28);
  return result;
}

/*
 * XREFs of sub_180061720 @ 0x180061720
 * Callers:
 *     sub_180063CC0 @ 0x180063CC0 (sub_180063CC0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18005F9E0 @ 0x18005F9E0 (sub_18005F9E0.c)
 *     sub_18005FC30 @ 0x18005FC30 (sub_18005FC30.c)
 *     sub_18006063C @ 0x18006063C (sub_18006063C.c)
 *     sub_18006D84C @ 0x18006D84C (sub_18006D84C.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 *     sub_18006EFE8 @ 0x18006EFE8 (sub_18006EFE8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180061720(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  char v8; // r13
  char v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 result; // rax
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h]
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h]

  v4 = a4;
  v6 = sub_180033D14(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v7 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 96LL))(*a3, 7LL) )
    v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801CAA18, 0LL);
  else
    v8 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_1801CAA58, 0LL);
  if ( v9 && (unsigned int)sub_18005FC30(v6) )
    v9 = 0;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 152LL))(*v4);
  sub_180012C40(&v23, v10);
  sub_18005F9E0(v23, &v21);
  if ( v9 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_1801CAA98, 0LL);
    if ( v12 > 2 )
      v12 = (((int)v12 >> 31) & 0xFFFFFFFE) + 2;
    v13 = v21;
    if ( !v21 )
    {
      v7 = v22;
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v21 + 144) == v12 )
    {
      v7 = v22;
    }
    else
    {
      v14 = sub_180012C40(&v25, &v21);
      sub_18006EFE8(v23, v14);
      v13 = 0LL;
      v21 = 0LL;
      v15 = v22;
      v22 = 0LL;
      if ( !v15 )
        goto LABEL_18;
      sub_180010EC8(v15);
    }
    if ( v13 )
    {
LABEL_23:
      *(float *)(v13 + 280) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_1801CAA78);
      v4 = a4;
      goto LABEL_25;
    }
LABEL_18:
    v16 = sub_18006063C(&v25);
    v13 = *v16;
    v17 = v16[1];
    *v16 = 0LL;
    v16[1] = 0LL;
    v21 = v13;
    v18 = v7;
    v7 = v17;
    v22 = v17;
    if ( v18 )
      sub_180010EC8(v18);
    if ( v26 )
      sub_180010EC8(v26);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, *a3, v12);
    v19 = sub_180012C40(&v25, &v21);
    sub_18006D84C(v23, v19);
    goto LABEL_23;
  }
  v7 = v22;
  v13 = v21;
LABEL_25:
  if ( v13 )
    *(_BYTE *)(v13 + 136) = v9;
  LOBYTE(v11) = v8;
  result = sub_18006EC64(v23, v4, v11);
  if ( v7 )
    result = sub_180010EC8(v7);
  if ( v24 )
    return sub_180010EC8(v24);
  return result;
}

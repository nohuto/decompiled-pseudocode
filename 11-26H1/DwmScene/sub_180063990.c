/*
 * XREFs of sub_180063990 @ 0x180063990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_1800343D0 @ 0x1800343D0 (sub_1800343D0.c)
 *     sub_18005F93C @ 0x18005F93C (sub_18005F93C.c)
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180063990(__int64 a1, int a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(__int64, _BYTE *, void *, __int64); // rbx
  __int64 v6; // rax
  const void *v7; // rax
  const void *v8; // r8
  __int64 v9; // rdx
  int i; // ebx
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, _BYTE *, void *, __int64); // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-79h] BYREF
  __int64 v17; // [rsp+38h] [rbp-71h]
  _BYTE v18[32]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v19; // [rsp+60h] [rbp-49h] BYREF
  __int64 v20; // [rsp+68h] [rbp-41h]
  __int64 v21; // [rsp+70h] [rbp-39h]
  _BYTE v22[16]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v23; // [rsp+90h] [rbp-19h]
  _QWORD v24[4]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v25[32]; // [rsp+C0h] [rbp+17h] BYREF

  v4 = sub_180033D14(a1, a2);
  v5 = *(void (__fastcall **)(__int64, _BYTE *, void *, __int64))(*(_QWORD *)v4 + 96LL);
  v6 = sub_18001E58C((__int64)v22, (__int64)&unk_1800FAA68);
  v5(v4, v25, &unk_1801CACF8, v6);
  sub_18002D818(v24, (__int64)v25);
  sub_1800148EC((__int64)&unk_1801CD8F8);
  v7 = (const void *)sub_1800148EC((__int64)v24);
  if ( sub_18001CFB0(v7, v24[2], v8, qword_1801CD908) )
  {
    sub_1800343D0(a1, &v16, 0);
    for ( i = 0; i < (int)((__int64)(*(_QWORD *)(a1 + 712) - *(_QWORD *)(a1 + 704)) >> 4); ++i )
    {
      sub_1800343D0(a1, &v19, i);
      if ( *(_DWORD *)(v19 + 112) == a2 )
      {
        sub_180013540(&v16, &v19);
        if ( v20 )
          sub_180010EC8(v20);
        break;
      }
      if ( v20 )
        sub_180010EC8(v20);
    }
    v11 = sub_18005F93C(v16, v9);
    v12 = *(void (__fastcall **)(__int64, _BYTE *, void *, __int64))(*(_QWORD *)v4 + 96LL);
    v13 = sub_18001E58C((__int64)v18, (__int64)&unk_1800FAA68);
    v12(v4, v22, &unk_1801CACD8, v13);
    if ( v23 )
    {
      sub_18002D818(&v19, (__int64)v22);
      v14 = sub_1800148EC((__int64)&v19);
      sub_1800887D8(*(_QWORD *)(v11 + 120), v14, v21, v24);
      sub_1800129D0((__int64)&v19);
    }
    sub_180014244((__int64)v22);
    if ( v17 )
      sub_180010EC8(v17);
  }
  sub_1800129D0((__int64)v24);
  return sub_180014244((__int64)v25);
}

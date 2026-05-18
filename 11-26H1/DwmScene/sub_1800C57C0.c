/*
 * XREFs of sub_1800C57C0 @ 0x1800C57C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_180038BB0 @ 0x180038BB0 (sub_180038BB0.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C1A50 @ 0x1800C1A50 (sub_1800C1A50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall sub_1800C57C0(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rbx
  char v7; // al
  __int64 v8; // r14
  __int64 *v9; // rcx
  int v10; // ebx
  _QWORD *v11; // rax
  const char *v12; // rax
  int (__fastcall ***v13)(_QWORD, void *, __int64 *); // rdi
  int (__fastcall *v14)(_QWORD, void *, __int64 *); // rbx
  __int64 v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  _QWORD v20[4]; // [rsp+58h] [rbp-28h] BYREF

  if ( !sub_180038BB0(a1, a2) )
  {
    sub_18001DCFC(&qword_1801BD548, 3);
    return 0;
  }
  v4 = a1 + 18;
  if ( !a1[18] )
  {
    sub_180012A94((__int64)(a1 + 9), &v18);
    v5 = sub_180012C40(v15, &v18);
    sub_1800C1A50(&v16, v5);
    sub_1800BC108(v16, v15);
    v6 = (__int64 *)v15[0];
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15[0] + 304LL))(v15[0]);
    v8 = *v6;
    v9 = a1 + 18;
    if ( (v7 & 1) != 0 )
    {
      sub_18000F938(v9);
      (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 344))(v6, a1 + 18);
    }
    else
    {
      sub_18000F938(v9);
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 352))(v6, 0LL, a1 + 18);
      sub_1800BDDBC(v16, v10);
      if ( v10 < 0 )
      {
        sub_18001DCFC(&qword_1801BD548, 3);
        sub_18000F938(v15);
        if ( v17 )
          sub_180010EC8(v17);
        if ( v19 )
          sub_180010EC8(v19);
        return 0;
      }
      v11 = sub_18002912C((__int64)a1, v20);
      v12 = (const char *)sub_1800148EC((__int64)v11);
      sub_180012384(*v4, v12);
      sub_1800129D0((__int64)v20);
    }
    sub_18000F938(v15);
    if ( v17 )
      sub_180010EC8(v17);
    if ( v19 )
      sub_180010EC8(v19);
  }
  if ( a1[19] )
    return 1;
  v13 = (int (__fastcall ***)(_QWORD, void *, __int64 *))*v4;
  v14 = **v13;
  sub_18000F938(a1 + 19);
  return v14(v13, &unk_18018FF88, a1 + 19) >= 0;
}

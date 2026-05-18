/*
 * XREFs of sub_1800336C8 @ 0x1800336C8
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18002D578 @ 0x18002D578 (sub_18002D578.c)
 *     sub_18002D818 @ 0x18002D818 (sub_18002D818.c)
 *     sub_18003437C @ 0x18003437C (sub_18003437C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800336C8(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  void (__fastcall *v7)(_QWORD *, _QWORD *); // r8
  _QWORD *v8; // rcx
  __int64 *v9; // rdi
  __int64 *v10; // r14
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rcx
  _BYTE v15[16]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v18; // [rsp+68h] [rbp-41h] BYREF
  __int64 v19; // [rsp+70h] [rbp-39h]
  _QWORD v20[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v21; // [rsp+C8h] [rbp+1Fh]

  sub_180029C50((__int64)(a1 + 1), (__int64)v17);
  sub_180029C50((__int64)(a1 + 138), (__int64)v16);
  sub_180029C50(*a2 + 24LL, (__int64)v15);
  v4 = *(_DWORD *)(*a2 + 244LL);
  v5 = sub_18002D818(&v18, *a2 + 80LL);
  sub_1800148EC((__int64)v5);
  sub_18001DCFC(&qword_1801BD288, 3);
  sub_1800129D0((__int64)&v18);
  v6 = sub_180012C40(&v18, a2);
  v7(a1, v6);
  sub_180012C40(&v18, a2);
  v20[0] = &std::_Func_impl_no_alloc<_lambda_d2182d05379cb014900636156d153b19_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
  v20[1] = v18;
  v20[2] = v19;
  v8 = v20;
  v21 = v20;
  v9 = (__int64 *)a1[88];
  v10 = (__int64 *)a1[89];
  if ( v9 != v10 )
  {
    do
    {
      sub_180029C50(*v9 + 16, (__int64)&v18);
      sub_18002D578(*v9, (__int64)v20);
      sub_180011E54((__int64)&v18);
      v9 += 2;
    }
    while ( v9 != v10 );
    v8 = v21;
  }
  v11 = 0LL;
  if ( (__int64)(a1[112] - a1[111]) >> 4 )
  {
    do
    {
      sub_18003437C(a1, &v18, v11);
      if ( v18 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, v4);
      if ( v19 )
        sub_180010EC8(v19);
      ++v11;
    }
    while ( v11 < (__int64)(a1[112] - a1[111]) >> 4 );
    v8 = v21;
  }
  if ( v8 )
  {
    v12 = v20;
    LOBYTE(v12) = v8 != v20;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v12);
    v21 = 0LL;
  }
  sub_180011E54((__int64)v15);
  sub_180011E54((__int64)v16);
  result = sub_180011E54((__int64)v17);
  v14 = a2[1];
  if ( v14 )
    return sub_180010EC8(v14);
  return result;
}

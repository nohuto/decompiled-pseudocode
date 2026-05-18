/*
 * XREFs of sub_18008F8D0 @ 0x18008F8D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_18001EA08 @ 0x18001EA08 (sub_18001EA08.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_1800592E4 @ 0x1800592E4 (sub_1800592E4.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 *     sub_18009993C @ 0x18009993C (sub_18009993C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18008F8D0(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 *a4, __int64 a5)
{
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-81h] BYREF
  __int64 v20; // [rsp+28h] [rbp-79h]
  __int64 v21; // [rsp+30h] [rbp-71h] BYREF
  __int64 v22; // [rsp+38h] [rbp-69h]
  _BYTE v23[8]; // [rsp+40h] [rbp-61h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-59h]
  _BYTE v25[16]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v26[3]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v27[4]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v28[32]; // [rsp+98h] [rbp-9h] BYREF

  v9 = sub_18001C8C0(v27, (__int64)(a1 + 3), (__int64)&unk_180109138);
  sub_18001EA08((__int64)v28, (__int64)v9, a5);
  sub_1800129D0((__int64)v27);
  sub_1800592E4((__int64)a1, &v21, (__int64)a2);
  sub_180029EF8(*a2 + 24LL, v10);
  sub_180099888(v25, &v21, v28);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v23);
  sub_180030C74(v26, v11);
  if ( v24 )
    sub_180010F00(v24);
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD *))(*a1 + 192LL))(a1, a2, a3);
  v12 = sub_18004232C((__int64)(a1 + 1), v27);
  v13 = *v12;
  v14 = v12[1];
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  v19 = v13;
  v15 = v12[1];
  v20 = v15;
  if ( v15 )
    sub_180010EC8(v15);
  v16 = a1[14];
  v17 = a1[13];
  if ( v17 != v16 )
  {
    do
    {
      sub_18004AD40(*a4, &v21, 0LL, (__int64)&v19);
      v17 += 48LL;
    }
    while ( v17 != v16 );
    v15 = v20;
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1);
  if ( v15 )
    sub_180010EC8(v15);
  sub_18003197C((__int64)v26);
  sub_18009993C(v25);
  if ( v22 )
    sub_180010EC8(v22);
  return sub_1800129D0((__int64)v28);
}

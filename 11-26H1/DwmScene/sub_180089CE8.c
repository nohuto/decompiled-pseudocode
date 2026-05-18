/*
 * XREFs of sub_180089CE8 @ 0x180089CE8
 * Callers:
 *     sub_180089EEC @ 0x180089EEC (sub_180089EEC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_180018460 @ 0x180018460 (sub_180018460.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 *     sub_180038A14 @ 0x180038A14 (sub_180038A14.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_180089B38 @ 0x180089B38 (sub_180089B38.c)
 *     sub_180089BCC @ 0x180089BCC (sub_180089BCC.c)
 *     sub_180089F48 @ 0x180089F48 (sub_180089F48.c)
 *     sub_180089F94 @ 0x180089F94 (sub_180089F94.c)
 *     sub_18008A170 @ 0x18008A170 (sub_18008A170.c)
 *     sub_18008A458 @ 0x18008A458 (sub_18008A458.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180089CE8(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 (__fastcall ****a4)(_QWORD, __int64))
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h]
  _QWORD *v20; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall ****v21)(_QWORD, __int64); // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall ****v23)(_QWORD, __int64); // [rsp+58h] [rbp-A8h]
  _BYTE v24[184]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v25[4]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+138h] [rbp+38h] BYREF

  v20 = a2;
  v21 = a4;
  v19 = 0;
  v8 = sub_18001C514(176LL);
  v9 = v8;
  v22 = v8;
  if ( v8 )
  {
    v23 = &v18;
    v10 = *a4;
    *a4 = 0LL;
    v18 = v10;
    v11 = sub_18008A170(v24, a3);
    v8 = sub_180089B38(v9, v11, (__int64 *)&v18);
  }
  sub_180089BCC(a2, v8);
  v19 = 1;
  *(_QWORD *)(*a2 + 8LL) = *(_QWORD *)(***(__int64 (__fastcall ****)(_QWORD, _QWORD *))(a1 + 136))(
                                        *(_QWORD *)(a1 + 136),
                                        v25);
  if ( *a3 )
  {
    v12 = sub_180012C40(v25, a3);
    v13 = (__int64 *)sub_180089F48(&v18, v12);
  }
  else
  {
    v14 = a3[2];
    if ( !v14 )
    {
      sub_180011CC4(v25, "Tween options must have either value or property not null");
      sub_18001C72C(pExceptionObject, (__int64)v25, 0);
      throw (Spectre::Utils::SpectreException *)pExceptionObject;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = sub_180012C40(v25, a3 + 2);
    v13 = (__int64 *)sub_180089F94(&v18, v15);
  }
  sub_180038A14((__int64 *)(*a2 + 32LL), v13);
  sub_180018460(&v18);
  v25[0] = a1 + 56;
  sub_180012AC4(a1 + 56);
  v16 = *(_QWORD **)(a1 + 32);
  if ( v16 == *(_QWORD **)(a1 + 40) )
  {
    sub_18006C90C((__int64 *)(a1 + 24), *(_QWORD *)(a1 + 32), a2);
  }
  else
  {
    sub_180013084(v16, a2);
    *(_QWORD *)(a1 + 32) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 56));
  sub_18008A458(a4);
  return a2;
}

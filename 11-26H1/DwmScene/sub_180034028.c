/*
 * XREFs of sub_180034028 @ 0x180034028
 * Callers:
 *     sub_1800369D4 @ 0x1800369D4 (sub_1800369D4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800266A4 @ 0x1800266A4 (sub_1800266A4.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180034028(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  _QWORD *v5; // rax
  _BYTE v7[16]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  _QWORD v10[4]; // [rsp+48h] [rbp-20h] BYREF

  sub_180036040(a2, v10);
  v3 = (__int64 *)v10[0];
  v4 = (__int64 *)v10[1];
  while ( 1 )
  {
    if ( v3 == v4 )
    {
      sub_1800141F0((__int64)v10);
      *(_OWORD *)a1 = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      return a1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 32LL))(*v3) )
      break;
LABEL_6:
    v3 += 2;
  }
  sub_180029C50(*v3 + 24, (__int64)v7);
  if ( !(unsigned int)sub_1800266A4(*v3) )
  {
    sub_180011E54((__int64)v7);
    goto LABEL_6;
  }
  v5 = sub_180026650(*v3, &v8, 0);
  *(_QWORD *)a1 = *v5;
  *(_QWORD *)(a1 + 8) = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( v9 )
    sub_180010EC8(v9);
  sub_180011E54((__int64)v7);
  sub_1800141F0((__int64)v10);
  return a1;
}

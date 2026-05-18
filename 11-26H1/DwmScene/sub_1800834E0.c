/*
 * XREFs of sub_1800834E0 @ 0x1800834E0
 * Callers:
 *     sub_180084000 @ 0x180084000 (sub_180084000.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180082E7C @ 0x180082E7C (sub_180082E7C.c)
 *     sub_180083E10 @ 0x180083E10 (sub_180083E10.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800834E0(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[40]; // [rsp+38h] [rbp-30h] BYREF

  sub_180082E7C(*a4, &v11);
  v7 = v11;
  v8 = sub_180083E10(a1, v13);
  sub_1800292C4(v7, v8);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a3) )
  {
    v11 = 0LL;
    v9 = v12;
    v12 = 0LL;
    if ( v9 )
      sub_180010EC8(v9);
  }
  *a2 = v11;
  a2[1] = v12;
  return a2;
}

/*
 * XREFs of sub_1800821A0 @ 0x1800821A0
 * Callers:
 *     sub_18004609C @ 0x18004609C (sub_18004609C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800821A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  _BYTE v9[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    sub_180012C40(&v7, (_QWORD *)(**(_QWORD **)(a1 + 120) + 40LL));
    v3 = v7;
    sub_180012A94(v7 + 72, &v5);
    sub_180029C50(v5 + 24, (__int64)v9);
    if ( v6 )
      sub_180010EC8(v6);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 40LL))(v3, a2);
    sub_180011E54((__int64)v9);
    if ( v8 )
      sub_180010EC8(v8);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}

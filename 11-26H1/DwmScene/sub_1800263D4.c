/*
 * XREFs of sub_1800263D4 @ 0x1800263D4
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180026CDC @ 0x180026CDC (sub_180026CDC.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800263D4(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180026CDC(a1, v13);
  sub_180029C50(a1 + 24, v12);
  v5 = *(__int64 **)(a1 + 256);
  v6 = *(__int64 **)(a1 + 248);
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      v7 = v6 + 2;
      if ( *v6 == v3 )
        break;
      v6 += 2;
      if ( v7 == v5 )
        goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(v3, 0LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    sub_180098C90(*v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 336LL))(v3);
    v9 = *(__int64 **)(a1 + 256);
    while ( v7 != v9 )
    {
      sub_180011F5C(v7 - 2, v7);
      v7 += 2;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 256) - 8LL);
    if ( v10 )
      sub_180010EC8(v10);
    *(_QWORD *)(a1 + 256) -= 16LL;
  }
LABEL_11:
  sub_180011E54((__int64)v12);
  result = sub_180011E54((__int64)v13);
  if ( v4 )
    return sub_180010EC8(v4);
  return result;
}

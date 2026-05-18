/*
 * XREFs of sub_18005873C @ 0x18005873C
 * Callers:
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180056D80 @ 0x180056D80 (sub_180056D80.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005873C(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 *v4; // rax
  _BYTE v6[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  sub_180056D80(a2, a1);
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v3 + 32) + 8LL))(*(_QWORD *)(v3 + 32), v6);
  sub_180011F5C((_QWORD *)(a2 + 32), v4);
  if ( v7 )
    sub_180010EC8(v7);
  return a2;
}

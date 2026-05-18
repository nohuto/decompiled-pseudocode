/*
 * XREFs of sub_180080E98 @ 0x180080E98
 * Callers:
 *     sub_18005D458 @ 0x18005D458 (sub_18005D458.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180080E98(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v9[5]; // [rsp+50h] [rbp-48h] BYREF

  v9[4] = a2;
  v4 = **(_QWORD **)(a1 + 24);
  v5 = sub_180011CC4(v8, byte_1800F9DE0);
  v6 = sub_1800181BC(v9, a2);
  sub_180080F34(a1, v6, v4, v5);
  return sub_1800129D0(a2);
}

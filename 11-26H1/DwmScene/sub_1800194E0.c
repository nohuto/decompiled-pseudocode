/*
 * XREFs of sub_1800194E0 @ 0x1800194E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800194E0(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  sub_180029C10(v1 + 8, v3);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 8LL))(v1, v3);
  return sub_180011E54((__int64)v3);
}

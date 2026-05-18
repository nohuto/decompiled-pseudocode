/*
 * XREFs of sub_18005377C @ 0x18005377C
 * Callers:
 *     sub_1800C2320 @ 0x1800C2320 (sub_1800C2320.c)
 * Callees:
 *     sub_180050314 @ 0x180050314 (sub_180050314.c)
 *     sub_180053D44 @ 0x180053D44 (sub_180053D44.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005377C(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, __int64, __int64); // rbx
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[48]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  v5 = sub_180053D44(v7, a2, 0LL, 0LL);
  v4(a1, a2, v5);
  return sub_180050314((__int64)v8);
}

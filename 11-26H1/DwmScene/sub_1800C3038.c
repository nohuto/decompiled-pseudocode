/*
 * XREFs of sub_1800C3038 @ 0x1800C3038
 * Callers:
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 * Callees:
 *     sub_1800BF2BC @ 0x1800BF2BC (sub_1800BF2BC.c)
 *     sub_1800C3084 @ 0x1800C3084 (sub_1800C3084.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C3038(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v3 = sub_1800BF2BC(v7, a2);
  sub_1800C3084(v5, v3, &v8, v4);
  return sub_18000F938(a2);
}

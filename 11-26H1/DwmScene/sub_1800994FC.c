/*
 * XREFs of sub_1800994FC @ 0x1800994FC
 * Callers:
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800994FC(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_180013540((__int64 *)(a1 + 144), a2);
  v3 = sub_180012C40(v8, a2);
  result = v4(v5, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}

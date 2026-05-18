/*
 * XREFs of sub_180099564 @ 0x180099564
 * Callers:
 *     sub_180099E4C @ 0x180099E4C (sub_180099E4C.c)
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 *     sub_18009A468 @ 0x18009A468 (sub_18009A468.c)
 *     sub_18009A580 @ 0x18009A580 (sub_18009A580.c)
 *     sub_18009AFF0 @ 0x18009AFF0 (sub_18009AFF0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180099564(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD *); // r9
  __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_180013540((__int64 *)(a1 + 144), a2);
  sub_180013540((__int64 *)(a1 + 160), a3);
  sub_180012C40(&v12, a3);
  v6 = sub_180012C40(v13, a2);
  result = v7(v8, v6);
  v10 = a2[1];
  if ( v10 )
    result = sub_180010EC8(v10);
  v11 = a3[1];
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}

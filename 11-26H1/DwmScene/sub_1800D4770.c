/*
 * XREFs of sub_1800D4770 @ 0x1800D4770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800D444C @ 0x1800D444C (sub_1800D444C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D4770(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD *); // r9
  __int64 v3; // r10
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  _QWORD v8[7]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+68h] [rbp-10h]

  sub_180012C40(&v6, a2);
  v9 = 0LL;
  v9 = sub_1800D444C(v8, &v6);
  v4 = v2(v3, v8);
  if ( v7 )
    sub_180010EC8(v7);
  return v4;
}

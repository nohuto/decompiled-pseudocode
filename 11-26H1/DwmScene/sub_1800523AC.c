/*
 * XREFs of sub_1800523AC @ 0x1800523AC
 * Callers:
 *     sub_1800521B0 @ 0x1800521B0 (sub_1800521B0.c)
 *     sub_180052290 @ 0x180052290 (sub_180052290.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800523AC(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180012A94(*a2 + 72LL, &v7);
  v4 = *(_DWORD *)(*a2 + 88LL);
  sub_180029070(a1, (__int64)&v7);
  v10 = v4;
  v5 = sub_180051E20((__int64 *)(a1 + 128), (__int64)v9, &v10);
  sub_180013540((__int64 *)(*(_QWORD *)v5 + 40LL), a2);
  v10 = v4;
  result = sub_180028BD0((__int64 *)(a1 + 80), (__int64)v9, &v10);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  if ( v8 )
    return sub_180010EC8(v8);
  return result;
}

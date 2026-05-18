/*
 * XREFs of sub_1800CD520 @ 0x1800CD520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800C1AD4 @ 0x1800C1AD4 (sub_1800C1AD4.c)
 *     sub_1800CD75C @ 0x1800CD75C (sub_1800CD75C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CD520(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r11d
  __int64 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  sub_180012A94(a1 + 72, &v8);
  v6 = (__int64 *)sub_1800CD75C((unsigned int)&v10, v4, v8, v5, a2, 1);
  sub_1800C1AD4((__int64 *)(a1 + 104), v6);
  sub_18000F938(&v10);
  if ( v9 )
    sub_180010EC8(v9);
  return sub_180029258(a1, *(unsigned int *)(*(_QWORD *)(a1 + 96) + 12LL), 5);
}

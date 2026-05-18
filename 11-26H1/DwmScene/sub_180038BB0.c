/*
 * XREFs of sub_180038BB0 @ 0x180038BB0
 * Callers:
 *     sub_1800C57C0 @ 0x1800C57C0 (sub_1800C57C0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180038A14 @ 0x180038A14 (sub_180038A14.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     sub_180096D50 @ 0x180096D50 (sub_180096D50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180038BB0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  sub_180012A94((__int64)(a1 + 9), &v6);
  v4 = sub_18001C514(14688LL);
  v8 = v4;
  if ( v4 )
    v4 = sub_180096D50(v4, v6, a2);
  v8 = v4;
  sub_180038A14(a1 + 12, &v8);
  sub_180038A48(&v8);
  if ( v7 )
    sub_180010EC8(v7);
  (*(void (__fastcall **)(__int64 *))(*a1 + 48))(a1);
  return 1;
}

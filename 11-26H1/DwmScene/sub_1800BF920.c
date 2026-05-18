/*
 * XREFs of sub_1800BF920 @ 0x1800BF920
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18002C424 @ 0x18002C424 (sub_18002C424.c)
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800BF218 @ 0x1800BF218 (sub_1800BF218.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 *     sub_1800C5770 @ 0x1800C5770 (sub_1800C5770.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BF920(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  result = sub_1800C05D4(a1, &v10);
  v4 = v10;
  if ( v10 )
  {
    v5 = 0LL;
    v12 = 0LL;
    sub_180029EF8(v10 + 24, v3);
    sub_180012C40(&v8, (_QWORD *)(v4 + 272));
    if ( v8 )
    {
      sub_1800BF218(&v7, &v8);
      v6 = (__int64 *)sub_1800C5C48(v7, &v13);
      sub_1800BEE5C(&v12, v6);
      sub_18000F938(&v13);
      sub_1800C5770(v7);
      if ( *((_QWORD *)&v7 + 1) )
        sub_180010EC8(*((__int64 *)&v7 + 1));
      v5 = v12;
    }
    v7 = 0LL;
    sub_18002C530(a1, &v7);
    v7 = 0LL;
    sub_18002C424(a1, &v7);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v9 )
      sub_180010EC8(v9);
    result = sub_18000F938(&v12);
  }
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}

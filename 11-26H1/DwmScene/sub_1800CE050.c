/*
 * XREFs of sub_1800CE050 @ 0x1800CE050
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
 *     sub_1800C5770 @ 0x1800C5770 (sub_1800C5770.c)
 *     sub_1800C5C48 @ 0x1800C5C48 (sub_1800C5C48.c)
 *     sub_1800CE794 @ 0x1800CE794 (sub_1800CE794.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CE050(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  sub_18000F938(a1 + 65);
  sub_18000F938(a1 + 66);
  result = sub_1800CE794(a1, &v12);
  v4 = v12;
  if ( v12 )
  {
    v5 = 0LL;
    v14 = 0LL;
    sub_180029EF8(v12 + 24, v3);
    sub_180012C40(&v10, (_QWORD *)(v4 + 272));
    if ( v10 )
    {
      sub_1800BF218(&v9, &v10);
      v6 = sub_1800C5C48(v9, &v15);
      sub_1800BEE5C(&v14, v6);
      sub_18000F938(&v15);
      sub_1800C5770(v9);
      if ( *((_QWORD *)&v9 + 1) )
        sub_180010EC8(*((__int64 *)&v9 + 1));
      v5 = v14;
    }
    v9 = 0LL;
    sub_18002C530((__int64)a1, &v9);
    v9 = 0LL;
    sub_18002C424((__int64)a1, &v9);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v11 )
      sub_180010EC8(v11);
    result = sub_18000F938(&v14);
  }
  if ( v13 )
    result = sub_180010EC8(v13);
  v7 = (__int64 (__fastcall ***)(_QWORD))a1[67];
  if ( v7 )
  {
    result = (**v7)(v7);
    a1[67] = 0LL;
    v8 = a1[68];
    a1[68] = 0LL;
    if ( v8 )
      return sub_180010EC8(v8);
  }
  return result;
}

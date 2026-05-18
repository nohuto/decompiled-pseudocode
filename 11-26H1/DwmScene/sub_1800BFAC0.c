/*
 * XREFs of sub_1800BFAC0 @ 0x1800BFAC0
 * Callers:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180024998 @ 0x180024998 (sub_180024998.c)
 *     sub_18002C424 @ 0x18002C424 (sub_18002C424.c)
 *     sub_18006B3AC @ 0x18006B3AC (sub_18006B3AC.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 *     sub_1800CB5F4 @ 0x1800CB5F4 (sub_1800CB5F4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BFAC0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 *v7; // r9
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  _OWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]

  result = sub_1800C05D4(a1, &v9);
  if ( v9 )
  {
    v3 = sub_180011CC4(v11, "RenderOutput DepthBuffer");
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800CB5F4((unsigned int)&v12, (unsigned int)&v9, v5, v4, (__int64)v3);
    sub_180024998(*(_QWORD **)(v9 + 3984), &v8);
    v6 = sub_180012C40(v11, &v12);
    sub_18006B3AC(v7, v6, 0);
    v11[0] = v8;
    v8 = 0LL;
    result = (__int64)sub_18002C424(a1, v11);
    if ( *((_QWORD *)&v8 + 1) )
      result = sub_180010EC8(*((__int64 *)&v8 + 1));
    if ( v13 )
      result = sub_180010EC8(v13);
  }
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}

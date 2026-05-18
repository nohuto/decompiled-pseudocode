/*
 * XREFs of sub_1800BFBF0 @ 0x1800BFBF0
 * Callers:
 *     sub_1800BFD20 @ 0x1800BFD20 (sub_1800BFD20.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800BFBF0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  _OWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]

  sub_1800C05D4(a1, &v9);
  if ( v9 )
  {
    v4 = sub_180011CC4(v11, "RenderOutput ColorBuffer");
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800C1FC0((unsigned int)&v12, (unsigned int)&v9, v6, v5, (__int64)a2, (__int64)v4);
    sub_1800116C8(*(_QWORD *)(v9 + 3984), &v8);
    sub_180027D80(v8, &v12);
    v11[0] = v8;
    v8 = 0LL;
    sub_18002C530(a1, v11);
    if ( *((_QWORD *)&v8 + 1) )
      sub_180010EC8(*((__int64 *)&v8 + 1));
    if ( v13 )
      sub_180010EC8(v13);
  }
  if ( v10 )
    sub_180010EC8(v10);
  return sub_18000F938(a2);
}

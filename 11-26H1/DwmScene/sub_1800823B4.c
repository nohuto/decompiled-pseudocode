/*
 * XREFs of sub_1800823B4 @ 0x1800823B4
 * Callers:
 *     sub_180081DB0 @ 0x180081DB0 (sub_180081DB0.c)
 *     sub_180081EFC @ 0x180081EFC (sub_180081EFC.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800823B4(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD **v5; // r15
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  _QWORD *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  _BYTE v13[16]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF

  sub_180029C50(a2 + 24, (__int64)v13);
  sub_180029EF8(a2 + 24, v4);
  v5 = *(_QWORD ***)(a2 + 272);
  v6 = a1[14];
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 12);
  else
    v7 = 0;
  v8 = a1[17];
  v9 = sub_18004232C((__int64)(a1 + 12), &v11);
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v5[12] + 8LL))(v5[12], v5);
  ((void (__fastcall *)(_QWORD **, _QWORD *, __int64, _QWORD))(*v5)[35])(v5, v9, v8, v7);
  ((void (__fastcall *)(_QWORD **))(*v5)[37])(v5);
  if ( v12 )
    sub_180010EC8(v12);
  v14 = *(_DWORD *)(a2 + 244);
  *(_BYTE *)(*(_QWORD *)sub_180028BD0(a1 + 10, (__int64)&v11, &v14) + 32LL) = 1;
  return sub_180011E54((__int64)v13);
}

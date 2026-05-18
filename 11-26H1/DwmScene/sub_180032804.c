/*
 * XREFs of sub_180032804 @ 0x180032804
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_18002DD2C @ 0x18002DD2C (sub_18002DD2C.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032804(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = sub_180033D14(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801C96B8, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801C96D8, 0LL);
  if ( v3 && v4 )
    sub_180034428(0LL);
  *(_BYTE *)(*(_QWORD *)(a1 + 968) + 8LL) = 0;
  v5 = *(_QWORD **)(a1 + 968);
  v6 = *(_QWORD *)(a1 + 944);
  sub_180029674((__int64)v5);
  v5[2] = v6;
  v7 = v5[5];
  v8 = v5[4];
  if ( v8 != v7 )
  {
    sub_18002DD2C(v8, v7);
    v5[5] = v5[4];
  }
  v5[3] = *sub_180012B20(&v10);
  return sub_1800297F4((__int64)v5);
}

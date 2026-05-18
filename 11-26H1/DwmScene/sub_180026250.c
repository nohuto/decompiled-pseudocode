/*
 * XREFs of sub_180026250 @ 0x180026250
 * Callers:
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180024760 @ 0x180024760 (sub_180024760.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180026250(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_180024760(a1, a2);
  v7 = *a2;
  v8 = sub_1800181BC(v10, a4);
  sub_1800292C4(v7, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}

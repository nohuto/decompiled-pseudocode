/*
 * XREFs of sub_180018368 @ 0x180018368
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180018368(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbx

  *a1 = 0LL;
  v2 = qword_1801C8518;
  v3 = *(_QWORD *)(qword_1801C8518 + 40);
  v4 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 1048LL);
  sub_18000F938(a1);
  v4(v3, *(_QWORD *)(v2 + 48), a1);
  return a1;
}

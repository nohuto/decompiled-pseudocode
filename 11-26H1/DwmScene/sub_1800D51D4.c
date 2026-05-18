/*
 * XREFs of sub_1800D51D4 @ 0x1800D51D4
 * Callers:
 *     sub_1800D4F08 @ 0x1800D4F08 (sub_1800D4F08.c)
 * Callees:
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     unknown_libname_7 @ 0x18003A064 (unknown_libname_7.c)
 */

__int64 **__fastcall sub_1800D51D4(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v7; // rdi
  __int64 **result; // rax

  if ( a3 != a4 )
  {
    v7 = unknown_libname_7(a4, *(__int64 **)(a1 + 8), a3);
    sub_1800130CC((__int64)v7, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
  }
  result = a2;
  *a2 = a3;
  return result;
}

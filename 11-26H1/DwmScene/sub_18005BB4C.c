/*
 * XREFs of sub_18005BB4C @ 0x18005BB4C
 * Callers:
 *     sub_180056274 @ 0x180056274 (sub_180056274.c)
 *     sub_180056560 @ 0x180056560 (sub_180056560.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180056234 @ 0x180056234 (sub_180056234.c)
 */

__int64 __fastcall sub_18005BB4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_180056234((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_18000E26C(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

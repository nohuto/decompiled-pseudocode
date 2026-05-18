/*
 * XREFs of sub_180097E7C @ 0x180097E7C
 * Callers:
 *     sub_1800978E8 @ 0x1800978E8 (sub_1800978E8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002DD2C @ 0x18002DD2C (sub_18002DD2C.c)
 */

__int64 __fastcall sub_180097E7C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002DD2C((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_18000E26C(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

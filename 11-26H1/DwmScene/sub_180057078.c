/*
 * XREFs of sub_180057078 @ 0x180057078
 * Callers:
 *     sub_1800DBDBD @ 0x1800DBDBD (sub_1800DBDBD.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180056234 @ 0x180056234 (sub_180056234.c)
 */

__int64 __fastcall sub_180057078(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_180056234((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

/*
 * XREFs of sub_180085FB0 @ 0x180085FB0
 * Callers:
 *     sub_180085764 @ 0x180085764 (sub_180085764.c)
 *     sub_180085A18 @ 0x180085A18 (sub_180085A18.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180085FB0(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_18000E26C(v2, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 1));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

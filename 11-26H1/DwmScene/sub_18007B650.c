/*
 * XREFs of sub_18007B650 @ 0x18007B650
 * Callers:
 *     sub_1800DD67F @ 0x1800DD67F (sub_1800DD67F.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 */

__int64 __fastcall sub_18007B650(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18007ACE8((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

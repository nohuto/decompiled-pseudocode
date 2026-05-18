/*
 * XREFs of sub_18006C06C @ 0x18006C06C
 * Callers:
 *     sub_18006BB70 @ 0x18006BB70 (sub_18006BB70.c)
 *     sub_18006BBA4 @ 0x18006BBA4 (sub_18006BBA4.c)
 *     sub_18006BBB0 @ 0x18006BBB0 (sub_18006BBB0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 */

__int64 __fastcall sub_18006C06C(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    sub_18006B7DC((__int64)v2, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}

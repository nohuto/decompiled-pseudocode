/*
 * XREFs of sub_18006BFF0 @ 0x18006BFF0
 * Callers:
 *     sub_18006B814 @ 0x18006B814 (sub_18006B814.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 */

__int64 __fastcall sub_18006BFF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18006B7DC((__int64)v6, *(_QWORD *)(a1 + 8));
    result = sub_18000E26C(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFF80uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 7);
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 7);
  return result;
}

/*
 * XREFs of sub_18002CD34 @ 0x18002CD34
 * Callers:
 *     sub_18002A5E0 @ 0x18002A5E0 (sub_18002A5E0.c)
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18006F450 @ 0x18006F450 (sub_18006F450.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002A448 @ 0x18002A448 (sub_18002A448.c)
 */

__int64 __fastcall sub_18002CD34(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18002A448((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_18000E26C(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 152 * a3;
  result = a2 + 152 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

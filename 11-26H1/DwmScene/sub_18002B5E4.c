/*
 * XREFs of sub_18002B5E4 @ 0x18002B5E4
 * Callers:
 *     sub_18002A5E0 @ 0x18002A5E0 (sub_18002A5E0.c)
 *     sub_18002A740 @ 0x18002A740 (sub_18002A740.c)
 *     sub_18006F450 @ 0x18006F450 (sub_18006F450.c)
 *     sub_1800D932E @ 0x1800D932E (sub_1800D932E.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002A448 @ 0x18002A448 (sub_18002A448.c)
 */

__int64 __fastcall sub_18002B5E4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_18002A448(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 152LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}

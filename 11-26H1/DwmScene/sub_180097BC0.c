/*
 * XREFs of sub_180097BC0 @ 0x180097BC0
 * Callers:
 *     sub_1800978E8 @ 0x1800978E8 (sub_1800978E8.c)
 *     sub_1800DE610 @ 0x1800DE610 (sub_1800DE610.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18002DD2C @ 0x18002DD2C (sub_18002DD2C.c)
 */

__int64 __fastcall sub_180097BC0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_18002DD2C(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 56LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}

/*
 * XREFs of sub_1800D2950 @ 0x1800D2950
 * Callers:
 *     sub_1800D2AA8 @ 0x1800D2AA8 (sub_1800D2AA8.c)
 *     sub_1800D2AD8 @ 0x1800D2AD8 (sub_1800D2AD8.c)
 *     sub_1800E5106 @ 0x1800E5106 (sub_1800E5106.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_1800D2950(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0xC0uLL);
  return result;
}

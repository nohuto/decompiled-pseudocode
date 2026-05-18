/*
 * XREFs of sub_1800D292C @ 0x1800D292C
 * Callers:
 *     sub_1800D1BF4 @ 0x1800D1BF4 (sub_1800D1BF4.c)
 *     sub_1800D29D0 @ 0x1800D29D0 (sub_1800D29D0.c)
 *     sub_1800E5072 @ 0x1800E5072 (sub_1800E5072.c)
 *     sub_1800E50CC @ 0x1800E50CC (sub_1800E50CC.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_1800D292C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0xB0uLL);
  return result;
}

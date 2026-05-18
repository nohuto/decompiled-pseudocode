/*
 * XREFs of sub_1800532EC @ 0x1800532EC
 * Callers:
 *     sub_180052968 @ 0x180052968 (sub_180052968.c)
 *     sub_1800C90E0 @ 0x1800C90E0 (sub_1800C90E0.c)
 *     sub_1800C9218 @ 0x1800C9218 (sub_1800C9218.c)
 *     sub_1800D4010 @ 0x1800D4010 (sub_1800D4010.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_1800532EC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18000E26C(*(void **)(a1 + 8), 32LL * *(_QWORD *)(a1 + 16));
  return result;
}

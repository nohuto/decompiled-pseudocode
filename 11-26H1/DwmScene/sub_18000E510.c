/*
 * XREFs of sub_18000E510 @ 0x18000E510
 * Callers:
 *     sub_1800E5840 @ 0x1800E5840 (sub_1800E5840.c)
 * Callees:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 */

__int64 __fastcall sub_18000E510(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100C4(v1);
  return result;
}

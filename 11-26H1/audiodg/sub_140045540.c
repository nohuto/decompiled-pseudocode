/*
 * XREFs of sub_140045540 @ 0x140045540
 * Callers:
 *     sub_1400409B0 @ 0x1400409B0 (sub_1400409B0.c)
 *     sub_1400B4550 @ 0x1400B4550 (sub_1400B4550.c)
 * Callees:
 *     sub_14007D124 @ 0x14007D124 (sub_14007D124.c)
 */

__int64 __fastcall sub_140045540(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_14007D124(v1);
  return result;
}

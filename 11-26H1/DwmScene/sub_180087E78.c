/*
 * XREFs of sub_180087E78 @ 0x180087E78
 * Callers:
 *     sub_1800878C0 @ 0x1800878C0 (sub_1800878C0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180087E78(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18000E26C(*(void **)(a1 + 8), *(_QWORD *)(a1 + 16));
  return result;
}

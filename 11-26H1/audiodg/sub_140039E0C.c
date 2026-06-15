/*
 * XREFs of sub_140039E0C @ 0x140039E0C
 * Callers:
 *     sub_140039DC0 @ 0x140039DC0 (sub_140039DC0.c)
 * Callees:
 *     sub_140039EA8 @ 0x140039EA8 (sub_140039EA8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140039E0C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_140039EA8(v1);
  return result;
}

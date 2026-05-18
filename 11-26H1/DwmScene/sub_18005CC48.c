/*
 * XREFs of sub_18005CC48 @ 0x18005CC48
 * Callers:
 *     sub_18005C0DC @ 0x18005C0DC (sub_18005C0DC.c)
 *     sub_1800DC0C0 @ 0x1800DC0C0 (sub_1800DC0C0.c)
 * Callees:
 *     sub_18005C418 @ 0x18005C418 (sub_18005C418.c)
 */

__int64 __fastcall sub_18005CC48(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return sub_18005C418(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16));
  return result;
}

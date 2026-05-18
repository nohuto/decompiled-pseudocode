/*
 * XREFs of sub_18001D5EC @ 0x18001D5EC
 * Callers:
 *     sub_18001CA80 @ 0x18001CA80 (sub_18001CA80.c)
 *     sub_1800D8AE6 @ 0x1800D8AE6 (sub_1800D8AE6.c)
 * Callees:
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 */

__int64 __fastcall sub_18001D5EC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return sub_18001CBA0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16));
  return result;
}

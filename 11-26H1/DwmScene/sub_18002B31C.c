/*
 * XREFs of sub_18002B31C @ 0x18002B31C
 * Callers:
 *     sub_18002A334 @ 0x18002A334 (sub_18002A334.c)
 *     sub_1800D92E6 @ 0x1800D92E6 (sub_1800D92E6.c)
 * Callees:
 *     sub_18002A8D0 @ 0x18002A8D0 (sub_18002A8D0.c)
 */

__int64 __fastcall sub_18002B31C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return sub_18002A8D0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16));
  return result;
}

/*
 * XREFs of sub_14004CE38 @ 0x14004CE38
 * Callers:
 *     sub_14004CEE8 @ 0x14004CEE8 (sub_14004CEE8.c)
 *     sub_14004E9D4 @ 0x14004E9D4 (sub_14004E9D4.c)
 *     sub_14007B708 @ 0x14007B708 (sub_14007B708.c)
 *     sub_1400B35C4 @ 0x1400B35C4 (sub_1400B35C4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004CE38(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}

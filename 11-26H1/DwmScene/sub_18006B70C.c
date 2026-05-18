/*
 * XREFs of sub_18006B70C @ 0x18006B70C
 * Callers:
 *     sub_18006B73C @ 0x18006B73C (sub_18006B73C.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_18006B70C(__int64 a1, _QWORD *a2)
{
  if ( *a2 > 0x1FFFFFFFFFFFFFFuLL )
    sub_180012970();
  return sub_180011790(*a2 << 7);
}

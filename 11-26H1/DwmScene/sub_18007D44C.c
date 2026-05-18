/*
 * XREFs of sub_18007D44C @ 0x18007D44C
 * Callers:
 *     sub_180085EC8 @ 0x180085EC8 (sub_180085EC8.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_18007D44C(__int64 a1, _QWORD *a2)
{
  if ( *a2 > 0x1555555555555555uLL )
    sub_180012970();
  return sub_180011790(12LL * *a2);
}

/*
 * XREFs of MiIsPfnFileOnly @ 0x1404611D0
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 *     MiWalkPagesOnLists @ 0x140C05688 (MiWalkPagesOnLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) >> 53) & 1LL;
}

/*
 * XREFs of MiIsPfnFileOnly @ 0x1404595D0
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 *     MiWalkPagesOnLists @ 0x140C0B898 (MiWalkPagesOnLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) >> 53) & 1LL;
}

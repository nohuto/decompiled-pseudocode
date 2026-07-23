/*
 * XREFs of MiIsPfnOnSlabStandbyList @ 0x14048756C
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnOnSlabStandbyList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) >> 27) & 1;
}

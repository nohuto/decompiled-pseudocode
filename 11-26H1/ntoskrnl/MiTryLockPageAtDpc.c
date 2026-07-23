/*
 * XREFs of MiTryLockPageAtDpc @ 0x14048B090
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTryLockPageAtDpc(__int64 a1)
{
  return !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL);
}

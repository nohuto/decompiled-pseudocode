/*
 * XREFs of MiTryLockPageAtDpc @ 0x140491540
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTryLockPageAtDpc(__int64 a1)
{
  return !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL);
}

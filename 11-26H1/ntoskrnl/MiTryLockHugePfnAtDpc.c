/*
 * XREFs of MiTryLockHugePfnAtDpc @ 0x1406F2A6C
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1404FABD8 (MiLockHugePfnInternal.c)
 */

__int64 __fastcall MiTryLockHugePfnAtDpc(__int64 a1)
{
  return MiLockHugePfnInternal(a1, 1);
}

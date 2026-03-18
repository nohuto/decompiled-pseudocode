/*
 * XREFs of MiTryLockHugePfnAtDpc @ 0x1406EDDCC
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1405013E8 (MiLockHugePfnInternal.c)
 */

__int64 __fastcall MiTryLockHugePfnAtDpc(__int64 a1)
{
  return MiLockHugePfnInternal(a1, 1);
}

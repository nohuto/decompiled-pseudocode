/*
 * XREFs of HvpMakeHiveReadOnly @ 0x1406E6C04
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 * Callees:
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall HvpMakeHiveReadOnly(__int64 a1)
{
  HvLockHiveFlusherExclusive(a1);
  *(_DWORD *)(a1 + 164) |= 2u;
  return HvUnlockHiveFlusherExclusive(a1);
}

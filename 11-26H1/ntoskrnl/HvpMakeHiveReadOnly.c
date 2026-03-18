/*
 * XREFs of HvpMakeHiveReadOnly @ 0x1406E2924
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 * Callees:
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall HvpMakeHiveReadOnly(__int64 a1)
{
  HvLockHiveFlusherExclusive(a1);
  *(_DWORD *)(a1 + 164) |= 2u;
  return HvUnlockHiveFlusherExclusive(a1);
}

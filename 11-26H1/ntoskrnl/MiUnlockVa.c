/*
 * XREFs of MiUnlockVa @ 0x1404A3E1C
 * Callers:
 *     MiLockVirtualMemoryRevert @ 0x1402E8DB8 (MiLockVirtualMemoryRevert.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404A8048 (MiSectionProtectTrimValidPtes.c)
 * Callees:
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  return MiUnlockWsle(
           a1,
           a2,
           48 * ((*(_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
         - 0x220000000000LL,
           0);
}

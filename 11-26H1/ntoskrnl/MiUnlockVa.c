/*
 * XREFs of MiUnlockVa @ 0x1404AA78C
 * Callers:
 *     MiLockVirtualMemoryRevert @ 0x140306D38 (MiLockVirtualMemoryRevert.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404AE9B8 (MiSectionProtectTrimValidPtes.c)
 * Callees:
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
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

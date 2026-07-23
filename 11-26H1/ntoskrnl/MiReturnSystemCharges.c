/*
 * XREFs of MiReturnSystemCharges @ 0x1404AC8F8
 * Callers:
 *     MiCleanupPageTablePages @ 0x1402A4AFC (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiDeleteSystemPageTableTail @ 0x140364E70 (MiDeleteSystemPageTableTail.c)
 *     MiReturnPoolCharges @ 0x14036EFB8 (MiReturnPoolCharges.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408807B0 (MiDeleteSparseRange.c)
 *     MiGetLargePagesForSystemMapping @ 0x140B4E990 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 */

unsigned __int64 __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rax

  MiReturnCommit(a1, a3, 0);
  if ( a4 != 1 )
  {
    v7 = -(__int64)a2;
    if ( a4 == 3 )
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].Thread, v7);
    else
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.WaitBlock[0].WaitListEntry.Blink, v7);
  }
  return MiReturnResident(a1, a2);
}

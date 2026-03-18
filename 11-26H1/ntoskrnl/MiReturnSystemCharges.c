/*
 * XREFs of MiReturnSystemCharges @ 0x1404B3278
 * Callers:
 *     MiCleanupPageTablePages @ 0x1402A55AC (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x140339E00 (MiGetPageTablePages.c)
 *     MiDeleteSystemPageTableTail @ 0x1403630D0 (MiDeleteSystemPageTableTail.c)
 *     MiReturnPoolCharges @ 0x14036D218 (MiReturnPoolCharges.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x14087A3B4 (MiDeleteSparseRange.c)
 *     MiGetLargePagesForSystemMapping @ 0x140B4CC00 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 */

unsigned __int64 __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rax

  MiReturnCommit(a1, a3, 0);
  if ( a4 != 1 )
  {
    v7 = -(__int64)a2;
    if ( a4 == 3 )
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E36558.WaitBlock[0].Thread, v7);
    else
      _InterlockedAdd64((volatile signed __int64 *)&stru_140E36558.WaitBlock[0].WaitListEntry.Blink, v7);
  }
  return MiReturnResident(a1, a2);
}

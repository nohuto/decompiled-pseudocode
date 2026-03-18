/*
 * XREFs of MiDeleteSparseRange @ 0x14087A3B4
 * Callers:
 *     MiDeletePfnBitMaps @ 0x14087A1C4 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiPageChainCount @ 0x14047AB90 (MiPageChainCount.c)
 *     MiReturnSystemCharges @ 0x1404B3278 (MiReturnSystemCharges.c)
 *     MiReturnPfnList @ 0x1406F5698 (MiReturnPfnList.c)
 *     MiCaptureSparsePages @ 0x140879C14 (MiCaptureSparsePages.c)
 */

void __fastcall MiDeleteSparseRange(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 *PteAddress; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    PteAddress = (unsigned __int64 *)MiGetPteAddress(a1);
    MiCaptureSparsePages(PteAddress, v4, (__int64 *)&v6);
    MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, PteAddress, a2);
    if ( MiPageChainCount((__int64)&v6) )
    {
      v5 = MiReturnPfnList((__int64)&v6);
      MiReturnSystemCharges((__int64)&MiSystemPartition, v5, v5, 8);
    }
  }
}

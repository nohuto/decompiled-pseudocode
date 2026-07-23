/*
 * XREFs of MiDeleteSparseRange @ 0x1408807B0
 * Callers:
 *     MiDeletePfnBitMaps @ 0x1408805C0 (MiDeletePfnBitMaps.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiReturnSystemCharges @ 0x1404AC8F8 (MiReturnSystemCharges.c)
 *     MiReturnPfnList @ 0x1406FA308 (MiReturnPfnList.c)
 *     MiCaptureSparsePages @ 0x140880010 (MiCaptureSparsePages.c)
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
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, PteAddress, a2);
    if ( MiPageChainCount((__int64)&v6) )
    {
      v5 = MiReturnPfnList((__int64)&v6);
      MiReturnSystemCharges((__int64)&MiSystemPartition, v5, v5, 8);
    }
  }
}

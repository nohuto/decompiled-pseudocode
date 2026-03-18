/*
 * XREFs of MiSufficientAvailablePages @ 0x14028EAB0
 * Callers:
 *     MiFindContiguousPagesPrepare @ 0x14028F3C8 (MiFindContiguousPagesPrepare.c)
 *     MiScanPagefiles @ 0x1402A7EDC (MiScanPagefiles.c)
 *     MiInsertPagesInList @ 0x1402CD600 (MiInsertPagesInList.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402ECD70 (MiConfirmFaultClusterDescriptor.c)
 *     MiFillNoReservationCluster @ 0x1402F29A4 (MiFillNoReservationCluster.c)
 *     MiGetPageTablePages @ 0x140339E00 (MiGetPageTablePages.c)
 *     MiGetPoolPages @ 0x140365A30 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x140366440 (MiRetryNonPagedAllocation.c)
 *     MiPickClusterForMappedFileFault @ 0x14036FB98 (MiPickClusterForMappedFileFault.c)
 *     MmEnoughMemoryForWrite @ 0x1403841D0 (MmEnoughMemoryForWrite.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiWaitForFreePage @ 0x1403D1DB4 (MiWaitForFreePage.c)
 *     MiAllocateAccessLog @ 0x140495568 (MiAllocateAccessLog.c)
 *     MiPartitionTrimmedEnough @ 0x1404C212C (MiPartitionTrimmedEnough.c)
 *     MiInsertPageLockModifiedList @ 0x14051E9C8 (MiInsertPageLockModifiedList.c)
 *     MiNoPagesLastChance @ 0x140703B60 (MiNoPagesLastChance.c)
 *     MiFindLargePageMemory @ 0x140B617F8 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  unsigned int i; // r9d

  v2 = *(_QWORD *)(a1 + 22464);
  if ( v2 >= a2 )
    return 1LL;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16) + 13856LL;
  while ( v3 < (unsigned __int16)KeNumberNodes )
  {
    v5 = 0LL;
    v6 = (_QWORD *)v4;
    while ( v5 <= 1 )
    {
      for ( i = 0; i < dword_140E2D78C; ++i )
      {
        v2 += *(unsigned __int16 *)(*v6 + 16LL * i);
        if ( v2 >= a2 )
          return 1LL;
      }
      ++v5;
      ++v6;
    }
    v4 += 56320LL;
    ++v3;
  }
  return 0LL;
}

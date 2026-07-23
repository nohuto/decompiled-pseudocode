/*
 * XREFs of MiSufficientAvailablePages @ 0x14028E010
 * Callers:
 *     MiFindContiguousPagesPrepare @ 0x14028E928 (MiFindContiguousPagesPrepare.c)
 *     MiScanPagefiles @ 0x1402A72EC (MiScanPagefiles.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiFillNoReservationCluster @ 0x1402D4A24 (MiFillNoReservationCluster.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1403681E0 (MiRetryNonPagedAllocation.c)
 *     MiPickClusterForMappedFileFault @ 0x140371948 (MiPickClusterForMappedFileFault.c)
 *     MmEnoughMemoryForWrite @ 0x140385F80 (MmEnoughMemoryForWrite.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiAllocateAccessLog @ 0x14048F0B8 (MiAllocateAccessLog.c)
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 *     MiInsertPageLockModifiedList @ 0x140520FD8 (MiInsertPageLockModifiedList.c)
 *     MiNoPagesLastChance @ 0x140708830 (MiNoPagesLastChance.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
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
      for ( i = 0; i < dword_140E2D90C; ++i )
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

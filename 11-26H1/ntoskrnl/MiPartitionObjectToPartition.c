/*
 * XREFs of MiPartitionObjectToPartition @ 0x14034A754
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     MmAllocateContiguousMemoryEx @ 0x14034B050 (MmAllocateContiguousMemoryEx.c)
 *     MmFreeNonChargedSecurePages @ 0x1403CCD54 (MmFreeNonChargedSecurePages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404F6254 (MmGetNodeFastLargePageCounts.c)
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     MmQueryMemoryRanges @ 0x14086E460 (MmQueryMemoryRanges.c)
 *     MmGetPageFileInformation @ 0x140B14EF4 (MmGetPageFileInformation.c)
 *     MmBuildLargePages @ 0x140B22ED8 (MmBuildLargePages.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140B4F390 (MmGetPhysicalMemoryRangesEx2.c)
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG *__fastcall MiPartitionObjectToPartition(ULONG **BugCheckParameter2, char a2, _BYTE *a3)
{
  ULONG_PTR BugCheckParameter4; // r9
  int v6; // r11d
  ULONG **v7; // r10
  ULONG *v8; // r10
  ULONG_PTR v10; // r8

  LOBYTE(BugCheckParameter4) = 0;
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG **)-1LL )
    {
      v7 = (ULONG **)(stru_140E2ED08.ThreadLock
                    + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    }
    else
    {
      if ( BugCheckParameter2 == (ULONG **)-2LL )
      {
        v8 = 0LL;
        goto LABEL_9;
      }
      v6 = 1;
      v7 = BugCheckParameter2;
    }
    v8 = *v7;
    if ( !v8 )
      goto LABEL_9;
  }
  else
  {
    v8 = &MiSystemPartition;
  }
  if ( v8[2] != 305535296 )
    goto LABEL_9;
  if ( !v6 )
    goto LABEL_7;
  if ( *((ULONG ***)v8 + 32) != BugCheckParameter2 )
LABEL_9:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v8, 0LL);
  if ( PsReferencePartitionSafe((__int64)BugCheckParameter2) )
  {
    LOBYTE(BugCheckParameter4) = 1;
  }
  else
  {
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x41002uLL, v10, (ULONG_PTR)v8, BugCheckParameter4);
    v8 = (ULONG *)BugCheckParameter4;
  }
LABEL_7:
  *a3 = BugCheckParameter4;
  return v8;
}

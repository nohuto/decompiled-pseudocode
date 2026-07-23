/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x140B4F390
 * Callers:
 *     PfpMemoryRangesQuery @ 0x140602624 (PfpMemoryRangesQuery.c)
 *     MmGetPhysicalMemoryRanges @ 0x14086D800 (MmGetPhysicalMemoryRanges.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x14086D820 (MmGetPhysicalMemoryRangesEx.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiGetPhysicalMemoryRanges @ 0x14086C784 (MiGetPhysicalMemoryRanges.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx2(ULONG **a1, int a2)
{
  char v2; // bl
  ULONG *v3; // rax
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  ULONG *v6; // rdi
  __int64 PhysicalMemoryRanges; // rbx
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v2 = a2;
  if ( (a2 & 0xFFFFFFFC) != 0 || (a2 & 2) != 0 && a1 )
    return 0LL;
  v3 = MiPartitionObjectToPartition(a1, 0, &v9);
  v6 = v3;
  if ( !v3 )
    return 0LL;
  PhysicalMemoryRanges = MiGetPhysicalMemoryRanges(v3, v2, v4, v5);
  if ( v9 )
    PsDereferencePartition(*((_QWORD *)v6 + 32));
  return PhysicalMemoryRanges;
}

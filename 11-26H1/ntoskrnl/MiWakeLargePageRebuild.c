/*
 * XREFs of MiWakeLargePageRebuild @ 0x140259E64
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiSignalLargePageRebuild @ 0x1402A7770 (MiSignalLargePageRebuild.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbp
  int v6; // ebx
  unsigned __int8 v8; // al
  ULONG_PTR v9; // r10

  v3 = 1;
  v5 = *(_QWORD *)(a1 + 16) + 56320LL * (unsigned int)a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 14140));
  if ( !*(_BYTE *)(v5 + 4153) )
  {
    if ( *(_BYTE *)(v5 + 4154) != 8 && !v6 )
      goto LABEL_5;
    v8 = PsReferencePartitionSafe(*(_QWORD *)(a1 + 256), a2, a3);
    v3 = v8;
    if ( v8 )
    {
      *(_BYTE *)(v9 + 33) = 1;
      *(_QWORD *)(v9 + 16) = MiRebuildLargePages;
      *(_QWORD *)(v9 + 24) = v5;
      *(_QWORD *)v9 = 0LL;
      ExQueueWorkItemToPartition(v9);
    }
  }
  if ( !v6 )
LABEL_5:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 14140));
  return v3;
}

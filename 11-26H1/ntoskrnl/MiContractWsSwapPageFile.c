/*
 * XREFs of MiContractWsSwapPageFile @ 0x140AF687C
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmInSwapWorkingSet @ 0x1404CF090 (MmInSwapWorkingSet.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MmInSwapVirtualAddresses @ 0x140AF6684 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x140207558 (MiNumberWsSwapPagefiles.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     MiWsSwapPageFileNumber @ 0x1403FE86C (MiWsSwapPageFileNumber.c)
 */

char __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  unsigned __int32 v1; // eax
  __int64 v2; // r11
  unsigned int v3; // eax
  __int64 v4; // r11
  unsigned int *v5; // rcx
  __int64 v6; // r11

  v1 = MiNumberWsSwapPagefiles(a1);
  if ( v1 )
  {
    v3 = MiWsSwapPageFileNumber(v2);
    v5 = *(unsigned int **)(v4 + 8LL * v3 + 22304);
    v1 = v5[3];
    if ( v1 >= 0x10000 )
    {
      v1 = v5[5];
      if ( v1 >= 0x10000 && (unsigned __int64)*v5 - 0x10000 >= v5[2] )
      {
        v1 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1272), 1, 0);
        if ( !v1 )
        {
          LOBYTE(v1) = PsReferencePartitionSafe(*(_QWORD *)(v4 + 256));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = ExQueueWorkItemToPartition((_QWORD *)(v6 + 1240), 3, 0xFFFFFFFF);
          else
            _InterlockedExchange((volatile __int32 *)(v6 + 1272), 0);
        }
      }
    }
  }
  return v1;
}

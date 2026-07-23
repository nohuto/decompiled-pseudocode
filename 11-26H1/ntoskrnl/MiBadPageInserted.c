/*
 * XREFs of MiBadPageInserted @ 0x1404DBB6C
 * Callers:
 *     MiInsertPageLockBadList @ 0x1404DF030 (MiInsertPageLockBadList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiBadPageInserted(int a1)
{
  ULONG *v1; // rbx

  if ( a1 )
  {
    v1 = 0LL;
  }
  else
  {
    v1 = &MiSystemPartition;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E39B60);
  }
  ++stru_140E2ED08.SchedulerApc.SpareLong0;
  if ( !HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) )
    HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1864);
}

/*
 * XREFs of MiBadPageInserted @ 0x1404E248C
 * Callers:
 *     MiInsertPageLockBadList @ 0x1404E5A90 (MiInsertPageLockBadList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E399E0);
  }
  ++stru_140E2EB88.SchedulerApc.SpareLong0;
  if ( !HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) )
    HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1864);
}

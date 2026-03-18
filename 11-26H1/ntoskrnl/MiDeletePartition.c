/*
 * XREFs of MiDeletePartition @ 0x140868DE4
 * Callers:
 *     PspTeardownPartition @ 0x1407FE050 (PspTeardownPartition.c)
 *     MmCreatePartition @ 0x140869D7C (MmCreatePartition.c)
 * Callees:
 *     MiDrainCrossPartitionUsage @ 0x1406F0580 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1406F0774 (MiFreePartitionId.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeletePartition(unsigned __int16 *P)
{
  unsigned __int16 v1; // bx
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9

  v1 = *P;
  MiDrainCrossPartitionUsage((__int64)P);
  MiDeletePartitionResources(P);
  MiFreePartitionId(v1, v3, v4, v5);
  ExFreePoolWithTag(P, 0);
}

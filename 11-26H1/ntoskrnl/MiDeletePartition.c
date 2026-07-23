/*
 * XREFs of MiDeletePartition @ 0x14086F1C4
 * Callers:
 *     PspTeardownPartition @ 0x140803A80 (PspTeardownPartition.c)
 *     MmCreatePartition @ 0x14087015C (MmCreatePartition.c)
 * Callees:
 *     MiDrainCrossPartitionUsage @ 0x1406F51F0 (MiDrainCrossPartitionUsage.c)
 *     MiFreePartitionId @ 0x1406F53E4 (MiFreePartitionId.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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

/*
 * XREFs of MiInsertHugeRangeInPartition @ 0x14070DB08
 * Callers:
 *     MiFreePartitionPageRun @ 0x14070D980 (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x1408825C4 (MiInsertPartitionPages.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiInsertHugeRangeInPartition(unsigned __int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax

  v3 = (a1 >> 18) & 0x3FFFFF;
  v4 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiLockHugePfnAtDpc(v4);
  MiInsertHugeRangeInList(0LL, v3, a2);
  result = *(_QWORD *)&stru_140E2ED08.SystemCallNumber;
  _InterlockedAnd(
    (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                              + 4 * ((((v4 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << ((v4 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

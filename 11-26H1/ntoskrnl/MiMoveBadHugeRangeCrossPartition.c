/*
 * XREFs of MiMoveBadHugeRangeCrossPartition @ 0x1406F1D1C
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x1406F2314 (MiReleasePartitionHugeIoSpace.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateHugePageCounts @ 0x1406F2AC0 (MiUpdateHugePageCounts.c)
 */

__int64 __fastcall MiMoveBadHugeRangeCrossPartition(__int64 a1, _WORD *a2, unsigned __int16 *a3)
{
  __int64 v4; // rcx
  unsigned __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v9; // rax
  int v10; // ebx
  __int64 result; // rax

  v4 = a1 & 0x3FFFFF;
  v7 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v4);
  MiPageToNode(v4 << 18);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiLockHugePfnAtDpc((__int64)v7);
  v9 = *v7;
  if ( ((*v7 >> 4) & 0x7FF) == *a2 && (v9 & 8) != 0 )
  {
    v10 = 0;
    if ( (v9 & 7) == 4 )
    {
      v10 = 4;
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
      MiUnlinkHugeRangeEx((__int64)a2, a1, 0);
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
      v9 = *v7;
    }
    *v7 = (16LL * *a3) ^ (v9 ^ (16LL * *a3)) & 0xFFFFFFFFFFFF800FuLL;
    if ( v10 == 4 )
      MiInsertHugeRangeInList(0LL, a1, 4);
    MiUpdateHugePageCounts(a2, a1, 1LL);
    MiUpdateHugePageCounts(a3, a1, 1LL);
  }
  result = *(_QWORD *)&stru_140E2ED08.SystemCallNumber;
  _InterlockedAnd(
    (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                              + 4
                              * (((((__int64)v7 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((__int64)v7 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

/*
 * XREFs of MiGetHugeBadRangeFromNode @ 0x1406F034C
 * Callers:
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404883BC (MiGetColorHeadHugeRangeBase.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetHugeBadRangeFromNode(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r13
  int v4; // edx
  _QWORD *ColorHeadHugeRangeBase; // r15
  __int64 v6; // rbx
  _QWORD *v7; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // r14

  v2 = *a1;
  ColorHeadHugeRangeBase = (_QWORD *)MiGetColorHeadHugeRangeBase(
                                       *((_QWORD *)a1 + 2) + 56320LL * (unsigned int)a2,
                                       a2,
                                       5);
  v6 = (*ColorHeadHugeRangeBase >> 15) & 0x3FFFFFLL;
  if ( ((*ColorHeadHugeRangeBase >> 15) & 0x3FFFFF) == 0 )
    return v6;
  while ( !_bittest64(*(const signed __int64 **)&stru_140E2ED08.WaitRegister.Flags, v6) )
  {
LABEL_15:
    v6 = (*ColorHeadHugeRangeBase >> 15) & 0x3FFFFFLL;
    if ( ((*ColorHeadHugeRangeBase >> 15) & 0x3FFFFF) == 0 )
      return v6;
  }
  v7 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v6);
  if ( KeGetCurrentIrql() == 2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
    }
  }
  MiLockHugePfnAtDpc((__int64)v7);
  if ( ((*v7 >> 4) & 0x7FFLL) != v2 || (*v7 & 7) != 4 )
  {
    v9 = (((__int64)v7 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFF;
    v4 = ~(1 << v9);
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                + 4 * ((unsigned __int64)(unsigned int)v9 >> 5)),
      v4);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    goto LABEL_15;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
  MiUnlinkHugeRangeEx((__int64)a1, v6, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
  _InterlockedAnd(
    (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                              + 4
                              * (((((__int64)v7 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((__int64)v7 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v6;
}

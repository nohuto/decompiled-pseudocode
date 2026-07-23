/*
 * XREFs of MiSetHugeRangePartitionId @ 0x1406F26E0
 * Callers:
 *     MiChangePagesPartitionId @ 0x14070D318 (MiChangePagesPartitionId.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateHugePageCounts @ 0x1406F2AC0 (MiUpdateHugePageCounts.c)
 */

__int64 __fastcall MiSetHugeRangePartitionId(__int16 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int16 v4; // di
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 *v9; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  __int64 result; // rax

  v4 = *a1;
  v6 = (a3 >> 18) & 0x3FFFFF;
  v8 = a4 >> 18;
  v9 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v6);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( v8 )
  {
    v11 = v8;
    v12 = 16LL * (v4 & 0x7FF);
    do
    {
      MiLockHugePfnAtDpc((__int64)v9);
      *v9 = v12 | *v9 & 0xFFFFFFFFFFFF800BuLL | 3;
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * (((((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((__int64)v9 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
      MiUpdateHugePageCounts(a2, v6, v8);
      MiUpdateHugePageCounts(a1, v6, v8);
      ++v9;
      v6 = (v6 + 1) ^ ((v6 + 1) ^ v6) & 0xFFFFFFFFFFC00000uLL;
      --v11;
    }
    while ( v11 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

/*
 * XREFs of MiReleaseMemoryRuns @ 0x1406ED4A8
 * Callers:
 *     MmAllocateMemoryRanges @ 0x140867D80 (MmAllocateMemoryRanges.c)
 *     MmFreeMemoryRanges @ 0x140867FF0 (MmFreeMemoryRanges.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockHugePfnAtDpc @ 0x140358C94 (MiLockHugePfnAtDpc.c)
 *     MiHugePfnPartition @ 0x14048E180 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseMemoryRuns(__int64 *a1, int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  ULONG_PTR v4; // r8
  int v5; // r9d
  _QWORD *v6; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  _QWORD *v11; // r15
  char v12; // di
  char v13; // r10
  __int64 v14; // r11
  unsigned __int8 CurrentIrql; // r14
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+8h]

  v2 = *a1;
  v3 = 0LL;
  v4 = a1[3];
  v5 = a2;
  v6 = (_QWORD *)a1[2];
  BugCheckParameter2 = v4;
  if ( *a1 )
  {
    while ( 1 )
    {
      v8 = *v6 / *(_QWORD *)(v4 + 24);
      v9 = *v6 % *(_QWORD *)(v4 + 24);
      v3 = v8 ^ (v8 ^ v3) & 0xFFFFFFFFFFC00000uLL;
      v10 = v9 + 1;
      v11 = (_QWORD *)(*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * (v8 & 0x3FFFFF));
      do
      {
        --v10;
        v12 = 0;
        if ( v5 )
        {
          if ( (*v11 & 7) != 3 )
            KeBugCheckEx(0x1Au, 0x40F80uLL, BugCheckParameter2, v3 & 0x3FFFFF, *a1 - v2);
        }
        else
        {
          MiHugePfnPartition(v11);
          LODWORD(v9) = v14 & v3;
          if ( (*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * (v14 & v3)) & 0x10000LL) == 0 )
            v12 = v13;
        }
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
        }
        MiLockHugePfnAtDpc((__int64)v11);
        MiInsertHugeRangeInList(0LL, v3, v12);
        result = *(_QWORD *)&stru_140E2EB88.SystemCallNumber;
        LODWORD(v9) = ~(1 << (((__int64)v11 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3));
        _InterlockedAnd(
          (volatile signed __int32 *)(*(_QWORD *)&stru_140E2EB88.SystemCallNumber
                                    + 4
                                    * (((((__int64)v11 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
          v9);
        if ( CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          result = CurrentIrql;
          __writecr8(CurrentIrql);
        }
        v5 = a2;
        ++v11;
        v3 = (v3 + 1) ^ ((v3 + 1) ^ v3) & 0xFFFFFFFFFFC00000uLL;
      }
      while ( v10 );
      ++v6;
      if ( !--v2 )
        break;
      v4 = BugCheckParameter2;
    }
  }
  *a1 = 0LL;
  return result;
}

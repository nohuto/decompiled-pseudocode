/*
 * XREFs of MiMakeEntireHugePfnGood @ 0x1406F1358
 * Callers:
 *     MiHotRemoveHugeRange @ 0x1406F0BA4 (MiHotRemoveHugeRange.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiHugePfnPartition @ 0x140487CC0 (MiHugePfnPartition.c)
 *     MiUnlinkHugeRangeEx @ 0x140487ED8 (MiUnlinkHugeRangeEx.c)
 */

_QWORD *__fastcall MiMakeEntireHugePfnGood(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r15
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rcx
  _QWORD *result; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 & 0x3FFFFF;
  v3 = (__int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v2);
  v4 = *v3;
  v5 = MiHugePfnPartition(v3);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
  v6 = (_QWORD *)qword_140E2ECE0;
  while ( v6 )
  {
    v7 = v6[3] & 0x3FFFFFLL;
    if ( v2 > v7 )
    {
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      if ( v2 >= v7 )
        break;
      v6 = (_QWORD *)*v6;
    }
  }
  if ( (v4 & 7) == 4 )
    MiUnlinkHugeRangeEx(v5, a1, 0);
  v9[1] = v6[4];
  v9[0] = 0x40000LL;
  qword_140E2ECE8 -= RtlNumberOfSetBitsEx(v9);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2ECE0, (__int64)v6);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
  result = v6;
  *v3 &= ~8uLL;
  return result;
}

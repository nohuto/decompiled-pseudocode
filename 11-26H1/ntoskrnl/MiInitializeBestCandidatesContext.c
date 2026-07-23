/*
 * XREFs of MiInitializeBestCandidatesContext @ 0x140339D94
 * Callers:
 *     MiAllocateSkipPagesForMdl @ 0x140339B7C (MiAllocateSkipPagesForMdl.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

__int64 __fastcall MiInitializeBestCandidatesContext(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 PoolMm; // rcx
  __int64 v11; // r9

  LODWORD(v5) = a4;
  result = a4;
  *a1 = 0LL;
  if ( a5 == a3 && (a3 == 16 || a3 == 512 || a3 == 0x40000) )
  {
    PoolMm = 0LL;
    if ( a4 > 8 )
    {
      v5 = 1024LL;
      if ( a4 <= 0x400 )
        v5 = a4;
      v11 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
      LODWORD(v11) = v11 | 0x80000000;
      PoolMm = ExAllocatePoolMm(66LL, 8 * v5 + 24, 1665952077LL, v11);
      *a1 = PoolMm;
    }
    if ( !PoolMm )
    {
      LODWORD(v5) = 8;
      *a1 = a2;
      PoolMm = a2;
    }
    *(_OWORD *)PoolMm = 0LL;
    *(_QWORD *)(PoolMm + 16) = 0LL;
    *(_DWORD *)PoolMm = v5;
    result = qword_140E2D920 & ~(a3 - 1);
    *(_QWORD *)(PoolMm + 16) = result;
  }
  return result;
}

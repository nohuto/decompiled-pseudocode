/*
 * XREFs of MiBuildMappedClusterComputeBounds @ 0x14042A8EC
 * Callers:
 *     MiBuildMappedCluster @ 0x14042A81C (MiBuildMappedCluster.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiPteContentsOkToMappedWrite @ 0x14042ACFC (MiPteContentsOkToMappedWrite.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 */

__int16 *__fastcall MiBuildMappedClusterComputeBounds(__int16 **a1)
{
  unsigned __int8 *v2; // rsi
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r10
  unsigned __int16 v9; // r11
  unsigned __int64 v10; // r9
  _QWORD *v11; // r10
  __int64 v12; // r10
  unsigned __int64 v13; // rdi
  __int16 *result; // rax
  __int64 PoolMm; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx

  v2 = (unsigned __int8 *)(a1 + 3);
  v3 = *(_QWORD *)(48LL * (_QWORD)a1[5] - 0x21FFFFFFFFD8LL) & 0xFFFFFFFFFFLL;
  a1[4] = (__int16 *)v3;
  v4 = MiMapPageInHyperSpaceWorker(v3, v2, 0x80000000);
  v6 = (unsigned __int64)a1[6];
  v7 = (_DWORD)a1[6] & 0xFFFLL;
  a1[2] = (__int16 *)v4;
  v8 = v4 + v7;
  v9 = **a1;
  while ( v6 > (unsigned __int64)a1[7] && (unsigned int)MiPteContentsOkToMappedWrite(*(_QWORD *)(v8 - 8), v9) )
    v6 -= 8LL;
  a1[9] = (__int16 *)v6;
  v10 = (unsigned __int64)(a1[6] + 4);
  v11 = (_QWORD *)((char *)a1[2] + (v10 & 0xFFF));
  while ( v10 < (unsigned __int64)a1[8] && (unsigned int)MiPteContentsOkToMappedWrite(*v11, v9) )
  {
    v11 = (_QWORD *)(v12 + 8);
    v10 += 8LL;
  }
  a1[10] = (__int16 *)(v10 - 8);
  v13 = ((__int64)(v10 - 8 - (_QWORD)a1[9]) >> 3) + 1;
  if ( v13 > 0x10 )
  {
    LOBYTE(v5) = *v2;
    MiUnmapPageInHyperSpaceWorker(a1[2], v5, 0x80000000LL);
    a1[2] = 0LL;
    PoolMm = ExAllocatePoolMm(
               64LL,
               8 * v13 + 48,
               1700228429,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( PoolMm )
    {
      a1[1] = (__int16 *)PoolMm;
    }
    else
    {
      v16 = (unsigned __int64)a1[9];
      v17 = (unsigned __int64)a1[6];
      if ( v16 + 128 <= v17 )
      {
        v16 = v17 - 120;
        a1[9] = (__int16 *)(v17 - 120);
      }
      v18 = v16 + 120;
      if ( (unsigned __int64)a1[10] > v18 )
        a1[10] = (__int16 *)v18;
    }
    a1[2] = (__int16 *)MiMapPageInHyperSpaceWorker((__int64)a1[4], v2, 0x80000000);
  }
  result = a1[1];
  *((_DWORD *)result + 10) = 0;
  return result;
}

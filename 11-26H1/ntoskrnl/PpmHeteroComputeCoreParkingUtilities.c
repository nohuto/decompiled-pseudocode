/*
 * XREFs of PpmHeteroComputeCoreParkingUtilities @ 0x140415BAC
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x14041574C (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x14060F474 (PpmHeteroComputeMultiClassUnparkCount.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404163E0 (PpmHeteroUtilityToNormalizedUtility.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PpmHeteroComputeCoreParkingUtilities(
        int a1,
        __int64 a2,
        unsigned int *a3,
        void *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  size_t v8; // r8
  unsigned int v10; // r14d
  unsigned __int64 v11; // rsi
  unsigned __int8 v12; // r15
  unsigned __int16 v13; // bx
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebp
  unsigned __int64 v16; // rsi
  unsigned __int16 i; // bx
  unsigned __int64 v18; // rdx
  __int64 Prcb; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned int v27; // r8d
  unsigned __int8 v28; // r10
  int v29; // eax
  int v30; // r8d

  v8 = 4LL * (unsigned int)KeMaximumProcessors;
  *a6 = 0LL;
  v10 = 0;
  *a5 = 0LL;
  memset_0(a3, 0, v8);
  memset_0(a4, 0, 4LL * (unsigned int)KeMaximumProcessors);
  v11 = *(_QWORD *)(a2 + 8);
  v12 = -1;
  v13 = 0;
  do
  {
    while ( !v11 )
    {
      if ( ++v13 >= *(_WORD *)a2 )
        goto LABEL_6;
      v11 = *(_QWORD *)(a2 + 8LL * v13 + 8);
    }
    _BitScanForward64(&v14, v11);
    v11 &= ~(1LL << v14);
    v15 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v13].Flink
          + (unsigned __int8)v14);
    if ( v12 >= *(_BYTE *)(KeGetPrcb(v15) + 35352) )
      v12 = *(_BYTE *)(KeGetPrcb(v15) + 35352);
  }
  while ( v12 != a1 );
LABEL_6:
  v16 = *(_QWORD *)(a2 + 8);
  for ( i = 0; ; v16 = *(_QWORD *)(a2 + 8LL * i + 8) )
  {
    while ( v16 )
    {
      _BitScanForward64(&v18, v16);
      v16 &= ~(1LL << v18);
      Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * i].Flink
                       + (unsigned int)(unsigned __int8)v18));
      v20 = *(unsigned int *)(Prcb + 35304);
      if ( PpmCheckCurrentPipelineId != 5 )
        v20 = (unsigned int)(v20 - *(_DWORD *)(Prcb + 35312));
      v21 = PpmHeteroUtilityToNormalizedUtility(Prcb + 35264, v20);
      a3[v22] = v21;
      v24 = PpmHeteroUtilityToNormalizedUtility(v23, *(unsigned int *)(v23 + 52));
      *((_DWORD *)a4 + v26) = v24;
      v27 = v24;
      if ( v28 > v12 )
      {
        v29 = PpmHeteroUtilityToNormalizedUtility(v25, *(unsigned int *)(v25 + 56));
        v27 = v29 + v30;
        *((_DWORD *)a4 + v26) = v27;
      }
      *a6 += v27;
      *a5 += a3[v26];
      ++v10;
    }
    if ( ++i >= *(_WORD *)a2 )
      break;
  }
  qsort(a3, v10, 4uLL, PpmUtilityComparer);
  qsort(a4, v10, 4uLL, PpmUtilityComparer);
}

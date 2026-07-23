/*
 * XREFs of KiHeteroScanQueueForPreemptionSwapTarget @ 0x140236D78
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwapOnSubNode @ 0x140236B50 (KiHeteroAttemptPreemptionSwapOnSubNode.c)
 * Callees:
 *     KiFindBiasedProcessorIndex @ 0x140201890 (KiFindBiasedProcessorIndex.c)
 *     KiHeteroComputeThreadImportance @ 0x140409C30 (KiHeteroComputeThreadImportance.c)
 *     KiHeteroIsSwapBeneficialForPerformance @ 0x140409C7C (KiHeteroIsSwapBeneficialForPerformance.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiHeteroScanQueueForPreemptionSwapTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r14d
  unsigned __int16 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  unsigned int v14; // r11d
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // r8
  _BYTE *v18; // r12
  unsigned int v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // rdi
  char v23; // cl
  unsigned int v24; // eax
  char v25; // dl
  bool v26; // zf
  _BYTE *v27; // r8
  char v28; // dl
  int v29; // ecx
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int16 v32; // ax
  __int64 v33; // r10
  __int16 v34; // r11
  unsigned __int16 v35; // [rsp+20h] [rbp-C1h]
  unsigned int v36; // [rsp+24h] [rbp-BDh]
  int v37; // [rsp+28h] [rbp-B9h]
  __int16 v38; // [rsp+2Ch] [rbp-B5h]
  char v39; // [rsp+2Eh] [rbp-B3h]
  __int64 v40; // [rsp+30h] [rbp-B1h]
  __int64 v41; // [rsp+38h] [rbp-A9h]
  __int64 v42; // [rsp+40h] [rbp-A1h]
  __int64 v43; // [rsp+48h] [rbp-99h]
  __int64 v44; // [rsp+50h] [rbp-91h]
  _BYTE v45[128]; // [rsp+60h] [rbp-81h] BYREF

  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 704);
  v7 = a4 & *(_QWORD *)(a1 + 712);
  v8 = *(unsigned __int8 *)(a1 + 705);
  v40 = a1;
  v44 = a2;
  v42 = a3;
  v41 = a5;
  v43 = v8;
  RtlCopyVolatileMemory(&v45[v8 + 64], (const void *)(a1 + 576), v6);
  RtlCopyVolatileMemory(&v45[v8], (const void *)(v5 + 640), v6);
  v10 = v8 + v6;
  v11 = -1;
  v12 = 0LL;
  v36 = v10;
  v13 = 0LL;
  v14 = v8;
  if ( (unsigned int)v8 < v10 )
  {
    v15 = (unsigned int)v8;
    do
    {
      if ( ((1LL << v14) & v7) != 0 )
      {
        v9 = (unsigned __int8)v45[v15 + 64];
        if ( (v9 & 0x80u) == 0LL && (v9 & 0x7F) <= *(char *)a5 )
        {
          v23 = v45[v15];
          v24 = v23 & 7;
          if ( v24 == 5 || v24 <= 2 || v24 == 6 )
          {
            v37 = 33752069;
            v38 = 6;
            v39 = 1;
            v25 = v9 & 0x7F;
            HIBYTE(v35) = *((_BYTE *)&v37 + (v23 & 7));
            if ( (KiHeteroSchedulerOptionsMask & 8) == 0 || (LOBYTE(v35) = v25, (KiHeteroSchedulerOptions & 8) == 0) )
              LOBYTE(v35) = 0;
            if ( v35 <= *(_WORD *)(a5 + 18) )
            {
              v13 |= 1LL << v14;
              if ( v35 < v11 )
                v11 = v35;
            }
          }
        }
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v10 );
    if ( v13 )
    {
      if ( v11 == *(_WORD *)(a5 + 18) )
      {
        if ( !KiHgsPlusEnabled )
          return v12;
        v16 = v10;
        v17 = v42;
        v18 = &v45[v8];
        v19 = v8;
        v20 = 0LL;
        v21 = v41;
        do
        {
          if ( ((1LL << v19) & v13) != 0 )
          {
            LOBYTE(v9) = (*v18 >> 3) & 7;
            if ( (_BYTE)v9 != *(_BYTE *)(v21 + 16) )
            {
              v26 = (unsigned int)KiHeteroIsSwapBeneficialForPerformance(
                                    KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int16 *)(v40 + 710)].Flink
                                                     + v19)],
                                    v9,
                                    v17) == 0;
              v16 = v36;
              if ( !v26 )
                v20 |= 1LL << v19;
            }
          }
          ++v19;
          ++v18;
        }
        while ( v19 < v16 );
        LODWORD(v8) = v43;
        v10 = v36;
        v5 = v40;
      }
      else
      {
        v20 = 0LL;
        v30 = v8;
        v31 = v8;
        do
        {
          if ( ((1LL << v30) & v13) != 0 )
          {
            LOBYTE(v9) = v45[v31 + 64] & 0x7F;
            v32 = KiHeteroComputeThreadImportance(v45[v31] & 7, v9);
            if ( v32 != v34 )
              v20 |= v33;
          }
          ++v30;
          ++v31;
        }
        while ( v30 < v10 );
      }
      if ( v20 )
      {
        v27 = &v45[(unsigned int)v8 + 64];
        v28 = 63;
        do
        {
          if ( ((1LL << v8) & v20) != 0 )
          {
            v29 = *v27 & 0x7F;
            if ( v29 >= v28 )
            {
              if ( v29 == v28 )
                v12 |= 1LL << v8;
            }
            else
            {
              v12 = 1LL << v8;
              v28 = *v27 & 0x7F;
            }
          }
          LODWORD(v8) = v8 + 1;
          ++v27;
        }
        while ( (unsigned int)v8 < v10 );
        return KiProcessorBlock[(unsigned int)KiFindBiasedProcessorIndex(
                                                *(unsigned __int16 *)(v5 + 710),
                                                *(unsigned __int8 *)(v44 + 209),
                                                v12)];
      }
    }
  }
  return v12;
}

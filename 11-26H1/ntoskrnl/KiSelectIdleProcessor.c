/*
 * XREFs of KiSelectIdleProcessor @ 0x14022A240
 * Callers:
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14022A5C4 (KiFindRankBiasedIdleSmtSet.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiSelectIdleProcessor(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  char v16; // al
  __int64 v17; // r8
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // cl
  __int64 v20; // rdx
  unsigned __int8 v21; // r9
  unsigned __int64 v22; // rax
  char v23; // cl
  unsigned __int64 v24; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  char v32; // cl
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned int v40; // ecx
  unsigned int v41; // eax
  char RankBiasedIdleSmtSet; // al
  unsigned __int32 v43; // eax
  __int64 v44; // rdx
  unsigned __int32 v45; // ett
  unsigned __int64 v46; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v47[64]; // [rsp+30h] [rbp-98h] BYREF

  v6 = a5;
  v7 = 0LL;
  if ( a5 )
    goto LABEL_2;
  v26 = *(unsigned __int16 *)(a4 + 136);
  if ( (unsigned __int16)v26 >= *a1 )
    v27 = 0LL;
  else
    v27 = *(_QWORD *)&a1[4 * v26 + 4];
  v28 = *(_QWORD *)(a4 + 128);
  v29 = v27 & v28;
  if ( (v27 & v28) != 0 )
  {
    v30 = *(_QWORD *)(a3 + 192);
    LODWORD(v46) = 0;
    _BitScanForward64(&v31, *(_QWORD *)(v30 + 128));
    _BitScanForward64((unsigned __int64 *)&v30, v28);
    v32 = (v30 + *(_BYTE *)(a3 + 209) - v31) & 0x3F;
    _BitScanForward64((unsigned __int64 *)&v30, __ROR8__(v29, v32));
    v6 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (int)v26].Flink
                          + (((_BYTE)v30 + v32) & 0x3F))];
LABEL_2:
    memset_0(v47, 0, sizeof(v47));
    v12 = *(unsigned __int16 *)(a4 + 136);
    if ( (unsigned __int16)v12 >= *a1 )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)&a1[4 * v12 + 4];
    v14 = *(_QWORD *)(a4 + 8);
    v15 = v14 & *(_QWORD *)(a4 + 8LL * *((int *)a6 + 1) + 16) & v13;
    v46 = v15;
    if ( v15 )
    {
      if ( (*(_BYTE *)(a4 + 184) & 1) == 0 )
        goto LABEL_10;
      if ( *a6 )
      {
        RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(a4, &v46);
        v15 = v46;
        if ( RankBiasedIdleSmtSet )
          goto LABEL_10;
      }
      v16 = *a6;
      if ( (v15 & *(_QWORD *)(a4 + 24)) != 0 )
      {
        if ( !v16 || (unsigned int)__popcnt(v14) >= KiPerfIsoEnabled )
        {
          v15 &= *(_QWORD *)(a4 + 24);
LABEL_10:
          if ( (*(_BYTE *)(a4 + 184) & 4) != 0 )
          {
            RtlCopyVolatileMemory(v47, (const void *)(a4 + 576), 0x40uLL);
            v17 = 0LL;
            v18 = -1;
            v19 = 0;
            v20 = 0LL;
            do
            {
              if ( ((1LL << v19) & v15) != 0 )
              {
                v21 = v47[v20];
                if ( v21 == v18 )
                {
                  v17 |= 1LL << v20;
                }
                else if ( v21 < v18 )
                {
                  v18 = v47[v20];
                  v17 = 1LL << v19;
                }
              }
              ++v19;
              ++v20;
            }
            while ( v19 < 0x40u );
            v15 = v17;
          }
          if ( (v15 & *(_QWORD *)(v6 + 200)) != 0 )
          {
            return v6;
          }
          else
          {
            v22 = *(_QWORD *)(v6 + 36512) & v15;
            if ( v22 || (v22 = *(_QWORD *)(v6 + 36536) & v15) != 0 )
            {
              v15 = v22;
            }
            else if ( (KiCacheAwareScheduling & 1) != 0 && (*(_QWORD *)(v6 + 36528) & v15) != 0 )
            {
              v15 &= *(_QWORD *)(v6 + 36528);
            }
            v23 = *(_BYTE *)(v6 + 209);
            _BitScanForward64(&v24, __ROR8__(v15, v23));
            return KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int8 *)(v6 + 208)].Flink
                                    + (((_BYTE)v24 + v23) & 0x3F))];
          }
        }
      }
      else if ( !v16 )
      {
        v33 = *(_QWORD *)(a2 + 192);
        if ( v33 == a4 )
        {
          v34 = v15 & *(_QWORD *)(v33 + 16);
          v35 = *(_QWORD *)(a2 + 36512) & ~*(_QWORD *)(a2 + 200);
          if ( (v35 & v15) != 0 && (v34 & v35) == v35 && (*(_BYTE *)(a2 + 14524) & 1) == 0 && !*(_DWORD *)(a2 + 33752) )
          {
            v36 = *(_QWORD *)(a2 + 8);
            if ( !*(_BYTE *)(a2 + 32) )
            {
              _disable();
              KiUpdateTotalCyclesCurrentThread(a2, *(_QWORD *)(a2 + 8), 0LL);
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v43 = *SchedulerAssist;
                do
                {
                  v44 = v43;
                  LODWORD(v44) = v43 & 0xFFDFFFFF;
                  v45 = v43;
                  v43 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v43 & 0xFFDFFFFF, v43);
                }
                while ( v45 != v43 );
                if ( (v43 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb, v44, SchedulerAssist, v37);
              }
              _enable();
            }
            v40 = *(_DWORD *)(v36 + 80);
            v41 = *(_DWORD *)(v36 + 84);
            if ( v40 >= v41 || v41 - v40 < KiShortExecutionCycles )
              v15 &= v35;
          }
        }
        goto LABEL_10;
      }
    }
    return v7;
  }
  return 0LL;
}

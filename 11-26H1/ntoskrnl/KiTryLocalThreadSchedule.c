/*
 * XREFs of KiTryLocalThreadSchedule @ 0x140238D30
 * Callers:
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReduceByEffectiveIdleSmtSet @ 0x14022A160 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x14022A5C4 (KiFindRankBiasedIdleSmtSet.c)
 *     KiQueryDpcRuntimeHistory @ 0x140411F20 (KiQueryDpcRuntimeHistory.c)
 */

__int64 __fastcall KiTryLocalThreadSchedule(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, __int64 a5)
{
  char *v5; // rdi
  bool v6; // zf
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  unsigned __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v5 = (char *)a5;
  v6 = (*(_BYTE *)(a1 + 14524) & 1) == 0;
  v25[0] = 0LL;
  if ( v6 || *(_BYTE *)(a3 + 643) != 15 && *(_DWORD *)(a3 + 84) >= (unsigned int)KiShortExecutionCycles )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 192);
  v11 = *(unsigned __int16 *)(v10 + 136);
  v12 = (unsigned __int16)v11 >= *a4 ? 0LL : *(_QWORD *)&a4[4 * v11 + 4];
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v13 & v12 & *(_QWORD *)(v10 + 8LL * *(int *)(a5 + 4) + 16);
  v26 = v14;
  if ( !v14 )
    return 0LL;
  v15 = v14;
  v16 = *(_QWORD *)(a1 + 36528) & v14;
  if ( v16 )
  {
    v14 &= *(_QWORD *)(a1 + 36528);
    v26 = v16;
    v15 = v16;
  }
  if ( KiDispatchInterruptCost != -1
    && *(_QWORD *)(a1 + 14368)
    && (v15 & *(_QWORD *)(a1 + 200)) != 0
    && !*(_DWORD *)(a1 + 14424)
    && (*(_WORD *)(a1 + 14524) & 0xFFDF) == 1 )
  {
    v22 = *(_QWORD *)(a1 + 14376);
    if ( v22 == -1LL )
    {
      if ( !(unsigned __int8)KiQueryDpcRuntimeHistory(a1, *(_QWORD *)(a1 + 14368), v25) )
      {
        *(_QWORD *)(a1 + 14376) = -2LL;
        goto LABEL_13;
      }
      v22 = v25[0];
      *(_QWORD *)(a1 + 14376) = v25[0];
    }
    if ( v22 != -2LL )
    {
      v23 = __rdtsc();
      v24 = (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - *(_QWORD *)(a1 + 14384);
      if ( v22 < v24 || v22 - v24 < KiDispatchInterruptCost )
        return a1;
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(v10 + 184) & 1) == 0 )
    goto LABEL_14;
  if ( *v5 )
  {
    if ( KiFindRankBiasedIdleSmtSet(v10, &v26) )
      goto LABEL_38;
    v14 = v26;
  }
  v14 &= *(_QWORD *)(v10 + 24);
  v21 = *v5;
  if ( v14 )
  {
    if ( !v21 || (unsigned int)__popcnt(v13) >= KiPerfIsoEnabled )
    {
LABEL_14:
      if ( (v14 & ~*(_QWORD *)(a1 + 36512)) != 0 )
        v14 &= ~*(_QWORD *)(a1 + 36512);
      goto LABEL_16;
    }
    return 0LL;
  }
  if ( v21 )
    return 0LL;
  if ( !KiReduceByEffectiveIdleSmtSet(a1, &v26) )
  {
    v14 = v26;
    goto LABEL_14;
  }
LABEL_38:
  v14 = v26;
LABEL_16:
  v17 = *(unsigned __int8 *)(a1 + 208);
  v18 = *(_DWORD *)(a1 + 36500);
  if ( *(_BYTE *)(a2 + 208) == (_BYTE)v17 && (*(_QWORD *)(a1 + 36520) & *(_QWORD *)(a2 + 200)) != 0LL )
    LOBYTE(v18) = *(_BYTE *)(a2 + 209);
  v19 = v17 << 6;
  _BitScanForward64(&v20, __ROR8__(v14, v18));
  return KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                          + v19
                          + (((_BYTE)v18 + (_BYTE)v20) & 0x3Fu))];
}

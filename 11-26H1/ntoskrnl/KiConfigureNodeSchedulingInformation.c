/*
 * XREFs of KiConfigureNodeSchedulingInformation @ 0x1405ED570
 * Callers:
 *     KiConfigureAllSchedulingInformation @ 0x140CCFA80 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405ECC18 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405ECF10 (KiAssignSubNodeSharedReadyQueues.c)
 */

__int64 __fastcall KiConfigureNodeSchedulingInformation(__int64 a1)
{
  int v1; // edi
  unsigned __int64 v2; // r9
  char v3; // r14
  __int64 v4; // rbp
  __int64 i; // rsi
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 j; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 k; // r15
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 136);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = HalpInterruptHyperThreading;
  v4 = 0LL;
  for ( i = 4LL * *(unsigned __int16 *)(a1 + 136); v2; v2 &= ~v9 )
  {
    _BitScanForward64((unsigned __int64 *)&v7, v2);
    v8 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                          + (unsigned int)((v1 << 6) + v7))];
    if ( v3 )
    {
      v9 = *(_QWORD *)(v8 + 36512);
      if ( v9 != *(_QWORD *)(v8 + 200) )
      {
        *(_BYTE *)(a1 + 184) |= 1u;
        v10 = KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(v8 + 192) + 138LL)];
        *(_BYTE *)(v10 + 10) |= 8u;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 128) & *(_QWORD *)(v8 + 8LL * *(unsigned __int8 *)(v8 + 208) + 35928);
    }
    v4 |= 1LL << v7;
  }
  v11 = *(_QWORD *)(a1 + 128);
  for ( j = 0LL;
        v11;
        v11 &= ~*(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                             + (unsigned int)((v1 << 6) + v13))]
                          + 36528) )
  {
    _BitScanForward64(&v13, v11);
    j |= 1LL << v13;
  }
  KiAssignSubNodeSharedReadyQueues(a1);
  v14 = *(_QWORD *)(a1 + 128);
  for ( k = 0LL; v14; v14 &= ~v17 & ~(1LL << v16) )
  {
    _BitScanForward64(&v16, v14);
    v17 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                                       + (unsigned int)((v1 << 6) + v16))]
                    + 36480);
    k |= v17;
  }
  KiAssignCooperativeIdleSearchContexts(a1);
  *(_QWORD *)(a1 + 160) = v4;
  *(_QWORD *)(a1 + 168) = j;
  *(_QWORD *)(a1 + 152) = k;
  qword_140FC29A0[i] |= v4;
  result = KeNodeBlock[*(unsigned __int16 *)(a1 + 138)];
  if ( (*(_BYTE *)(result + 10) & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 128);
    *(_QWORD *)((char *)&unk_140FC29A8 + i * 8) |= result;
  }
  return result;
}

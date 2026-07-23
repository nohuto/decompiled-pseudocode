/*
 * XREFs of KiSetSystemAffinityThread @ 0x14037E3D0
 * Callers:
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14037D7D0 (HalpTimerStallExecutionProcessor.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x140501124 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140509604 (KeSetSystemMultipleGroupAffinityThread.c)
 * Callees:
 *     KiComputeThreadAffinity @ 0x14022B520 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14022BCC0 (KiUpdateNodeAffinitizedFlag.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC (KiRescheduleThreadAfterAffinityChange.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeFindNextProcessorIndexEx @ 0x14025F64C (KeFindNextProcessorIndexEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiCheckPrcbAffinityEx @ 0x140308C80 (KiCheckPrcbAffinityEx.c)
 *     EtwTraceIdealProcessor @ 0x1404E0C98 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x140506B68 (EtwTraceThreadAffinity.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiSetSystemAffinityThread(
        __int64 a1,
        struct _KPRCB *CurrentPrcb,
        struct _KAFFINITY_EX *a3,
        __m128i *a4,
        unsigned int a5,
        struct _SINGLE_LIST_ENTRY *a6)
{
  __int64 v6; // rbp
  __int64 v7; // r10
  int v8; // edi
  __int64 v13; // rsi
  __int64 *v14; // r14
  unsigned __int16 *v15; // r12
  _WORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // edi
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int16 epi16; // r8
  unsigned __int64 v26; // rcx
  unsigned int v27; // r10d
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __m128i v32; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v33; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v34[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v35; // [rsp+58h] [rbp-40h]
  unsigned int v36; // [rsp+A0h] [rbp+8h]

  v6 = a5;
  v7 = *(unsigned int *)(a1 + 588);
  v8 = 0;
  v34[0] = 0LL;
  v36 = v7;
  v35 = 0LL;
  if ( a5 != 2048 )
  {
LABEL_2:
    v13 = KiProcessorBlock[v6];
    goto LABEL_3;
  }
  v13 = KiProcessorBlock[v7];
  LODWORD(v6) = v7;
  if ( a3 )
  {
    if ( !KiCheckPrcbAffinityEx(a3, KiProcessorBlock[v7]) )
    {
      v28 = *(_QWORD *)(v13 + 192);
      v29 = *(unsigned __int16 *)(v28 + 136);
      if ( (unsigned __int16)v29 >= a3->Count )
        v30 = 0LL;
      else
        v30 = a3->Bitmap[v29];
      v31 = *(_QWORD *)(v28 + 128) & v30;
      if ( v31 )
      {
        _BitScanReverse64(&v31, v31);
        LODWORD(v6) = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                      + (unsigned int)(((_DWORD)v29 << 6) + v31));
      }
      else
      {
        LODWORD(v6) = KeFindNextProcessorIndexEx((__int64)a3, v27);
      }
      v13 = KiProcessorBlock[(unsigned int)v6];
    }
  }
  else if ( *(unsigned __int8 *)(v13 + 208) != a4->m128i_i16[4] || (*(_QWORD *)(v13 + 200) & a4->m128i_i64[0]) == 0 )
  {
    v24 = *(_QWORD *)(v13 + 192);
    epi16 = _mm_extract_epi16(*a4, 4);
    v32 = *a4;
    v26 = a4->m128i_i64[0];
    if ( *(_WORD *)(v24 + 136) == epi16 && (*(_QWORD *)(v24 + 128) & v32.m128i_i64[0]) != 0 )
      v26 = *(_QWORD *)(v24 + 128) & v32.m128i_i64[0];
    _BitScanReverse64(&v26, v26);
    v6 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * epi16].Flink + (int)v26);
    goto LABEL_2;
  }
LABEL_3:
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  v33 = CurrentPrcb;
  v34[1] = 0LL;
  KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, v34);
  v14 = (__int64 *)(a1 + 576);
  v15 = *(unsigned __int16 **)(a1 + 576);
  if ( a3 )
  {
    RtlpCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 576), v15[1], a3);
  }
  else
  {
    memset_0(v15 + 4, 0, 8LL * *v15);
    *v15 = 1;
    v16 = (_WORD *)*v14;
    v17 = a4->m128i_u16[4];
    v18 = a4->m128i_i64[0];
    if ( *(_WORD *)*v14 > (unsigned __int16)v17 )
    {
LABEL_7:
      *(_QWORD *)&v16[4 * v17 + 4] |= v18;
      goto LABEL_8;
    }
    if ( v16[1] > (unsigned __int16)v17 )
    {
      *v16 = v17 + 1;
      v14 = (__int64 *)(a1 + 576);
      goto LABEL_7;
    }
  }
LABEL_8:
  *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v13 + 208);
  *(_DWORD *)(a1 + 588) = v6;
  if ( !(unsigned int)KiComputeThreadAffinity(a1) )
  {
    v21 = *(_QWORD *)(v13 + 36480);
    if ( v21 )
    {
      v22 = *(unsigned __int8 *)(v13 + 208);
      if ( (unsigned __int16)v22 >= *(_WORD *)*v14 )
        v23 = 0LL;
      else
        v23 = *(_QWORD *)(*v14 + 8 * v22 + 8);
      LOBYTE(v8) = (v21 & v23) == v21;
    }
    if ( v8 != ((*(_DWORD *)(a1 + 120) >> 13) & 1) )
      _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
    KiUpdateNodeAffinitizedFlag(a1);
    v14 = (__int64 *)(a1 + 576);
  }
  v19 = *(_DWORD *)(a1 + 588);
  KiRescheduleThreadAfterAffinityChange(a1, 2, (unsigned __int64)&v33, a6);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    v20 = *(_DWORD *)(a1 + 116) >> 3;
    LOBYTE(v20) = (*(_DWORD *)(a1 + 116) & 8) != 0;
    EtwTraceThreadAffinity(a1, *(unsigned __int16 *)(a1 + 584), v20, 0, *v14, 1334);
  }
  if ( (xmmword_140FC0C10 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(a1, 1350LL, v36, v19);
}

/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400C8B24
 * Callers:
 *     ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1400A8F80 (-QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDM.c)
 * Callees:
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1400293D0 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400C8E94 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1400C8EF0 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400C8F48 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

__int64 __fastcall VIDMM_PROCESS::QueryVideoMemoryInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v14; // rsi
  __int64 v15; // rbx
  unsigned __int64 *v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v21; // rcx
  struct DXGPROCESS *v22; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int8 v26; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v27[7]; // [rsp+51h] [rbp-1Fh] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+68h] [rbp-8h]

  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * a3);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 8) + 304LL * (unsigned __int16)a4;
      *a6 = *(_QWORD *)(v15 + 8LL * (int)a5 + 32);
      *a8 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          *(VIDMM_GLOBAL **)v14,
                          a4,
                          a5,
                          *((struct VIDMM_PARTITION **)this + 42))
            + 5);
      *a9 = *(_QWORD *)(v15 + 8LL * (int)a5 + 64);
      v16 = a10;
      if ( a10 )
      {
        v24 = 5LL;
        do
        {
          if ( a5 )
            v25 = 0LL;
          else
            v25 = *(unsigned __int64 *)((char *)v16 + v15 + 8 - (_QWORD)a10 + 256);
          *v16++ = v25;
          --v24;
        }
        while ( v24 );
        *a11 = *(_QWORD *)(v15 + 8LL * (int)a5 + 208);
      }
      v30 = 0;
      v29 = v14 + 144;
      if ( v14 != -144 && *(struct _KTHREAD **)(v14 + 152) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1495;
        DxgkLogInternalTriageEvent(v17, 262146LL);
      }
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v28);
      v18 = v30 == 1;
      *a7 = *(_QWORD *)(v15 + 8LL * (int)a5 + 144);
      if ( v18 )
      {
        v19 = v29;
        v30 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(v29 + 16));
        ExReleasePushLockSharedEx(v19, 0LL);
      }
      else
      {
        if ( v30 != 2 )
          return 0LL;
        v21 = v29;
        v30 = 0;
        *(_QWORD *)(v29 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v21, 0LL);
      }
      KeLeaveCriticalRegion();
      return 0LL;
    }
    if ( !a10 )
    {
      v22 = (struct DXGPROCESS *)*((_QWORD *)this + 9);
      v26 = 0;
      v27[0] = 0;
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        v22,
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&v26,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)v27);
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, a4, a5, *((struct VIDMM_PARTITION **)this + 42));
      *a6 = *((_QWORD *)SegmentGroupState + 3 * v26 + v27[0] + 6);
      *a8 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(a2, a4, a5, *((struct VIDMM_PARTITION **)this + 42)) + 5);
      *a9 = 0LL;
      *a7 = 0LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}

/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1400C88B0
 * Callers:
 *     VidMmQueryVideoMemoryInfo @ 0x14003D700 (VidMmQueryVideoMemoryInfo.c)
 * Callees:
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1400293D0 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400C8E94 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1400C8EF0 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400C8F48 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryVideoMemoryInfo(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 v9; // r14
  struct _KTHREAD **v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  VIDMM_GLOBAL *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rdi
  const struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  unsigned __int64 v19; // rdx
  __int64 result; // rax
  __int64 v21; // rcx
  struct DXGPROCESS *v22; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *v23; // rax
  const struct VIDMM_SEGMENT_GROUP_STATE *v24; // rax
  char v25[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+60h] [rbp-20h]
  char v28[8]; // [rsp+68h] [rbp-18h] BYREF
  struct _KTHREAD **v29; // [rsp+70h] [rbp-10h]
  int v30; // [rsp+78h] [rbp-8h]
  unsigned __int8 v31; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v32; // [rsp+D0h] [rbp+50h] BYREF

  v9 = a4;
  if ( a3 >= *((_DWORD *)this + 1738) )
  {
    WdLogSingleEntry1(3LL, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 26755;
  }
  else
  {
    v12 = (struct _KTHREAD **)((char *)this + 41216);
    v13 = 0;
    v29 = v12;
    v30 = 0;
    if ( v12 && v12[1] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(v14, 262146LL);
    }
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v28);
    if ( (unsigned int)v9 > 1 )
    {
      v13 = -1073741811;
    }
    else
    {
      v15 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
      v16 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL * (_QWORD)v15);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 8) + 304LL * (unsigned __int16)a3;
        *a5 = *(_QWORD *)(v17 + 8 * v9 + 32);
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                              *(VIDMM_GLOBAL **)v16,
                              a3,
                              (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v9,
                              *((struct VIDMM_PARTITION **)a2 + 42));
        *a7 = *((_QWORD *)SegmentGroupState + 5);
        v19 = *(_QWORD *)(v17 + 8 * v9 + 64);
        v26 = v16 + 144;
        v27 = 0;
        *a8 = v19;
        if ( v16 != -144 && *(struct _KTHREAD **)(v16 + 152) == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1495;
          DxgkLogInternalTriageEvent(v21, 262146LL);
        }
        DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v25);
        *a6 = *(_QWORD *)(v17 + 8 * v9 + 144);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
      }
      else
      {
        v22 = (struct DXGPROCESS *)*((_QWORD *)a2 + 9);
        v32 = 0;
        v31 = 0;
        VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
          v15,
          v22,
          (enum VIDMM_BUDGET_PRIORITY_BAND *)&v32,
          (enum VIDMM_BUDGET_VISIBILITY_STATE *)&v31);
        v23 = VIDMM_GLOBAL::GetSegmentGroupState(
                this,
                a3,
                (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v9,
                *((struct VIDMM_PARTITION **)a2 + 42));
        *a5 = *((_QWORD *)v23 + 3 * v32 + v31 + 6);
        v24 = VIDMM_GLOBAL::GetSegmentGroupState(
                this,
                a3,
                (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v9,
                *((struct VIDMM_PARTITION **)a2 + 42));
        *a7 = *((_QWORD *)v24 + 5);
        *a8 = 0LL;
        *a6 = 0LL;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    return v13;
  }
  return result;
}

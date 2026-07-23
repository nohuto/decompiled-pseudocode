/*
 * XREFs of KiUpdateThreadSchedulingProperties @ 0x14020433C
 * Callers:
 *     ?KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402040B4 (-KiRemoveThreadFromSchedulingGroup@@YAXPEAU_KTHREAD@@EPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140239DC0 (-KiAddThreadToSchedulingGroup@@YAXPEAU_KTHREAD@@PEAU_KSCHEDULING_GROUP@@EPEAU_SINGLE_LIST_ENTRY@.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402044D0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x140380B40 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiQueryEffectivePriorityThread @ 0x140380E90 (KiQueryEffectivePriorityThread.c)
 */

_BYTE *__fastcall KiUpdateThreadSchedulingProperties(__int64 a1, int a2)
{
  _BYTE *result; // rax
  __int64 *v5; // r10
  __int64 v6; // r11
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  __int64 v15; // r9
  char v16; // cl
  _QWORD *v17; // rdi
  _BYTE *v18; // r14
  char EffectivePriorityThread; // al
  char v20; // cl
  volatile signed __int32 *v21; // r8
  __int64 v22; // [rsp+20h] [rbp-18h] BYREF

  result = (_BYTE *)KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  v6 = *v5;
  if ( a2 == 2 && !*(_QWORD *)(v6 + 16) || a2 == 3 )
  {
    v7 = *(_DWORD *)(a1 + 120) >> 1;
    v22 = *v5;
    if ( (v7 & 1) != 0 )
    {
      result = *(_BYTE **)(v6 + 36504);
      v8 = (unsigned __int8)*result;
      v9 = (__int64 *)(result + 8);
      if ( !*result )
        return result;
    }
    else
    {
      v9 = &v22;
      v8 = 1;
    }
    v10 = v8;
    do
    {
      v17 = (_QWORD *)*v9;
      v18 = *(_BYTE **)(*v9 + 56);
      if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(a1, *v9);
      else
        EffectivePriorityThread = *(_BYTE *)(a1 + 195);
      v20 = EffectivePriorityThread & 0x7F | ((unsigned __int8)(*(_DWORD *)(a1 + 120) >> 1) << 7);
      *v18 = v20;
      v21 = (volatile signed __int32 *)v17[4575];
      if ( v21 )
      {
        v11 = a1 == v17[3] ? KiVpThreadSystemWorkPriority : v20 & 0x7F;
        v12 = (unsigned __int8)BYTE1(*v21);
        if ( v11 != v12 )
        {
          if ( v11 <= v12 )
            v13 = (v11 << 8) - (v12 << 8);
          else
            v13 = (v11 - v12) << 8;
          _InterlockedAdd(v21, v13);
        }
      }
      v14 = *(_DWORD *)(a1 + 80);
      v15 = v17[7];
      if ( v14 <= *(_DWORD *)(a1 + 84) )
        v14 = *(_DWORD *)(a1 + 84);
      v16 = *(_BYTE *)(v15 + 64) ^ (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v15 + 64)) & 7;
      *(_BYTE *)(v15 + 64) = (v14 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | (v16 ^ (v16 ^ (8 * *(_BYTE *)(a1 + 517))) & 0x38) & 0xBF;
      KiUpdateThreadQosGroupingSummaries(v17);
      result = (_BYTE *)KiUpdateStandbyStealSummaryForStandbyChange(v17);
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  return result;
}

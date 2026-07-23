/*
 * XREFs of KiUpdateThreadPriority @ 0x140380850
 * Callers:
 *     KiInitializeForegroundBoostThread @ 0x140202D64 (KiInitializeForegroundBoostThread.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x14022C654 (KiSoftParkElectionUnparkProcessor.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14022FB10 (KiPrepareReadyThreadForRescheduling.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiRemoveBoostThread @ 0x140273850 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiSetPriorityBoost @ 0x1403C9908 (KiSetPriorityBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KiUnparkCurrentProcessor @ 0x140420BA0 (KiUnparkCurrentProcessor.c)
 *     KiApplyForegroundBoostThread @ 0x1405243B4 (KiApplyForegroundBoostThread.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiUpdateStandbyStealSummaryForStandbyChange @ 0x140380B40 (KiUpdateStandbyStealSummaryForStandbyChange.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiQueryEffectivePriorityThread @ 0x140380E90 (KiQueryEffectivePriorityThread.c)
 */

__int64 __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  struct _KPRCB *CurrentPrcb; // rbp
  char v8; // cl
  unsigned int v9; // edi
  __int64 result; // rax
  int v12; // ecx
  __int64 *v13; // rsi
  __int64 v14; // r15
  _QWORD *v15; // rdi
  char *v16; // r14
  char v17; // bp
  char v18; // al
  char v19; // cl
  volatile signed __int32 *v20; // rdx
  int v21; // ecx
  unsigned __int32 v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // r9
  char v26; // cl
  char v27; // dl
  volatile signed __int32 *v28; // r8
  int v29; // ecx
  struct _KPRCB *v30; // rdx
  _QWORD *p_Next; // rcx
  struct _SINGLE_LIST_ENTRY *v32; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rcx
  __int64 v34; // [rsp+30h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = *(_BYTE *)(a3 + 195);
  v9 = 1;
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( a4 > v8 )
    {
      if ( *(_BYTE *)(a3 + 792) )
      {
        v32 = (struct _SINGLE_LIST_ENTRY *)(a3 + 808);
        if ( *(_QWORD *)(a3 + 808) == 1LL )
        {
          p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-37304LL )
          {
            v32->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v32;
            _InterlockedIncrement16((volatile signed __int16 *)(a3 + 868));
            if ( !CurrentPrcb->AbDpc.DeferredContext )
            {
              KiInsertQueueDpc((ULONG_PTR)&CurrentPrcb->AbDpc, (__int64)CurrentPrcb, 0LL, 0LL, 0);
              CurrentPrcb->AbDpc.DeferredContext = (PVOID)1;
            }
          }
        }
      }
    }
  }
  else if ( a4 > v8 )
  {
    if ( *(_BYTE *)(a3 + 792) )
    {
      v30 = (struct _KPRCB *)(a3 + 808);
      if ( *(_QWORD *)(a3 + 808) == 1LL )
      {
        p_Next = &CurrentPrcb->AbPropagateBoostsList.Next;
        if ( CurrentPrcb != (struct _KPRCB *)-37304LL )
        {
          *(_QWORD *)&v30->MxCsr = *p_Next;
          *p_Next = v30;
          _InterlockedIncrement16((volatile signed __int16 *)(a3 + 868));
          AutoBoost::KiAbpQueueAutoBoostDpc((AutoBoost *)CurrentPrcb, v30);
        }
      }
    }
  }
  *(_BYTE *)(a3 + 195) = a4;
  result = KiComputeThreadQos(a3);
  if ( (_DWORD)result != *(unsigned __int8 *)(a3 + 516) )
    *(_BYTE *)(a3 + 516) = result;
  if ( a5 )
  {
    v12 = *(_DWORD *)(a3 + 120) >> 1;
    v34 = a1;
    if ( (v12 & 1) != 0 )
    {
      result = *(_QWORD *)(a1 + 36504);
      v9 = *(unsigned __int8 *)result;
      v13 = (__int64 *)(result + 8);
      if ( !*(_BYTE *)result )
        goto LABEL_23;
    }
    else
    {
      v13 = &v34;
    }
    v14 = v9;
    do
    {
      v15 = (_QWORD *)*v13;
      v16 = *(char **)(*v13 + 56);
      v17 = *v16;
      if ( (*(_BYTE *)(a3 + 2) & 4) != 0 )
        v18 = KiQueryEffectivePriorityThread(a3, *v13) ^ v17;
      else
        v18 = *(_BYTE *)(a3 + 195) ^ v17;
      v19 = (v17 ^ v18 & 0x7F) & 0x7F | ((unsigned __int8)(*(_DWORD *)(a3 + 120) >> 1) << 7);
      *v16 = v19;
      v20 = (volatile signed __int32 *)v15[4575];
      if ( v20 )
      {
        v21 = v19 & 0x7F;
        if ( a3 == v15[3] )
          v21 = KiVpThreadSystemWorkPriority;
        v22 = (unsigned __int32)*v20 >> 8;
        if ( v21 != (unsigned __int8)v22 )
        {
          if ( v21 <= (unsigned __int8)v22 )
            v23 = (v21 << 8) - ((unsigned __int8)v22 << 8);
          else
            v23 = (v21 - (unsigned __int8)v22) << 8;
          _InterlockedAdd(v20, v23);
        }
      }
      v24 = *(_DWORD *)(a3 + 80);
      v25 = v15[7];
      if ( v24 <= *(_DWORD *)(a3 + 84) )
        v24 = *(_DWORD *)(a3 + 84);
      v27 = 64;
      if ( v24 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v27 = 0;
      v26 = *(_BYTE *)(v25 + 64) ^ (*(_BYTE *)(a3 + 516) ^ *(_BYTE *)(v25 + 64)) & 7;
      *(_BYTE *)(v25 + 64) = v27 | (v26 ^ (v26 ^ (8 * *(_BYTE *)(a3 + 517))) & 0x38) & 0xBF;
      KiUpdateThreadQosGroupingSummaries(v15);
      result = KiUpdateStandbyStealSummaryForStandbyChange(v15);
      ++v13;
      --v14;
    }
    while ( v14 );
  }
LABEL_23:
  if ( (*(_DWORD *)(a3 + 120) & 0x400000) != 0 )
  {
    v28 = *(volatile signed __int32 **)(a3 + 968);
    v29 = *(char *)(a3 + 195);
    result = *(unsigned int *)v28;
    if ( v29 != (unsigned __int8)result )
      _InterlockedAdd(v28, v29 - (unsigned __int8)result);
  }
  return result;
}

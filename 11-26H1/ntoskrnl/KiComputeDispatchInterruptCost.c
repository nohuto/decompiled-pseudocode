/*
 * XREFs of KiComputeDispatchInterruptCost @ 0x140CCF150
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     HviGetEnlightenmentInformation @ 0x1406E0980 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 KiComputeDispatchInterruptCost()
{
  struct _KWAIT_BLOCK *WaitBlockArray; // r14
  unsigned int v1; // ebx
  unsigned int v2; // edi
  ULONG_PTR Pool2; // rax
  _QWORD *v4; // r13
  ULONG_PTR v5; // rcx
  __int64 v6; // rdx
  _BYTE *v7; // rax
  PVOID *v8; // r15
  __int64 v9; // rbp
  ULONG v10; // esi
  unsigned int v11; // ebx
  bool v12; // r12
  char *v13; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  ULONG v18; // r9d
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  ULONG v23; // [rsp+40h] [rbp-68h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-60h] BYREF
  __int128 v25; // [rsp+50h] [rbp-58h] BYREF
  __int128 v26; // [rsp+60h] [rbp-48h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  WaitBlockArray = 0LL;
  v25 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
    return 0;
  if ( HviIsAnyHypervisorPresent()
    && ((v26 = 0LL, HviGetHypervisorFeatures(&v26), (v26 & 0x100000000000LL) == 0)
     || (HviGetEnlightenmentInformation(&v25), (v25 & 0x1000) != 0)) )
  {
    return 0;
  }
  else
  {
    v2 = 16;
    if ( (unsigned int)KeNumberProcessors_0 < 0x10 )
      v2 = KeNumberProcessors_0;
    Pool2 = ExAllocatePool2(64LL, 104LL * v2, 0x6369644Bu);
    v4 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      if ( v2 )
      {
        v5 = Pool2 + 81;
        v6 = v2;
        do
        {
          *(_WORD *)(v5 - 1) = 1;
          *(_BYTE *)(v5 + 1) = 6;
          *(_DWORD *)(v5 + 3) = 0;
          *(_QWORD *)(v5 + 15) = v5 + 7;
          *(_QWORD *)(v5 + 7) = v5 + 7;
          v7 = (_BYTE *)(v5 - 81);
          *(_QWORD *)(v5 - 49) = v5 - 81;
          *(_WORD *)(v5 - 79) = 0;
          *(_QWORD *)(v5 - 57) = KiComputeDispatchInterruptCostDpcRoutine;
          *(_QWORD *)(v5 - 25) = 0LL;
          *(_QWORD *)(v5 - 65) = 0LL;
          *(_BYTE *)(v5 - 80) = 2;
          v5 += 104LL;
          *v7 = 19;
          --v6;
        }
        while ( v6 );
      }
      v8 = (PVOID *)ExAllocatePool2(64LL, 8LL * v2, 0x6369644Bu);
      if ( v8 && (WaitBlockArray = (struct _KWAIT_BLOCK *)ExAllocatePool2(64LL, 48LL * v2, 0x6369644Bu)) != 0LL )
      {
        *(_QWORD *)&v25 = 0LL;
        v9 = 0LL;
        v23 = 0;
        KeQueryPerformanceCounter(&PerformanceFrequency);
        *(_QWORD *)&v26 = 5LL;
        do
        {
          v10 = 0;
          v11 = 0;
          v12 = KeDisableInterrupts();
          if ( v2 )
          {
            do
            {
              if ( v11 != KeGetPcr()->Prcb.Number )
              {
                v13 = (char *)&v4[13 * v10];
                v8[v10] = v13 + 80;
                if ( !*((_QWORD *)v13 + 7) )
                  *((_WORD *)v13 + 1) = v11 + 2048;
                *((LARGE_INTEGER *)v13 + 8) = KeQueryPerformanceCounter(0LL);
                KiInsertQueueDpc((ULONG_PTR)&v4[13 * v10++], 0LL, 0LL, 0LL, 0);
              }
              ++v11;
            }
            while ( v11 < v2 );
            v9 = v25;
          }
          if ( v12 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v16 = *SchedulerAssist;
              do
              {
                v17 = v16;
                v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
              }
              while ( v17 != v16 );
              if ( (v16 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
          KeWaitForMultipleObjects(v10, v8, WaitAll, Executive, 0, 0, 0LL, WaitBlockArray);
          v18 = v23;
          if ( v10 )
          {
            v18 = v10 + v23;
            v19 = v10;
            v23 += v10;
            v20 = v4 + 8;
            do
            {
              v21 = v20[1] - *v20;
              v20 += 13;
              v9 += v21;
              --v19;
            }
            while ( v19 );
            *(_QWORD *)&v25 = v9;
          }
          *(_QWORD *)&v26 = v26 - 1;
        }
        while ( (_QWORD)v26 );
        v1 = 0;
        KiDispatchInterruptCost = 1000000
                                * v9
                                * (unsigned __int64)KeGetCurrentPrcb()->MHz
                                / PerformanceFrequency.QuadPart
                                / v18;
      }
      else
      {
        v1 = -1073741801;
      }
      ExFreePoolWithTag(v4, 0);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( WaitBlockArray )
        ExFreePoolWithTag(WaitBlockArray, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}

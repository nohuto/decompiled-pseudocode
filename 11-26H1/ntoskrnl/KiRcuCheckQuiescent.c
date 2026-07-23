/*
 * XREFs of KiRcuCheckQuiescent @ 0x1402237A0
 * Callers:
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KiDispatchInterrupt @ 0x140224C20 (KiDispatchInterrupt.c)
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404EAE58 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiSrcuReportQuiescent @ 0x14045B87C (KiSrcuReportQuiescent.c)
 *     KiRcuReportQuiescentState @ 0x1404D3098 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x1404FD44C (KiRcuFlushCompleted.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiRcuCheckQuiescent(__int64 a1)
{
  unsigned __int64 *v2; // rcx
  char v3; // al
  __int64 v4; // r9
  _QWORD *v5; // rcx
  char v6; // r8
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rax
  signed __int32 *v10; // r8
  char v11; // al
  __int64 v12; // r9
  struct _KPRCB *v13; // rcx
  unsigned __int32 *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v19; // eax
  __int64 v20; // rdx
  unsigned __int32 v21; // ett
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  unsigned __int32 v24; // eax
  __int64 v25; // rdx
  unsigned __int32 v26; // ett
  signed __int32 v27[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 32) <= 1u )
  {
    if ( *(_QWORD *)(a1 + 14584) )
    {
      v3 = KeDisableInterrupts();
      v5 = *(_QWORD **)(a1 + 14584);
      v6 = v3;
      if ( v5 )
      {
        v7 = v5 - 1;
        v8 = (_QWORD *)*v5;
        if ( *(v5 - 1) )
        {
          if ( v5 != v8 )
            *(_QWORD *)(a1 + 14584) = v8;
        }
        else
        {
          v4 = 0LL;
          if ( v8 == v5 )
          {
            *(_QWORD *)(a1 + 14584) = 0LL;
          }
          else
          {
            *(_QWORD *)(a1 + 14584) = v8;
            v15 = (_QWORD *)*v5;
            v16 = (_QWORD *)v5[1];
            if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v16 != v5 )
              __fastfail(3u);
            *v16 = v15;
            v15[1] = v16;
          }
          v9 = v7[7];
          *v5 = 0LL;
          v7[3] = *(_QWORD *)(v9 + 56);
        }
        if ( v6 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v19 = *SchedulerAssist;
            do
            {
              v20 = v19;
              LODWORD(v20) = v19 & 0xFFDFFFFF;
              v21 = v19;
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v19 & 0xFFDFFFFF, v19);
            }
            while ( v21 != v19 );
            if ( (v19 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, v20, SchedulerAssist, v4);
          }
          _enable();
        }
        if ( (unsigned int)KiSrcuReportQuiescent(v7, a1) )
          KiSrcuFlushCompleted(v7[7], 0LL);
      }
      else if ( v3 )
      {
        v10 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
        if ( v10 )
        {
          _m_prefetchw(v10);
          v22 = *v10;
          do
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange(v10, v22 & 0xFFDFFFFF, v22);
          }
          while ( v23 != v22 );
          if ( (v22 & 0x200000) != 0 )
            ((void (*)(void))KiRemoveSystemWorkPriorityKick)();
        }
        _enable();
      }
    }
    if ( *(_BYTE *)(a1 + 14565) && !*(_DWORD *)(a1 + 14560) )
    {
      v11 = KeDisableInterrupts();
      if ( *(_BYTE *)(a1 + 14565) && !*(_DWORD *)(a1 + 14560) )
      {
        *(_BYTE *)(a1 + 14565) = 0;
        _InterlockedOr(v27, 0);
        *(_QWORD *)(a1 + 14568) = KiDpcCorralLock.WaitBlock[2].Thread;
      }
      if ( v11 )
      {
        v13 = KeGetCurrentPrcb();
        v14 = (unsigned __int32 *)v13->SchedulerAssist;
        if ( v14 )
        {
          _m_prefetchw(v14);
          v24 = *v14;
          do
          {
            v25 = v24;
            LODWORD(v25) = v24 & 0xFFDFFFFF;
            v26 = v24;
            v24 = _InterlockedCompareExchange((volatile signed __int32 *)v14, v24 & 0xFFDFFFFF, v24);
          }
          while ( v26 != v24 );
          if ( (v24 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v13, v25, v14, v12);
        }
        _enable();
      }
    }
    if ( *(_QWORD *)(a1 + 14568) != *(_QWORD *)(a1 + 14576) )
    {
      v2 = &KiDpcCorralLock.NpxState + 4 * *(unsigned int *)(a1 + 36);
      if ( (*v2 & *(_QWORD *)(v2[1] + 48)) == 0 )
      {
        if ( (unsigned int)KiRcuReportQuiescentState(v2, *(_QWORD *)(a1 + 14568), 0LL) )
          KiRcuFlushCompleted(*(unsigned __int8 *)(a1 + 14566));
      }
    }
  }
}

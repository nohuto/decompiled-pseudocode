/*
 * XREFs of KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0
 * Callers:
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 * Callees:
 *     KiGetNextIdleSearchTargetInGeneration @ 0x140241930 (KiGetNextIdleSearchTargetInGeneration.c)
 *     KiJoinCooperativeIdleSearch @ 0x140241BC0 (KiJoinCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLeaveCooperativeIdleSearch @ 0x14044F320 (KiLeaveCooperativeIdleSearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapStacksAndRetireDpcList @ 0x140731010 (KiSwapStacksAndRetireDpcList.c)
 */

__int64 __fastcall KiSearchForNewThreadsWithinL0SearchContext(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbp
  _QWORD *v4; // r14
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v9; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  __int64 *v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  unsigned int v19; // r9d
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // ebx
  unsigned __int32 v23; // eax
  unsigned __int32 v24; // ett
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int16 v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+80h] [rbp+18h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 37976);
  v4 = *(_QWORD **)(a1 + 37992);
  v28 = 0;
  if ( !(unsigned __int8)KiJoinCooperativeIdleSearch(a1, v2, v4) )
    return 0LL;
LABEL_8:
  while ( 2 )
  {
    if ( (*(_WORD *)(a1 + 14524) & 0xBF) != 0 )
    {
      if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a1 + 24) )
      {
        KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, a2);
        v11 = *(_QWORD *)(a1 + 16);
        if ( v11 == *(_QWORD *)(a1 + 24) )
          *(_BYTE *)(a1 + 14523) = 1;
        goto LABEL_38;
      }
      _disable();
      KiSwapStacksAndRetireDpcList(a1, *(_QWORD *)(a1 + 14496));
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v23 = *SchedulerAssist;
        do
        {
          v6 = v23;
          LODWORD(v6) = v23 & 0xFFDFFFFF;
          v24 = v23;
          v23 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v23 & 0xFFDFFFFF, v23);
        }
        while ( v24 != v23 );
        if ( (v23 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v6, SchedulerAssist, v9);
      }
      _enable();
    }
    v16 = *(_QWORD *)(a1 + 16);
    if ( v16 && v16 != *(_QWORD *)(a1 + 24) )
    {
      v22 = 0;
      *a2 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentPrcb, v6, SchedulerAssist) )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(a1 + 48) );
      }
      v11 = *(_QWORD *)(a1 + 16);
      if ( v11 == *(_QWORD *)(a1 + 24) )
      {
        v12 = *a2;
        v13 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
        v29 = v13;
        if ( (v12 & 1) != 0 )
        {
          v15 = *(_QWORD *)(v13 + 36504);
          v14 = (__int64 *)(v15 + 8);
          LODWORD(v15) = *(unsigned __int8 *)v15;
          if ( !(_DWORD)v15 )
          {
LABEL_7:
            *a2 = 0LL;
            goto LABEL_11;
          }
        }
        else
        {
          v14 = &v29;
          LODWORD(v15) = 1;
        }
        do
        {
          v15 = (unsigned int)(v15 - 1);
          _InterlockedAnd64((volatile signed __int64 *)(v14[v15] + 48), 0LL);
        }
        while ( (_DWORD)v15 );
        goto LABEL_7;
      }
LABEL_38:
      LOBYTE(v9) = 1;
      KiLeaveCooperativeIdleSearch(a1, v2, v4, v9);
      return v11;
    }
LABEL_11:
    v30 = 0LL;
    v29 = 0LL;
    while ( 1 )
    {
      v17 = *(unsigned __int8 *)(v2 + 1060);
      v18 = -1LL;
      v19 = -1;
      if ( (unsigned int)v17 > *(unsigned __int8 *)(v2 + 1061) )
        break;
      do
      {
        v20 = *(_QWORD *)(v2 + 8 * v17 + 24);
        if ( v20 && v20 < v18 && (v20 & 0xFFFFFFFFFFFFFF80uLL) <= (*v4 & 0xFFFFFFFFFFFFFF80uLL) && (v20 & 1) == 0 )
        {
          v18 = *(_QWORD *)(v2 + 8 * v17 + 24);
          v19 = v17;
        }
        v17 = (unsigned int)(v17 + 1);
      }
      while ( (unsigned int)v17 <= *(unsigned __int8 *)(v2 + 1061) );
      if ( v19 == -1 )
        break;
      v21 = v19;
      if ( v18 == *(_QWORD *)(v2 + 8LL * v19 + 24) )
      {
        if ( (unsigned __int8)KiGetNextIdleSearchTargetInGeneration(
                                v2,
                                a1,
                                *(_QWORD *)(v2 + 8LL * v19 + 536),
                                (unsigned int)&v28,
                                (__int64)&v30,
                                (__int64)&v29) )
        {
          v25 = v29;
          v26 = v30;
          KiSearchForNewThreadsOnTarget((struct _KPRCB *)a1, v30, v29);
          CurrentPrcb = (struct _KPRCB *)(v2 + 16LL * v28 + 1064);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 200);
          }
          else
          {
            v27 = *(_QWORD *)(v25 + 712);
            CurrentPrcb = (struct _KPRCB *)((char *)CurrentPrcb + 8);
          }
          _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb, ~v27);
          goto LABEL_8;
        }
        _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v21 + 24), v18 | 1, v18);
      }
    }
    v28 = -1;
    if ( !(unsigned __int8)KiLeaveCooperativeIdleSearch(a1, v2, v4, 0LL) )
      continue;
    return 0LL;
  }
}

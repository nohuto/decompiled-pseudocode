/*
 * XREFs of KiSearchForNewThreadsWithinSearchContext @ 0x140241560
 * Callers:
 *     KiSearchForNewThreadsWithinL1SearchContext @ 0x1404A8A68 (KiSearchForNewThreadsWithinL1SearchContext.c)
 * Callees:
 *     KiGetNextIdleSearchTargetInGeneration @ 0x140241930 (KiGetNextIdleSearchTargetInGeneration.c)
 *     KiJoinCooperativeIdleSearch @ 0x140241BC0 (KiJoinCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiLeaveCooperativeIdleSearch @ 0x14044F320 (KiLeaveCooperativeIdleSearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapStacksAndRetireDpcList @ 0x140731010 (KiSwapStacksAndRetireDpcList.c)
 */

__int64 __fastcall KiSearchForNewThreadsWithinSearchContext(__int64 a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int64 *v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned int v18; // r9d
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // ebx
  unsigned int i; // ecx
  __int64 v23; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v26; // eax
  __int64 v27; // rdx
  unsigned __int32 v28; // ett
  __int64 v29; // rsi
  __int64 v30; // rbx
  volatile signed __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // [rsp+30h] [rbp-38h] BYREF
  __int64 v34[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v35; // [rsp+70h] [rbp+8h] BYREF

  v35 = 0;
  if ( !(unsigned __int8)KiJoinCooperativeIdleSearch(a1, a3, a4) )
    return 0LL;
LABEL_8:
  while ( 2 )
  {
    if ( (*(_WORD *)(a1 + 14524) & 0xBF) != 0 )
    {
      if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a1 + 24) )
      {
        KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, a2);
        v10 = *(_QWORD *)(a1 + 16);
        if ( v10 == *(_QWORD *)(a1 + 24) )
          *(_BYTE *)(a1 + 14523) = 1;
        goto LABEL_46;
      }
      _disable();
      KiSwapStacksAndRetireDpcList(a1, *(_QWORD *)(a1 + 14496));
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v26 = *SchedulerAssist;
        do
        {
          v27 = v26;
          LODWORD(v27) = v26 & 0xFFDFFFFF;
          v28 = v26;
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v26 & 0xFFDFFFFF, v26);
        }
        while ( v28 != v26 );
        if ( (v26 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v27, SchedulerAssist, v8);
      }
      _enable();
    }
    v15 = *(_QWORD *)(a1 + 16);
    if ( v15 && v15 != *(_QWORD *)(a1 + 24) )
    {
      v21 = 0;
      *a2 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_26:
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        while ( 1 )
        {
          if ( (++v21 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
          {
            if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
            {
LABEL_40:
              HvlNotifyLongSpinWait(v21);
              goto LABEL_29;
            }
            for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
            {
              v23 = KiProcessorBlock[i];
              if ( (*(_BYTE *)(v23 + 35) & 1) != 0 )
              {
                v8 = *(_QWORD *)(v23 + 36600);
                if ( !v8 || !*(_BYTE *)(v8 + 65) || !*(_BYTE *)(v8 + 64) )
                  goto LABEL_40;
              }
            }
          }
          _mm_pause();
LABEL_29:
          if ( !*(_QWORD *)(a1 + 48) )
            goto LABEL_26;
        }
      }
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 == *(_QWORD *)(a1 + 24) )
      {
        v11 = *a2;
        v12 = *a2 & 0xFFFFFFFFFFFFFFFEuLL;
        v34[0] = v12;
        if ( (v11 & 1) != 0 )
        {
          v14 = *(_QWORD *)(v12 + 36504);
          v13 = (__int64 *)(v14 + 8);
          LODWORD(v14) = *(unsigned __int8 *)v14;
          if ( !(_DWORD)v14 )
          {
LABEL_7:
            *a2 = 0LL;
            goto LABEL_11;
          }
        }
        else
        {
          v13 = v34;
          LODWORD(v14) = 1;
        }
        do
        {
          v14 = (unsigned int)(v14 - 1);
          _InterlockedAnd64((volatile signed __int64 *)(v13[v14] + 48), 0LL);
        }
        while ( (_DWORD)v14 );
        goto LABEL_7;
      }
LABEL_46:
      LOBYTE(v8) = 1;
      KiLeaveCooperativeIdleSearch(a1, a3, a4, v8);
      return v10;
    }
LABEL_11:
    v34[0] = 0LL;
    v33 = 0LL;
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)(a3 + 1060);
      v17 = -1LL;
      v18 = -1;
      if ( (unsigned int)v16 > *(unsigned __int8 *)(a3 + 1061) )
        break;
      do
      {
        v19 = *(_QWORD *)(a3 + 8 * v16 + 24);
        if ( v19 && v19 < v17 && (v19 & 0xFFFFFFFFFFFFFF80uLL) <= (*a4 & 0xFFFFFFFFFFFFFF80uLL) && (v19 & 1) == 0 )
        {
          v17 = *(_QWORD *)(a3 + 8 * v16 + 24);
          v18 = v16;
        }
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 <= *(unsigned __int8 *)(a3 + 1061) );
      if ( v18 == -1 )
        break;
      v20 = v18;
      if ( v17 == *(_QWORD *)(a3 + 8LL * v18 + 24) )
      {
        if ( (unsigned __int8)KiGetNextIdleSearchTargetInGeneration(
                                a3,
                                a1,
                                *(_QWORD *)(a3 + 8LL * v18 + 536),
                                (unsigned int)&v35,
                                (__int64)v34,
                                (__int64)&v33) )
        {
          v29 = v33;
          v30 = v34[0];
          KiSearchForNewThreadsOnTarget((struct _KPRCB *)a1, v34[0], v33);
          v31 = (volatile signed __int64 *)(a3 + 16LL * v35 + 1064);
          if ( v30 )
          {
            v32 = *(_QWORD *)(v30 + 200);
          }
          else
          {
            v32 = *(_QWORD *)(v29 + 712);
            ++v31;
          }
          _InterlockedAnd64(v31, ~v32);
          goto LABEL_8;
        }
        _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v20 + 24), v17 | 1, v17);
      }
    }
    v35 = -1;
    if ( !(unsigned __int8)KiLeaveCooperativeIdleSearch(a1, a3, a4, 0LL) )
      continue;
    return 0LL;
  }
}

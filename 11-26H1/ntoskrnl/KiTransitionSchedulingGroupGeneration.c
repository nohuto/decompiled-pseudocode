/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x140335C00
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwTraceReadyQueueInsertion @ 0x1402260FC (EtwTraceReadyQueueInsertion.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402313D0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140231EC0 (KiCheckForMaxOverQuotaScb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiAddThreadToPrcbQueue @ 0x1403096A0 (KiAddThreadToPrcbQueue.c)
 *     ?KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z @ 0x140337CEC (-KiInsertNonMaxOverQuotaScb@@YAXPEAU_KSCB@@PEAU_KPRCB@@E@Z.c)
 *     KiQueryEffectivePriorityThread @ 0x140380E90 (KiQueryEffectivePriorityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall KiTransitionSchedulingGroupGeneration(
        struct _KPRCB *a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned __int64 GenerationTarget; // rdx
  unsigned int v6; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  bool v10; // zf
  unsigned __int8 CurrentIrql; // di
  LARGE_INTEGER InterruptTimePrecise; // rdx
  unsigned int v13; // r15d
  unsigned __int64 v14; // r14
  _KTHREAD *NextThread; // r8
  char v16; // r15
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 result; // rax
  struct _LIST_ENTRY *v19; // r14
  char LowPart; // al
  __int64 p_Blink; // rdi
  int Flink_high; // r10d
  __int16 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int16 v30; // cx
  unsigned __int16 v31; // ax
  volatile signed __int32 *v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // ebx
  __int16 v35; // cx
  _KSCHEDULING_GROUP *volatile v36; // rdx
  char *v37; // rcx
  unsigned __int8 v38; // al
  struct _LIST_ENTRY *v39; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v41; // rax
  _KPRIORITY_STATE *PriorityState; // rdi
  unsigned __int8 AllFields; // bl
  char v44; // cl
  unsigned __int8 v45; // cl
  volatile signed __int32 *SchedulerAssist; // rdx
  int v47; // ecx
  unsigned int v48; // ecx
  __int64 Number; // rcx
  unsigned int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // r9
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // r11
  signed __int64 v55; // rbx
  __int128 v56; // rt0
  unsigned __int8 v57; // tt
  _QWORD *v58; // rcx
  _QWORD *v59; // rdi
  unsigned int v60; // eax
  _QWORD *v61; // r15
  _QWORD *v62; // r12
  __int64 v63; // r13
  __int64 v64; // rdx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // r10
  char v68; // al
  ULONG_PTR v69; // rcx
  char v70; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v71; // [rsp+32h] [rbp-CEh] BYREF
  char v72; // [rsp+34h] [rbp-CCh]
  unsigned int v73; // [rsp+38h] [rbp-C8h] BYREF
  int v74; // [rsp+3Ch] [rbp-C4h] BYREF
  _KTHREAD *v75; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-B8h] BYREF
  struct _LIST_ENTRY *v77; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v78; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+68h] [rbp-98h]
  struct _LIST_ENTRY *Flink; // [rsp+70h] [rbp-90h]
  __int64 v82; // [rsp+78h] [rbp-88h]
  __int128 v83; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER *v85; // [rsp+B0h] [rbp-50h]
  __int64 v86; // [rsp+B8h] [rbp-48h]
  int *v87; // [rsp+C0h] [rbp-40h]
  __int64 v88; // [rsp+C8h] [rbp-38h]
  struct _LIST_ENTRY **v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h]
  _KTHREAD **v91; // [rsp+E0h] [rbp-20h]
  __int64 v92; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v93; // [rsp+F0h] [rbp-10h]
  __int64 v94; // [rsp+F8h] [rbp-8h]
  int *v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+108h] [rbp+8h]
  char *v97; // [rsp+110h] [rbp+10h]
  __int64 v98; // [rsp+118h] [rbp+18h]
  __int16 *v99; // [rsp+120h] [rbp+20h]
  __int64 v100; // [rsp+128h] [rbp+28h]

  GenerationTarget = a1->GenerationTarget;
  v6 = 1;
  v80 = 1LL;
  v72 = a4;
  v82 = a5;
  if ( a3 > GenerationTarget )
  {
    v8 = (a3 + (unsigned int)KiGenerationTicks - GenerationTarget - 1) / (unsigned int)KiGenerationTicks;
    GenerationTarget = (a3 + (unsigned int)KiGenerationTicks - GenerationTarget - 1) % (unsigned int)KiGenerationTicks;
    v6 = v8 + 1;
    v80 = (unsigned int)(v8 + 1);
  }
  v9 = (__int64)KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink * KeMaximumIncrement;
  v10 = KiClockTimerPerCpuTickScheduling == 0;
  Flink = KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink;
  a1->GenerationTarget = (unsigned __int64)KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink;
  if ( !v10 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(GenerationTarget) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, GenerationTarget);
    }
    if ( KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    else
      InterruptTimePrecise.QuadPart = 0LL;
    v13 = KeMaximumIncrement;
    if ( !KiClockTimerReducePreciseTimeQueries )
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v14 = v9;
    if ( v9 <= 0 )
      v14 = InterruptTimePrecise.QuadPart - v9;
    if ( (unsigned int)dword_140E06F90 > 5 )
    {
      v78 = InterruptTimePrecise;
      v85 = &v78;
      v86 = 8LL;
      v87 = &v74;
      v74 = 4;
      v89 = &v77;
      v88 = 4LL;
      v77 = (struct _LIST_ENTRY *)v9;
      v75 = (_KTHREAD *)(v14 - InterruptTimePrecise.QuadPart);
      v90 = 8LL;
      v91 = &v75;
      v93 = &v76;
      v95 = (int *)&v73;
      v97 = &v70;
      v99 = &v71;
      v92 = 8LL;
      v76 = v14;
      v94 = 8LL;
      v73 = v13;
      v96 = 4LL;
      v70 = 1;
      v98 = 1LL;
      LOBYTE(v71) = 0;
      v100 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06F90,
        (unsigned __int8 *)word_140049432,
        0LL,
        0LL,
        0xAu,
        &v84);
    }
    a1->ClockTimerState.ClockTimerEntries[4].TypeFlags |= 3u;
    a1->ClockTimerState.ClockTimerEntries[4].DueTime = v14;
    a1->ClockTimerState.ClockTimerEntries[4].TolerableDelay = v13;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( a1->ScbQueue.Root )
  {
    a1->ScbQueue.Root = 0LL;
    a1->ScbQueue.Min = 0LL;
    if ( !a1->ReadyThreadCount )
      _InterlockedAnd64(
        (volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues,
        ~a1->GroupSetMember);
  }
  NextThread = a1->NextThread;
  v16 = 0;
  v70 = 0;
  v75 = NextThread;
  if ( !NextThread )
  {
    NextThread = a1->CurrentThread;
    v75 = NextThread;
  }
  SchedulingGroup = NextThread->SchedulingGroup;
  if ( SchedulingGroup )
    v78.QuadPart = (LONGLONG)SchedulingGroup + a1->ScbOffset;
  else
    v78.QuadPart = 0LL;
  result = (__int64)&a1->ActiveScbList;
  v19 = a1->ActiveScbList.Flink;
  v77 = v19;
  if ( v19 != &a1->ActiveScbList )
  {
    LowPart = v6;
    PerformanceCounter.QuadPart = v6;
    while ( 1 )
    {
      p_Blink = (__int64)&v19[-6].Blink;
      Flink_high = HIDWORD(v19[3].Flink);
      v23 = (__int64)v19[2].Blink & 2;
      v74 = Flink_high;
      v71 = v23;
      if ( v6 < 0x40 )
        v24 = *(_QWORD *)(p_Blink + 48) << LowPart;
      else
        v24 = 0LL;
      v25 = v24 | 1;
      if ( (*(_BYTE *)(p_Blink + 128) & 4) == 0 )
        v25 = v24;
      *(_QWORD *)(p_Blink + 48) = v25;
      v26 = *(_QWORD *)(p_Blink + 40);
      v27 = p_Blink - a1->ScbOffset;
      v28 = *(_QWORD *)p_Blink;
      *(_QWORD *)(p_Blink + 40) = *(_QWORD *)p_Blink;
      v29 = v26 - v28;
      _InterlockedAdd64((volatile signed __int64 *)(v27 + 48), v29);
      if ( *(__int64 *)(v27 + 32) > 0
        && (__int64)(v29 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 32), v29)) <= 0 )
      {
        v69 = _InterlockedExchange64((volatile __int64 *)(v27 + 80), 0LL);
        if ( v69 )
        {
          KiInsertQueueDpc(v69, 0LL, 0LL, 0LL, 0);
          Flink_high = v74;
        }
      }
      if ( (*(_BYTE *)(p_Blink + 128) & 0x10) == 0 )
      {
        v52 = *(_QWORD *)(v27 + 48);
        v53 = *(_QWORD *)(v27 + 56);
        v54 = (unsigned __int64)Flink;
        *((_QWORD *)&v83 + 1) = v53;
        *(_QWORD *)&v83 = v52;
        do
        {
          if ( v53 >= v54 )
            break;
          v55 = *(_QWORD *)(v27 + 40);
          if ( v52 + v55 * (unsigned int)((v53 + v54 - 1) / v53) <= v55 )
            v55 = v52 + v55 * (unsigned int)((v53 + v54 - 1) / v53);
          *(_QWORD *)&v56 = v52;
          *((_QWORD *)&v56 + 1) = v53;
          v57 = _InterlockedCompareExchange128((volatile signed __int64 *)(v27 + 48), v54, v55, (signed __int64 *)&v56);
          v52 = v56;
          v83 = v56;
          v53 = *((_QWORD *)&v56 + 1);
        }
        while ( !v57 );
      }
      if ( *(_QWORD *)(p_Blink + 8) != *(_QWORD *)(p_Blink + 16) )
        *(_QWORD *)(p_Blink + 32) = (unsigned int)KiGroupSchedulingNumerator * (*(_QWORD *)p_Blink >> 10)
                                  + ((*(_QWORD *)(p_Blink + 32)
                                    * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
      v30 = *(_WORD *)(p_Blink + 128);
      if ( *(_QWORD *)p_Blink )
      {
        v30 &= 0xF3FFu;
      }
      else if ( (v30 & 0xC00u) < 0x800 )
      {
        v30 ^= (v30 ^ (v30 + 1024)) & 0xC00;
      }
      *(_QWORD *)p_Blink = 0LL;
      *(_WORD *)(p_Blink + 128) = v30 & 0xFFF8;
      *(_QWORD *)(p_Blink + 40) = 0LL;
      *(_DWORD *)(p_Blink + 140) = 0;
      *(_QWORD *)(p_Blink + 24) = 0LL;
      *(_OWORD *)(p_Blink + 104) = 0LL;
      *(_QWORD *)(p_Blink + 120) = 0LL;
      *(_QWORD *)(p_Blink + 424) = 0LL;
      *(_QWORD *)(p_Blink + 432) = 0LL;
      v31 = *(_WORD *)(p_Blink + 128);
      if ( (v31 & 8) != 0 )
      {
        *(_DWORD *)(p_Blink + 140) += (v31 >> 3) & 1;
        *(_WORD *)(p_Blink + 128) = v31 | 4;
      }
      v32 = *(volatile signed __int32 **)(p_Blink + 144);
      if ( v32 )
      {
        v33 = *(_DWORD *)(p_Blink + 140) - Flink_high;
        if ( v33 )
          _InterlockedAdd(v32, v33);
      }
      if ( !*(_DWORD *)(p_Blink + 140) || v72 )
      {
        v34 = *(unsigned __int16 *)(p_Blink + 136);
        v73 = 0;
        if ( v34 )
        {
          do
          {
            _BitScanReverse(&v60, v34);
            v61 = (_QWORD *)(p_Blink + 16 * (v60 + 10LL));
            LODWORD(v76) = v34 ^ (1 << v60);
            v62 = (_QWORD *)*v61;
            do
            {
              *((_DWORD *)v62 - 25) &= ~0x2000u;
              v63 = (__int64)(v62 - 27);
              v10 = (*(_DWORD *)(v62 - 12) & 0x400000) == 0;
              v62[91] = 0LL;
              if ( !v10 )
                _InterlockedAnd(*(volatile signed __int32 **)(v63 + 968), 0xFFFBFFFF);
              v62 = (_QWORD *)*v62;
              if ( !KiIsThreadConstrainedBySchedulingGroup(v63) || KiCheckForMaxOverQuotaScb(p_Blink) )
                goto LABEL_110;
              do
              {
                v65 += *(_DWORD *)(v64 + 140);
                if ( v67 )
                {
                  v66 += **(_DWORD **)(v64 + 144);
                }
                else if ( v65 )
                {
                  break;
                }
                v64 = *(_QWORD *)(v64 + 440);
              }
              while ( v64 );
              if ( v66 )
                v68 = 1;
              else
LABEL_110:
                v68 = 0;
              KiAddThreadToPrcbQueue((__int64)a1, v63, (unsigned int)*(char *)(v63 + 195), 0, v68, (int *)&v73);
              if ( (WORD2(xmmword_140FC0C10) & 0x800) != 0 )
                EtwTraceReadyQueueInsertion(v63, a1->Number, v73, 0LL);
            }
            while ( v62 != v61 );
            v34 = v76;
            v61[1] = v61;
            *v61 = v61;
          }
          while ( v34 );
          v19 = v77;
          v23 = v71;
          v6 = v80;
        }
        *(_WORD *)(p_Blink + 136) = 0;
      }
      else if ( *(_WORD *)(p_Blink + 136) )
      {
        v10 = (*(_BYTE *)(p_Blink + 128) & 2) == 0;
        v70 = 1;
        if ( v10 )
          KiInsertNonMaxOverQuotaScb((struct _KSCB *)&v19[-6].Blink, a1, 0);
      }
      v35 = *(_WORD *)(p_Blink + 128);
      if ( (v35 & 0xC00u) >= 0x800
        && (v35 & 2) == 0
        && !*(_QWORD *)(p_Blink + 32)
        && !*(_QWORD *)(p_Blink + 48)
        && (v35 & 1) == 0
        && !*(_QWORD *)(p_Blink + 416) )
      {
        v36 = a1->CurrentThread->SchedulingGroup;
        if ( !v36 )
          goto LABEL_56;
        v37 = (char *)v36 + a1->ScbOffset;
        if ( !v37 )
          goto LABEL_56;
        if ( v37 != (char *)p_Blink )
        {
          if ( *((_QWORD *)v37 + 56) != *(_QWORD *)(p_Blink + 448) )
            goto LABEL_56;
          v38 = *(_BYTE *)(p_Blink + 130);
          if ( (unsigned __int8)v37[130] <= v38 )
            goto LABEL_56;
          do
            v37 = (char *)*((_QWORD *)v37 + 55);
          while ( (unsigned __int8)v37[130] > v38 );
          if ( v37 != (char *)p_Blink )
          {
LABEL_56:
            v39 = *(struct _LIST_ENTRY **)(p_Blink + 88);
            Blink = v19->Blink;
            v19 = Blink;
            if ( v39->Blink != (struct _LIST_ENTRY *)(p_Blink + 88)
              || Blink->Flink != (struct _LIST_ENTRY *)(p_Blink + 88) )
            {
              __fastfail(3u);
            }
            Blink->Flink = v39;
            v39->Blink = Blink;
            *(_OWORD *)(p_Blink + 88) = 0LL;
            *(_WORD *)(p_Blink + 128) &= ~0x200u;
            v41 = *(_QWORD *)(p_Blink + 440);
            if ( v41 )
              --*(_QWORD *)(v41 + 416);
          }
        }
      }
      if ( (WORD2(xmmword_140FC0C10) & 0x4000) != 0
        && (v74 != *(_DWORD *)(p_Blink + 140) || (v23 != 0) != ((*(_WORD *)(p_Blink + 128) >> 1) & 1)) )
      {
        v58 = (_QWORD *)v82;
        *(_WORD *)(p_Blink + 128) |= 0x100u;
        v59 = (_QWORD *)(p_Blink + 456);
        *v59 = *v58;
        *v58 = v59;
      }
      v19 = v19->Flink;
      result = (__int64)&a1->ActiveScbList;
      v77 = v19;
      if ( v19 == &a1->ActiveScbList )
        break;
      LowPart = PerformanceCounter.LowPart;
    }
    NextThread = v75;
    v16 = v70;
  }
  if ( v78.QuadPart )
  {
    PriorityState = a1->PriorityState;
    AllFields = PriorityState->AllFields;
    if ( (NextThread->Header.Size & 4) != 0 )
    {
      result = KiQueryEffectivePriorityThread(NextThread, a1);
      NextThread = v75;
      v44 = result ^ AllFields;
    }
    else
    {
      v44 = NextThread->Priority ^ AllFields;
    }
    v45 = AllFields ^ v44 & 0x7F;
    PriorityState->AllFields = v45;
    SchedulerAssist = (volatile signed __int32 *)a1->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v47 = v45 & 0x7F;
      if ( NextThread == a1->IdleThread )
        v47 = KiVpThreadSystemWorkPriority;
      result = (unsigned __int8)BYTE1(*SchedulerAssist);
      if ( v47 != (_DWORD)result )
      {
        if ( v47 <= (int)result )
        {
          result = (unsigned int)((_DWORD)result << 8);
          v48 = (v47 << 8) - result;
        }
        else
        {
          v48 = (v47 - (_DWORD)result) << 8;
        }
        _InterlockedAdd(SchedulerAssist, v48);
      }
    }
  }
  if ( !v16 && a1->GroupSchedulingOverQuota )
  {
    Number = a1->Number;
    a1->GroupSchedulingOverQuota = 0;
    v50 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + Number);
    result = KiGroupSchedulingOverQuotaMask[1];
    v51 = v50 >> 6;
    if ( KiGroupSchedulingOverQuotaMask[1] > (unsigned int)v51 )
      _InterlockedAnd64(&qword_140E0B068[v51], ~(1LL << v50));
  }
  return result;
}

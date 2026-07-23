/*
 * XREFs of KiBeginThreadAccountingPeriod @ 0x140209DF0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x14020A138 (KiInsertDeferredPreemptionApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiBeginThreadAccountingPeriod(__int64 a1, struct _KTHREAD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // si
  UCHAR Size; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  unsigned __int16 *v12; // r8
  __int64 v13; // rdx
  _BYTE *SchedulerAssist; // rax
  _QWORD *SparePtr; // r8
  __int64 v16; // r11
  signed __int32 *v17; // r8
  __int64 v18; // r9
  unsigned int *v19; // r10
  __int64 v20; // rbp
  _QWORD *v21; // rsi
  int v22; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v24; // rcx
  _QWORD *v25; // r11
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int *v28; // r10
  _QWORD *v29; // r11
  __int64 v30; // rbx
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  signed __int32 *v33; // r8
  signed __int32 v34; // eax
  signed __int32 v35; // ett

  CurrentThread = a2;
  if ( a2 )
  {
    v6 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
  }
  Size = CurrentThread->Header.Size;
  if ( (Size & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 35264);
    v9 = *(_QWORD *)(a1 + 35272);
    if ( v8 && v9 )
    {
      v10 = *(_DWORD *)(v9 + 148);
      if ( v10 == -1 )
      {
        v10 = *(_DWORD *)(v9 + 160);
      }
      else if ( v10 >= *(_DWORD *)(v8 + 536) )
      {
        v10 = *(_DWORD *)(v8 + 536);
      }
    }
    else
    {
      v10 = 100;
    }
    v11 = 0;
    v12 = (unsigned __int16 *)(a1 + 35468);
    do
    {
      if ( v10 <= *v12 )
        break;
      ++v11;
      ++v12;
    }
    while ( v11 < 3 );
    v13 = (*(_BYTE *)(a1 + 35352) != 0 ? 8 : 0) + 16 * (v11 + 2168LL);
    *(_QWORD *)(v13 + a1) += a3;
  }
  if ( (Size & 0x40) != 0 )
  {
    SchedulerAssist = CurrentThread->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[64] = 1;
  }
  *(_BYTE *)(a1 + 32) = 0;
  if ( v6 )
  {
    if ( (Size & 0xB6) == 0 )
    {
      v33 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      if ( v33 )
      {
        _m_prefetchw(v33);
        v34 = *v33;
        do
        {
          v35 = v34;
          v34 = _InterlockedCompareExchange(v33, v34 & 0xFFDFFFFF, v34);
        }
        while ( v35 != v34 );
        if ( (v34 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick();
      }
      _enable();
      goto LABEL_23;
    }
    SparePtr = CurrentThread->WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      v16 = SparePtr[4];
      if ( v16 )
      {
        v18 = 1LL;
        if ( KiHwCountersCount )
        {
          v19 = (unsigned int *)&KiHwCounters;
          v20 = (unsigned int)KiHwCountersCount;
          v21 = SparePtr + 6;
          do
          {
            if ( (v16 & v18) != 0 )
              *v21 = __readpmc(*v19);
            v18 *= 2LL;
            v21 += 3;
            ++v19;
            --v20;
          }
          while ( v20 );
        }
      }
      if ( (SparePtr[2] & 1) != 0 )
      {
        ++*((_DWORD *)SparePtr + 5);
        *SparePtr |= 1LL << CurrentThread->WaitReason;
      }
    }
    v17 = (signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( v17 )
    {
      _m_prefetchw(v17);
      v31 = *v17;
      do
      {
        v32 = v31;
        v31 = _InterlockedCompareExchange(v17, v31 & 0xFFDFFFFF, v31);
      }
      while ( v32 != v31 );
      if ( (v31 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick();
    }
    _enable();
    if ( (CurrentThread->Header.Size & 4) != 0 )
    {
      v22 = *(&CurrentThread->MiscFlags + 1);
      if ( (v22 & 0x800) == 0 )
      {
        if ( (v22 & 0x400) != 0 )
          goto LABEL_23;
        if ( CurrentThread->Priority >= 16 )
          goto LABEL_23;
        if ( (v22 & 0x200) != 0 )
          goto LABEL_23;
        SchedulingGroup = CurrentThread->SchedulingGroup;
        if ( !SchedulingGroup )
          goto LABEL_23;
        v24 = (char *)SchedulingGroup + *(unsigned int *)(a1 + 216);
        if ( !v24 )
          goto LABEL_23;
        while ( (v24[128] & 2) == 0 )
        {
          v24 = (char *)*((_QWORD *)v24 + 55);
          if ( !v24 )
            goto LABEL_23;
        }
      }
      LOBYTE(v17) = 1;
      KiInsertDeferredPreemptionApc(a1, CurrentThread, v17);
    }
LABEL_23:
    if ( KiHgsPlusEnabled )
    {
      CurrentThread->WpsFeedback->FeedbackStartTime = __rdtsc();
      CurrentThread->WpsFeedback->FeedbackCycles = 0LL;
    }
    return;
  }
  if ( (Size & 2) != 0 )
  {
    v25 = CurrentThread->WaitBlock[0].SparePtr;
    v26 = v25[4];
    if ( v26 )
    {
      v27 = 1LL;
      if ( KiHwCountersCount )
      {
        v28 = (unsigned int *)&KiHwCounters;
        v29 = v25 + 6;
        v30 = (unsigned int)KiHwCountersCount;
        do
        {
          if ( (v26 & v27) != 0 )
            *v29 = __readpmc(*v28);
          v27 *= 2LL;
          v29 += 3;
          ++v28;
          --v30;
        }
        while ( v30 );
      }
    }
  }
}

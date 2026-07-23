/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x14026FD50
 * Callers:
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14026FCF0 (-KiAbpAcquireEntryLockRaw@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ?KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z @ 0x140270714 (-KiAbPostReleaseEx@LegacyAutoBoost@@YAXPEAX0@Z.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall ExpReleaseFastResourceExclusive(signed __int64 *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 *v5; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  volatile signed __int8 *v14; // rdi
  signed __int64 *v15; // rcx
  unsigned __int8 CurrentIrql; // bp
  int v17; // r14d
  struct _KPRCB *v18; // rcx
  unsigned __int32 *v19; // r8
  struct AutoBoost::_AB_THREAD_ENTRY *v20; // rdx
  AutoBoost *v21; // rcx
  char v22; // r8
  __int64 v23; // rbx
  struct _KPRCB *v24; // rcx
  unsigned __int32 *v25; // r8
  unsigned __int32 v26; // eax
  unsigned __int32 v27; // ett
  unsigned __int32 v28; // eax
  unsigned __int32 v29; // ett
  unsigned __int32 v30; // eax
  __int64 v31; // rdx
  unsigned __int32 v32; // ett

  v5 = BugCheckParameter2 + 8;
  if ( (*((_DWORD *)v5 + 8))-- == 1 )
  {
    v7 = *((unsigned __int8 *)BugCheckParameter2 + 100);
    _disable();
    v8 = *v5;
    v9 = (__int64 *)v5[1];
    if ( *(signed __int64 **)(*v5 + 8) != v5 || (signed __int64 *)*v9 != v5 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v5 = 0LL;
    v5[1] = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v8 = v26;
        LODWORD(v8) = v26 & 0xFFDFFFFF;
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8, SchedulerAssist, a4);
    }
    _enable();
    BugCheckParameter2[10] = 0LL;
    *((_BYTE *)BugCheckParameter2 + 100) = 0;
    _m_prefetchw(BugCheckParameter2);
    v12 = *BugCheckParameter2;
    do
    {
      if ( (v12 & 2) != 0 )
      {
        ExpReleaseFastResourceExclusiveSlow((ULONG_PTR)BugCheckParameter2);
        return;
      }
      v13 = v12;
      v12 = _InterlockedCompareExchange64(BugCheckParameter2, 0LL, v12);
    }
    while ( v13 != v12 );
    if ( (_BYTE)v7 )
    {
      v14 = (volatile signed __int8 *)v7;
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        _disable();
        if ( (v7 & 3) == 3 )
        {
          v8 = (v7 >> 2) & 3;
          v14 = (volatile signed __int8 *)(*((_QWORD *)KeGetCurrentThread()->AutoBoostThreadState + v8)
                                         + 48 * (v7 >> 4)
                                         + 16);
          v15 = (v14[32] & 2) != 0 ? *(signed __int64 **)(*(_QWORD *)v14 + 24LL) : *(signed __int64 **)v14;
          if ( v15 != BugCheckParameter2 )
            KeBugCheckEx(0x162u, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v14, 0LL);
        }
        *((_BYTE *)v14 + 33) = v14[33] & 0xFC | 1;
        CurrentIrql = -1;
        v17 = 1;
        if ( (v14[32] & 2) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v8) = 2;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
          }
          v18 = KeGetCurrentPrcb();
          v19 = (unsigned __int32 *)v18->SchedulerAssist;
          if ( v19 )
          {
            _m_prefetchw(v19);
            v28 = *v19;
            do
            {
              v8 = v28;
              LODWORD(v8) = v28 & 0xFFDFFFFF;
              v29 = v28;
              v28 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v28 & 0xFFDFFFFF, v28);
            }
            while ( v29 != v28 );
            if ( (v28 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v18, v8, v19, a4);
          }
          _enable();
          v17 = 0;
          AutoBoost::KiAbpAcquireEntryLockRaw((AutoBoost *)v14, (struct AutoBoost::_AB_THREAD_ENTRY *)v8);
          AutoBoost::KiAbpEntryUnlink(v21, v20);
          _InterlockedAnd8(v14 + 35, 0xFEu);
        }
        v22 = *((_BYTE *)v14 + 36);
        v23 = *((_QWORD *)v14 + 5);
        *((_DWORD *)v14 + 10) = 0;
        *(_QWORD *)v14 = 0LL;
        *((_WORD *)v14 + 16) = 0;
        *(_WORD *)&v14[-48 * (v22 & 0x7F) - 8] |= 1 << (v22 & 0xF);
        if ( v17 )
        {
          v24 = KeGetCurrentPrcb();
          v25 = (unsigned __int32 *)v24->SchedulerAssist;
          if ( v25 )
          {
            _m_prefetchw(v25);
            v30 = *v25;
            do
            {
              v31 = v30;
              LODWORD(v31) = v30 & 0xFFDFFFFF;
              v32 = v30;
              v30 = _InterlockedCompareExchange((volatile signed __int32 *)v25, v30 & 0xFFDFFFFF, v30);
            }
            while ( v32 != v30 );
            if ( (v30 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(v24, v31, v25, a4);
          }
          _enable();
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        if ( (_DWORD)v23 )
          AutoBoost::KiAbpUnboostThread(*(_QWORD *)&v14[-48 * (v14[36] & 0x7F) - 16], BugCheckParameter2, v23, 0LL);
      }
      else
      {
        LegacyAutoBoost::KiAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (void *)v7, SchedulerAssist);
      }
    }
  }
}

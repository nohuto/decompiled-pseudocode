/*
 * XREFs of PspUnlockProcessListShared @ 0x14027CC00
 * Callers:
 *     PsGetPreviousProcess @ 0x1409B92F8 (PsGetPreviousProcess.c)
 *     PsChangeQuantumTable @ 0x140AB8200 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x140ACA600 (PsGetNextProcessEx.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall PspUnlockProcessListShared(__int64 a1)
{
  int v2; // edi
  unsigned __int64 v3; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r10
  int v6; // r12d
  ULONG_PTR v7; // rdx
  unsigned __int64 *AutoBoostThreadState; // rax
  unsigned __int64 v9; // r9
  unsigned int v10; // r11d
  unsigned __int64 v11; // rsi
  char v12; // al
  ULONG_PTR *v13; // rcx
  unsigned __int32 *v14; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v17; // al
  signed __int8 v18; // tt
  signed __int8 v19; // al
  signed __int8 v20; // tt
  __int64 v21; // rbx
  char v22; // al
  unsigned __int64 v23; // rsi
  struct _KPRCB *v24; // rcx
  __int64 v26; // r10
  unsigned int v27; // r8d
  LegacyAutoBoost *v28; // rcx
  unsigned __int32 v29; // eax
  unsigned __int32 v30; // ett
  unsigned __int32 v31; // eax
  unsigned __int32 v32; // ett
  unsigned __int32 v33; // eax
  unsigned __int32 v34; // ett

  v2 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v3 = 0LL;
    CurrentIrql = -1;
    _disable();
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
    v7 = 0LL;
    AutoBoostThreadState = (unsigned __int64 *)CurrentThread->AutoBoostThreadState;
    v9 = *AutoBoostThreadState;
    v10 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
    while ( 1 )
    {
      if ( (unsigned int)v7 >= v10 )
      {
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL);
        goto LABEL_27;
      }
      v11 = v9 + 48LL * (unsigned int)v7 + 16;
      v12 = *(_BYTE *)(v11 + 33);
      if ( (v12 & 0x10) == 0 )
      {
        v14 = (unsigned __int32 *)*(unsigned __int8 *)(v11 + 32);
        v13 = *(ULONG_PTR **)v11;
        LOBYTE(v14) = (unsigned __int8)v14 & 2;
        if ( (_BYTE)v14 )
          v13 = (ULONG_PTR *)v13[3];
        if ( v13 == &PspActiveProcessLock && (v12 & 2) != 0 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    v3 = v9 + 48LL * (unsigned int)v7 + 16;
    *(_BYTE *)(v11 + 33) = v12 & 0xFC | 1;
    if ( (_BYTE)v14 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v29 = *SchedulerAssist;
        do
        {
          v7 = v29;
          LODWORD(v7) = v29 & 0xFFDFFFFF;
          v30 = v29;
          v29 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v29 & 0xFFDFFFFF, v29);
        }
        while ( v30 != v29 );
        if ( (v29 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v7, SchedulerAssist, v9);
      }
      _enable();
      v6 = 0;
      _m_prefetchw((const void *)(v11 + 35));
      v17 = *(_BYTE *)(v11 + 35);
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 35), v17 | 1, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 1) != 0 )
      {
        do
        {
          while ( (*(_BYTE *)(v11 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((const void *)(v11 + 35));
          v19 = *(_BYTE *)(v11 + 35);
          do
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange8((volatile signed __int8 *)(v11 + 35), v19 | 1, v19);
          }
          while ( v20 != v19 );
        }
        while ( (v19 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v11, (struct AutoBoost::_AB_THREAD_ENTRY *)v7);
      _InterlockedAnd8((volatile signed __int8 *)(v11 + 35), 0xFEu);
    }
    v7 = *(unsigned __int8 *)(v11 + 36);
    v21 = *(_QWORD *)(v11 + 40);
    v22 = *(_BYTE *)(v11 + 36);
    *(_DWORD *)(v11 + 40) = 0;
    *(_QWORD *)v11 = 0LL;
    LOBYTE(v7) = v7 & 0x7F;
    *(_WORD *)(v11 + 32) = 0;
    v23 = v11 - 48LL * (v22 & 0x7F);
    v24 = (struct _KPRCB *)*(unsigned __int16 *)(v23 - 8);
    LOWORD(v24) = (unsigned __int16)v24 | (1 << (v7 & 0xF));
    *(_WORD *)(v23 - 8) = (_WORD)v24;
    v2 = v21;
    if ( v6 )
    {
LABEL_27:
      v24 = KeGetCurrentPrcb();
      v14 = (unsigned __int32 *)v24->SchedulerAssist;
      if ( v14 )
      {
        _m_prefetchw(v14);
        v31 = *v14;
        do
        {
          v7 = v31;
          LODWORD(v7) = v31 & 0xFFDFFFFF;
          v32 = v31;
          v31 = _InterlockedCompareExchange((volatile signed __int32 *)v14, v31 & 0xFFDFFFFF, v31);
        }
        while ( v32 != v31 );
        if ( (v31 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v24, v7, v14, v9);
      }
      _enable();
      goto LABEL_34;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
LABEL_34:
    if ( v2 )
      AutoBoost::KiAbpUnboostThread(
        *(volatile signed __int32 **)(v3 - 48LL * (*(_BYTE *)(v3 + 36) & 0x7F) - 16),
        (__int64)&PspActiveProcessLock,
        v2,
        0LL);
  }
  else
  {
    v7 = (ULONG_PTR)KeGetCurrentThread();
    _disable();
    v26 = *(_QWORD *)(v7 + 1136);
    v27 = 0;
    v9 = (unsigned __int64)&PspActiveProcessLock & 0x7FFFFFFFFFFFFFFCLL;
    while ( v27 < *(unsigned __int8 *)(v26 + 12) )
    {
      v28 = (LegacyAutoBoost *)(v26 + 88LL * v27 + 16);
      if ( (*(_QWORD *)v28 & 0x7FFFFFFFFFFFFFFCLL) == v9 && *((_BYTE *)v28 + 10) && (*(_QWORD *)v28 & 1) == 0 )
      {
        *((_BYTE *)v28 + 10) = 0;
        if ( v28 )
        {
          LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
            v28,
            (struct _KLOCK_ENTRY *)v7,
            (struct _KTHREAD *)&PspActiveProcessLock,
            (void *)1,
            0LL);
          goto LABEL_36;
        }
        break;
      }
      ++v27;
    }
    if ( (*(_DWORD *)(v7 + 120) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, v7, (ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL);
    v24 = KeGetCurrentPrcb();
    v14 = (unsigned __int32 *)v24->SchedulerAssist;
    if ( v14 )
    {
      _m_prefetchw(v14);
      v33 = *v14;
      do
      {
        v7 = v33;
        LODWORD(v7) = v33 & 0xFFDFFFFF;
        v34 = v33;
        v33 = _InterlockedCompareExchange((volatile signed __int32 *)v14, v33 & 0xFFDFFFFF, v33);
      }
      while ( v34 != v33 );
      if ( (v33 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v24, v7, v14, v9);
    }
    _enable();
  }
LABEL_36:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    KiCheckForKernelApcDelivery(v24, v7, v14, v9);
}

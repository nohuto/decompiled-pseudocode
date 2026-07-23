/*
 * XREFs of ObpReleaseLookupContext @ 0x14027B380
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_KLOCK_ENTRY_BOOST_BITMAP@@@Z @ 0x140271700 (-KiAbEntryFreeAndEnableInterrupts@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@PEAU_KTHREAD@@PEAXKPEAT_.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_QWORD *__fastcall ObpReleaseLookupContext(__int64 a1)
{
  _QWORD *result; // rax
  ULONG_PTR v3; // r14
  signed __int64 v4; // rax
  signed __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r10
  int v10; // r12d
  unsigned __int64 v11; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v13; // r9
  unsigned int v14; // r11d
  __int64 *v15; // rdi
  char v16; // al
  __int64 v17; // rcx
  char v18; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v21; // al
  signed __int8 v22; // tt
  signed __int8 v23; // al
  signed __int8 v24; // tt
  char v25; // dl
  struct _KPRCB *v26; // rcx
  unsigned __int32 *v27; // r8
  struct _KTHREAD *v28; // rdx
  char *v29; // r10
  unsigned int v30; // r8d
  __int64 v31; // r9
  LegacyAutoBoost *v32; // rcx
  unsigned __int32 v33; // eax
  unsigned __int32 v34; // ett
  unsigned __int32 v35; // eax
  __int64 v36; // rdx
  unsigned __int32 v37; // ett
  struct _KPRCB *v38; // rcx
  unsigned __int32 *v39; // r8
  unsigned __int32 v40; // eax
  __int64 v41; // rdx
  unsigned __int32 v42; // ett

  result = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = (ULONG_PTR)(result + 37);
    _m_prefetchw(result + 37);
    v4 = result[37];
    v5 = v4 - 16;
    if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v5 = 0LL;
    if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v5, v4) )
      ExfReleasePushLock((_QWORD *)v3);
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      v6 = 0LL;
      v7 = 0LL;
      CurrentIrql = -1;
      _disable();
      CurrentThread = KeGetCurrentThread();
      v10 = 1;
      v11 = 0LL;
      AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
      v13 = *AutoBoostThreadState;
      v14 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
      while ( 1 )
      {
        if ( (unsigned int)v11 >= v14 )
        {
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, 0LL, 0LL);
          goto LABEL_30;
        }
        v15 = (__int64 *)(v13 + 48LL * (unsigned int)v11 + 16);
        v16 = *((_BYTE *)v15 + 33);
        if ( (v16 & 0x10) == 0 )
        {
          v17 = *v15;
          v18 = v15[4] & 2;
          if ( v18 )
            v17 = *(_QWORD *)(v17 + 24);
          if ( v17 == v3 && (v16 & 2) != 0 )
            break;
        }
        v11 = (unsigned int)(v11 + 1);
      }
      v6 = v13 + 48LL * (unsigned int)v11 + 16;
      *((_BYTE *)v15 + 33) = v16 & 0xFC | 1;
      if ( v18 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v11) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v33 = *SchedulerAssist;
          do
          {
            v11 = v33;
            LODWORD(v11) = v33 & 0xFFDFFFFF;
            v34 = v33;
            v33 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v33 & 0xFFDFFFFF, v33);
          }
          while ( v34 != v33 );
          if ( (v33 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11, SchedulerAssist, v13);
        }
        _enable();
        v10 = 0;
        _m_prefetchw((char *)v15 + 35);
        v21 = *((_BYTE *)v15 + 35);
        do
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange8((volatile signed __int8 *)v15 + 35, v21 | 1, v21);
        }
        while ( v22 != v21 );
        if ( (v21 & 1) != 0 )
        {
          do
          {
            while ( (*((_BYTE *)v15 + 35) & 1) != 0 )
              _mm_pause();
            _m_prefetchw((char *)v15 + 35);
            v23 = *((_BYTE *)v15 + 35);
            do
            {
              v24 = v23;
              v23 = _InterlockedCompareExchange8((volatile signed __int8 *)v15 + 35, v23 | 1, v23);
            }
            while ( v24 != v23 );
          }
          while ( (v23 & 1) != 0 );
        }
        AutoBoost::KiAbpEntryUnlink((AutoBoost *)v15, (struct AutoBoost::_AB_THREAD_ENTRY *)v11);
        _InterlockedAnd8((volatile signed __int8 *)v15 + 35, 0xFEu);
      }
      v25 = *((_BYTE *)v15 + 36);
      v7 = v15[5];
      *((_DWORD *)v15 + 10) = 0;
      *v15 = 0LL;
      *((_WORD *)v15 + 16) = 0;
      LOWORD(v15[-6 * (v25 & 0x7F) - 1]) |= 1 << (v25 & 0xF);
      if ( v10 )
      {
LABEL_30:
        v26 = KeGetCurrentPrcb();
        v27 = (unsigned __int32 *)v26->SchedulerAssist;
        if ( v27 )
        {
          _m_prefetchw(v27);
          v35 = *v27;
          do
          {
            v36 = v35;
            LODWORD(v36) = v35 & 0xFFDFFFFF;
            v37 = v35;
            v35 = _InterlockedCompareExchange((volatile signed __int32 *)v27, v35 & 0xFFDFFFFF, v35);
          }
          while ( v37 != v35 );
          if ( (v35 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v26, v36, v27, v13);
        }
        _enable();
        goto LABEL_37;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
LABEL_37:
      if ( (_DWORD)v7 )
        AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v6 - 48LL * (*(_BYTE *)(v6 + 36) & 0x7F) - 16), v3, v7, 0LL);
    }
    else
    {
      v28 = KeGetCurrentThread();
      _disable();
      v29 = (char *)v28->AutoBoostThreadState;
      v30 = 0;
      v31 = v3 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v30 < (unsigned __int8)v29[12] )
      {
        v32 = (LegacyAutoBoost *)&v29[88 * v30 + 16];
        if ( (*(_QWORD *)v32 & 0x7FFFFFFFFFFFFFFCLL) == v31 && *((_BYTE *)v32 + 10) && (*(_QWORD *)v32 & 1) == 0 )
        {
          *((_BYTE *)v32 + 10) = 0;
          if ( v32 )
          {
            LegacyAutoBoost::KiAbEntryFreeAndEnableInterrupts(
              v32,
              (struct _KLOCK_ENTRY *)v28,
              (struct _KTHREAD *)v3,
              (void *)1,
              0LL);
            goto LABEL_39;
          }
          break;
        }
        ++v30;
      }
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v3, 0LL, 0LL);
      v38 = KeGetCurrentPrcb();
      v39 = (unsigned __int32 *)v38->SchedulerAssist;
      if ( v39 )
      {
        _m_prefetchw(v39);
        v40 = *v39;
        do
        {
          v41 = v40;
          LODWORD(v41) = v40 & 0xFFDFFFFF;
          v42 = v40;
          v40 = _InterlockedCompareExchange((volatile signed __int32 *)v39, v40 & 0xFFDFFFFF, v40);
        }
        while ( v42 != v40 );
        if ( (v40 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v38, v41, v39, v31);
      }
      _enable();
    }
LABEL_39:
    if ( *(_BYTE *)(a1 + 22) )
    {
      ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
      *(_BYTE *)(a1 + 22) = 0;
    }
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 21) = 0;
    return (_QWORD *)KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return result;
}

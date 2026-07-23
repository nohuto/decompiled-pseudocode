/*
 * XREFs of ExpAcquireFastResourceSharedSlow @ 0x1402763B0
 * Callers:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14025FA20 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406D1B40 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbEncodeLockHandle @ 0x14025FF70 (KeAbEncodeLockHandle.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExpWaitForFastResource @ 0x140275550 (ExpWaitForFastResource.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ?KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z @ 0x1404FE3F0 (-KiAbpMarkCrossThreadReleasable@AutoBoost@@YAXPEAX0@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 *     ?KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z @ 0x14052C0D8 (-KiAbMarkCrossThreadReleasable@LegacyAutoBoost@@YAXPEAX0@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAcquireFastResourceSharedSlow(
        struct _KTHREAD *a1,
        unsigned __int64 i,
        unsigned __int32 *SchedulerAssist,
        __int64 a4,
        char a5)
{
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v6; // di
  char v7; // r10
  unsigned __int32 *v8; // r14
  unsigned __int64 v9; // r13
  char v11; // r11
  __int64 v12; // r12
  unsigned __int64 *p_ThreadLock; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v15; // di
  struct _KPRCB *v16; // rcx
  unsigned __int32 *v17; // r8
  signed __int64 v18; // rax
  char v19; // r8
  unsigned __int64 v20; // rcx
  signed __int64 v21; // rcx
  signed __int64 v22; // rtt
  struct _LIST_ENTRY *Flink; // rax
  __int64 v24; // r9
  char v25; // r15
  int v26; // edi
  int v27; // esi
  int v28; // r15d
  unsigned __int64 v29; // rax
  char v30; // cl
  struct _KPRCB **v31; // rax
  struct _KPRCB *v32; // rcx
  char v33; // r13
  unsigned __int8 v34; // si
  char v35; // r15
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int32 v37; // eax
  unsigned __int32 v38; // ett
  unsigned __int32 v39; // eax
  __int64 v40; // rdx
  unsigned __int32 v41; // ett
  char v42; // r15
  int v43; // esi
  int v44; // edi
  int v45; // r15d
  unsigned __int64 v46; // rcx
  char v47; // al
  unsigned __int64 *v48; // rax
  unsigned __int64 *v49; // rax
  KSPIN_LOCK *v50; // r12
  unsigned __int64 *v51; // rax
  __int64 v52; // rcx
  unsigned __int32 *v53; // r8
  unsigned __int32 v55; // eax
  __int64 v56; // rdx
  unsigned __int32 v57; // ett
  unsigned __int32 v58; // eax
  __int64 v59; // rdx
  unsigned __int32 v60; // ett
  unsigned __int32 v61; // eax
  __int64 v62; // rdx
  unsigned __int32 v63; // ett
  unsigned __int32 v64; // eax
  __int64 v65; // rdx
  unsigned __int32 v66; // ett
  unsigned __int64 *v67; // rax
  __int64 v68; // rdx
  char v69; // [rsp+20h] [rbp-51h]
  unsigned __int8 v70; // [rsp+28h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-41h] BYREF
  __int128 v72; // [rsp+50h] [rbp-21h] BYREF
  __int128 v73; // [rsp+60h] [rbp-11h]
  __int128 v74; // [rsp+70h] [rbp-1h] BYREF
  __int128 v75; // [rsp+80h] [rbp+Fh]
  char v76; // [rsp+D0h] [rbp+5Fh]
  unsigned __int64 Object; // [rsp+E8h] [rbp+77h]

  Object = a4;
  CurrentIrql = 0;
  v6 = 0;
  v70 = 0;
  v7 = 0;
  v76 = 0;
  v8 = SchedulerAssist;
  v9 = i;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  _disable();
  v11 = 1;
  v12 = 0LL;
  v69 = 1;
  if ( (*(_QWORD *)&a1->Header.Lock & 1) != 0 && *(_QWORD *)&a1->CurrentRunTime == a4 )
  {
    p_ThreadLock = &a1->ThreadLock;
  }
  else
  {
    SchedulerAssist = (unsigned __int32 *)(a4 + 1720);
    p_ThreadLock = 0LL;
    i = *(_QWORD *)(a4 + 1720);
    a4 = 0LL;
    while ( (unsigned __int32 *)i != SchedulerAssist )
    {
      if ( (*(_BYTE *)(i + 37) & 2) == 0 && *(struct _KTHREAD **)(i + 24) == a1 )
      {
        p_ThreadLock = (unsigned __int64 *)i;
        break;
      }
      i = *(_QWORD *)i;
      if ( (unsigned __int64)++a4 > 6 )
        goto LABEL_5;
    }
    a4 = Object;
  }
  if ( p_ThreadLock == (unsigned __int64 *)1 )
  {
LABEL_5:
    CurrentIrql = KeGetCurrentIrql();
    v70 = CurrentIrql;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(i) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, i);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v37 = *SchedulerAssist;
      do
      {
        i = v37;
        LODWORD(i) = v37 & 0xFFDFFFFF;
        v38 = v37;
        v37 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v37 & 0xFFDFFFFF, v37);
      }
      while ( v38 != v37 );
      if ( (v37 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, i, SchedulerAssist, a4);
    }
    _enable();
    v7 = 1;
    a4 = Object;
    v11 = 0;
    v76 = 1;
    v69 = 0;
    if ( (*(_QWORD *)&a1->Header.Lock & 1) != 0 && *(_QWORD *)&a1->CurrentRunTime == Object )
    {
      p_ThreadLock = &a1->ThreadLock;
    }
    else
    {
      SchedulerAssist = (unsigned __int32 *)(Object + 1720);
      p_ThreadLock = 0LL;
      for ( i = *(_QWORD *)(Object + 1720); (unsigned __int32 *)i != SchedulerAssist; i = *(_QWORD *)i )
      {
        if ( (*(_BYTE *)(i + 37) & 2) == 0 && *(struct _KTHREAD **)(i + 24) == a1 )
        {
          p_ThreadLock = (unsigned __int64 *)i;
          break;
        }
      }
    }
  }
  if ( p_ThreadLock && (*((_BYTE *)p_ThreadLock + 37) & 4) == 0 )
  {
    if ( p_ThreadLock == &a1->ThreadLock )
    {
      ++*((_DWORD *)p_ThreadLock + 8);
LABEL_103:
      if ( v11 )
      {
        p_ThreadLock = (unsigned __int64 *)KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)p_ThreadLock[4575];
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v64 = *SchedulerAssist;
          do
          {
            v65 = v64;
            LODWORD(v65) = v64 & 0xFFDFFFFF;
            v66 = v64;
            v64 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v64 & 0xFFDFFFFF, v64);
          }
          while ( v66 != v64 );
          if ( (v64 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(p_ThreadLock, v65, SchedulerAssist, a4);
        }
        _enable();
        v7 = v76;
        v33 = 0;
      }
      else
      {
        v33 = v69;
      }
      if ( v7 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v76 = 0;
      }
      if ( v8 )
      {
        KeAbPostReleaseEx(a1, (unsigned __int64)v8, (__int64)SchedulerAssist, a4);
        v8 = 0LL;
      }
      v34 = v70;
      v6 = 1;
      v35 = v76;
      goto LABEL_129;
    }
    _InterlockedAdd64((volatile signed __int64 *)&a1->Header.Lock, 4uLL);
    if ( (unsigned __int64 *)v9 != &a1->ThreadLock )
      *(_QWORD *)(v9 + 24) = a1;
    *(_QWORD *)(v9 + 16) = a4;
    v49 = (unsigned __int64 *)(a4 + 1720);
    *(_DWORD *)(v9 + 32) = 1;
    p_ThreadLock = *(unsigned __int64 **)(a4 + 1720);
    if ( p_ThreadLock[1] == a4 + 1720 )
    {
      *(_QWORD *)v9 = p_ThreadLock;
      *(_QWORD *)(v9 + 8) = v49;
      p_ThreadLock[1] = v9;
      *v49 = v9;
      goto LABEL_103;
    }
LABEL_50:
    __fastfail(3u);
  }
  if ( (a5 & 8) == 0 )
  {
LABEL_74:
    v33 = v69;
    v34 = v70;
    v35 = v76;
    goto LABEL_129;
  }
  if ( v11 )
  {
    v15 = KeGetCurrentIrql();
    if ( v15 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(i) = 2;
      KiRaiseIrqlProcessIrqlFlags(v15, i);
    }
    v16 = KeGetCurrentPrcb();
    v70 = v15;
    v17 = (unsigned __int32 *)v16->SchedulerAssist;
    if ( v17 )
    {
      _m_prefetchw(v17);
      v39 = *v17;
      do
      {
        v40 = v39;
        LODWORD(v40) = v39 & 0xFFDFFFFF;
        v41 = v39;
        v39 = _InterlockedCompareExchange((volatile signed __int32 *)v17, v39 & 0xFFDFFFFF, v39);
      }
      while ( v41 != v39 );
      if ( (v39 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v16, v40, v17, a4);
    }
    _enable();
    v76 = 1;
    v69 = 0;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&a1->StackLimit;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)&a1->StackLimit, (__int64)&LockHandle) )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &a1->StackLimit);
  }
  _m_prefetchw(a1);
  v18 = *(_QWORD *)&a1->Header.Lock;
  do
  {
    v19 = 0;
    if ( a1->Header.WaitListHead.Blink || LODWORD(a1->StackBase) )
      v20 = v18 | 2;
    else
      v20 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((v20 & 2) != 0 || (a5 & 2) == 0) && (a5 & 4) == 0 || (v20 & 1) != 0 )
    {
      v21 = v20 | 2;
    }
    else
    {
      v19 = 1;
      v21 = v20 ^ (v20 ^ (v20 + 4)) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v21 == v18 )
      break;
    v22 = v18;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v21, v18);
  }
  while ( v22 != v18 );
  if ( v19 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v42 = 1;
    if ( (a5 & 0x10) != 0 )
      v42 = 13;
    v43 = v42 & 2;
    v44 = v42 & 4;
    v45 = v42 & 8;
    if ( (unsigned __int64 *)v9 != &a1->ThreadLock )
      *(_QWORD *)(v9 + 24) = a1;
    v46 = Object;
    *(_QWORD *)(v9 + 16) = Object | (v44 != 0);
    *(_DWORD *)(v9 + 32) = 1;
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v8 + 33) |= 2u;
      else
        *((_BYTE *)v8 + 10) = 1;
      v47 = KeAbEncodeLockHandle((__int64)v8);
      v46 = Object;
      *(_BYTE *)(v9 + 36) = v47;
    }
    if ( v43 )
      _disable();
    if ( v44 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v46 + 1736));
      v67 = (unsigned __int64 *)(Object + 1744);
      v68 = *(_QWORD *)(Object + 1744);
      if ( *(_QWORD *)(v68 + 8) != Object + 1744 )
        goto LABEL_50;
      *(_QWORD *)v9 = v68;
      *(_QWORD *)(v9 + 8) = v67;
      *(_QWORD *)(v68 + 8) = v9;
      *v67 = v9;
      KxReleaseSpinLock((PKSPIN_LOCK)(Object + 1736));
    }
    else
    {
      v48 = (unsigned __int64 *)(v46 + 1720);
      p_ThreadLock = *(unsigned __int64 **)(v46 + 1720);
      if ( (unsigned __int64 *)p_ThreadLock[1] != v48 )
        goto LABEL_50;
      *(_QWORD *)v9 = p_ThreadLock;
      *(_QWORD *)(v9 + 8) = v48;
      p_ThreadLock[1] = v9;
      *v48 = v9;
    }
    if ( v43 )
    {
      p_ThreadLock = (unsigned __int64 *)KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)p_ThreadLock[4575];
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v61 = *SchedulerAssist;
        do
        {
          v62 = v61;
          LODWORD(v62) = v61 & 0xFFDFFFFF;
          v63 = v61;
          v61 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v61 & 0xFFDFFFFF, v61);
        }
        while ( v63 != v61 );
        if ( (v61 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(p_ThreadLock, v62, SchedulerAssist, a4);
      }
      _enable();
    }
    if ( v44 )
    {
      if ( v45 && v8 )
        KeAbMarkCrossThreadReleasable(p_ThreadLock, v8);
      ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
    }
    v8 = 0LL;
    v6 = 1;
    goto LABEL_74;
  }
  ++LODWORD(a1->StackBase);
  if ( v8 )
    KeAbPreWait(v8);
  *((_QWORD *)&v74 + 1) = &v74;
  *(_QWORD *)&v74 = &v74;
  Flink = a1->Header.WaitListHead.Flink;
  *(_QWORD *)&v73 = Object;
  WORD4(v73) = 1;
  BYTE10(v73) = 6;
  HIDWORD(v73) = 0;
  *(_QWORD *)&v75 = v8;
  if ( Flink )
  {
    Blink = Flink->Blink;
    if ( Blink->Flink != Flink )
      goto LABEL_50;
    *((_QWORD *)&v72 + 1) = Flink->Blink;
    *(_QWORD *)&v72 = Flink;
    Blink->Flink = (struct _LIST_ENTRY *)&v72;
    Flink->Blink = (struct _LIST_ENTRY *)&v72;
  }
  else
  {
    *((_QWORD *)&v72 + 1) = &v72;
    *(_QWORD *)&v72 = &v72;
  }
  a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v72;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v25 = 0;
  if ( (a5 & 0x10) != 0 )
    v25 = 4;
  v26 = v25 & 4;
  v27 = v25 & 2;
  v28 = v25 & 8;
  if ( (unsigned __int64 *)v9 != &a1->ThreadLock )
    *(_QWORD *)(v9 + 24) = a1;
  v29 = Object;
  LOBYTE(v12) = v26 != 0;
  *(_QWORD *)(v9 + 16) = Object | v12;
  *(_DWORD *)(v9 + 32) = 1;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      v30 = (4 * ((4 * *((_BYTE *)v8 + 36)) | HIBYTE(v8[-12 * (v8[9] & 0x7F) - 1]) & 3)) | 3;
    else
      v30 = (2 * (v8[2] & 0x3F)) | 1;
    v29 = Object;
    *(_BYTE *)(v9 + 36) = v30;
  }
  if ( v27 )
    _disable();
  if ( v26 )
  {
    v50 = (KSPIN_LOCK *)(v29 + 1736);
    KxAcquireSpinLock((PKSPIN_LOCK)(v29 + 1736));
    v51 = (unsigned __int64 *)(Object + 1744);
    v52 = *(_QWORD *)(Object + 1744);
    if ( *(_QWORD *)(v52 + 8) != Object + 1744 )
      goto LABEL_50;
    *(_QWORD *)v9 = v52;
    *(_QWORD *)(v9 + 8) = v51;
    *(_QWORD *)(v52 + 8) = v9;
    *v51 = v9;
    KxReleaseSpinLock(v50);
  }
  else
  {
    v31 = (struct _KPRCB **)(v29 + 1720);
    v32 = *v31;
    if ( (struct _KPRCB **)(*v31)->CurrentThread != v31 )
      goto LABEL_50;
    *(_QWORD *)v9 = v32;
    *(_QWORD *)(v9 + 8) = v31;
    v32->CurrentThread = (_KTHREAD *)v9;
    *v31 = (struct _KPRCB *)v9;
  }
  if ( v27 )
  {
    v32 = KeGetCurrentPrcb();
    v53 = (unsigned __int32 *)v32->SchedulerAssist;
    if ( v53 )
    {
      _m_prefetchw(v53);
      v58 = *v53;
      do
      {
        v59 = v58;
        LODWORD(v59) = v58 & 0xFFDFFFFF;
        v60 = v58;
        v58 = _InterlockedCompareExchange((volatile signed __int32 *)v53, v58 & 0xFFDFFFFF, v58);
      }
      while ( v60 != v58 );
      if ( (v58 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v32, v59, v53, v24);
    }
    _enable();
  }
  if ( v26 )
  {
    if ( v28 && v8 )
      KeAbMarkCrossThreadReleasable(v32, v8);
    ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
  }
  *(_BYTE *)(v9 + 37) |= 4u;
  v34 = v70;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v70);
  __writecr8(v70);
  v35 = 0;
  ExpWaitForFastResource((__int64)a1, (__int64)&v72, 0x10244u);
  *(_BYTE *)(v9 + 37) &= ~4u;
  if ( v8 )
    KeAbPreAcquire(a1, (LegacyAutoBoost *)v8);
  v33 = v69;
  v6 = 1;
LABEL_129:
  if ( v33 )
  {
    p_ThreadLock = (unsigned __int64 *)KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)p_ThreadLock[4575];
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v55 = *SchedulerAssist;
      do
      {
        v56 = v55;
        LODWORD(v56) = v55 & 0xFFDFFFFF;
        v57 = v55;
        v55 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v55 & 0xFFDFFFFF, v55);
      }
      while ( v57 != v55 );
      if ( (v55 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(p_ThreadLock, v56, SchedulerAssist, a4);
    }
    _enable();
  }
  if ( v35 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
    __writecr8(v34);
  }
  if ( v8 )
  {
    if ( v6 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v8 + 33) |= 2u;
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    else
    {
      KeAbPostReleaseEx(a1, (unsigned __int64)v8, (__int64)SchedulerAssist, a4);
    }
    if ( (a5 & 0x10) != 0 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpMarkCrossThreadReleasable((AutoBoost *)p_ThreadLock, v8, SchedulerAssist);
      else
        LegacyAutoBoost::KiAbMarkCrossThreadReleasable((LegacyAutoBoost *)p_ThreadLock, v8, SchedulerAssist);
    }
  }
  return v6;
}

/*
 * XREFs of ExpAcquireFastResourceExclusiveSlow @ 0x140274F40
 * Callers:
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406D1B40 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForFastResource @ 0x140275550 (ExpWaitForFastResource.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     HalRequestIpi @ 0x1402F9560 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1402F9C30 (HvlWakeVirtualProcessors.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14052C0B0 (KeAbMarkCrossThreadReleasable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall ExpAcquireFastResourceExclusiveSlow(
        struct _KTHREAD *a1,
        __int64 a2,
        void *a3,
        LegacyAutoBoost *a4,
        char a5)
{
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v15; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  char v18; // al
  char v19; // r13
  KSPIN_LOCK *v20; // rax
  char v21; // r15
  int v22; // r12d
  bool v23; // r13
  int v24; // r15d
  char v25; // cl
  volatile unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  volatile signed __int64 *v29; // rcx
  unsigned __int64 v30; // r8
  char v31; // r12
  __int64 v32; // r15
  unsigned __int64 v33; // r15
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  KSPIN_LOCK *v42; // rdi
  unsigned __int64 **v43; // rax
  unsigned __int64 v44; // rcx
  struct _KPRCB *v45; // r8
  unsigned __int32 *v46; // rdx
  unsigned __int32 v47; // eax
  unsigned __int32 v48; // ett
  signed __int32 v49[8]; // [rsp+0h] [rbp-100h] BYREF
  char v50; // [rsp+20h] [rbp-E0h]
  __int64 v51; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int64 *p_StackLimit; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+38h] [rbp-C8h]
  PVOID Object; // [rsp+40h] [rbp-C0h]
  __int128 v55; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v56; // [rsp+60h] [rbp-A0h]
  __int128 v57; // [rsp+70h] [rbp-90h] BYREF
  __int128 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v60[33]; // [rsp+98h] [rbp-68h] BYREF
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  Object = a3;
  v5 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v51 = 0LL;
  p_StackLimit = (volatile signed __int64 *)&a1->StackLimit;
  v50 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v10 = _InterlockedExchange64((volatile __int64 *)&a1->StackLimit, (__int64)&v51);
    if ( v10 )
      KxWaitForLockOwnerShip(&v51);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v51, &a1->StackLimit);
  }
  _m_prefetchw(a1);
  v11 = *(_QWORD *)&a1->Header.Lock;
  do
  {
    if ( v11 )
    {
      LOBYTE(v10) = 0;
      v12 = v11 | 2;
      if ( (v11 | 2) == v11 )
        goto LABEL_14;
    }
    else
    {
      v12 = 1LL;
      v10 = 1LL;
    }
    v13 = v11;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v12, v11);
  }
  while ( v13 != v11 );
  if ( !(_BYTE)v10 )
  {
LABEL_14:
    *(_QWORD *)&v56 = a3;
    *((_QWORD *)&v57 + 1) = &v57;
    *(_QWORD *)&v57 = &v57;
    Blink = a1->Header.WaitListHead.Blink;
    WORD4(v56) = 1;
    BYTE10(v56) = 6;
    HIDWORD(v56) = 0;
    *(_QWORD *)&v58 = a4;
    if ( Blink )
    {
      v15 = Blink->Blink;
      if ( v15->Flink != Blink )
        goto LABEL_44;
      *((_QWORD *)&v55 + 1) = Blink->Blink;
      *(_QWORD *)&v55 = Blink;
      v15->Flink = (struct _LIST_ENTRY *)&v55;
      Blink->Blink = (struct _LIST_ENTRY *)&v55;
    }
    else
    {
      *((_QWORD *)&v55 + 1) = &v55;
      *(_QWORD *)&v55 = &v55;
      a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&v55;
    }
    if ( a4 )
      KeAbPreWait(a4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v51, retaddr);
      goto LABEL_26;
    }
    _m_prefetchw(&v51);
    v16 = v51;
    if ( !v51 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(p_StackLimit, 0LL, (signed __int64)&v51) == &v51 )
      {
LABEL_26:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v50 = 0;
        ExpWaitForFastResource(a1, &v55, 66084LL);
        if ( a4 )
          KeAbPreAcquire(a1, a4);
        goto LABEL_30;
      }
      v16 = KxWaitForLockChainValid(&v51);
    }
    v51 = 0LL;
    v17 = (unsigned __int8)p_StackLimit;
    if ( ((v17 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v16 + 8), (__int64)p_StackLimit)) & 4) != 0 )
    {
      _InterlockedOr(v49, 0);
      KiWakeAddressAll(v16 + 8, v16 + 8, a3);
    }
    goto LABEL_26;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v51, retaddr);
    goto LABEL_30;
  }
  _m_prefetchw(&v51);
  v28 = v51;
  if ( !v51 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(p_StackLimit, 0LL, (signed __int64)&v51) == &v51 )
      goto LABEL_30;
    v28 = KxWaitForLockChainValid(&v51);
  }
  v51 = 0LL;
  v29 = p_StackLimit;
  if ( (((unsigned __int8)v29 ^ (unsigned __int8)_InterlockedExchange64(
                                                   (volatile __int64 *)(v28 + 8),
                                                   (__int64)p_StackLimit)) & 4) != 0 )
  {
    _InterlockedOr(v49, 0);
    v31 = KeDisableInterrupts(v29, v10, v28 + 8);
    v32 = _InterlockedExchange64(&KiHaltOnAddressHashTable[(v30 >> 5) & 0x7F], 0LL);
    memset_0(&v59, 0, 0x108uLL);
    v33 = v32 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v33 )
    {
LABEL_54:
      if ( v31 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v36 = *SchedulerAssist;
          do
          {
            v37 = v36;
            v36 = _InterlockedCompareExchange(SchedulerAssist, v36 & 0xFFDFFFFF, v36);
          }
          while ( v37 != v36 );
          if ( (v36 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist, CurrentPrcb, a4);
        }
        _enable();
      }
      goto LABEL_30;
    }
    v59 = 2097153LL;
    memset_0(v60, 0, 0x100uLL);
    while ( 1 )
    {
      v38 = *(_QWORD *)(v33 + 8);
      v39 = *(_QWORD *)(v33 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v33 + 24), 1) )
      {
        v40 = *(_QWORD *)(v38 + 200);
        v41 = *(unsigned __int8 *)(v38 + 208);
        if ( (unsigned __int16)v59 > (unsigned __int16)v41 )
          goto LABEL_94;
        if ( WORD1(v59) > (unsigned __int16)v41 )
          break;
      }
LABEL_95:
      v33 = v39;
      if ( !v39 )
      {
        if ( (KiHaltOnAddressFlags & 4) != 0 )
          HvlWakeVirtualProcessors(&v59);
        else
          HalRequestIpi(0LL, &v59);
        goto LABEL_54;
      }
    }
    LOWORD(v59) = v41 + 1;
LABEL_94:
    v60[v41] |= v40;
    goto LABEL_95;
  }
LABEL_30:
  v18 = 13;
  if ( (a5 & 0x10) == 0 )
    v18 = 1;
  v19 = v18 | 2;
  if ( v50 )
    v19 = v18;
  v20 = (KSPIN_LOCK *)Object;
  v21 = v19;
  v22 = v19 & 2;
  v23 = (v19 & 8) != 0;
  v24 = v21 & 4;
  LOBYTE(v5) = v24 != 0;
  *(_QWORD *)&a1->CurrentRunTime = (unsigned __int64)Object | v5;
  LODWORD(a1->StateSaveArea) = 1;
  if ( a4 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)a4 + 33) |= 2u;
    else
      *((_BYTE *)a4 + 10) = 1;
    if ( (KiAbpGlobalState & 1) != 0 )
      v25 = (4 * ((4 * *((_BYTE *)a4 + 36)) | *((_BYTE *)a4 - 48 * (*((_BYTE *)a4 + 36) & 0x7F) - 1) & 3)) | 3;
    else
      v25 = (2 * (*((_BYTE *)a4 + 8) & 0x3F)) | 1;
    v20 = (KSPIN_LOCK *)Object;
    BYTE4(a1->StateSaveArea) = v25;
  }
  if ( v22 )
    _disable();
  if ( v24 )
  {
    v42 = v20 + 217;
    KxAcquireSpinLock(v20 + 217);
    v43 = (unsigned __int64 **)((char *)Object + 1744);
    v44 = *((_QWORD *)Object + 218);
    if ( *(PVOID *)(v44 + 8) != (char *)Object + 1744 )
LABEL_44:
      __fastfail(3u);
    a1->CycleTime = (volatile unsigned __int64)v43;
    a1->ThreadLock = v44;
    *(_QWORD *)(v44 + 8) = &a1->ThreadLock;
    *v43 = &a1->ThreadLock;
    KxReleaseSpinLock(v42);
  }
  else
  {
    v26 = (volatile unsigned __int64)(v20 + 215);
    v27 = *(_QWORD *)v26;
    if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
      goto LABEL_44;
    a1->CycleTime = v26;
    a1->ThreadLock = v27;
    *(_QWORD *)(v27 + 8) = &a1->ThreadLock;
    *(_QWORD *)v26 = &a1->ThreadLock;
  }
  if ( v22 )
  {
    v45 = KeGetCurrentPrcb();
    v46 = (unsigned __int32 *)v45->SchedulerAssist;
    if ( v46 )
    {
      _m_prefetchw(v46);
      v47 = *v46;
      do
      {
        v27 = v47;
        LODWORD(v27) = v47 & 0xFFDFFFFF;
        v48 = v47;
        v47 = _InterlockedCompareExchange((volatile signed __int32 *)v46, v47 & 0xFFDFFFFF, v47);
      }
      while ( v48 != v47 );
      if ( (v47 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v45, v46, v45, a4);
    }
    _enable();
  }
  if ( v24 )
  {
    if ( v23 && a4 )
      KeAbMarkCrossThreadReleasable(v27, a4);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
  }
  if ( v50 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}

/*
 * XREFs of PfFileInfoNotify @ 0x140303740
 * Callers:
 *     <none>
 * Callees:
 *     PfSnLogPageFaultCommon @ 0x1402650C0 (PfSnLogPageFaultCommon.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402D25C0 (ExAcquireRundownProtectionCacheAware.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     ExAcquireRundownProtectionEx @ 0x140376EB0 (ExAcquireRundownProtectionEx.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 *     PfpPartitionGetNext @ 0x140384620 (PfpPartitionGetNext.c)
 *     PfpPartitionReferenceParentSafe @ 0x140384710 (PfpPartitionReferenceParentSafe.c)
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140447B00 (ExReleaseRundownProtectionCacheAware.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExpReleaseRundownProtection @ 0x14045CF10 (ExpReleaseRundownProtection.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PfpRpFileKeyUpdate @ 0x1408DB1B0 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x1409D2C20 (PfSnNameRemoveAll.c)
 *     PfSnLogStreamCreate @ 0x1409D2DB8 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x1409D3F78 (PfSnLogVolumeCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // rdi
  int v5; // eax
  int v6; // r12d
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // rdx
  struct _KTHREAD *j; // rsi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // rsi
  signed __int64 v20; // rbx
  signed __int64 v21; // rdx
  signed __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  __int64 v30; // rdi
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // r15
  __int64 v36; // rdi
  __int64 Next; // rbx
  int v38; // ecx
  unsigned int PagePriorityThread; // eax
  __int64 v40; // r8
  unsigned __int64 v41; // r9
  __int64 v42; // r10
  unsigned __int64 *v43; // r11
  unsigned int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int128 *v50; // r8
  BOOL v51; // eax
  __int64 (__fastcall *v52)(); // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  _KSPIN_LOCK_QUEUE *v59; // rax
  unsigned __int64 v60; // rdx
  _QWORD *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // ecx
  int v65; // ecx
  KIRQL v66; // al
  signed __int64 v67; // rax
  struct _LIST_ENTRY *i; // rbx
  __int64 v69; // rdx
  __int64 v70; // r8
  signed __int64 v71; // rtt
  size_t v72; // [rsp+28h] [rbp-E0h]
  BOOLEAN v73; // [rsp+38h] [rbp-D0h]
  KIRQL v74; // [rsp+39h] [rbp-CFh]
  __int128 v75; // [rsp+40h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v77; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v78; // [rsp+78h] [rbp-90h]
  __int64 v79; // [rsp+80h] [rbp-88h]
  unsigned __int64 v80; // [rsp+88h] [rbp-80h]
  __int64 v81; // [rsp+90h] [rbp-78h]
  __int64 v82; // [rsp+98h] [rbp-70h]
  unsigned __int64 v83; // [rsp+A0h] [rbp-68h]
  __int128 v84; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-50h]
  BOOL v86; // [rsp+C0h] [rbp-48h]
  int v87; // [rsp+C4h] [rbp-44h]
  __int128 v88; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v89; // [rsp+D8h] [rbp-30h]
  __int128 v90; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v91; // [rsp+F0h] [rbp-18h]

  v82 = a1;
  v3 = *(_DWORD *)a1 == 15;
  LODWORD(v89) = 0;
  v4 = a1;
  v91 = 0LL;
  v88 = 0LL;
  v85 = 0LL;
  v90 = 0LL;
  v86 = 0;
  v84 = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  v75 = 0LL;
  if ( !v3 )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 8) != 0 )
  {
    v38 = *(_DWORD *)(a1 + 4);
    if ( v38 != 7 )
    {
      v64 = v38 - 10;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( v65 )
        {
          if ( v65 == 1 )
            return (stru_140E67200.WaitBlockFill5[32] & 2) != 0 ? 0xC0000189 : 0;
          else
            return (unsigned int)-1073741637;
        }
        PfLockExclusiveAcquire(&stru_140E66D40.Padding[4]);
        if ( stru_140E66D40.Padding[2] )
        {
          PfLockExclusiveAcquire(&stru_140E67200);
          LODWORD(stru_140E67200.SListFaultAddress) |= 1u;
          for ( i = stru_140E67200.Header.WaitListHead.Flink; i != &stru_140E67200.Header.WaitListHead; i = i->Flink )
          {
            HIDWORD(i[4].Flink) |= 4u;
            KeSetEvent((PRKEVENT)&i[5].Blink, 0, 0);
          }
          PfLockExclusiveRelease(&stru_140E67200);
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140E66D40.Padding[3]);
          _InterlockedExchange64((volatile __int64 *)&stru_140E66D40.Padding[3], 1LL);
          stru_140E66D40.Padding[2] = 0LL;
          v11 = 0;
        }
        else
        {
          v11 = -1073741275;
        }
      }
      else
      {
        PfLockExclusiveAcquire(&stru_140E66D40.Padding[4]);
        if ( stru_140E66D40.Padding[2] )
        {
          v11 = -1073741791;
        }
        else
        {
          PfLockExclusiveAcquire(&stru_140E67200);
          LODWORD(stru_140E67200.SListFaultAddress) &= ~1u;
          PfLockExclusiveRelease(&stru_140E67200);
          guard_dispatch_icall_no_overrides(PfpPrefetchSharedConflictNotifyStart, v69, v70);
          stru_140E66D40.Padding[2] = *(_QWORD *)(v4 + 16);
          v11 = 0;
          _InterlockedExchange64((volatile __int64 *)&stru_140E66D40.Padding[3], 0LL);
        }
      }
      PfLockExclusiveRelease((struct _KTHREAD *)&stru_140E66D40.Padding[4]);
      return v11;
    }
    *(_DWORD *)(v4 + 16) = _InterlockedIncrement((volatile signed __int32 *)&xmmword_140F13528);
    return 0;
  }
  if ( (v5 & 4) != 0 )
  {
    v47 = *(_DWORD *)(a1 + 4);
    if ( v47 == 3 )
    {
      PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
    }
    else if ( v47 )
    {
      if ( v47 == 2 )
        PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (*(_DWORD *)(v4 + 8) & 1) == 0 )
    return 0;
  v6 = 0;
  *(_QWORD *)&LockHandle.OldIrql = &stru_140E67200.InitialStack;
  LockHandle.LockQueue.Lock = 0LL;
  *(_QWORD *)&v77 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LOBYTE(v77) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)&stru_140E67200.InitialStack, (__int64)&LockHandle.LockQueue.Lock);
    if ( v8 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle.LockQueue.Lock, v8, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(
      (__int64)&LockHandle.LockQueue.Lock,
      (volatile __int64 *)&stru_140E67200.InitialStack);
  }
  for ( j = (struct _KTHREAD *)stru_140E67200.StackLimit; ; j = *(struct _KTHREAD **)&j->Header.Lock )
  {
    if ( j == (struct _KTHREAD *)&stru_140E67200.StackLimit )
    {
      KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
      goto LABEL_16;
    }
    Next = (__int64)&j[-1].Padding[2];
    if ( ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)j[-1].Padding[4]) )
      break;
  }
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  if ( j != (struct _KTHREAD *)24 )
  {
    do
    {
      v63 = PfpPartitionReferenceParentSafe(Next);
      if ( v63 )
      {
        if ( *(_DWORD *)(Next + 608) < *(_DWORD *)(Next + 612) )
        {
          PsDereferencePartition(v63, 1951426128LL);
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Next + 16));
          goto LABEL_22;
        }
        PsDereferencePartition(v63, 1951426128LL);
        if ( v6 >= 0 )
          v6 = -1073741431;
      }
      Next = PfpPartitionGetNext(Next);
    }
    while ( Next );
  }
LABEL_16:
  v10 = *(_DWORD *)(v4 + 4);
  if ( v10 != 2 && (unsigned int)(v10 - 3) > 1 )
    return (unsigned int)-1073741697;
LABEL_22:
  v12 = *(_DWORD *)(v4 + 4);
  if ( v12 != 4 )
  {
    switch ( v12 )
    {
      case 0:
        v11 = PfpPartitionIterate(PfTFiNotifyVolumeCreateCallback, 2LL, v4);
        if ( (v11 & 0x80000000) == 0 )
          goto LABEL_70;
        return v11;
      case 1:
        v62 = *(_QWORD *)(v4 + 16);
        *(_QWORD *)&v84 = 2LL;
        v87 = 0;
        *((_QWORD *)&v84 + 1) = *(_QWORD *)(v62 + 8);
        v85 = *(unsigned int *)(v62 + 56);
        v86 = 0;
        PfpPartitionIterate(PfTFiNotifyFileInfoDeleteCallback, 2LL, &v84);
        return 0;
      case 2:
        v53 = *(_QWORD *)(v4 + 16);
        if ( HIWORD(*(_DWORD *)(v53 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v53 + 32) )
          goto LABEL_70;
        PfpRpFileKeyUpdate(&stru_140E66D40.KernelShadowStack, v53, 1LL);
        v11 = PfpPartitionIterate(PfTFiNotifyFileStreamCreateCallback, 2LL, v4);
        if ( (v11 & 0x80000000) == 0 )
          goto LABEL_70;
        return v11;
      case 3:
        v48 = *(_QWORD *)(v4 + 16);
        if ( HIWORD(*(_DWORD *)(v48 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v48 + 32) )
          goto LABEL_70;
        PfpRpFileKeyUpdate(&stru_140E66D40.KernelShadowStack, v48, 0LL);
        v49 = *(_QWORD *)(v4 + 16);
        v50 = &v84;
        *(_QWORD *)&v84 = 0LL;
        v87 = 0;
        *((_QWORD *)&v84 + 1) = *(_QWORD *)(v49 + 16);
        v85 = *(unsigned int *)(v49 + 44);
        v86 = 0;
        v51 = (*(_BYTE *)(v49 + 36) & 8) != 0;
        v52 = PfTFiNotifyFileInfoDeleteCallback;
        v86 = v51;
        goto LABEL_69;
      case 8:
        v54 = *(_QWORD *)(v4 + 16);
        DWORD1(v88) = 0;
        v55 = 2LL * (*(_DWORD *)v54 & 3);
        LODWORD(v88) = *(_DWORD *)(v54 + 4);
        *((_QWORD *)&v88 + 1) = *(_QWORD *)(v54 + 8);
        v56 = *(_QWORD *)(v54 + 16) + 4095LL;
        HIDWORD(v75) = 0;
        LODWORD(v75) = 24;
        v89 = v55 | v56 & 0xFFFFFFFFFFFFF000uLL;
        v57 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
        v58 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
        v59 = (_KSPIN_LOCK_QUEUE *)&v88;
        goto LABEL_75;
      case 13:
        v61 = *(_QWORD **)(v4 + 16);
        if ( v61[1] )
        {
          *((_QWORD *)&v90 + 1) = v61[1];
          v91 = (unsigned int)xmmword_140F13528;
          *(_QWORD *)&v90 = *v61;
          HIDWORD(v75) = 0;
          LODWORD(v75) = 31;
          v57 = MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320];
          v58 = MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320]);
          v59 = (_KSPIN_LOCK_QUEUE *)&v90;
LABEL_75:
          v50 = &v75;
          DWORD2(v75) = 24;
          v60 = ((v58 << 8) + (v57 >> 24)) >> 10;
          v52 = PfpPartitionLogEventCallback;
          DWORD1(v75) = HIDWORD(stru_140E66D40.WriteOperationCount) + v60;
          LockHandle.LockQueue.Next = v59;
LABEL_69:
          PfpPartitionIterate(v52, 2LL, v50);
LABEL_70:
          v11 = 0;
        }
        else
        {
          v11 = -1073741747;
        }
        break;
      default:
        return (unsigned int)-1073741637;
    }
    return v11;
  }
  v13 = *(_QWORD *)(v4 + 16);
  v14 = ((*(_DWORD *)(v13 + 8) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v13 + 16) + 4095) >> 12;
  v83 = v14;
  if ( !LODWORD(stru_140E67200.ThreadLock) )
    goto LABEL_28;
  v15 = v14;
  v16 = *(_QWORD *)(v13 + 24);
  v17 = *(_QWORD *)v13;
  v18 = *(_QWORD *)(v13 + 8);
  v19 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 544LL);
  v79 = *(_QWORD *)(v13 + 32);
  v80 = v16;
  v81 = v17;
  _m_prefetchw((const void *)(v19 + 912));
  v20 = *(_QWORD *)(v19 + 912);
  v21 = v20;
  if ( (v20 & 0xF) != 0 )
  {
    do
    {
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 912), v20 - 1, v20);
      if ( v20 == v22 )
        break;
      v20 = v22;
      v21 = v22;
    }
    while ( (v22 & 0xF) != 0 );
  }
  v23 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !v23 )
  {
LABEL_27:
    if ( !v23 )
      goto LABEL_28;
    goto LABEL_39;
  }
  v21 &= 0xFu;
  if ( (unsigned int)v21 <= 1 )
  {
    if ( !(_DWORD)v21 )
    {
      v73 = 1;
      v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E67200.StateSaveArea);
      v74 = v66;
      v23 = *(_QWORD *)(v19 + 912) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v23 )
      {
        v73 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v23 + 360));
        v66 = v74;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E67200.StateSaveArea, v66);
      if ( !v73 )
        v23 = 0LL;
      goto LABEL_27;
    }
    if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v23 + 360), 0xFu) )
    {
      _m_prefetchw((const void *)(v19 + 912));
      v67 = *(_QWORD *)(v19 + 912);
      while ( (v67 & 0xF) == 0 && v23 == (v67 & 0xFFFFFFFFFFFFFFF0uLL) )
      {
        v71 = v67;
        v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 912), v67 + 15, v67);
        if ( v71 == v67 )
          goto LABEL_39;
      }
      ExpReleaseRundownProtection((PEX_RUNDOWN_REF)(v23 + 360), 0xFu);
    }
  }
LABEL_39:
  if ( (*(_DWORD *)(v79 + 1440) & 0x2000000) == 0 )
  {
    if ( (int)PsGetIoPriorityThread(v79, v21, v17, v79) < 2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 336));
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v23 + 360));
      goto LABEL_28;
    }
    v33 = *(_QWORD *)(v23 + 432);
    if ( !v33 || v33 == v32 && *(_QWORD *)(v23 + 440) == *(_QWORD *)(v32 + 1296) )
    {
      v34 = v18 & 0xFFFFFFFFFFFFF000uLL;
      if ( v14 )
      {
        v35 = v80;
        v36 = v81;
        do
        {
          if ( (int)PfSnLogPageFaultCommon(v23, v36, v35, v34, 0) < 0 )
            break;
          v34 += 4096LL;
          --v15;
        }
        while ( v15 );
        v4 = v82;
        v14 = v83;
      }
    }
  }
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v23 + 360));
LABEL_28:
  v24 = *(_QWORD *)(v4 + 16);
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v77 = 0LL;
  v25 = *(_QWORD *)(v24 + 32);
  v26 = *(_QWORD *)(v25 + 544);
  v78 = 0LL;
  v27 = *(_QWORD *)(v26 + 1880);
  _m_prefetchw((const void *)(v27 + 40));
  v28 = *(_QWORD *)(v27 + 40);
  do
  {
    if ( (unsigned __int64)(v28 + 1) <= 1 )
    {
      if ( v28 )
        __fastfail(0xEu);
      v27 = 0LL;
      goto LABEL_32;
    }
    v29 = v28;
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 40), v28 + 1, v28);
  }
  while ( v29 != v28 );
  v30 = *(_QWORD *)(v27 + 32);
  if ( !v30 || *(_DWORD *)(v30 + 608) >= *(_DWORD *)(v30 + 612) )
  {
LABEL_32:
    v11 = -1073741637;
    goto LABEL_33;
  }
  PagePriorityThread = PsGetPagePriorityThread(v25);
  if ( PagePriorityThread < v44 )
  {
    v11 = 0;
  }
  else
  {
    v45 = *(_QWORD *)(v40 + 464);
    *(_QWORD *)&v77 = v14 | (v42 << 63);
    v46 = (*(_QWORD *)(v40 + 504) ^ v45) & 0x1FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&LockHandle.OldIrql = v41 >> 12;
    *((_QWORD *)&v77 + 1) = v46;
    v78 = __PAIR64__(v45, xmmword_140F13528);
    LockHandle.LockQueue.Lock = v43;
    LODWORD(v72) = 40;
    v11 = PfLogEvent(
            v30,
            10,
            HIDWORD(stru_140E66D40.WriteOperationCount)
          + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
            (int)&LockHandle.LockQueue.Lock,
            v72);
  }
LABEL_33:
  if ( v27 )
    PsDereferencePartition(v27, 1951426128LL);
  return v11;
}

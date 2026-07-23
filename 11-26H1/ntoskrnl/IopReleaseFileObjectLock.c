/*
 * XREFs of IopReleaseFileObjectLock @ 0x140269430
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1404B3AFC (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404B3F40 (IopAllocateAndPopulateWriteIrp.c)
 *     IopGetSetSecurityObject @ 0x1408F2A10 (IopGetSetSecurityObject.c)
 *     IopExceptionCleanupEx @ 0x140924ADC (IopExceptionCleanupEx.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     NtSetEaFile @ 0x140980DA0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409815E0 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x140981E10 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x140982F50 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     IopAllocateIrpCleanup @ 0x140AAB204 (IopAllocateIrpCleanup.c)
 *     IoSetInformation @ 0x140B34AF0 (IoSetInformation.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeAbPreWakeupThread @ 0x140269824 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KiWaitSatisfyMutant @ 0x14043A4D0 (KiWaitSatisfyMutant.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

__int64 __fastcall IopReleaseFileObjectLock(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v3; // rbx
  __int64 Flink_low; // rdx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v8; // edi
  LIST_ENTRY *Flink; // r12
  LIST_ENTRY *v10; // rax
  LIST_ENTRY *v11; // rsi
  struct _LIST_ENTRY *Blink; // rcx
  char v13; // al
  __int64 v14; // rcx
  unsigned int v15; // r15d
  struct _LIST_ENTRY *v16; // rdi
  char v17; // r10
  int v18; // eax
  signed __int64 v19; // rbx
  bool v20; // cc
  signed __int64 BugCheckParameter4; // rbx
  struct _LIST_ENTRY *v23; // rcx
  int v24; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  BOOLEAN v26; // al
  __int64 v27; // rcx
  __int64 v28; // rax
  char Priority; // [rsp+88h] [rbp+10h]
  struct _KPRCB *v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v3 = (struct _KTHREAD *)(BugCheckParameter2 + 128);
  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange((volatile __int32 *)(BugCheckParameter2 + 116), 0);
  Flink_low = *(unsigned int *)(BugCheckParameter2 + 112);
  if ( (_DWORD)Flink_low )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = 0;
    v30 = CurrentPrcb;
    if ( _interlockedbittestandset(&v3->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter2, Flink_low, a3) )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (v3->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&v3->Header.Lock, 7u) );
    }
    v3->Header.SignalState = 1;
    Flink = v3->Header.WaitListHead.Flink;
    while ( Flink != &v3->Header.WaitListHead )
    {
      v10 = Flink->Flink;
      v11 = Flink;
      Flink = v10;
      Blink = v11->Blink;
      if ( v10->Blink != v11 || Blink->Flink != v11 )
        __fastfail(3u);
      Blink->Flink = v10;
      v10->Blink = Blink;
      v13 = (char)v11[1].Flink;
      switch ( v13 )
      {
        case 1:
          v14 = WORD1(v11[1].Flink);
          v15 = 0;
          v16 = v11[1].Blink;
          v31 = v14;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v16[4], 0LL) )
          {
            do
            {
              if ( (++v15 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, Flink_low, a3) )
              {
                HvlNotifyLongSpinWait(v15);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( v16[4].Flink );
          }
          if ( BYTE4(v16[24].Flink) == 5 )
          {
            v17 = KiSignalThread(v30, v16, v31, v11);
            if ( v17 )
            {
              v23 = v11[2].Flink;
              Flink_low = LOBYTE(v23->Flink);
              LOBYTE(Flink_low) = Flink_low & 0x7F;
              if ( (_BYTE)Flink_low == 2 )
                KiWaitSatisfyMutant(v23, v16, v30);
            }
          }
          else
          {
            v17 = 0;
          }
          CurrentPrcb = v30;
          v16[4].Flink = 0LL;
          ++BYTE1(v11[1].Flink);
          if ( v17 )
          {
            v18 = v3->Header.SignalState - 1;
            v3->Header.SignalState = v18;
            if ( !v18 )
              goto LABEL_18;
          }
          break;
        case 2:
          BYTE1(v11[1].Flink) = 5;
          KiInsertQueueInternal(v11[1].Blink, v11);
          v24 = v3->Header.SignalState - 1;
          v3->Header.SignalState = v24;
          if ( !v24 )
            goto LABEL_18;
          break;
        case 4:
          BYTE1(v11[1].Flink) = 5;
          v3->Header.SignalState = 0;
          KiInsertQueueDpc((ULONG_PTR)v11[1].Blink, 0);
          break;
        default:
          KiTryUnwaitThread(CurrentPrcb, v11, 256LL, 0LL);
          break;
      }
    }
LABEL_18:
    _InterlockedAnd(&v3->Header.Lock, 0xFFFFFF7F);
    if ( Priority )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], v3);
    }
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  }
  KeAbPostRelease(v3);
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48, -1, 0x746C6644u);
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
  v20 = v19 <= 1;
  BugCheckParameter4 = v19 - 1;
  if ( v20 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 - 40) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(BugCheckParameter2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(BugCheckParameter2 - 48) >> 8)],
        BugCheckParameter2,
        1uLL,
        *(_QWORD *)(BugCheckParameter2 - 40));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, BugCheckParameter4);
    v26 = KeAreAllApcsDisabled();
    v27 = BugCheckParameter2 - 48;
    if ( v26 )
    {
      ObpDeferObjectDeletion(v27);
    }
    else
    {
      v28 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v27);
      if ( v28 )
        ObpHandleRevocationBlockRemoveObject(v28);
      if ( ObpTraceFlags )
        ObpDeregisterObject(BugCheckParameter2 - 48);
      ObpRemoveObjectRoutine(BugCheckParameter2 - 48, 0LL);
    }
  }
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}

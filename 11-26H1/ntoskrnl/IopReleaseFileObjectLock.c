/*
 * XREFs of IopReleaseFileObjectLock @ 0x140269EC0
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1404BA26C (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404BA6B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopGetSetSecurityObject @ 0x1408EC450 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     NtSetEaFile @ 0x1409AFCE0 (NtSetEaFile.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1409B0520 (NtQueryEaFile.c)
 *     IopFlushBuffersFile @ 0x1409B0D50 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x1409B13A0 (NtQueryVolumeInformationFile.c)
 *     IopWriteFile @ 0x1409B19A0 (IopWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopExceptionCleanupEx @ 0x1409B6D64 (IopExceptionCleanupEx.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     IopAllocateIrpCleanup @ 0x140AAD144 (IopAllocateIrpCleanup.c)
 *     IoSetInformation @ 0x140B326A0 (IoSetInformation.c)
 * Callees:
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeAbPreWakeupThread @ 0x14026A2B4 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402735B4 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiSignalThread @ 0x14027C940 (KiSignalThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KiWaitSatisfyMutant @ 0x1404419C0 (KiWaitSatisfyMutant.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ObpDeregisterObject @ 0x140779D4C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x140923BC0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A5A090 (ObpHandleRevocationBlockRemoveObject.c)
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

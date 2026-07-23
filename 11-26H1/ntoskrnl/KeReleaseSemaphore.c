/*
 * XREFs of KeReleaseSemaphore @ 0x1403BBA30
 * Callers:
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     PopFxQueueWorkItem @ 0x1403966C0 (PopFxQueueWorkItem.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepRequestWork @ 0x1403BB1C8 (PopPepRequestWork.c)
 *     PopPepComponentSetLatency @ 0x1403BB494 (PopPepComponentSetLatency.c)
 *     PopFxRequestWorkerInternal @ 0x1403BBCF4 (PopFxRequestWorkerInternal.c)
 *     PopDispatchQuerySetIrp @ 0x14048089C (PopDispatchQuerySetIrp.c)
 *     PnpDeviceCompletionQueueAddCompletedRequest @ 0x14048D4CC (PnpDeviceCompletionQueueAddCompletedRequest.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1404AB64C (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1404AB6C8 (PopCompleteNotifyTransitionCommon.c)
 *     IoRaiseInformationalHardError @ 0x1404D9300 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1405DFC7C (PnpProcessRebalance.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     FsRtlDeregisterUncProvider @ 0x140790C70 (FsRtlDeregisterUncProvider.c)
 *     FsRtlpRegisterUncProvider @ 0x140790F6C (FsRtlpRegisterUncProvider.c)
 *     IopAllocateBootResources @ 0x1407A8AB0 (IopAllocateBootResources.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1407B02D0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x1407B0358 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1407B0404 (PpProfileCommitTransitioningDock.c)
 *     PnpReallocateResources @ 0x1407B6408 (PnpReallocateResources.c)
 *     AlpcpDoPortCleanup @ 0x1408F0B84 (AlpcpDoPortCleanup.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14096EDFC (IopInsertLegacyBusDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x1409B21E4 (IopUncacheInterfaceInformation.c)
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     PnpAllocateResources @ 0x140AA0454 (PnpAllocateResources.c)
 *     NtReleaseKeyedEvent @ 0x140B2B3B0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x140B32650 (NtWaitForKeyedEvent.c)
 *     PopSystemIrpCompletion @ 0x140C13DC0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  BOOLEAN v4; // r12
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // edi
  LONG SignalState; // r14d
  LONG v10; // eax
  struct _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY *v12; // rax
  __int64 v13; // rsi
  struct _LIST_ENTRY *v14; // rcx
  char v15; // al
  __int64 v16; // rdi
  unsigned int v17; // r12d
  char v18; // dl
  LONG v19; // eax
  __int64 v21; // [rsp+30h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp+8h]
  KPRIORITY v23; // [rsp+98h] [rbp+10h]

  v23 = Increment;
  v4 = Wait;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Increment) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, Increment);
  }
  v8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _interlockedbittestandset(&Semaphore->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (Semaphore->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Semaphore->Header.Lock, 7u) );
  }
  SignalState = Semaphore->Header.SignalState;
  v10 = SignalState + Adjustment;
  if ( SignalState + Adjustment < SignalState || v10 > Semaphore->Limit )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  Semaphore->Header.SignalState = v10;
  if ( !SignalState )
  {
    Flink = Semaphore->Header.WaitListHead.Flink;
    while ( 1 )
    {
      if ( Flink == &Semaphore->Header.WaitListHead )
      {
LABEL_20:
        v4 = Wait;
        break;
      }
      v12 = Flink->Flink;
      v13 = (__int64)Flink;
      Flink = v12;
      v14 = *(struct _LIST_ENTRY **)(v13 + 8);
      if ( v12->Blink != (struct _LIST_ENTRY *)v13 || v14->Flink != (struct _LIST_ENTRY *)v13 )
        __fastfail(3u);
      v14->Flink = v12;
      v12->Blink = v14;
      v15 = *(_BYTE *)(v13 + 16);
      switch ( v15 )
      {
        case 1:
          v16 = *(_QWORD *)(v13 + 24);
          v17 = 0;
          v21 = *(unsigned __int16 *)(v13 + 18);
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
          {
            do
            {
              if ( (++v17 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v17);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v16 + 64) );
          }
          if ( *(_BYTE *)(v16 + 388) == 5 )
            v18 = KiSignalThread((__int64)CurrentPrcb, v16, v21, v13);
          else
            v18 = 0;
          *(_QWORD *)(v16 + 64) = 0LL;
          ++*(_BYTE *)(v13 + 17);
          if ( v18 )
            goto LABEL_19;
          break;
        case 2:
          *(_BYTE *)(v13 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v13 + 24), (_QWORD *)v13, *(__int64 *)&Adjustment);
LABEL_19:
          v19 = Semaphore->Header.SignalState - 1;
          Semaphore->Header.SignalState = v19;
          if ( !v19 )
            goto LABEL_20;
          break;
        case 4:
          *(_BYTE *)(v13 + 17) = 5;
          Semaphore->Header.SignalState = 0;
          KiInsertQueueDpc(*(_QWORD *)(v13 + 24), (__int64)Semaphore, v13, 0LL, 0);
          break;
        default:
          KiTryUnwaitThread((__int64)CurrentPrcb, v13, 256LL, 0LL);
          break;
      }
    }
  }
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, v4 != 0 ? 3 : 0, 1u, v23, CurrentIrql);
  return SignalState;
}

/*
 * XREFs of KeStallExecutionProcessor @ 0x14037DCA0
 * Callers:
 *     PpmIdleSelectStates @ 0x1402F70FC (PpmIdleSelectStates.c)
 *     KeFreezeExecution @ 0x140502A50 (KeFreezeExecution.c)
 *     AccelpWaitForCompletionBusySpin @ 0x140526FC4 (AccelpWaitForCompletionBusySpin.c)
 *     HalpInterruptResetThisProcessor @ 0x14057F100 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x14057F300 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpPowerWriteResetCommand @ 0x140581D44 (HalpPowerWriteResetCommand.c)
 *     HalpTimerInitializeClock @ 0x14058396C (HalpTimerInitializeClock.c)
 *     HalpTimerMeasureFrequencies @ 0x1405847E8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerTestHypervisorTimer @ 0x14058702C (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140588CB0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x140596590 (HalpNmiReboot.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14059CD08 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14059CE3C (HalpUsbLegacyStopUhciInterrupt.c)
 *     HalpApicStartProcessor @ 0x1405A4870 (HalpApicStartProcessor.c)
 *     IvtWaitForGlobalCommandCompletion @ 0x1405AA648 (IvtWaitForGlobalCommandCompletion.c)
 *     HsaGetPageFault @ 0x1405AC350 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x1405C03C4 (HvlPrepareForRootCrashdump.c)
 *     IoEscalateBugCheck @ 0x1405C8F08 (IoEscalateBugCheck.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 *     ExpWaitForBootDevices @ 0x1406D17F0 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14071CBD8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 *     IpmiLibpDelay @ 0x1407224F4 (IpmiLibpDelay.c)
 *     InbvPortPutByte @ 0x140723658 (InbvPortPutByte.c)
 *     IvtInitializeIommu @ 0x140BF5C90 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x140C521F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpTimerQueryCounterSafe @ 0x1402086D0 (HalpTimerQueryCounterSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeStallWhileFrozen @ 0x14052CE40 (KeStallWhileFrozen.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdi
  int v5; // eax
  __int64 Number; // rcx
  _GROUP_AFFINITY v7; // xmm6
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // r15
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned int v24; // r13d
  unsigned __int64 v25; // rcx
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  _KAFFINITY_EX *Affinity; // r8
  unsigned __int16 i; // cx
  unsigned __int64 v32; // rdx
  ULONG_PTR v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rbx
  unsigned __int64 CounterSafe; // r11
  signed __int64 v37; // rax
  int v38; // r10d
  unsigned __int64 v39; // rcx
  __int64 v40; // r9
  unsigned __int64 v41; // r9
  signed __int64 v42; // rdx
  _KAFFINITY_EX *v43; // r8
  signed __int32 v44[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int8 v45; // [rsp+30h] [rbp-98h]
  char v46; // [rsp+31h] [rbp-97h]
  _GROUP_AFFINITY v47; // [rsp+40h] [rbp-88h] BYREF
  __int128 v48; // [rsp+50h] [rbp-78h] BYREF
  int v49[4]; // [rsp+60h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-58h] BYREF
  int v51; // [rsp+C0h] [rbp-8h]

  if ( !HalpTimerProcessorsFrozen )
    goto LABEL_2;
  v33 = HalpAlwaysOnCounter;
  if ( !HalpAlwaysOnCounter )
  {
LABEL_60:
    KeStallWhileFrozen(MicroSeconds);
    goto LABEL_2;
  }
  if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
  {
    HalpTimerQueryCounterSafe(HalpAlwaysOnCounter);
    goto LABEL_60;
  }
  do
  {
    v34 = *(_QWORD *)(v33 + 208);
    do
    {
      v35 = *(_QWORD *)(v33 + 200);
      CounterSafe = HalpTimerQueryCounterSafe(v33);
      _InterlockedOr(v44, 0);
      v37 = *(_QWORD *)(v33 + 200);
    }
    while ( v35 != v37 );
  }
  while ( v34 != *(_QWORD *)(v33 + 208) );
  v38 = *(_DWORD *)(v33 + 220);
  v39 = v35 ^ CounterSafe;
  if ( !_bittest64((const __int64 *)&v39, (unsigned __int8)(v38 - 1)) )
    goto LABEL_60;
  if ( v38 == 64 )
    v40 = -1LL;
  else
    v40 = (1LL << v38) - 1;
  v41 = v35 & v40;
  v42 = (CounterSafe | v35 ^ v41) + (1LL << v38);
  if ( CounterSafe >= v41 )
    v42 = CounterSafe | v35 ^ v41;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 200), v42, v37);
  KeStallWhileFrozen(MicroSeconds);
LABEL_2:
  v4 = HalpStallCounter;
  v46 = 0;
  v48 = 0LL;
  v5 = *(_DWORD *)(HalpStallCounter + 224);
  PreviousAffinity = 0LL;
  if ( (v5 & 1) == 0
    || (unsigned int)KeNumberProcessors_0 < 2
    || KeGetCurrentIrql() >= 2u
    || (v51 & 0x200) == 0
    || (*(_DWORD *)(HalpStallCounter + 184) & 0x20) != 0 )
  {
    goto LABEL_25;
  }
  Number = KeGetPcr()->Prcb.Number;
  v7 = 0LL;
  v46 = 1;
  *(_DWORD *)((char *)&v48 + 10) = 0;
  v8 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + Number);
  v9 = 1LL << v8;
  HIWORD(v48) = 0;
  DWORD2(v48) = (unsigned __int16)(v8 >> 6);
  *(_QWORD *)&v48 = 1LL << v8;
  v47.Mask = 0LL;
  if ( (unsigned __int16)(v8 >> 6) < *(_WORD *)&stru_140FC11F0.WaitRegister.Flags
    && (v10 = 8LL * (unsigned __int16)(v8 >> 6), (v9 & *(_QWORD *)((char *)&stru_140FC11F0.116 + v10 + 4)) != 0) )
  {
    v11 = 1;
    v9 &= *(_QWORD *)((char *)&stru_140FC11F0.116 + v10 + 4);
    *(_QWORD *)&v48 = v9;
  }
  else
  {
    v11 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v49[0] = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(v49);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
    goto LABEL_20;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( !Next )
  {
    Affinity = CurrentThread->Affinity;
    for ( i = 0; i < Affinity->Count; ++i )
    {
      v32 = Affinity->Bitmap[i];
      if ( v32 )
        goto LABEL_55;
    }
    goto LABEL_20;
  }
  if ( BYTE2(Next[2].Next) )
  {
    if ( BYTE2(Next[2].Next) == 1 )
    {
      v43 = CurrentThread->Affinity;
      for ( i = 0; i < v43->Count; ++i )
      {
        v32 = v43->Bitmap[i];
        if ( v32 )
        {
LABEL_55:
          *(_QWORD *)&v47.Group = i;
          v47.Mask = v32;
          v7 = v47;
          goto LABEL_20;
        }
      }
      goto LABEL_20;
    }
    if ( BYTE2(Next[2].Next) != 2 )
      goto LABEL_20;
  }
  if ( v11 )
  {
    BYTE2(Next[2].Next) = 1;
    v47.Mask = 0LL;
    goto LABEL_21;
  }
LABEL_20:
  v47.Mask = 0LL;
  if ( !v11 )
  {
    CurrentThread->ThreadLock = 0LL;
    goto LABEL_22;
  }
LABEL_21:
  KiSetSystemAffinityThread(CurrentThread, CurrentPrcb, 0LL, &v48, 2048, &v47);
LABEL_22:
  KiProcessDeferredReadyList(CurrentPrcb, &v47, CurrentIrql);
  PreviousAffinity = v7;
  KeGetCurrentIrql();
  if ( v11 && _bittest((_DWORD *)&xmmword_140FC0C10 + 1, 9u) )
    KiCpuPartitionCheckAffinitization(CurrentThread->Process, CurrentThread, CurrentThread->Affinity, 1LL);
LABEL_25:
  if ( (*(_DWORD *)(v4 + 224) & 0x10000) != 0 )
    v16 = *(_QWORD *)(v4 + 72) + *(_DWORD *)(v4 + 80) * KeGetPcr()->Prcb.Number;
  else
    v16 = *(_QWORD *)(v4 + 72);
  v18 = guard_dispatch_icall_no_overrides(v16, v1, v2);
  v19 = __readcr2();
  __writecr2(v19);
  _R9D = 0;
  v21 = 1LL << *(_DWORD *)(v4 + 220);
  v22 = v18;
  v23 = 0LL;
  v24 = 0;
  LOBYTE(v17) = (KeFeatureBits2 & 0x800000) != 0
             && !qword_140FBB3E0
             && (*(_DWORD *)(v4 + 224) & 0x6000) == 0
             && *(_DWORD *)(v4 + 228) == 5;
  v45 = v17;
  v25 = *(_QWORD *)(v4 + 192) * 10 * MicroSeconds + 9999999LL;
  v26 = v25 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v27 = v25 / 0x989680 + 1;
  if ( v25 / 0x989680 != -1LL )
  {
    do
    {
      if ( (_BYTE)v17 )
      {
        *((_QWORD *)&v26 + 1) = (v18 + v27) >> 32;
        __asm { tpause  r9d }
      }
      else if ( (++v24 & dword_140FBB3DC) != 0 || !qword_140FBB3E0 )
      {
        _mm_pause();
      }
      else
      {
        guard_dispatch_icall_no_overrides(v24, *((_QWORD *)&v26 + 1), v17);
      }
      if ( (*(_DWORD *)(v4 + 224) & 0x10000) != 0 )
        v28 = *(_QWORD *)(v4 + 72) + *(_DWORD *)(v4 + 80) * KeGetPcr()->Prcb.Number;
      else
        v28 = *(_QWORD *)(v4 + 72);
      *(_QWORD *)&v26 = guard_dispatch_icall_no_overrides(v28, *((_QWORD *)&v26 + 1), v17);
      if ( (unsigned __int64)v26 < v22 )
        v23 += v21;
      v17 = v45;
      v22 = v26;
      _R9D = 0;
    }
    while ( (__int64)v26 + v23 - v18 < v27 );
  }
  if ( v46 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}

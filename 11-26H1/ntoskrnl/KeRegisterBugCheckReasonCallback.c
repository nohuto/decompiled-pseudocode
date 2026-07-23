/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x14024F100
 * Callers:
 *     SmHpBufferProtectEx @ 0x14024E610 (SmHpBufferProtectEx.c)
 *     SmHpChunkUnprotect @ 0x14024EF10 (SmHpChunkUnprotect.c)
 *     SmPrepareForFatalHeapCorruption @ 0x140250D94 (SmPrepareForFatalHeapCorruption.c)
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C3378 (HvlpInitializeHvCrashdump.c)
 *     CarInit @ 0x14064D6BC (CarInit.c)
 *     IopInitializeBugCheckDriverData @ 0x140796090 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeTriageDumpData @ 0x140796670 (IopInitializeTriageDumpData.c)
 *     PspCriticalProcessDeathInfoCollect @ 0x1408006B0 (PspCriticalProcessDeathInfoCollect.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 *     SmGlobalsStart @ 0x140C85428 (SmGlobalsStart.c)
 *     HalpEfiInitialization @ 0x140CB4F20 (HalpEfiInitialization.c)
 *     HalpMiscInitDiscard @ 0x140CB5A30 (HalpMiscInitDiscard.c)
 *     PopRecorderInit @ 0x140CDB644 (PopRecorderInit.c)
 *     PopWatchdogInit @ 0x140CDC178 (PopWatchdogInit.c)
 *     PopBSDiagInitialize @ 0x140CDC274 (PopBSDiagInitialize.c)
 *     PspIumInitialize @ 0x140CDF4BC (PspIumInitialize.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     CmFcInitSystem1 @ 0x140CF3E50 (CmFcInitSystem1.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x14049F4A0 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRegisterBugcheckRecoveryCallback @ 0x1404F1624 (KiRegisterBugcheckRecoveryCallback.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // r14
  PKBUGCHECK_REASON_CALLBACK_RECORD v7; // rbx
  BOOLEAN v8; // si
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *p_Blink; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax

  v5 = Reason;
  v7 = CallbackRecord;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(CallbackRecord) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(CallbackRecord, 15LL);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Blink);
  if ( v7->State )
    goto LABEL_6;
  if ( (_DWORD)v5 == 4
    || (p_Blink = (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.QuantumTarget, (_DWORD)v5 == 6) )
  {
    p_Blink = (struct _LIST_ENTRY *)&KiSupervisorXStateFeaturesLock.Header.WaitListHead.Blink;
  }
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(p_Blink, v7) )
  {
LABEL_6:
    v8 = 0;
  }
  else
  {
    v7->CallbackRoutine = CallbackRoutine;
    v7->Reason = v5;
    v7->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
    v7->Component = Component;
    v7->State = 1;
    KiRegisterBugcheckRecoveryCallback(v7);
    if ( (_DWORD)v5 == 7 )
    {
      Blink = p_Blink->Blink;
      if ( Blink->Flink != p_Blink )
LABEL_16:
        __fastfail(3u);
      v7->Entry.Flink = p_Blink;
      v7->Entry.Blink = Blink;
      Blink->Flink = &v7->Entry;
      p_Blink->Blink = &v7->Entry;
    }
    else
    {
      Flink = p_Blink->Flink;
      if ( p_Blink->Flink->Blink != p_Blink )
        goto LABEL_16;
      v7->Entry.Flink = Flink;
      v7->Entry.Blink = p_Blink;
      Flink->Blink = &v7->Entry;
      p_Blink->Flink = &v7->Entry;
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Blink);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v8;
}

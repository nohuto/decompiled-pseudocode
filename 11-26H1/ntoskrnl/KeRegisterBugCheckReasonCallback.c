/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x14024D7A0
 * Callers:
 *     SmHpBufferProtectEx @ 0x14024CCB0 (SmHpBufferProtectEx.c)
 *     SmHpChunkUnprotect @ 0x14024D5B0 (SmHpChunkUnprotect.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14024F434 (SmPrepareForFatalHeapCorruption.c)
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x1405C0B08 (HvlpInitializeHvCrashdump.c)
 *     CarInit @ 0x140649ADC (CarInit.c)
 *     IopInitializeBugCheckDriverData @ 0x140793560 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeTriageDumpData @ 0x140793B40 (IopInitializeTriageDumpData.c)
 *     PspCriticalProcessDeathInfoCollect @ 0x1407FAC80 (PspCriticalProcessDeathInfoCollect.c)
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 *     SmGlobalsStart @ 0x140C7F428 (SmGlobalsStart.c)
 *     HalpEfiInitialization @ 0x140CAEEE0 (HalpEfiInitialization.c)
 *     HalpMiscInitDiscard @ 0x140CAF9F0 (HalpMiscInitDiscard.c)
 *     PopRecorderInit @ 0x140CD52A4 (PopRecorderInit.c)
 *     PopWatchdogInit @ 0x140CD5E24 (PopWatchdogInit.c)
 *     PopBSDiagInitialize @ 0x140CD5F20 (PopBSDiagInitialize.c)
 *     PspIumInitialize @ 0x140CD913C (PspIumInitialize.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x1404A5E10 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRegisterBugcheckRecoveryCallback @ 0x1404F8014 (KiRegisterBugcheckRecoveryCallback.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 *v11; // rdi
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rax

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
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  if ( v7->State )
    goto LABEL_6;
  if ( (_DWORD)v5 == 4 || (v11 = (__int64 *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v11 = &KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v11, v7) )
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
      v13 = (struct _LIST_ENTRY *)v11[1];
      if ( (__int64 *)v13->Flink != v11 )
LABEL_16:
        __fastfail(3u);
      v7->Entry.Flink = (struct _LIST_ENTRY *)v11;
      v7->Entry.Blink = v13;
      v13->Flink = &v7->Entry;
      v11[1] = (__int64)v7;
    }
    else
    {
      v12 = (struct _LIST_ENTRY *)*v11;
      if ( *(__int64 **)(*v11 + 8) != v11 )
        goto LABEL_16;
      v7->Entry.Flink = v12;
      v7->Entry.Blink = (struct _LIST_ENTRY *)v11;
      v12->Blink = &v7->Entry;
      *v11 = (__int64)v7;
    }
  }
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v8;
}

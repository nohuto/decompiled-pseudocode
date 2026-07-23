/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1405C3378
 * Callers:
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline @ 0x1405C25A4 (Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmAllocateMappingAddress @ 0x140AF4800 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x140B3F870 (MmAllocateIndependentPages.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // edi
  struct _LIST_ENTRY *v3; // r9
  struct _LIST_ENTRY *IndependentPages; // rax
  __int64 v5; // rax
  void *Pool2; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v8; // rbx
  KIRQL v9; // al
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *v11; // rbx
  KIRQL v12; // al

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(struct _LIST_ENTRY **)(a1 + 16);
  LODWORD(VslpReservedTransferLock.LastXStateSaveDebugInfo) = *(_DWORD *)a1;
  VslpReservedTransferLock.Spare18 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)&VslpReservedTransferLock.WaitBlockFill11[160] = v1;
  VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Blink = v3;
  if ( !v1
    || (VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)MmMapIoSpaceEx(
                                                                                            (__int64)v3,
                                                                                            (unsigned int)(v1 << 12),
                                                                                            2u)) != 0LL )
  {
    IndependentPages = (struct _LIST_ENTRY *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    VslpReservedTransferLock.WaitListEntry.Blink = IndependentPages;
    if ( IndependentPages )
      memset_0(IndependentPages, 0, 0x1000uLL);
    if ( (unsigned int)Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline() )
    {
      BYTE6(VslpReservedTransferLock.Queue) = 1;
      if ( LODWORD(VslpReservedTransferLock.LastXStateSaveDebugInfo) )
      {
        v5 = MmMapIoSpaceEx(
               (__int64)VslpReservedTransferLock.WaitBlock[3].Object,
               (unsigned int)(LODWORD(VslpReservedTransferLock.LastXStateSaveDebugInfo) << 12),
               2u);
        VslpReservedTransferLock.WaitBlock[3].Thread = (struct _KTHREAD *)v5;
        if ( !v5 )
          goto LABEL_26;
        LODWORD(VslpReservedTransferLock.RelativeTimerBias) = *(_DWORD *)(v5 + 812);
        Pool2 = (void *)ExAllocatePool2(0x40uLL);
        VslpReservedTransferLock.Teb = Pool2;
        if ( !Pool2 )
          goto LABEL_26;
        memset_0(Pool2, 0, LODWORD(VslpReservedTransferLock.RelativeTimerBias));
      }
    }
    else
    {
      BYTE6(VslpReservedTransferLock.Queue) = 0;
    }
    if ( !VslVsmEnabled )
    {
      LOBYTE(VslpReservedTransferLock.Timer.Period) = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              (PKBUGCHECK_REASON_CALLBACK_RECORD)&VslpReservedTransferLock.Timer.Header.WaitListHead.Blink,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_26;
      VslpReservedTransferLock.WaitBlockFill5[44] = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              (PKBUGCHECK_REASON_CALLBACK_RECORD)&VslpReservedTransferLock.320,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_26;
      Blink = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
      v8 = Blink;
      if ( Blink )
      {
        Blink[1].Flink = 0LL;
        Blink->Blink = (struct _LIST_ENTRY *)HvlCrashdumpCallbackRoutine;
        Blink[1].Blink = Blink;
        v9 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
        v8->Flink = (struct _LIST_ENTRY *)KiNmiCallbackListHead;
        KiNmiCallbackListHead = v8;
        KeReleaseSpinLock(&KiNmiCallbackListLock, v9);
        Blink = v8[1].Blink;
      }
      VslpReservedTransferLock.Timer.Header.WaitListHead.Flink = Blink;
      *(_QWORD *)&VslpReservedTransferLock.ThreadFlags2 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !*(_QWORD *)&VslpReservedTransferLock.ThreadFlags2 )
        goto LABEL_26;
      if ( !VslVsmEnabled )
        return 0;
    }
    VslpReservedTransferLock.WaitBlockFill6[92] = 0;
    if ( KeRegisterBugCheckReasonCallback(
           (PKBUGCHECK_REASON_CALLBACK_RECORD)&VslpReservedTransferLock.WaitBlockFill11[48],
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (VslpReservedTransferLock.WaitBlockFill5[44] = 0,
            KeRegisterBugCheckReasonCallback(
              (PKBUGCHECK_REASON_CALLBACK_RECORD)&VslpReservedTransferLock.320,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        VslpReservedTransferLock.WaitBlockFill7[140] = 0;
        if ( KeRegisterBugCheckReasonCallback(
               (PKBUGCHECK_REASON_CALLBACK_RECORD)&VslpReservedTransferLock.WaitBlockFill11[96],
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          v10 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
          v11 = v10;
          if ( v10 )
          {
            v10[1].Flink = 0LL;
            v10->Blink = (struct _LIST_ENTRY *)HvlSkCrashdumpCallbackRoutine;
            v10[1].Blink = v10;
            v12 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
            v11->Flink = (struct _LIST_ENTRY *)KiNmiCallbackListHead;
            KiNmiCallbackListHead = v11;
            KeReleaseSpinLock(&KiNmiCallbackListLock, v12);
            v10 = v11[1].Blink;
          }
          VslpReservedTransferLock.Timer.Header.WaitListHead.Flink = v10;
          return 0;
        }
      }
    }
  }
LABEL_26:
  if ( VslpReservedTransferLock.WaitListEntry.Blink )
  {
    MmFreeIndependentPages((unsigned __int64)VslpReservedTransferLock.WaitListEntry.Blink, 0x1000uLL);
    VslpReservedTransferLock.WaitListEntry.Blink = 0LL;
  }
  return v2;
}

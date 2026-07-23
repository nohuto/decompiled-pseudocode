/*
 * XREFs of KeAreInterruptsEnabled @ 0x140263850
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x14020A480 (EtwpStackTraceDispatcher.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x140260610 (EtwpExpandStackAndWalkFrameChain.c)
 *     MmCanThreadFault @ 0x1402623C0 (MmCanThreadFault.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140262F40 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     IopReferenceFileObject @ 0x1402644F0 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiRetryNonPagedAllocation @ 0x1403681E0 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeCanUseHaltOnAddress @ 0x1403E8980 (KeCanUseHaltOnAddress.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     RtlpIsFrameInBoundsEx @ 0x140412060 (RtlpIsFrameInBoundsEx.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FCF90 (KiScheduleBugcheckRecovery.c)
 *     IovStatelessIoCallDriverRules @ 0x140C30AEC (IovStatelessIoCallDriverRules.c)
 *     VfAfterCallDriver @ 0x140C320AC (VfAfterCallDriver.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140C42C50 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140C42E20 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140C42FF0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     ViDeadlockCanProceed @ 0x140C4B470 (ViDeadlockCanProceed.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C4CCE4 (ViKeIrqlLogAndTrimMemory.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}

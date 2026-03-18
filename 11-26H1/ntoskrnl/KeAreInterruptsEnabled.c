/*
 * XREFs of KeAreInterruptsEnabled @ 0x1402642E0
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x14020A3A0 (EtwpStackTraceDispatcher.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1402610A0 (EtwpExpandStackAndWalkFrameChain.c)
 *     MmCanThreadFault @ 0x140262E50 (MmCanThreadFault.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402639D0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeAreAllApcsDisabled @ 0x140263C40 (KeAreAllApcsDisabled.c)
 *     KeQueryCurrentStackInformationEx @ 0x140263F70 (KeQueryCurrentStackInformationEx.c)
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     IopReferenceFileObject @ 0x140264F80 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     MiRetryNonPagedAllocation @ 0x140366440 (MiRetryNonPagedAllocation.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeCanUseHaltOnAddress @ 0x1403E5790 (KeCanUseHaltOnAddress.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     RtlpIsFrameInBoundsEx @ 0x14041A810 (RtlpIsFrameInBoundsEx.c)
 *     KeCallbackValidationEpilogue @ 0x1404E07B8 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E921C (KeCallbackValidationPrologue.c)
 *     KiScheduleBugcheckRecovery @ 0x1405FA570 (KiScheduleBugcheckRecovery.c)
 *     IovStatelessIoCallDriverRules @ 0x140C2AADC (IovStatelessIoCallDriverRules.c)
 *     VfAfterCallDriver @ 0x140C2C09C (VfAfterCallDriver.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140C3CC40 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140C3CE10 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140C3CFE0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     ViDeadlockCanProceed @ 0x140C45460 (ViDeadlockCanProceed.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140C46CD4 (ViKeIrqlLogAndTrimMemory.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4824C (VfFastIoSnapState.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeAreInterruptsEnabled()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  return (v1 & 0x200) != 0;
}

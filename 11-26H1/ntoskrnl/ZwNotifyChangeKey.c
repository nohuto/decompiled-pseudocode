/*
 * XREFs of ZwNotifyChangeKey @ 0x14072A440
 * Callers:
 *     CcRegistryChangeCallback @ 0x1404EDC20 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405B4154 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x140617678 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1406AE7F0 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x14079DFB0 (IopRegistryInitializeCallbacks.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14079E760 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14079E948 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1407CAD40 (PfpParametersWatcher.c)
 *     PopUpdateUpgradeInProgress @ 0x1407CC310 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1407DE904 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x14083C19C (ExpReadLeapSecondData.c)
 *     IopRegistryCallback @ 0x140B2FA90 (IopRegistryCallback.c)
 *     PfInitializeSuperfetch @ 0x140CD4198 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}

/*
 * XREFs of ZwNotifyChangeKey @ 0x14069D5A0
 * Callers:
 *     CcRegistryChangeCallback @ 0x1405781F0 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405783E0 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x1405D8C1C (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x140635210 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x14070D988 (IopRegistryInitializeCallbacks.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14070E1C0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14070E398 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x14073C490 (PfpParametersWatcher.c)
 *     PopUpdateUpgradeInProgress @ 0x14073D9B0 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x14075027C (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x1407A700C (ExpReadLeapSecondData.c)
 *     IopRegistryCallback @ 0x140A7C0E0 (IopRegistryCallback.c)
 *     PfInitializeSuperfetch @ 0x140C1B81C (PfInitializeSuperfetch.c)
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

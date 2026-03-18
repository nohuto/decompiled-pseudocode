/*
 * XREFs of ZwNotifyChangeKey @ 0x140725870
 * Callers:
 *     CcRegistryChangeCallback @ 0x1404F4640 (CcRegistryChangeCallback.c)
 *     CcSetupWatchForRegistryChanges @ 0x1405B1944 (CcSetupWatchForRegistryChanges.c)
 *     PspReadDfssConfigurationValues @ 0x140614838 (PspReadDfssConfigurationValues.c)
 *     DifZwNotifyChangeKeyWrapper @ 0x1406AAC10 (DifZwNotifyChangeKeyWrapper.c)
 *     IopRegistryInitializeCallbacks @ 0x14079B470 (IopRegistryInitializeCallbacks.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14079BC20 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgressNotify @ 0x14079BE08 (PipUpdateSetupInProgressNotify.c)
 *     PfpParametersWatcher @ 0x1407C7CE0 (PfpParametersWatcher.c)
 *     PopUpdateUpgradeInProgress @ 0x1407C9270 (PopUpdateUpgradeInProgress.c)
 *     PopPowerButtonBugcheckConfigure @ 0x1407DAA14 (PopPowerButtonBugcheckConfigure.c)
 *     ExpReadLeapSecondData @ 0x140835F5C (ExpReadLeapSecondData.c)
 *     IopRegistryCallback @ 0x140B2DA10 (IopRegistryCallback.c)
 *     PfInitializeSuperfetch @ 0x140CCE038 (PfInitializeSuperfetch.c)
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
  return KiServiceInternal(KeyHandle, Event);
}

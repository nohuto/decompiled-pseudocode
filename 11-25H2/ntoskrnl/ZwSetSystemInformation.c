/*
 * XREFs of ZwSetSystemInformation @ 0x14069E8C0
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140601AF0 (SmKmStoreTerminateWorker.c)
 *     DifZwSetSystemInformationWrapper @ 0x14063CFA0 (DifZwSetSystemInformationWrapper.c)
 *     SmStoreCreate @ 0x1407895F8 (SmStoreCreate.c)
 *     SmStoreDelete @ 0x140789700 (SmStoreDelete.c)
 *     SmStoreResize @ 0x1407898EC (SmStoreResize.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140C32184 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}

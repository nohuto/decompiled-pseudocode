/*
 * XREFs of ZwLoadDriver @ 0x14069D300
 * Callers:
 *     KsepLoadShimProvider @ 0x1405C5EF4 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x140634A60 (DifZwLoadDriverWrapper.c)
 *     PopCadTriggerDriverLoad @ 0x1407537C0 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1407A2768 (EtwpConstructIptData.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1408D9CA0 (EtwpUpdateFileInfoDriverState.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}

/*
 * XREFs of ZwLoadDriver @ 0x14072A180
 * Callers:
 *     KsepLoadShimProvider @ 0x140600A40 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x1406AC6C0 (DifZwLoadDriverWrapper.c)
 *     PopCadTriggerDriverLoad @ 0x1407E6620 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1408364F0 (EtwpConstructIptData.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B13914 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}

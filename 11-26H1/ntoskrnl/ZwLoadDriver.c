/*
 * XREFs of ZwLoadDriver @ 0x1407255B0
 * Callers:
 *     KsepLoadShimProvider @ 0x1405FDFF0 (KsepLoadShimProvider.c)
 *     DifZwLoadDriverWrapper @ 0x1406A8AE0 (DifZwLoadDriverWrapper.c)
 *     PopCadTriggerDriverLoad @ 0x1407E1590 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x1408302B0 (EtwpConstructIptData.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140B11B94 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName, v1);
}

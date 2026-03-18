/*
 * XREFs of ZwSetSystemInformation @ 0x140726B90
 * Callers:
 *     DifZwSetSystemInformationWrapper @ 0x1406BBDB0 (DifZwSetSystemInformationWrapper.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140CE6D90 (KitpInitAitSampleRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

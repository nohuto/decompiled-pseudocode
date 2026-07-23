/*
 * XREFs of ZwSetSystemInformation @ 0x14072B760
 * Callers:
 *     DifZwSetSystemInformationWrapper @ 0x1406BF990 (DifZwSetSystemInformationWrapper.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     KitpInitAitSampleRate @ 0x140CED130 (KitpInitAitSampleRate.c)
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
